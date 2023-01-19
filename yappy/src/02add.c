#include "common.h"
#include <ctype.h>

class sAddNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;

    bool compile(sAddNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_ADD);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
};

class sSubNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;

    bool compile(sSubNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left;
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_SUB);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
};

static sNode* op_add_node(sParserInfo* info)
{
    sNode* result = exp_node(info);
    
    while(*info->p == '+' || *info->p == '-') {
        if(*info->p == '+') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode* right = op_add_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            return new sNode(new sAddNode(result, right, info));
        }
        else if(*info->p == '-') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode* right = op_add_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            return new sNode(new sSubNode(result, right, info));
        }
    }
    
    return result;
}

bool expression(sNode** node, sParserInfo* info) version 2
{
    *node = op_add_node(info);
    
    if(*node == null) {
        return false;
    }
    
    return true;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 98
{
    switch(*info->p) {
        case OP_ADD: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            if(lvalue.kind != rvalue.kind) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            
            switch(lvalue.kind) {
                case kIntValue:
                    info->stack[info->stack_num].kind = kIntValue;
                    info->stack[info->stack_num].value.intValue = lvalue.intValue + rvalue.intValue;
printf("OP_ADD %d\n", info->stack[info->stack_num].value.intValue);
                    info->stack_num++;
                    break;
                    
                case kStringValue: {
                    buffer* buf = new  buffer.initialize();
                    
                    buf.append_str(lvalue.value.stringValue.to_string());
                    buf.append_str(rvalue.value.stringValue.to_string());
                    
                    info->stack[info->stack_num].kind = kStringValue;
                    info->stack[info->stack_num].value.stringValue = buf.to_string().to_wstring();
                    info->stack_num++;
                    }
                    break;
                    
                case kListValue: {
                    list<ZVALUE>* list_object = new  list<ZVALUE>.initialize();
                    
                    list<ZVALUE>* li = lvalue.value.listValue;
                    list<ZVALUE>* li2 = rvalue.value.listValue;
                    
                    foreach(it, li) {
                        list_object.push_back(it);
                    }
                    foreach(it, li2) {
                        list_object.push_back(it);
                    }
                    
                    info->stack[info->stack_num].kind = kListValue;
                    info->stack[info->stack_num].value.listValue = list_object;
                    info->stack_num++;
                    }
                    break;
                    
                case kTupleValue: {
                    list<ZVALUE>* list_object = new  list<ZVALUE>.initialize();
                    
                    immutable list<ZVALUE>* li = lvalue.value.tupleValue;
                    immutable list<ZVALUE>* li2 = rvalue.value.tupleValue;
                    
                    foreach(it, li) {
                        list_object.push_back(it);
                    }
                    foreach(it, li2) {
                        list_object.push_back(it);
                    }
                    
                    info->stack[info->stack_num].kind = kTupleValue;
                    info->stack[info->stack_num].value.tupleValue = list_object;
                    info->stack_num++;
                    }
                    break;
                    
                default:
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                    break;
            }
            
            }
            break;
            
        case OP_SUB: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            if(lvalue.kind != kIntValue && rvalue.kind != kIntValue) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            
            info->stack[info->stack_num].kind = kIntValue;
            info->stack[info->stack_num].value.intValue = lvalue.intValue - rvalue.intValue;
            info->stack_num++;
            
            }
            break;
            
        default:
            return inherit(codes, params, info);
            break;
    }
    
    return true;
}

