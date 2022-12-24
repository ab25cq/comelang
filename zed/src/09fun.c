#include <neo-c.h>
#include "common.h"

private struct sFunNode
{
    int id;
    sNode*% obj;
    string name;
    vector<sNode*%>*% params;
    sNodeBlock? block;
};

private sFunNode*% sFunNode*::initialize(sFunNode*% self, string name, sNode*% obj, vector<sNode*%>*% params, sNodeBlock? block)
{
    self.id = gNodeID++;
    self.name = name;
    self.obj = obj;
    self.params = params;
    self.block = block;
    
    return self;
}

private unsigned int sFunNode*::id(sFunNode* self)
{
    return self.id;
}

private bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    char* name = self.name;
    vector<sNode*%>* params = self.params;
    sNode* obj = self.obj;
    sNodeBlock&? block = self.block;
    
    if(!obj.compile->(info)) {
        return false;
    }
    
    for(int i=0; i<params.length(); i++) {
        sNode* node = params[i];
        
        if(!node.compile->(info)) {
            return false;
        }
    }
    
    buffer*? codes = null;
    if(block) {
        sInfo info2;
        
        info2.p = info.p;
        info2.command = null;
        info2.codes = new buffer();
        info2.nodes = null;
        info2.head = null;
        info2.op = null;
        info2.stack = new vector<ZVALUE*%>();
        
        info2.loop_head = 0;
        info2.breaks = null;
        info2.result_value = null;
        
        info2.stack_num = 0;
        
        if(!compile_block(block!, &info2)) {
            return false;
        }

        codes = nullable borrow clone info2.codes;
        
    }
    
    info.codes.append_int(OP_FUN);
    info.codes.append_int(params.length());
    
    append_str_to_codes(info, wstring(name));
    
    info.codes.append_int(codes ? codes!.length():0);
    
    if(codes) {
        info.codes.append(codes!.buf, codes!.length());
        
        delete codes!;
    }
    
    info.stack_num -= params.length() + 1;
    info.stack_num++;
    
    return true;
}

sNode*? exp_node(sInfo* info) version 9
{
    sNode*? result = null;
    if(*info->p == '.') {
        result = inherit(info);
        
        string fun_name = string("read");
        vector<sNode*%>*% params = new vector<sNode*%>();
        sNodeBlock? block = null
        result = borrow new sNode(new sFunNode(fun_name, clone result!, params, block));
    }
    else {
        result = inherit(info);
    }
    
    while(*info->p == '.') {
        info->p++;
        skip_spaces(info);
        
        if(result == null) {
            fprintf(stderr, "invalid method call. require object\n");
            exit(2);
        }
        
        buffer*% buf = new buffer();
        
        while(xisalnum(*(info->p)) || *info->p == '_') {
            buf.append_char(*info->p);
            info->p++;
        }
        skip_spaces(info);
        
        string fun_name = buf.to_string();
        
        vector<sNode*%>*% params = new vector<sNode*%>();
        
        if(*info->p != '{' && *info->p == '(') {
            if(*info->p == '(') {
                info->p++;
                skip_spaces(info);
            }
            
            while(true) {
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces(info);
                    break;
                }
                
                sNode*? node = expression(info);
                
                if(node == null) {
                    fprintf(stderr, "require parametor expression\n");
                    exit(1);
                }
                
                params.push_back(clone node!);
                
                delete node!;
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces(info);
                }
            }
        }
        
        sNodeBlock? block = null
        if(*info->p == '{') {
            block = parse_block(info);
        }
        
        sNode*? result2 = borrow new sNode(new sFunNode(fun_name, clone result!, params, block));
        
        delete result!;
        
        result = result2;
    }
    
    return result;
}
