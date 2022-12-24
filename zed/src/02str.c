#include <neo-c.h>
#include "common.h"

void append_str_to_codes(sInfo* info, wchar_t* str)
{
    int len = wcslen(str);
    info.codes.append_int(len);
    
    info.codes.append((void*)str, sizeof(wchar_t)*len);
}

wstring get_str_from_codes(sInfo* info)
{
    int len = *info->op;
    info->op++;
    
    wchar_t* str = (wchar_t*)info->op;
    
    wchar_t*% str2 = new wchar_t[len+1];
    memcpy(str2, str, sizeof(wchar_t)*len);
    str2[len] = '\0'
    
    info->op += len;
    
    return str2;
}

private struct sStrNode
{
    int id;
    wstring value;
};

private sStrNode*% sStrNode*::initialize(sStrNode*% self, wstring value)
{
    self.value = value;
    self.id = gNodeID++;
    
    return self;
}

private unsigned int sStrNode*::id(sStrNode* self)
{
    return self.id;
}

private bool sStrNode*::compile(sStrNode* self, sInfo* info)
{
    info.codes.append_int(OP_STR_VALUE);
    
    append_str_to_codes(info, str:self.value);
    
    info.stack_num++;
    
    return true;
}

bool vm(sInfo* info) version 2
{
    inherit(info);
    
    switch(*info->op) {
        case OP_STR_VALUE: {
            info->op++;
            
            wstring value = get_str_from_codes(info);
            
            info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            break;
    }
    
    return true;
}

sNode*? exp_node(sInfo* info) version 2
{
    if(*info->p == '"') {
        info->p++;
        
        buffer*% buf = new buffer();
        
        while(true) {
            if(*info->p == '\\') {
                info->p++;
                
                switch(*info->p) {
                    case 'n': {
                        buf.append_char('\n');
                        info->p++;
                    }
                    break;
                    
                    case 't': {
                        buf.append_char('\t');
                        info->p++;
                    }
                    break;
                    
                    case 'r': {
                        buf.append_char('\r');
                        info->p++;
                    }
                    break;
                    
                    case 'a': {
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
            else if(*info->p == '"') {
                info->p++;
                skip_spaces(info);
                break;
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        return borrow new sNode(new sStrNode(buf.to_string().to_wstring()));
    }
    else {
        return inherit(info);
    }
    
    return null;
}
