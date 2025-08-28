#include "common.h"

bool operator_overload_fun_self(sType*% type, char* fun_name, sNode*% node, CVALUE* left_value, sInfo* info)
{
    sType*% generics_type = clone type;
    if(generics_type->mNoSolvedGenericsType) {
        generics_type = generics_type->mNoSolvedGenericsType;
    }
    
    if(type->mNoSolvedGenericsType) {
        type = type->mNoSolvedGenericsType;
    }
    sClass* klass = type->mClass;
    char* class_name = klass->mName;
    
    var fun_name2, operator_fun, generics_fun = get_method(fun_name, type, info);
    
    bool result = false;
    
    if(operator_fun) {
        sNode*% obj = node;
        list<tup: string, sNode*%>*% params =  new list<tup: string, sNode*%>();
        
        params.add((null, obj));
        
        sNode*% node = create_method_call(fun_name2, obj, params, null@method_block, 0@method_block_sline, null@method_generics_types, info);
        
        node_compile(node).if {
            result = true;
        }
    }
    
    return result;
}

class sRefferenceNode extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sRefferenceNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* value = self.value;
        
        if(!node_compile(value)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        if(left_value.c_value_without_cast_object_value) {
            come_value.c_value = xsprintf("&%s", left_value.c_value_without_cast_object_value);
        }
        else {
            come_value.c_value = xsprintf("&%s", left_value.c_value);
        }
        
        come_value.type = clone left_value.type;
        come_value.type->mPointerNum++;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sParenBlockNode extends sNodeBase
{
    new(list<sNode*%>*% paren_block, sInfo* info)
    {
        self.super();
        
        list<sNode*%>*% self.paren_block = paren_block;
    }
    
    string kind()
    {
        return string("sParenBlockNode");
    }
    
    bool compile(sInfo* info)
    {
        list<sNode*%>*% paren_block = self.paren_block;
        
        buffer*% buf = new buffer();
        
        buf.append_str("({");
        
        sType*% come_type = null;
        foreach(it, paren_block) {
            if(it.kind() === "sIfNode" || it.kind() === "sWhileNode" || it.kind() === "sDoWhileNode" || it.kind() === "sForNode" || it.kind() == "sSwitchNode") {
                add_come_code(info, buf.to_string());
                buf = null;
            }
            
            if(!node_compile(it)) {
                return false;
            }
            
            if(info.stack.length() > 0) {
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(buf) {
                    buf.append_str(come_value.c_value + "; ");
                }
                else {
                    add_come_code(info, come_value.c_value + "; ");
                }
                
                come_type = clone come_value.type;
                
                transpiler_clear_last_code(info);
            }
            else {
                if(buf) {
                    buf.append_str(info.module.mLastCode + "; ");
                    buf.append_str(info.module.mLastCode2 + "; ");
                    
                    transpiler_clear_last_code(info);
                }
                else {
                    add_last_code_to_source(info);
                }
            }
        }
        
        if(buf) {
            buf.append_str("})");
            
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = buf.to_string();
            come_value.type = come_type;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        else {
            add_come_code(info, "});");
        }
        
        return true;
    }
};

class sDerefferenceNode extends sNodeBase
{
    new(sNode*% value, bool quote, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
        bool self.mQuote = quote;
    }
    
    string kind()
    {
        return string("sDerefferenceNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% value = self.value;
        
        if(!node_compile(value)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        
        sType*% type = left_value.type;
        
        char* fun_name = "operator_derefference";
        
        bool calling_fun;
        if(self.mQuote) {
            calling_fun = false;
        }
        else {
            calling_fun = operator_overload_fun_self(type, fun_name, value, left_value, info);
        }
        
        if(!calling_fun) {
            CVALUE*% come_value = new CVALUE();
            
            come_value.c_value = xsprintf("*%s", left_value.c_value);
            come_value.type = clone left_value.type;
            come_value.type->mPointerNum--;
            come_value.var = null;
            
            add_come_last_code(info, "%s", come_value.c_value);
            
            info.stack.push_back(come_value);
        }
        
        return true;
    }
};

class sLogicalDenial extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sLogicalDenial");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("!%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sLogicalDenial2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sLogicalDenial");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("!!%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sReverseNode extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sReverseNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* value = self.value;
        
        if(!node_compile(value)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("!%s", left_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mPointerNum--;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sMinusNode2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sMinusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("-%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sPlusPlusNode2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sPlusPlusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("++%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sMinusMinusNode2 extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sMinusMinusNode2");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("--%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sNormalBlock extends sNodeBase
{
    new(sBlock* block, bool clang, bool comma, sInfo* info, bool if_result=false)
    {
        self.super();
        
        sBlock*% self.mBlock = clone block;
        bool self.clang = clang;
        bool self.comma = comma;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sNormalBlock");
    }
    
    bool compile(sInfo* info)
    {
        sBlock* block = self.mBlock;
        
        if(!self.comma) {
            add_come_code(info, "{\n");
        }
        
        bool come_c = gComeC;
        if(self.clang) { gComeC = true; }
        
        transpile_block(block, null, null, info, comma:self.comma);
        
        if(!self.comma) {
            add_come_code(info, "}\n");
        }
        
        gComeC = come_c;
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};


class sComplement extends sNodeBase
{
    new(sNode*% value, sInfo* info)
    {
        self.super();
        
        sNode*% self.value = value;
    }
    
    string kind()
    {
        return string("sComplement");
    }
    
    bool compile(sInfo* info)
    {
        if(!node_compile(self.value)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value2 = new CVALUE();
        
        come_value2.c_value = xsprintf("~%s", come_value.c_value);
        come_value2.type = clone come_value.type;
        come_value2.var = null;
        
        info.stack.push_back(come_value2);
        
        add_come_last_code(info, "%s", come_value2.c_value);
        
        return true;
    }
};

class sParenNode extends sNodeBase
{
    new(sNode* left, sInfo* info)
    {
        self.super();
        
        sNode*% self.mLeft = clone left;
    }
    
    string kind()
    {
        return string("sParenNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("(%s)", left_value.c_value);
        come_value.type = clone left_value.type;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
};

class sCastNode extends sNodeBase
{
    new(sType* type, sNode* left, sInfo* info)
    {
        self.super();
        
        sType*% self.mType = clone type;
        sNode*% self.mLeft = clone left;
    }
    
    string kind()
    {
        return string("sCastNode");
    }
    
    bool compile(sInfo* info)
    {
        sType* type = self.mType;
        sNode* left = self.mLeft;
        
        if(!node_compile(left)) {
            return false;
        }
        
        CVALUE*% left_value = get_value_from_stack(-1, info);
        
        sType*% type2 = solve_generics(clone type, info.generics_type, info);
        
        CVALUE*% come_value = new CVALUE();
        
        cast_type(type2, left_value.type, left_value);
        
        come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type2), left_value.c_value);
        come_value.type = clone type2;
        come_value.var = null;
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        return true;
    }
}

sNode*% parse_normal_block(bool clang=false, bool comma=false, sInfo* info=info, bool if_result=false)
{
    int sline_real = info.sline_real;
    info.sline_real = info.sline;
    sBlock*% block = parse_block();
    
    info.sline_real = sline_real;
    
    return new sNormalBlock(block, clang, comma, info, if_result:if_result) implements sNode;
}

sNode*% craete_logical_denial(sNode*% node, sInfo* info)
{
    return new sLogicalDenial(clone node, info) implements sNode;
}

sNode*% cast_node(sType*% type, sNode*% node, sInfo* info=info)
{
    return new sCastNode(type, node, info) implements sNode;
}

sNode*% reffence_node(sNode*% value, sInfo* info)
{
    return new sRefferenceNode(value, info) implements sNode;
}

sNode*% reverse_node(sNode*% value, sInfo* info)
{
    return new sReverseNode(value, info) implements sNode;
}

class sArrayInitializer extends sNodeBase
{
    new(string initializer, sInfo* info)
    {
        self.super();
       
        string self.initializer = clone initializer;
    }
    
    string kind()
    {
        return string("sArrayInitializer");
    }
    
    bool compile(sInfo* info)
    {
        var initializer = self.initializer;
        
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = initializer;
        come_value.type = new sType(s"void");
        come_value.type->mPointerNum++;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        return true;
    }
};


sNode*% pre_position_operator(sInfo* info=info)
{
    skip_spaces_and_lf();
    
    
    bool refference = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(*info->p == '&' && *(info->p+1) != '&') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '"') {
                refference = true;
            }
            else if(xisalpha(*info->p) || *info->p == '_') {
                refference = true;
            }
            else if(*info->p == '(' || *info->p == '*') {
                while(*info->p == '(' || *info->p == '*') {
                    info->p++
                    skip_spaces_and_lf();
                }
                
                if(xisalpha(*info->p) || *info->p == '_') {
                    refference = true;
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    parse_sharp();
    
    if(*info->p == '{') {
        if(info.array_initializer || info.struct_initializer) {
            buffer*% buf = new buffer();
            
            buf.append_char(*info->p);
            info->p++;
            
            bool squort = false;
            bool dquort = false;
            int nest = 1;
            while(1) {
                if(*info->p == '\0') {
                    err_msg(info, "unexpected source end in array initiailizer");
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
                    if(*info->p == '\n') {
                        info->sline++;
                    }
                    buf.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '{') {
                    nest++;
                    buf.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '}') {
                    nest--;
                    buf.append_char(*info->p);
                    info->p++;
                    
                    if(nest == 0) {
                        skip_spaces_and_lf();
                        break;
                    }
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
            return new sArrayInitializer(buf.to_string(), info) implements sNode;
        }
        else {
            return parse_normal_block();
        }
    }
    else if(*info->p == '!' && *(info->p+1) != '!' && *(info->p+1) != '{') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sLogicalDenial(node, info) implements sNode;
    }
    else if(*info->p == '!' && *(info->p+1) == '!') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sLogicalDenial2(node, info) implements sNode;
    }
    else if(*info->p == '-' && *(info->p+1) == '-') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sMinusMinusNode2(node, info) implements sNode;
    }
    else if(*info->p == '-' && !xisdigit(*(info->p+1))) {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sMinusNode2(node, info) implements sNode;
    }
    else if(*info->p == '+' && *(info->p+1) == '+') {
        info->p+=2;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sPlusPlusNode2(node, info) implements sNode;
    }
    else if(*info->p == '~') {
        info->p++;
        skip_spaces_and_lf();

        sNode*% node = expression_node();

        return new sComplement(node, info) implements sNode;
    }
    else if((*info->p == '\\' && *(info->p+1) == '*') || *info->p == '*') {
        bool quote;
        if(*info->p == '\\') {
            info->p += 2;
            skip_spaces_and_lf();
            quote = true;
        }
        else {
            info->p ++;
            skip_spaces_and_lf();
            quote = false;
        }
        
        bool no_assign = info.no_assign;
        info.no_assign = true;
        sNode*% value = expression_node();
        info.no_assign = no_assign;
        
        return new sDerefferenceNode(value, quote, info) implements sNode;
    }
    else if(*info->p == '&' && refference) {
        info->p ++;
        skip_spaces_and_lf();
        
        sNode*% value = expression_node();
        
        return new sRefferenceNode(value, info) implements sNode;
    }
    else if(*info->p == '!' && *(info->p+1) != '!' && *(info->p+1) != '{') {
        info->p ++;
        skip_spaces_and_lf();
        
        sNode*% value = expression_node();
        
        return new sReverseNode(value, info) implements sNode;
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf();
        
        /// backtrace ///
        bool cast_expression_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            parse_sharp();
            
            char* p2 = info.p;
            int sline2 = info.sline;
            
            string word = string("");
            if(xisalpha(*info->p) || *info->p == '_') {
                word = parse_word();
                if(is_type_name(word)) {
                    info.p = p2;
                    info.sline = sline2;
                    
                    parse_type();
                    
                    if(*info->p == ')') {
                        cast_expression_flag = true;
                    }
                }
            }
            
            parse_sharp();
            
            info.p = p;
            info.sline = sline;
        }
        
        /// backtrace ///
        bool tuple_expression_flag = false;
        bool named_tuple_expression_flag = false;
        if(!gComeC)
        {
            char* p = info.p;
            int sline = info.sline;
            
            parse_sharp();
            
            {
                char* p = info.p;
                int sline = info.sline;
                if(*info->p == '_' || xisalpha(*info->p)) {
                    parse_word();
                }
                
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces_and_lf();
                    named_tuple_expression_flag = true;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                }
            }
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            bool no_output_err = info.no_output_err;
            info.no_output_err = true;
            bool no_output_come_code = info.no_output_come_code;
            info.no_output_come_code = true;
            
            sNode*% node = expression();
            sNode*% node2 = node;
            
            parse_sharp();
            
            info.no_comma = no_comma;
            info.no_output_err = no_output_err;
            info.no_output_come_code = no_output_come_code;
            
            if(*info->p == ',') {
                tuple_expression_flag = true;
            }
            
            parse_sharp();
            
            info.p = p;
            info.sline = sline;
        }
        
        if(*info->p == '{') {
            info->p++;
            skip_spaces_and_lf();
            
            list<sNode*%>*% paren_block = new list<sNode*%>();
            
            while(true) {
                parse_sharp();
                
                sNode*% node2 = expression();
                
                parse_sharp();
                
                paren_block.add(node2);
                
                while(*info->p == ';') {
                    info->p++;
                    skip_spaces_and_lf();
                }
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf();
                    break;
                }
                else if(*info->p == '\0') {
                    err_msg(info, "invalid source end in paren block");
                    exit(0);
                }
            }
            
            expected_next_character(')');
            
            sNode*% node = new sParenBlockNode(paren_block, info) implements sNode;
            
            parse_sharp();
            
            return node;
        }
        else if(!gComeC && tuple_expression_flag) {
            parse_sharp();
            
            sNode*% node = parse_tuple(info, named_tuple_expression_flag);
            
            parse_sharp();
            
            return node;
        }
        else if(cast_expression_flag) {
            parse_sharp();
            var type, name, err = parse_type();
            
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            
            parse_sharp();
            expected_next_character(')');
            parse_sharp();
            
            sNode*% node = expression_node();
            
            return new sCastNode(type, node, info) implements sNode;
        }
        else {
            sNode*% node;
            bool no_assign = info.no_assign;
            info.no_assign = false;
            
            if(gComeC && info.in_fun_param) {
                bool no_comma = info.no_comma;
                info.no_comma = false;
                parse_sharp();
                node = expression();
                parse_sharp();
                info.no_comma = no_comma;
            }
            else {
                parse_sharp();
                node = expression();
                parse_sharp();
            }
            
            info.no_assign = no_assign;
            
            expected_next_character(')');
            parse_sharp();
            
            node = new sParenNode(node, info) implements sNode;
            
            return node;
        }
    }
    else {
        return (sNode*%)null;
    }
}

sNode*% expression_node(sInfo* info=info) version 98
{
    sNode*% node = pre_position_operator();
    
    if(node == null) {
        return inherit(info);
    }
    else {
        return node;
    }
}

