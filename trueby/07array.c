#include <neo-c.h>

class sArrayNode extends sNodeBase
{
    list<sNode*%>*% params;
    
    new(list<sNode*%>*% params, sInfo* info=info)
    {
        self.params = params;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sMethodCall");
    }
    
    bool compile(sInfo* info)
    {
        list<CVALUE*%>*% compiled_params = new list<CVALUE*%>();
        
        foreach(it, self.params) {
            if(!it.compile(info)) {
                return false;
            }
            
            CVALUE*% come_value = clone get_value_from_stack();
            dec_stack_ptr(1);
            
            compiled_params.add(come_value);
        }
        
        sType* type = null;
        bool any_ = false;
        foreach(it, compiled_params) {
            if(type) {
                if(type->mClass->mName !== it.type->mClass->mName) {
                    any_ = true;
                }
            }
            
            type = it.type;
        }
        
        CVALUE*% come_value2 = new CVALUE;
        
        var buf = new buffer();
        
        buf.append_str("[");
        int i = 0;
        foreach(it, compiled_params) {
            buf.append_str(it.c_value);
            
            if(i != compiled_params.length()-1) {
                buf.append_str(",");
            }
            i++;
        }
        buf.append_str("]");
        
        come_value2.c_value = buf.to_string();
        if(any_) {
            come_value2.type = new sType("Array");
            come_value2.type.mGenericsTypes[0] = new sType("Any");
        }
        else {
            come_value2.type = new sType("Array");
            come_value2.type.mGenericsTypes[0] = clone type;
        }
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

sNode*% expression_node(sInfo* info=info) version 4
{
    if(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf();
        
        list<sNode*%>*% params = new list<sNode*%>();
        while(true) {
            sNode*% element = expression()??;
            
            if(element == null) {
                err_msg(info, "require element value");
                exit(2);
            }
            
            params.add(element);
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            else if(*info->p == '\0') {
                err_msg(info, "Invalid souce end");
                exit(2);
            }
            else if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf();
                
                break;
            }
        }
        
        return new sArrayNode(params) implements sNode;
    }
    
    return inherit(info);
}

