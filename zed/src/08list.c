#include <neo-c.h>
#include "common.h"

private struct sListNode
{
    int id;
    list<sNode*%>*% value;
};

private sListNode*% sListNode*::initialize(sListNode*% self, list<sNode*%>*% value)
{
    self.id = gNodeID++;
    self.value = value;
    
    return self;
}

private unsigned int sListNode*::id(sListNode* self)
{
    return self.id;
}

private bool sListNode*::compile(sListNode* self, sInfo* info)
{
    list<sNode*%>* list = self.value;
    
    for(int i=0; i<list.length(); i++) {
        sNode* node = list[i];
        
        if(!node.compile->(info)) {
            return false;
        }
    }
    
    info.codes.append_int(OP_LIST_VALUE);
    info.codes.append_int(list.length());
    
    info.stack_num -= list.length();
    info.stack_num++;
    
    return true;
}

private struct sMapNode
{
    int id;
    map<sNode*%, sNode*%>*% value;
};

private sMapNode*% sMapNode*::initialize(sMapNode*% self, map<sNode*%, sNode*%>*% value)
{
    self.id = gNodeID++;
    self.value = value;
    
    return self;
}

private unsigned int sMapNode*::id(sMapNode* self)
{
    return self.id;
}

private bool sMapNode*::compile(sMapNode* self, sInfo* info)
{
    map<sNode*%, sNode*%>* map = self.value;
    
    foreach(it, map) {
        sNode* item = map[it];
        
        if(!it.compile->(info)) {
            return false;
        }
        
        if(!item.compile->(info)) {
            return false;
        }
    }
    
    info.codes.append_int(OP_MAP_VALUE);
    info.codes.append_int(map.length());
    
    info.stack_num -= map.length() * 2;
    info.stack_num++;
    
    return true;
}

bool vm(sInfo* info) version 7
{
    inherit(info);
    
    switch(*info->op) {
        case OP_LIST_VALUE: {
            info->op++;
            
            int len = *info->op;
            info->op++;
            
            list<ZVALUE*%>*% list = new list<ZVALUE*%>();
            
            for(int i=0; i<len; i++) {
                ZVALUE*% value = clone info.stack[-len+i];
                
                list.push_back(value);
            }
            
            for(int i=0; i<len; i++) {
                info.stack.delete_back();
            }
            
            info.stack.push_back(new ZVALUE(kind:kListValue, list_value:list));
            }
            break;
            
        case OP_MAP_VALUE: {
            info->op++;
            
            int len = *info->op;
            info->op++;
            
            map<ZVALUE*%, ZVALUE*%>*% map = new map<ZVALUE*%, ZVALUE*%>();
            
            for(int i=0; i<len*2; i+=2) {
                ZVALUE*% key = clone info.stack[-len*2+i];
                ZVALUE*% item = clone info.stack[-len*2+i+1];
                
                map.insert(key, item);
            }
            
            for(int i=0; i<len*2; i++) {
                info.stack.delete_back();
            }
            
            info.stack.push_back(new ZVALUE(kind:kMapValue, map_value:map));
            }
            break;
    }
    
    return true;
}

sNode*? exp_node(sInfo* info) version 8
{
    if(*info->p == '[') {
        info->p++;
        skip_spaces(info);
        
        char* p = info->p;
        
        sNode*? node = expression(info);
        
        if(node == null) {
            return null;
        }
        
        delete node!;
        
        if(*info->p == ':') {
            info->p = p;
            
            map<sNode*%, sNode*%>*% map = new map<sNode*%, sNode*%>();
            
            while(true) {
                sNode*? node = expression(info);
                
                if(node == null) {
                    return null;
                }
                
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces(info);
                }
                
                sNode*? node2 = expression(info);
                
                if(node2 == null) {
                    return null;
                }
                
                map.insert(clone node!, clone node2!);
                
                delete node!;
                delete node2!;
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces(info);
                }
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces(info);
                    break;
                }
            }
            
            return borrow new sNode(new sMapNode(map));
        }
        else {
            info->p = p;
            
            list<sNode*%>*% list = new list<sNode*%>();
            
            while(true) {
                sNode*? node = expression(info);
                
                if(node == null) {
                    return null;
                }
                
                list.push_back(clone node!);
                
                delete node!;
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces(info);
                }
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces(info);
                    break;
                }
            }
            
            return borrow new sNode(new sListNode(list));
        }
    }
    else {
        return inherit(info);
    }
    
    return null;
}


