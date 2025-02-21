#include <comelang.h>

module TEST
{
    list<sNode*%>*% nodes;
}

void dec_stack_ptr(int value, sInfo* info=info)
{
    info.stack.delete(-value, -1);
}

class sBlock
{
    list<sNode*%>*% nodes;
    list<int>*% line_fields;
    
    new(list<sNode*%>*% nodes, list<int>*% line_fields, sInfo* info=info)
    {
        self.nodes = nodes;
        self.line_fields = line_fields;
    }
};

class sClassNode extends sNodeBase
{
    string name;
    sBlock*% block;
    bool native_;
    bool override_;
    
    new(string name, sBlock*% block, bool native_, bool override_, sInfo* info=info)
    {
        self.name = name;
        self.block = block;
        self.native_ = native_;
        self.override_ = override_;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string sClassNode*::kind()
    {
        return string("sClassNode");
    }
    
    bool compile(sInfo* info)
    {
        if(!self.override_) {
            add_come_code(info, s"if Object.const_defined?(\"\{self.name}\") then puts(\"\{self.name} is already defined. require override class.\"); exit(2); end\n");
        }
        
        if(!self.native_) {
            add_come_code(info, s"class \{self.name}\n");
        }
        
        if(self.name[0] >= 'A' && self.name[0] <= 'Z') {
        }
        else {
            err_msg(info, "inalid class name");
            return false;
        }
        
        
        sClass* klass = null;
        if(info.classes[self.name]??) {
            klass = info.classes[self.name];
        }
        else {
            info.classes[string(self.name)] = new sClass(self.name);
            
            klass = info.classes[self.name];
        }
        
        sClass* current_class = info.current_class;
        info->current_class = klass;
        
        compile_block(self.block);
        
        if(!self.native_) {
            add_come_code(info, s"end\n");
        }
        
        info->current_class = current_class;
        
        return true;
    }
};

void compile_block(sBlock*% block, sInfo* info=info)
{
    int n = 0;
    info->nest++;
    foreach(it, block.nodes) {
        int sline = info->sline;
        string sname = info->sname;
        
        info->sline = it->sline();
        info->sname = it->sname();
        
        it.compile(info).catch {
            puts("compile error");
            exit(2);
        }
        add_last_code_to_source();
        add_line_field_to_source(block.line_fields[n]);
        
        info->sline = sline;
        info->sname = sname;
        
        n++;
    }
    info->nest--;
}

class sFunNode extends sNodeBase
{
    string name;
    sBlock*% block;
    list<tuple2<string,sType*%>*%>*% params;
    sType*% result_type;
    
    bool native_;
    
    new(string name, list<tuple2<string,sType*%>*%>*% params, sType*% result_type, sBlock*% block, bool native_=false, sInfo* info=info)
    {
        self.name = name;
        self.block = block;
        self.params = params;
        self.native_ = native_;
        self.result_type = result_type;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sFunNode");
    }
    
    bool compile(sInfo* info)
    {
        if(self.name === "initialize") {
            self.result_type = new sType(info.current_class.mName);
        }
        
        sMethod*% method = new sMethod(self.name, self.params, self.result_type, self.native_);
        
        if(info.current_class) {
            info.current_class.mMethods[string(self.name)] = method;
        }
        else {
            info.methods[string(self.name)] = method;
        }
        
        if(self.native_) {
        }
        else {
            add_come_code(info, s"def \{self.name}(");
            int n = 0;
            foreach(it, self.params) {
                add_come_code_without_nest(info, s"\{self.params[n].v1}");
                
                n++;
                if(n == self.params.length()) {
                }
                else {
                    add_come_code_without_nest(info, ",");
                }
            }
            add_come_code_without_nest(info, ")\n");
            
            compile_block(self.block);
            
            add_come_code(info, s"end");
        }
        
        return true;
    }
};

void check_assign_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
    if(left_type->mClass->mName === "Any") {
    }
    else if(left_type->mClass->mName !== right_type->mClass->mName) {
        err_msg(info, "invalid type");
        puts(s"left type is \{left_type->mClass->mName}");
        puts(s"right type is \{right_type->mClass->mName}");
        exit(2);
    }
    
    if(left_type->mGenericsTypes.length() != right_type->mGenericsTypes.length()) {
        err_msg(info, "invalid generics type number");
        exit(2);
    }
    
    int i=0;
    foreach(it, left_type->mGenericsTypes) {
        check_assign_type(left_type->mGenericsTypes[i], right_type->mGenericsTypes[i], come_value);
        i++;
    }
}

class sKernelMethodCall extends sNodeBase
{
    string name;
    list<sNode*%>*% params;
    list<sNode*%>*% block;
    
    new(string name, list<sNode*%>*% params, list<sNode*%>*% block, sInfo* info=info)
    {
        self.name = clone name;
        self.params = params;
        self.block = block
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sKernelMethodCall");
    }
    
    bool compile(sInfo* info)
    {
        sClass* kernel_class = info.classes["Kernel"]??;
        
        if(kernel_class == null) {
            err_msg(info, "require Kernel class");
            return false;
        }
        
        sMethod* method = kernel_class.mMethods[self.name]??;
        
        bool no_check_type = false;
        if(method == null) {
            no_check_type = true;
        }
        
        buffer*% buf = new buffer();
        buf.append_str(s"\{self.name}(");
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
                left_type  = method->mParams[n].v2;
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
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = buf.to_string();
        if(method) {
            come_value.type = method->mResultType;
        }
        else {
            come_value.type = null;
        }
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sClassMethodCall extends sNodeBase
{
    string name;
    string method_name;
    list<sNode*%>*% params;
    list<sNode*%>*% block;

    new(string name, string method_name, list<sNode*%>*% params, list<sNode*%>*% block, sInfo* info=info)
    {
        self.name = name;
        self.method_name = method_name;
        self.params = params;
        self.block = block;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sClassMethodCall");
    }
    
    bool compile(sInfo* info)
    {
        sClass* klass = info.classes[self.name]??;
        
        if(klass == null) {
            err_msg(info, "require Kernel class");
            return false;
        }
        
        sMethod* method = klass.mMethods[self.method_name]??;
        sMethod* initialize_method = klass.mMethods["initialize"]??;
        
        bool no_check_type = false;
        if(self.method_name === "new") {
            if(initialize_method == null) {
                no_check_type = true;
            }
            
            method = initialize_method;
        }
        
        if(method == null) {
            no_check_type = true;
        }
        
        buffer*% buf = new buffer();
        buf.append_str(s"\{self.name}.\{self.method_name}(");
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
                err_msg(info, "invalid params number(%s)", self.method_name);
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
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = buf.to_string();
        if(method) {
            come_value.type = method->mResultType;
        }
        else {
            come_value.type = null;
        }
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

string parse_word(sInfo* info=info)
{
    var buf = new buffer();
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf();
    
    if(buf.to_string().length() == 0) {
        err_msg(info, "unexpected character(%c). expected word character", *info->p);
        return string("");
    }
    
    return buf.to_string();
}

bool parse_cmp(char* word, sInfo* info=info)
{
    if(strlen(info.p.p) >= strlen(word) && memcmp(info.p.p, word, strlen(word)) == 0)
    {
        char c = *(info->p + strlen(word));
        
        if(c == '\t' || c == ' ' || c == '\0' || c == '\n') {
            return true;
        }
    }
    
    return false;
}

sBlock*% parse_block(sInfo* info=info)
{
    expected_next_character('{');
    
    list<sNode*%>*% nodes = new list<sNode*%>();
    list<int>*% line_fields = new list<int>();
    
    info.line_field = 0;
    
    while(true) {
        int sline = info.sline;
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        sNode*% node = expression()??;
        
        if(node == null) {
            err_msg(info, "null node");
            exit(2);
        }
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        nodes.add(node);
        
        line_fields.add(info.line_field);
        info.line_field = 0;
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    return new sBlock(nodes, line_fields);
}

sNode*% parse_class(string name, bool native_, bool override_, sInfo* info=info)
{
    sBlock*% block = parse_block();
    
    return new sClassNode(name, block, native_, override_) implements sNode;
}

sType*% parse_type(sInfo* info=info)
{
    string type_name = parse_word();
    
    sType*% result = new sType(type_name);
    
    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf();
        
        while(true) {
            sType*% type = parse_type();
            
            result->mGenericsTypes.add(type);
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf();
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            else if(*info->p == '\0') {
                err_msg(info, "invalid source end");
                exit(2);
            }
            else {
                err_msg(info, "invalid character(%c)", *info->p);
                exit(2);
            }
        }
    }
    
    return result;
}

list<tuple2<string,sType*%>*%>*%, sType*% parse_params(sInfo* info=info)
{
    expected_next_character('(');
    
    list<tuple2<string,sType*%>*%>*% params = new list<tuple2<string,sType*%>*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        string name = parse_word();
        
        expected_next_character(':');
        
        sType*% type = parse_type();
        
        params.add((name, type));
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        else if(*info->p == '\0') {
            err_msg(info, "invalid source end");
            exit(2);
        }
    }
    
    sType*% result_type = null;
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf();
        
        result_type = parse_type();
    }
    else {
        result_type = new sType("void");
    }
    
    return (params, result_type);
}

list<sNode*%>*%, list<sNode*%>*% parse_calling_params(sInfo* info=info)
{
    expected_next_character('(');
    
    list<sNode*%>*% params = new list<sNode*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        sNode*% exp = expression()??;
        
        if(exp == null) {
            err_msg(info, "require node");
            exit(1);
        }
        
        params.add(exp);
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        else if(*info->p == '\0') {
            err_msg(info, "invalid source end");
            exit(2);
        }
    }
    
    list<sNode*%>*% block = new list<sNode*%>();
    
    if(*info->p == '{') {
        info->p++;
        skip_spaces_and_lf();
        
        while(true) {
            sNode*% exp = expression()??;
            
            if(exp == null) {
                err_msg(info, "require node for block");
                exit(1);
            }
            
            block.add(exp);
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            else if(*info->p == '\0') {
                err_msg(info, "invalid source end");
                exit(1);
            }
        }
    }
    
    return (params, block);
}

sNode*% parse_fun(string name, sInfo* info=info)
{
    bool native_ = false;
    var params, result_type = parse_params();
    
    sBlock*% block = null;
    
    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf();
        
        native_ = true;
    }
    else {
        block = parse_block();
    }
    
    return new sFunNode(name, params, result_type, block, native_) implements sNode;
}

void expected_next_character(char c, sInfo* info=info)
{
    if(*info->p != c) {
        if(!info.no_output_err) {
            err_msg(info, "expected next charaster is %c, but %c\n", c, *info->p);
            exit(2);
        }
    }
    
    info->p++;
    skip_spaces_and_lf();
}

sNode*% string_node(string buf, sInfo* info=info)
{
    return null;
}

sNode*% expression_node(sInfo* info=info) version 2
{
    if(xisalpha(*info->p)) {
        string buf = parse_word();
        
        bool kernel_method = false;
        {
            sClass* kernel_class = info.classes["Kernel"]??;
            
            if(kernel_class) {
                sMethod* method = kernel_class.mMethods[buf]??;
                
                if(method) {
                    kernel_method = true;
                }
            }
        }
        
        bool class_method = false;
        {
            sClass* klass = info.classes[buf]??;
            
            if(klass) {
                if(*info->p == '.') {
                    class_method = true;
                }
            }
        }
        
        if(buf === "override") {
            buf = parse_word();
            
            if(buf === "class") {
                string name = parse_word();
                
                sNode*% node = parse_class(name, true@native_, true@override_);
                
                return node;
            }
            else {
                return null;
            }
        }
        else if(buf === "native") {
            buf = parse_word();
            
            if(buf === "class") {
                string name = parse_word();
                
                sNode*% node = parse_class(name, true@native_, true@override_);
                
                return node;
            }
            else {
                return null;
            }
        }
        else if(buf === "class") {
            string name = parse_word();
            
            sNode*% node = parse_class(name, false@native_, false@override_);
            
            return node;
        }
        else if(buf === "def") {
            string name = parse_word();
            
            sNode*% node = parse_fun(name);
            
            return node;
        }
        else if(class_method) {
            expected_next_character('.');
            
            string method_name = parse_word();
            
            var params, block = parse_calling_params();
            
            return new sClassMethodCall(buf, method_name, params, block) implements sNode;
        }
        else if(kernel_method) {
            var params, block = parse_calling_params();
            
            return new sKernelMethodCall(buf, params, block) implements sNode;
        }
        else if(*info->p == '(') {
            var params, block = parse_calling_params();
            
            return new sKernelMethodCall(clone buf, params, block) implements sNode;
        }
        else {
            sNode*% node = string_node(buf);
            
            return node;
        }
    }
    
    return inherit(info);
}

