#include <neo-c.h>

class sStoreLocalVariable extends sNodeBase
{
    string name;
    sNode*% right_value;
    bool alloc;
    sType*% var_type;
    
    new(string name, sNode*% right_value, bool alloc, sType*% var_type, sInfo* info=info)
    {
        self.name = name;
        self.right_value = right_value;
        self.alloc = alloc;
        self.var_type = var_type;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sStoreLocalVariable");
    }
    
    bool compile(sInfo* info)
    {
        if(!self.right_value.compile(info)) {
            return false;
        }
        
        CVALUE*% come_value = clone get_value_from_stack();
        dec_stack_ptr(1);
        
        sType* right_type = come_value.type;
        
        if(right_type == null) {
            err_msg(info, "require type");
            return false;
        }
        
        sType* var_type;
        if(self.alloc) {
            if(self.var_type == null) {
                var_type = right_type;
            }
            else {
                var_type = self.var_type;
            }
            
            sVar*% var_ = new sVar;
            
            var_.mName = self.name;
            var_.mType = clone var_type;
            var_.mCValueName = self.name
            
            if(info.lv_table[self.name]?? != null) {
                err_msg(info, "already declared");
                return false;
            }
            
            info.lv_table.insert(self.name, var_);
        }
        else {
            sVar* var_ = info.lv_table[self.name]??;
            
            if(var_ == null) {
                err_msg(info, "require local var");
                exit(2);
            }
            
            var_type = var_.mType;
            
            if(var_type == null) {
                err_msg(info, "require var type");
                exit(2);
            }
        }
        
        check_assign_type(var_type, right_type, come_value);
        
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = s"\{self.name}=\{come_value.c_value}";
        come_value2.type = come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sLoadLocalVariable extends sNodeBase
{
    string name;
    
    new(string name, sInfo* info=info)
    {
        self.name = name;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sLoadLocalVariable");
    }
    
    bool compile(sInfo* info)
    {
        sVar* var_ = info.lv_table[self.name]??;
        
        if(var_ == null) {
            err_msg(info, "invalid var name");
            exit(2);
        }
        
        sType* var_type = var_->mType;
        
        if(var_type == null) {
            err_msg(info, "require var type");
            exit(2);
        }
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = s"\{self.name}";
        come_value.type = clone var_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sStoreGlobalVariable extends sNodeBase
{
    string name;
    sNode*% right_value;
    bool alloc;
    sType*% var_type;
    
    new(string name, sNode*% right_value, bool alloc, sType*% var_type, sInfo* info=info)
    {
        self.name = name;
        self.right_value = right_value;
        self.alloc = alloc;
        self.var_type = var_type;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sStoreGlobalVariable");
    }
    
    bool compile(sInfo* info)
    {
        if(!self.right_value.compile(info)) {
            return false;
        }
        
        CVALUE*% come_value = clone get_value_from_stack();
        dec_stack_ptr(1);
        
        sType* right_type = come_value.type;
        
        if(right_type == null) {
            err_msg(info, "require type");
            return false;
        }
        
        sType* var_type;
        if(self.alloc) {
            if(self.var_type == null) {
                var_type = right_type;
            }
            else {
                var_type = self.var_type;
            }
            
            sVar*% var_ = new sVar;
            
            var_.mName = self.name;
            var_.mType = clone var_type;
            var_.mCValueName = self.name
            
            if(info.gv_table[self.name]?? != null) {
                err_msg(info, "already declared");
                return false;
            }
            
            info.gv_table.insert(self.name, var_);
        }
        else {
            sVar* var_ = info.gv_table[self.name]??;
            
            if(var_ == null) {
                err_msg(info, "require local var");
                exit(2);
            }
            
            var_type = var_.mType;
            
            if(var_type == null) {
                err_msg(info, "require var type");
                exit(2);
            }
        }
        
        check_assign_type(var_type, right_type, come_value);
        
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = s"\$\{self.name}=\{come_value.c_value}";
        come_value2.type = come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sLoadGlobalVariable extends sNodeBase
{
    string name;
    
    new(string name, sInfo* info=info)
    {
        self.name = name;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sLoadGlobalVariable");
    }
    
    bool compile(sInfo* info)
    {
        sVar* var_ = info.gv_table[self.name]??;
        
        if(var_ == null) {
            err_msg(info, "invalid var name");
            exit(2);
        }
        
        sType* var_type = var_->mType;
        
        if(var_type == null) {
            err_msg(info, "require var type");
            exit(2);
        }
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = s"\$\{self.name}";
        come_value.type = clone var_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

sNode*% string_node(string buf, sInfo* info=info) version 2
{
    bool local_variable = false;
    {
        if(info.lv_table[buf]??) {
            local_variable = true;
        }
    }
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_value = expression()??;
            
            if(right_value == null) {
                err_msg(info, "require right value");
                exit(2);
            }
            
            return new sStoreLocalVariable(buf, right_value, true@alloc, null@var_type) implements sNode;
        }
        else {
            sType*% var_type = parse_type();
            
            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf();
                
                sNode*% right_value = expression()??;
                
                if(right_value == null) {
                    err_msg(info, "require right value");
                    exit(2);
                }
                
                return new sStoreLocalVariable(buf, right_value, true@alloc, var_type) implements sNode;
            }
            else {
                err_msg(info, "require right value");
                exit(2);
            }
        }
    }
    else if(*info->p == '=') {
        info->p++;
        skip_spaces_and_lf();
        
        sNode*% right_value = expression()??;
        
        if(right_value == null) {
            err_msg(info, "require right value");
            exit(2);
        }
        
        return new sStoreLocalVariable(buf, right_value, false@alloc, null@var_type) implements sNode;
    }
    else if(local_variable) {
        return new sLoadLocalVariable(buf) implements sNode;
    }
    else {
        return inherit(buf, info);
    }
}

sNode*% expression_node(sInfo* info=info) version 3
{
    if(*info->p == '$') {
        info->p++;
        
        string buf = parse_word();
        
        bool global_variable = false;
        {
            if(info.gv_table[buf]??) {
                global_variable = true;
            }
        }

        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf();
                
                sNode*% right_value = expression()??;
                
                if(right_value == null) {
                    err_msg(info, "require right value");
                    exit(2);
                }
                
                return new sStoreGlobalVariable(buf, right_value, true@alloc, null@var_type) implements sNode;
            }
            else {
                sType*% var_type = parse_type();
                
                if(*info->p == '=') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    sNode*% right_value = expression()??;
                    
                    if(right_value == null) {
                        err_msg(info, "require right value");
                        exit(2);
                    }
                    
                    return new sStoreGlobalVariable(buf, right_value, true@alloc, var_type) implements sNode;
                }
                else {
                    err_msg(info, "require right value");
                    exit(2);
                }
            }
        }
        else if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_value = expression()??;
            
            if(right_value == null) {
                err_msg(info, "require right value");
                exit(2);
            }
            
            return new sStoreGlobalVariable(buf, right_value, false@alloc, null@var_type) implements sNode;
        }
        else if(global_variable) {
            return new sLoadGlobalVariable(buf) implements sNode;
        }
    }
    
    return inherit(info);
}

