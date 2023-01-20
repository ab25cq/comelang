#include "common.h"
#include <ctype.h>

class sIntNode(int value)
{
    int self.intValue = value;
    
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

void print_op(int op)
{
    switch(op) {
        case OP_POP:
            puts("OP_POP");
            break;
        case OP_STORE_FIELD:
            puts("OP_STORE_FIELD");
            break;
            
        case OP_EQ:
            puts("OP_EQ");
            break;
            
        case OP_ANDAND:
            puts("OP_ANDAND");
            break;
            
        case OP_OROR:
            puts("OP_OROR");
            break;
            
        case OP_CLASS:
            puts("OP_CLASS");
            break;
                
        case OP_INT_VALUE: 
            puts("OP_INT_VALUE");
            break;
                
        case OP_ADD: 
            puts("OP_ADD");
            break;
                
        case OP_SUB:
            puts("OP_SUB");
            break;
                 
        case OP_STRING_VALUE:
            puts("OP_STRING_VALUE");
            break;
                 
        case OP_STR:
            puts("OP_STR");
            break;
                 
        case OP_TYPE:
            puts("OP_TYPE");
            break;
                
        case OP_PRINT: 
            puts("OP_PRINT");
            break;
                
        case OP_LEN: 
            puts("OP_LEN");
            break;
                
        case OP_INT: 
            puts("OP_INT");
            break;
                
        case OP_LOAD: 
            puts("OP_LOAD");
            break;
                
        case OP_STORE: 
            puts("OP_STORE");
            break;
                
        case OP_FUNCALL:
            puts("OP_FUNCALL");
            break;
            
        case OP_METHOD_CALL:
            puts("OP_METHOD_CALL");
            break;
                
        case OP_BOOL_VALUE: 
            puts("OP_BOOL_VALUE");
            break;
            
        case OP_NONE_VALUE: 
            puts("OP_NONE_VALUE");
            break;
                
        case OP_GOTO: 
            puts("OP_GOTO");
            break;
                
        case OP_IF: 
            puts("OP_IF");
            break;
            
        case OP_EXIT: 
            puts("OP_EXIT");
            break;
            
        case OP_RETURN: 
            puts("OP_RETURN");
            break;
            
        case OP_FUN: 
            puts("OP_FUN");
            break;
            
        case OP_LOAD_FIELD:
            puts("OP_LOAD_FIELD");
            break;
            
        case OP_LOAD_FIELD:
            puts("OP_STORE_FIELD");
            break;
            
        case OP_LIST_VALUE:
            puts("OP_LIST_VALUE");
            break;
            
        case OP_MAP_VALUE:
            puts("OP_MAP_VALUE");
            break;
            
        case OP_TUPLE_VALUE:
            puts("OP_TUPLE_VALUE");
            break;
            
        case OP_LIST_INDEX:
            puts("OP_LIST_INDEX");
            break;
                
        default:
            printf("invalid op code %d\n", op);
            break;
    }
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 99
{
    while((info->p - info->head) < (codes.length() / sizeof(int))) {
printf("p %d max %d\n", info->p - info->head, codes.length() /sizeof(int));
print_op(*info->p);
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
                
                info->stack[info->stack_num].kind = kIntValue;
                info->stack[info->stack_num].value.intValue = value;
                info->stack_num++;
                }
                break;
                
            default: {
                bool result = inherit(codes, params, info);
                if(!result) {
                    return false;
                }
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
