#include "common.h"

class sModuleNode extends sNodeBase {
    new(string name, sClassModule*% module, sInfo* info) {
        self.super();
        
        string self.name = string(name);
        sClassModule*% self.module = clone module;
    }

    string kind()
    {
        return string("sModuleNode");
    }
    
    bool compile(sInfo* info)
    {
        string name = string(self.name);
        sClassModule* module = self.module;
        
        return true;
    }
};

class sStaticAssert extends sNodeBase {
    new(sNode*% exp, sNode*% exp2, sInfo* info=info) {
        self.super();
        
        sNode*% self.exp = exp;
        sNode*% self.exp2 = exp2;
    }

    string kind()
    {
        return string("sStaticAssert");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% exp = self.exp;
        
        node_compile(exp).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        sNode*% exp2 = self.exp2;
        
        node_compile(exp2).elif {
            return false;
        }
        
        CVALUE*% come_value2 = get_value_from_stack(-1, info);
        
        CVALUE*% come_value3 = new CVALUE();
        
        come_value3.c_value = xsprintf("_Static_assert(%s, %s)", come_value.c_value, come_value2.c_value);
        come_value3.type = new sType(s"void");
        come_value3.var = null;
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sUndefNode extends sNodeBase {
    new(string str, sInfo* info=info) {
        self.super();
        
        string self.str = str;
    }

    string kind()
    {
        return string("sUndefNode");
    }
    
    bool compile(sInfo* info)
    {
        string str = self.str;
        
        info.struct_definition.remove(str);
        info.funcs.remove(str);
        info.generics_funcs.remove(str);
        info.modules.remove(str);
        info.types.remove(str);
        
        return true;
    }
};

class sNoneNode extends sNodeBase {
    new(sInfo* info=info) {
        self.super();
    }

    string kind()
    {
        return string("sNoneNode");
    }
    
    bool compile(sInfo* info)
    {
        return true;
    }
};

sNode*% static_assert_node(sNode*% exp, sNode*% exp2, sInfo* info=info)
{
    return new sStaticAssert(exp, exp2, info) implements sNode;
}

string refrection_node(sInfo* info=info)
{
    if(parsecmp("defined")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        info.struct_definition[exp].if {
            defined = true;
        }
        info.funcs[exp].if {
            defined = true;
        }
        info.generics_funcs[exp].if {
            defined = true;
        }
        info.modules[exp].if {
            defined = true;
        }
        info.types[exp].if {
            defined = true;
        }
        get_variable_from_table(info.gv_table, exp).if {
            defined = true;
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_static")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.funcs[exp].if {
            if(Value->mStatic) {
                defined = true;
            }
        }
        //sGeneicsFun* gfun = info.generics_funcs[exp];
        get_variable_from_table(info.gv_table, exp).if {
            if(Value.mType.mStatic) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_heap")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.funcs[exp].if {
            if(Value->mResultType.mHeap) {
                defined = true;
            }
        }
        //sGeneicsFun* gfun = info.generics_funcs[exp];
        get_variable_from_table(info.gv_table, exp).if {
            if(Value.mType.mHeap) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_const")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.funcs[exp].if {
            if(Value->mResultType.mConstant) {
                defined = true;
            }
        }
        //sGeneicsFun* gfun = info.generics_funcs[exp];
        get_variable_from_table(info.gv_table, exp).if {
            if(Value.mType.mConstant) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_uniq")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.uniq_funcs[exp].if {
            defined = true;
        }
        get_variable_from_table(info.gv_table, exp).if {
            if(Value.mType.mUniq) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_type")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.types[exp].if {
            defined = true;
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("type")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        string result = null;
        
        info.funcs[exp].if {
            result = make_come_type_name_string(Value->mResultType);
        }
        //sGeneicsFun* gfun = info.generics_funcs[exp];
        get_variable_from_table(info.gv_table, exp).if {
            result = make_come_type_name_string(Value->mType);
        }
        
        if(result) {
            return result;
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("param_types")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp2 = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        string result = null;
        
        info.funcs[exp].if {
            sType* type = Value->mParamTypes[atoi(exp2)];
            if(type) {
                result = make_come_type_name_string(type);
            }
        }
        
        if(result) {
            return result;
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("num_param_types")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        string result = null;
        
        info.funcs[exp].if {
            result = xsprintf("%d", Value->mParamTypes.length());
        }
        
        if(result) {
            return result;
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("num_fields")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        string result = null;
        
        info.classes[exp].if {
            if(Value.mStruct) {
                result = xsprintf("%d", Value.mFields.length());
            }
        }
        
        if(result) {
            return result;
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("field_types")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp2 = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        string result = null;
        
        info.classes[exp].if {
            if(Value.mStruct) {
                int n = atoi(exp2);
                if(n < Value.mFields.length()) {
                    var name, type = Value.mFields[n];
                    if(type) {
                        result = make_come_type_name_string(type);
                    }
                }
            }
        }
        
        if(result) {
            return result;
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("type")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.types[exp].if {
            return make_come_type_name_string(Value);
        }
    }
    else if(parsecmp("puts")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        puts(exp);
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        return s"true";
    }
    else if(parsecmp("is_inline")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.funcs[exp].if {
            if(Value->mResultType.mInline) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_struct")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.classes[exp].if {
            if(Value.mStruct) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_union")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.classes[exp].if {
            if(Value.mUnion) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_enum")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.classes[exp].if {
            if(Value.mEnum) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_interface")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.classes[exp].if {
            if(Value.mProtocol) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_generics")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.classes[exp].if {
            if(Value.mGenerics) {
                defined = true;
            }
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(parsecmp("is_module")) {
        (void)parse_word();
        
        parse_sharp();
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        string exp = refrection_node();
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        parse_sharp();
        
        bool defined = false;
        
        info.modules[exp].if {
            defined = true;
        }
        
        if(defined) {
            return s"true";
        }
        else {
            return s"false";
        }
    }
    else if(xisalpha(*info->p) || *info->p == '_') {
        buffer*% buf = new buffer();
        while(xisalnum(*info->p) || *info->p == '_' || *info->p == '*' || *info->p == '%' || *info->p == '<' || *info->p == '>')
        {
            buf.append_char(*info->p);
            info->p++;
        }
        skip_spaces_and_lf();
        return buf.to_string();
    }
    else if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info.p - '0');
            info.p++;
        }
        skip_spaces_and_lf();
        return xsprintf("%d", n);
    }
    else if(*info->p == '!') {
        info->p++;
        skip_spaces_and_lf();
        
        string exp = refrection_node();
        
        if(exp === "true") {
            return s"false";
        }
        else {
            return s"true";
        }
    }
    else {
        err_msg(info, "invalid character(%c)", *info->p);
    }
    
    err_msg(info, "invalid character(%c)", *info->p);
    
    return s"";
}

string refrection_expression_comp(sInfo* info=info)
{
    string node = refrection_node();
    
    parse_sharp();
    
    while(*info->p) {
        if(*info->p == '>' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf();
            
            string right = refrection_node();
            
            if(atoi(node) >= atoi(right)) {
                return s"true";
            }
            else {
                return s"false";
            }
        }
        else if(*info->p == '<' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf();
            
            string right = refrection_node();
            
            if(atoi(node) <= atoi(right)) {
                return s"true";
            }
            else {
                return s"false";
            }
        }
        else if(*info->p == '>') {
            info->p += 1;
            skip_spaces_and_lf();
            
            string right = refrection_node();
            
            if(atoi(node) > atoi(right)) {
                return s"true";
            }
            else {
                return s"false";
            }
        }
        else if(*info->p == '<') {
            info->p += 1;
            skip_spaces_and_lf();
            
            string right = refrection_node();
            
            if(atoi(node) < atoi(right)) {
                return s"true";
            }
            else {
                return s"false";
            }
        }
        else {
            break;
        }
    }
    
    return node;
}

string refrection_expression_eq(sInfo* info=info)
{
    string node = refrection_expression_comp();
    
    parse_sharp();
    
    while(*info->p) {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf();
            
            string right = refrection_expression_comp();
            
            if(node === right) {
                return s"true";
            }
            else {
                return s"false";
            }
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf();
            
            string right = refrection_expression_comp();
            
            if(node === right) {
                return s"false";
            }
            else {
                return s"true";
            }
        }
        else {
            break;
        }
    }
    
    return node;
}

string refrection_expression_oror(sInfo* info=info)
{
    string node = refrection_expression_eq();
    
    parse_sharp();
    
    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) == '|') {
            info->p += 2;
            skip_spaces_and_lf();
            
            string right = refrection_expression_eq();
            
            if(node === "true" || right === "true") {
                return s"true";
            }
            else {
                return s"false";
            }
        }
        else {
            break;
        }
    }
    
    return node;
}

string refrection_expression_andand(sInfo* info=info)
{
    string node = refrection_expression_oror();
    
    parse_sharp();
    
    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p += 2;
            skip_spaces_and_lf();
            
            string right = refrection_expression_oror();
            
            if(node === "true" && right === "true") {
                return s"true";
            }
            else {
                return s"false";
            }
        }
        else {
            break;
        }
    }
    
    return node;
}

string refrection_expression(sInfo* info=info)
{
    return refrection_expression_andand();
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 91
{
    if(buf === "module") {
        var type_name = parse_word();
        
        string sname = info.sname;
        int sline = info.sline;
        
        list<string>*% params = new list<string>();
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf();
            
            while(true) {
                string word = parse_word();
                
                params.add(word);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                else if(*info->p == '\0') {
                    err_msg(info, "invalid source end");
                    exit(2);
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else {
                    err_msg(info, "invalid charactor(%c)", *info->p);
                    exit(2);
                }
            }
        }
        
        expected_next_character('{');
        
        char* source_head = info.p;
        char* source_tail = null;
        
        var buf = new buffer();
        
        bool squort = false;
        bool dquort = false;
        int nest = 1;
        while(1) {
            if(*info->p == '\0') {
                err_msg(info, "unexpected source end in module");
                exit(2);
            }
            else if(*info->p == '\\') {
                buf.append_char(*info->p);
                info->p++;
                
                if(*info->p == '\n') {
                    info->sline++;
                }
                buf.append_char(*info->p);
                info->p++;
            }
            else if(!squort && *info->p == '"') {
                buf.append_char(*info->p);
                info->p++;
                dquort = !dquort;
            }
            else if(!dquort && *info->p == '\'') {
                buf.append_char(*info->p);
                info->p++;
                squort = !squort;
            }
            else if(squort || dquort) {
                buf.append_char(*info->p);
                if(*info->p == '\n') {
                    info->sline++;
                }
                info->p++;
            }
            else if(*info->p == '{') {
                nest++;
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '}') {
                nest--;
                
                if(nest == 0) {
                    source_tail = info->p - 1;
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                
                buf.append_char(*info->p);
                info->p++;
            }
            else if(*info->p == '\n') {
                info->sline++;
                buf.append_char(*info->p);
                info->p++;
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        sClassModule*% module = new sClassModule(type_name, buf.to_string(), sname, sline);
        
        module.mParams = clone params;
        
        info.modules[string(type_name)] = module;
        
        return new sModuleNode(string(type_name), module, info) implements sNode;
    }
    else if(buf === "__c__" && *info->p == '{') {
        string block_text = skip_block();
        
        char* p = block_text + strlen(block_text);
        
        while(p >= block_text && *p != '}') {
            p--;
        }
        
        string contents = block_text.substring(1, p - (block_text + strlen(block_text))-1);
        
        //add_come_code(info, "%s\n", contents);
        static int n = 0;
        n++;
        info.previous_struct_definition.insert(s"__c__\{n}", contents.to_buffer());
        
        return new sNothingNode(info) implements sNode;
    }
    else if(buf === "no_output" && *info->p == '{') {
        info->p++;
        skip_spaces_and_lf();
        
        bool no_output_come_code = info.no_output_come_code;
        bool no_output_come_code2 = info.no_output_come_code2;
        info.no_output_come_code = true;
        info.no_output_come_code2 = true;
        
        bool block = true;
        
        while(*info->p) {
            parse_sharp();
            
            if(block && *info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            char* head = info.p;
            int head_sline = info.sline;
            string buf = parse_word();
            
            parse_sharp();
            
            sNode*% node = top_level(buf, head, head_sline, info);
            parse_sharp();
            
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
            }
            parse_sharp();
            
            skip_spaces_and_lf();
            
            if(block && *info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        
        info->no_output_come_code = no_output_come_code;
        info->no_output_come_code2 = no_output_come_code2;
        
        return new sNothingNode(info) implements sNode;
    }
    else if(buf === "_Static_assert" || buf === "static_assert" || buf === "__STATIC_ASSERT") {
        expected_next_character('(');
        
        bool no_comma = info->no_comma;
        info->no_comma = true;
        sNode*% exp = expression();
        info->no_comma = no_comma;
        
        expected_next_character(',');
        
        sNode*% exp2 = expression();
        
        expected_next_character(')');
        
        return new sStaticAssert(exp, exp2, info) implements sNode;
    }
    else if(buf === "undef") {
        string word = parse_word();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        return new sUndefNode(word, info) implements sNode;
    }
    else if(buf === "if") {
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
        }
        string refrection_condtional = refrection_expression();
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
        }
        
        bool match_ = false;
        if(refrection_condtional === "true") {
            expected_next_character('{');
            transpile_toplevel(block:true);
            match_ = true;
        }
        else {
            skip_block();
        }
        
        parse_sharp();
        
        while(1) {
            if(parsecmp("elif")) {
                (void)parse_word();
                
                if(*info->p == '(') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                string refrection_condtional = refrection_expression();
                
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                if(!match_ && refrection_condtional === "true") {
                    expected_next_character('{');
                    transpile_toplevel(block:true);
                    match_ = true;
                }
                else {
                    skip_block();
                }
            }
            else {
                break;
            }
        }
        
        if(parsecmp("else")) {
            (void)parse_word();
            
            if(!match_) {
                expected_next_character('{');
                transpile_toplevel(block:true);
            }
            else {
                skip_block();
            }
        }
        
        return new sNothingNode(info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}
