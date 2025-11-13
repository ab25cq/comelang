#include <neo-c.h>

class sMethodCall extends sNodeBase
{
    sNode*% obj;
    string name;
    list<sNode*%>*% params;
    list<sNode*%>*% block;
    
    new(sNode*% obj, string name, list<sNode*%>*% params, list<sNode*%>*% block, sInfo* info=info)
    {
        self.obj = obj;
        self.name = name;
        self.params = params;
        self.block = block;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sMethodCall");
    }
    
    bool compile(sInfo* info)
    {
        if(!self.obj.compile(info)) {
            return false;
        }
        
        CVALUE*% come_value = clone get_value_from_stack();
        dec_stack_ptr(1);
        
        sType* type = come_value.type;
        
        bool no_check_type = false;
        if(type == null) {
            no_check_type = true;
        }
        
        sClass* klass = type.mClass;
        
        if(klass == null) {
            err_msg(info, "require class");
            return false;
        }
        
        sMethod* method = klass.mMethods[self.name]??;
        
        if(method == null) {
            no_check_type = true;
        }
        
        buffer*% buf = new buffer();
        buf.append_str(s"\{come_value.c_value}.\{self.name}(");
        int n = 0;
        foreach(it, self.params) {
            it.compile(info).catch {
                puts("compile error");
                exit(2);
            }
            CVALUE*% come_value = get_value_from_stack();
            dec_stack_ptr(1);
            
            sType* left_type = null;
            if(method) {
                left_type = method->mParams[n].v2;
            }
            
            if(!no_check_type && left_type == null) {
                err_msg(info, "invalid params number(%s)", self.name);
                exit(2);
            }
            
            if(!no_check_type && come_value.type) {
                check_assign_type(left_type, come_value.type, come_value);
            }
            
            buf.append_str(s"\{come_value.c_value}");
            
            n++;
            
            if(n != self.params.length()) {
                buf.append_str(s",");
            }
        }
        buf.append_str(s")");
        
        if(self.block.length() > 0) {
            buf.append_str(s" do\n");
            
            foreach(it, self.block) {
                for(int i=0; i<info->nest+1; i++) {
                    buf.append_str("    ");
                }
                it.compile(info).catch {
                    puts("compile error");
                    exit(2);
                }
                CVALUE*% come_value = get_value_from_stack();
                dec_stack_ptr(1);
                
                buf.append_str(s"\{come_value.c_value}\n");
            }
            
            buf.append_str(s"end\n");
        }
        
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = buf.to_string();
        if(method) {
            come_value2.type = method->mResultType;
        }
        else {
            come_value2.type = null;
        }
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sCastType extends sNodeBase
{
    sType*% type;
    sNode*% node;
    
    new(sNode*% node, sType*% type, sInfo* info=info)
    {
        self.node = node;
        self.type = type;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sCastType");
    }
    
    bool compile(sInfo* info)
    {
        if(!self.node.compile(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack();
        dec_stack_ptr(1);
        
        CVALUE*% come_value2 = new CVALUE;
    
        come_value2.c_value = clone come_value.c_value;
        come_value2.type = clone self.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        return true;
    }
};

sNode*% post_expression(sNode*% node, sInfo* info=info)
{
    while(true) {
        if(*info->p == '.') {
            info->p++;
            skip_spaces_and_lf();
            
            string buf = parse_word();
            
            /// method call ///
            if(*info->p == '(') {
                var params, block = parse_calling_params();
                
                node = new sMethodCall(node, buf, params, block) implements sNode;
            }
            
            /// field ///
            else {
            }
        }
        else if(*info->p == '-' && *(info->p+1) == '>') {
            info->p+=2;
            skip_spaces_and_lf();
            
            sType*% type_ = parse_type();
            
            return new sCastType(node, type_) implements sNode;
        }
        else {
            break;
        }
    }
    
    return node;
}

sNode*%?? expression(sInfo* info=info) version 2
{
    sNode*% node = inherit(info)??;
    
    if(node == null) {
        return null;
    }
    
    if(*info->p == '.' || (*info->p == '-' && *(info->p+1) == '>')) {
        sNode*% node2 = post_expression(node)
        
        return node2;
    }
    else {
        return node;
    }
}
