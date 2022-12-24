#include <neo-c.h>
#include "common.h"

private struct sStoreNode
{
    int id;
    wstring var_name;
    sNode*% right;
};

private sStoreNode*% sStoreNode*::initialize(sStoreNode*% self, wstring var_name, sNode*% right)
{
    self.id = gNodeID++;
    self.var_name = var_name;
    self.right = right;
    
    return self;
}

private bool sStoreNode*::compile(sStoreNode* self, sInfo* info)
{
    if(!self.right.compile->(info)) {
        return false;
    }
    info.codes.append_int(OP_STORE);
    
    append_str_to_codes(info, str:self.var_name);
    
    info->stack_num--;
    
    return true;
}

private unsigned int sStoreNode*::id(sStoreNode* self)
{
    return self.id;
}

private struct sLoadNode
{
    int id;
    wstring var_name;
};

private sLoadNode*% sLoadNode*::initialize(sLoadNode*% self, wstring var_name)
{
    self.id = gNodeID++;
    self.var_name = var_name;
    
    return self;
}

private bool sLoadNode*::compile(sLoadNode* self, sInfo* info)
{
    info.codes.append_int(OP_LOAD);
    
    append_str_to_codes(info, str:self.var_name);
    
    info->stack_num++;
    
    return true;
}

private unsigned int sLoadNode*::id(sLoadNode* self)
{
    return self.id;
}

private struct sLoadElementNode
{
    int id;
    string var_name;
    sNode*% index;
};

private sLoadElementNode*% sLoadElementNode*::initialize(sLoadElementNode*% self, string var_name, sNode*% index)
{
    self.id = gNodeID++;
    
    self.var_name = var_name;
    self.index = index;
    
    return self;
}

private unsigned int sLoadElementNode*::id(sLoadElementNode* self)
{
    return self.id;
}

private bool sLoadElementNode*::compile(sLoadElementNode* self, sInfo* info)
{
    sNode* index = self.index;
    
    if(!index.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_LOAD_ELEMENT);
    
    append_str_to_codes(info, str:self.var_name.to_wstring());
    
    info->stack_num --;
    info->stack_num++;
    
    return true;
}

private struct sStoreElementNode
{
    int id;
    string var_name;
    sNode*% index;
    sNode*% right;
};

private sStoreElementNode*% sStoreElementNode*::initialize(sStoreElementNode*% self, string var_name, sNode*% index, sNode*% right)
{
    self.id = gNodeID++;
    
    self.var_name = var_name;
    self.index = index;
    self.right = right;
    
    return self;
}

private unsigned int sStoreElementNode*::id(sStoreElementNode* self)
{
    return self.id;
}

private bool sStoreElementNode*::compile(sStoreElementNode* self, sInfo* info)
{
    sNode* index = self.index;
    
    if(!index.compile->(info)) {
        return false;
    }
    
    sNode* right = self.right;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_STORE_ELEMENT);
    
    append_str_to_codes(info, str:self.var_name.to_wstring());
    
    info->stack_num -= 2;
    
    return true;
}

private map<wstring, ZVALUE*%>* gVars;

ZVALUE gNullValue;

void initialize_modules()
{
    gVars = borrow new map<wstring, ZVALUE*%>();
    gNullValue.kind = kNullValue;
}

void finalize_modules()
{
    delete gVars;
}

bool vm(sInfo* info) version 3
{
    inherit(info);
    
    switch(*info->op) {
        case OP_STORE: {
            info->op++;
            
            wstring var_name = get_str_from_codes(info);
            
            ZVALUE*? right_value = nullable info.stack[-1];
            
            gVars.insert(var_name, clone right_value!);
            
            info.stack.delete_back();
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
            
            ZVALUE* map = gVars.at(var_name, null);
            
            if(map == null || (map.kind != kMapValue && map.kind != kListValue)) {
                fprintf(stderr, "invalid obj value for array index\n");
                exit(2);
            }
            
            ZVALUE*% index = clone info.stack[-1];
            
            info.stack.delete_back();
            
            switch(map.kind) {
                case kListValue: {
                    int index_value = -1;
                    if(index.kind == kIntValue) {
                        index_value = index.intValue;
                    }
                    else {
                        fprintf(stderr, "require int value for array index\n");
                        exit(2);
                    }
                    
                    ZVALUE* result = map.listValue[index_value];
                    
                    if(result == null) {
                        fprintf(stderr, "invalid list index\n");
                        exit(1);
                    }
                    
                    info.stack.push_back(clone result);
                    }
                    break;
                    
                case kMapValue: {
                    ZVALUE* result = map.mapValue[index];
                    
                    if(result == null) {
                        fprintf(stderr, "invalid map index\n");
                        exit(1);
                    }
                    
                    info.stack.push_back(clone result);
                    }
                    break;
                    
                default:
                    fprintf(stderr, "require list or map for index node\n");
                    exit(1);
            }
            }
            break;
            
        case OP_STORE_ELEMENT: {
            info->op++
            
            wstring var_name = get_str_from_codes(info);
            
            ZVALUE* map = gVars.at(var_name, null);
            
            if(map == null || (map.kind != kMapValue && map.kind != kListValue)) {
                fprintf(stderr, "invalid obj value for array index\n");
                exit(2);
            }
            
            ZVALUE*% index = clone info.stack[-2];
            ZVALUE*% right = clone info.stack[-1];
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            switch(map.kind) {
                case kListValue: {
                    int index_value = -1;
                    if(index.kind == kIntValue) {
                        index_value = index.intValue;
                    }
                    else {
                        fprintf(stderr, "require int value for array index\n");
                        exit(2);
                    }
                    
                    ZVALUE* item = map.listValue.item(index_value, null);
                    
                    if(item == null) {
                        fprintf(stderr, "invalid list index\n");
                        exit(2);
                    }
                    
                    map.listValue[index_value] = clone right;
                    }
                    break;
                    
                case kMapValue: 
                    map.mapValue[clone index] = clone right;
                    break;
                    
                default:
                    fprintf(stderr, "require list or map for index node\n");
                    exit(1);
            }
            }
            break;
            
    }
    
    return true;
}

sNode*? exp_node(sInfo* info) version 3
{
    sNode*? result = null;
    
    buffer*%? var_name = null;
    
    if(xisalpha(*info->p)) {
        var_name = nullable new buffer();
        
        while(xisalnum(*info->p) || *info->p == '_') {
            var_name!.append_char(*info->p);
            info->p++;
        }
        
        skip_spaces(info);
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces(info);
            
            sNode*? node = expression(info);
            
            if(node == null) {
                fprintf(stderr, "require right value\n");
                exit(2);
            }
            
            sNode*? result = borrow new sNode(new sStoreNode(var_name!.to_string().to_wstring(), clone node!));
            
            delete node!;
            
            return result;
        }
        else {
           result = borrow new sNode(new sLoadNode(var_name!.to_string().to_wstring()));
        }
    }
    else {
        result = inherit(info);
    }
    
    if(*info->p == '[') {
        info->p++;
        skip_spaces(info);
        
        sNode*? node = expression(info);
        
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
            
            sNode*? node2 = expression(info);
            
            if(node2 == null) {
                fprintf(stderr, "require right value\n");
                exit(2);
            }
            
            sNode*? result2 = borrow new sNode(new sStoreElementNode(var_name!.to_string(), clone node!, clone node2!));
            
            delete result!;
            delete node!;
            delete node2!;
            
            result = result2;
        }
        else {
            sNode*? result2 = borrow new sNode(new sLoadElementNode(var_name!.to_string(), clone node!))
            
            delete result!;
            delete node!;
            
            result = result2;
        }
    }
    
    return result;
}

void append_var(wstring name, ZVALUE* value)
{
    gVars.insert(clone name, clone value);
}

