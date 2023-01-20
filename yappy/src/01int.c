#include "common.h"
#include <ctype.h>

class sIntNode(int value)
{
    int self.intValue = value;
    
    unsigned int get_hash_key(sIntNode* self)
    {
        return self.intValue;
    }
    
    bool compile(sIntNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_INT_VALUE);
        codes.append_int(self.intValue);
        
        info->stack_num++;
        
        return true;
    }
};

sNode* exp_node(sParserInfo* info) version 1
{
    if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces_until_eol(info);
        
        return new sNode(new sIntNode(n));
    }
    
    return nonullable null;
}

bool expression(sNode** node, sParserInfo* info) version 1
{
    *node = exp_node(info);
    
    if(*node == null) {
        return false;
    }
    
    return true;
}

ZVALUE gNoneValue;
ZVALUE gUndefined;

void initialize_modules() version 1
{
    setlocale(LC_ALL, "");
    
    gNoneValue.kind = kNoneValue;
    gNoneValue.objValue = null;
    
    gUndefined.kind = kUndefinedValue;
    gUndefined.objValue = null;
}

void finalize_modules() version 1
{
}

void vm_init(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info)
{
    info->stack_num = 0;
    info->return_value = gNoneValue;
    
    info->p = (int*)codes.buf;
    info->head = (int*)codes.buf;
    
    map<char*, ZVALUE>* vtable = new  map<char*, ZVALUE>.initialize();
    
    int get_element_num = 0;
    ZVALUE for_list_value;
    
    if(params) {
        foreach(it, params) {
            char* key = it;
            
            ZVALUE item = params.at(string(it), gUndefined);
            
            if(item.kind == kUndefinedValue) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionVarNotFound;
                return false;
            }
            
            vtable.insert(string(key), item);
        }
    }
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 1
{
    return true;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 99
{
    bool result = false;
    
    while((info->p - info->head) < (codes.length() / sizeof(int))) {
        switch(*info->p) {
            case OP_POP: {
                info->p++;
                int n = *info->p;
                info->p++;
                
                info->stack_num -= n;
                }
                break;
                
            case OP_INT_VALUE: {
                info->p++;
                int value = *info->p;
                info->p++;
                
printf("OP_INT_VALUE %d\n", value);
                
                info->stack[info->stack_num].kind = kIntValue;
                info->stack[info->stack_num].value.intValue = value;
                info->stack_num++;
                }
                break;
                
            default:
                result = inherit(codes, params, info);
                if(!result) {
                    return false;
                }
                break;
        }
        
        if(info->stack_num < 0 || info->stack_num >= ZSTACK_MAX) {
            fprintf(stderr, "Inerpreter Bug occurs. invalid stack num %d\n", info->stack_num);
            exit(1);
        }
    }
    
    if(info->stack_num != 0) {
        fprintf(stderr, "Inerpreter Bug occurs. invalid stack num %d\n", info->stack_num);
        exit(1);
    }
    
    return true;
}
