#include "common.h"

class sIfNode extends sNodeBase
{
    new(sNode*% expression_node, sBlock* if_block, list<sNode*%>* elif_expression_nodes, list<sBlock*%>* elif_blocks, int elif_num, sBlock* else_block, bool guard_, sInfo* info)
    {
        self.super();
    
        sNode*% self.mExpressionNode = clone expression_node;
        sBlock*% self.mIfBlock = clone if_block;
        list<sNode*%>*% self.mElifExpressionNodes = clone elif_expression_nodes;
        list<sBlock*%>*% self.mElifBlocks = clone elif_blocks;
        int self.mElifNum = elif_num;
        bool self.mGuard = guard_;
        
        sBlock*% self.mElseBlock;
        if(else_block) {
            self.mElseBlock = clone else_block;
        }
        else {
            self.mElseBlock = null;
        }
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sIfNode");
    }
    
    bool compile(sInfo* info)
    {
        bool existance_of_result_value = true;
        {
            if(!self.mIfBlock.mOmitSemicolon) {
                existance_of_result_value = false;
            }
            for(int i=0; i<self.mElifNum; i++) {
                if(!self.mElifBlocks[i].mOmitSemicolon) {
                    existance_of_result_value = false;
                }
            }
            if(self.mElseBlock && !self.mElseBlock.mOmitSemicolon) {
                existance_of_result_value = false;
            }
        }
        
        if(info.comma_instead_of_semicolon) {
            err_msg(info, "In conditional operator comelang can't use if statment");
        }
        
        sBlock* else_block = self.mElseBlock;
        int elif_num = self.mElifNum;
        bool guard_ = self.mGuard;
        
/*
        sVarTable* lv_table = info->lv_table;
        sVarTable*% for_var_table = new sVarTable(global:false, parent:lv_table);
        info->lv_table = for_var_table;
*/
        
        string if_result_var_name = info.if_result_var_name;
        if(existance_of_result_value) {
            sType*% if_result_type = new sType(s"void*");
            
            static int var_num = 0;
            info->if_result_var_name = xsprintf("__if_result__%d", var_num++);
            
            add_variable_to_table(info->if_result_var_name, clone if_result_type, info, false@function_param);
            
            sVar* var_ = get_variable_from_table(info.lv_table, info->if_result_var_name);
            add_come_code_at_function_head(info, "%s = (void*)0;\n", make_define_var(var_->mType, var_->mCValueName));
        }
        
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
        
        int sline = info.sline;
        char* sname = info.sname;
        
        add_come_code(info, "if(");
    
        bool comma_instead_of_semicolon_before = info.comma_instead_of_semicolon;
        info.comma_instead_of_semicolon = true;
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        node_compile(expression_node).elif {
            return false;
        }
        info.without_semicolon = without_semicolon;
        info.comma_instead_of_semicolon = comma_instead_of_semicolon_before;
    
        sBlock* if_block = self.mIfBlock;
        
        bool normal_if = true;
        if(existance_free_right_value_objects(info)) {
            normal_if = false;
        }
        
        if(normal_if) {
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            
            if(guard_) {
                sVar* var_ = conditional_value.var;
                
                if(var_) {
                    var_->mType->mGuardValue = false;
                }
            }
            
            add_come_code(info, "%s) {\n", conditional_value.c_value);
        }
        else {
            static int num_if_conditional = 0;
            add_come_code_at_function_head(info, "_Bool _if_conditional%d;\n", ++num_if_conditional);
            int num_if_conditional_stack = num_if_conditional;
            
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            
            if(guard_) {
                sVar* var_ = conditional_value.var;
                
                if(var_) {
                    var_->mType->mGuardValue = false;
                }
            }
            
            add_come_code(info, "(_if_conditional%d=(%s)),", num_if_conditional, conditional_value.c_value);
            
            free_right_value_objects(info, comma:true);
            add_come_code(info, "_if_conditional%d) {\n", num_if_conditional_stack);
        }
    
        transpile_block(if_block, null, null, info, if_result:existance_of_result_value);
        
        add_come_code(info, "}\n");
    
        //// elif ///
        if(elif_num > 0) {
            for(int i=0; i<elif_num; i++) {
                sNode* expression_node2 = self.mElifExpressionNodes[i];
    
                add_come_code(info, "else if(");
                
                bool comma_instead_of_semicolon_before = info.comma_instead_of_semicolon;
                info.comma_instead_of_semicolon = true;
                bool without_semicolon = info.without_semicolon;
                info.without_semicolon = true;
                node_compile(expression_node2).elif {
                    return false;
                }
                info.without_semicolon = without_semicolon;
                info.comma_instead_of_semicolon = comma_instead_of_semicolon_before;
                
                sBlock* elif_node_block = self.mElifBlocks[i];
                
        
                bool normal_if = true;
                if(existance_free_right_value_objects(info)) {
                    normal_if = false;
                }
                
                if(normal_if) {
                    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    
                    add_come_code(info, "%s) {\n", conditional_value.c_value);
                }
                else {
                    CVALUE*% conditional_value = get_value_from_stack(-1, info);
                    
                    static int num_elif_conditional = 0;
                    add_come_code_at_function_head(info, "_Bool _elif_conditional%d;\n", ++num_elif_conditional);
                    int num_elif_conditional_stack = num_elif_conditional;
        
                    add_come_code(info, "(_elif_conditional%d=(%s)),", num_elif_conditional, conditional_value.c_value);
                    free_right_value_objects(info, comma:true);
                    add_come_code(info, "_elif_conditional%d) {\n", num_elif_conditional_stack);
                }
                
                transpile_block(elif_node_block, null, null, info, if_result:existance_of_result_value);
                
    
                add_come_code(info, "}\n");
            }
        }
    
        if(else_block) {
            add_come_code(info, "else {\n");
    
            transpile_block(else_block, null, null, info, if_result:existance_of_result_value);
            
            add_come_code(info, "}\n");
        }
        
        transpiler_clear_last_code(info);
        
        if(existance_of_result_value) {
            sVar* var_ = get_variable_from_table(info.lv_table, info->if_result_var_name);
            
            assert(var_ != null);
            
            sNode*% result_node = create_load_var(info->if_result_var_name);
            result_node = cast_node(clone var_->mType, result_node);
            
            node_compile(result_node, info).elif {
                return false;
            }
            CVALUE*% come_value2 = get_value_from_stack(-1, info);
            
            come_value2->type = clone var_->mType;
            
            info.stack.push_back(come_value2);
        }
        info.if_result_var_name = if_result_var_name;
        
        return true;
    }
};

class sMatchNode extends sNodeBase
{
    new(sNode*% it_node, sNode*% match_node, sInfo* info)
    {
        self.super();
    
        sNode*% self.it_node = clone it_node;
        sNode*% self.match_node = clone match_node;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sMatch");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% it_node = self.it_node;
        sNode*% match_node = self.match_node;
        
        node_compile(it_node, info).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        add_come_code(info, "%s;\n", come_value.c_value);
        
        node_compile(match_node, info).elif {
            return false;
        }
        
        if(info->if_result_var_name) {
            sVar* var_ = get_variable_from_table(info->lv_table, info->if_result_var_name);
        
            assert(var_ != null);
        
            if(info->match_it_var == null) {
                info->match_it_var = new list<sVar*%>();
            }
            info->match_it_var.add(clone var_);
        }
        
        return true;
    }
};

class sIfMethodNode extends sNodeBase
{
    new(sNode*% it_node, sNode*% match_node, sInfo* info)
    {
        self.super();
    
        sNode*% self.it_node = clone it_node;
        sNode*% self.match_node = clone match_node;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sMatch");
    }
    
    bool compile(sInfo* info)
    {
        sNode*% it_node = self.it_node;
        sNode*% match_node = self.match_node;
        
        node_compile(it_node, info).elif {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        add_come_code(info, "%s;\n", come_value.c_value);
        
        node_compile(match_node, info).elif {
            return false;
        }
        
        if(info->if_result_var_name) {
            sVar* var_ = get_variable_from_table(info->lv_table, info->if_result_var_name);
        
            assert(var_ != null);
        
            if(info->match_it_var == null) {
                info->match_it_var = new list<sVar*%>();
            }
            info->match_it_var.add(clone var_);
        }
        
        return true;
    }
};

class sOrStatmentNode extends sNodeBase
{
    new(sNode*% expression_node, sBlock* if_block, sInfo* info)
    {
        self.super();
    
        sNode*% self.mExpressionNode = clone expression_node;
        sBlock*% self.mIfBlock = clone if_block;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sOrStatmentNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
    
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        node_compile(expression_node).elif {
            return false;
        }
        info.without_semicolon = without_semicolon;
        
    
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
    
        sBlock* if_block = self.mIfBlock;
        
        static int num_or_conditional = 0;
        add_come_code_at_function_head(info, "_Bool _or_conditional%d;\n", ++num_or_conditional);
        
        add_come_code(info, "if((_or_conditional%d=(%s)),", num_or_conditional, conditional_value.c_value);
        int num_or_conditional_stack = num_or_conditional;
        add_last_code_to_source_with_comma(info);
        free_right_value_objects(info, comma:true);
        add_come_code(info, "_or_conditional%d == 0) {\n", num_or_conditional_stack);
    
        transpile_block(if_block, null, null, info);
        
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
        
        return true;
    }
};

class sAndStatmentNode extends sNodeBase
{
    new(sNode*% expression_node, sBlock* if_block, sInfo* info)
    {
        self.super();
    
        sNode*% self.mExpressionNode = clone expression_node;
        sBlock*% self.mIfBlock = clone if_block;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sAndStatmentNode");
    }
    
    bool compile(sInfo* info)
    {
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
    
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        node_compile(expression_node).elif {
            return false;
        }
        info.without_semicolon = without_semicolon;
        
    
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
    
        sBlock* if_block = self.mIfBlock;
        
        static int num_and_conditional = 0;
        add_come_code_at_function_head(info, "_Bool _and_conditional%d;\n", ++num_and_conditional);
        
        add_come_code(info, "if((_and_conditional%d=(%s)),", num_and_conditional, conditional_value.c_value);
        int num_and_conditional_stack = num_and_conditional;
        add_last_code_to_source_with_comma(info);
        free_right_value_objects(info, comma:true);
        add_come_code(info, "_and_conditional%d != 0) {\n", num_and_conditional_stack);
    
        transpile_block(if_block, null, null, info);
        
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
        
        return true;
    }
};

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 8
{
    if(buf === "if") {
        string sname = clone info->sname;
        int sline = info->sline;
        int sline_real = info.sline_real;
        info.sline_real = info.sline;
        
        parse_sharp();
    
        expected_next_character('(');
    
        /// expression ///
        sNode*% expression_node = expression();
        
        expected_next_character(')');
        parse_sharp();
    
        sBlock*% if_block = parse_block();
        
        list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();
    
        list<sBlock*%>*% elif_blocks = new list<sBlock*%>();
    
        int elif_num = 0;
    
        sBlock*% else_block = null;
    
        while(1) {
            char* saved_p = info->p;
            int saved_sline = info->sline;
            parse_sharp();
            
            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf();
            }
    
            /// else ///
            if(!(xisalpha(*info->p) || *info->p == '_')) {
                break;
            }
            parse_sharp();
            string buf = parse_word();
            parse_sharp();
    
            if(buf === "else") {
                int sline_real = info.sline_real;
                info.sline_real = info.sline;
                if(parsecmp("if", info)) {
                    parse_sharp();
                    info->p+=strlen("if");
                    skip_spaces_and_lf();
                    parse_sharp();
    
                    expected_next_character('(');
    
                    /// expression ///
                    sNode*% expression_node = expression();
                    
                    elif_expression_nodes.push_back(expression_node);
    
                    expected_next_character(')');
                    parse_sharp();
    
                    
                    sBlock*% elif_block = parse_block();
                    
                    elif_blocks.push_back(elif_block);
    
                    elif_num++;
                }
                else {
                    else_block = parse_block();
                    break;
                }
                info.sline_real = sline_real;
            }
            else {
                info->p = saved_p;
                info->sline = saved_sline;
                break;
            }
        };
    
        sNode*% result = new sIfNode(expression_node, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode;
        info.sline_real = sline_real;
        
        return result;
    }
    
    return inherit(buf, head,head_sline, info);
}

sNode*% parse_or_statment(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    return new sOrStatmentNode(expression_node, if_block, info) implements sNode;
}

sNode*% parse_and_statment(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    return new sAndStatmentNode(expression_node, if_block, info) implements sNode;
}

sNode*% parse_match(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    expected_next_character('{');
    
    sNode*% it_node = store_var(s"Value", null@multiple_assign, null@multiple_declare, null@type, true@alloc, expression_node@right_value, info);
    
    expected_next_character('(');
    
    sNode*% conditional_value = expression();
    
    expected_next_character(')');
    
    parse_sharp();
    
    sBlock*% if_block = parse_block();
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();
    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();
    int elif_num = 0;
    sBlock*% else_block = null;
    
    while(true) {
        parse_sharp();
        if(strncmp(info->p, "else", strlen("else")) == 0) {
            info->p += strlen("else");
            skip_spaces_and_lf();
            
            else_block = parse_block();
        }
        else {
            expected_next_character('(');
            
            sNode*% conditional_value = expression();
            
            elif_expression_nodes.add(conditional_value);
            
            expected_next_character(')');
            
            parse_sharp();
            
            sBlock*% elif_block = parse_block();
            
            elif_blocks.add(elif_block);
            
            elif_num++;
        }
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    if(else_block == null) {
        else_block = new sBlock(info);
        else_block.mOmitSemicolon = true;
        
        else_block.mNodes.push_back(create_load_var("Value"));
    }
    
    return new sMatchNode(it_node, new sIfNode(conditional_value, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode, info) implements sNode;
}

sNode*% parse_if_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    sNode*% it_node = store_var(s"Value", null@multiple_assign, null@multiple_declare, null@type, true@alloc, expression_node@right_value, info);
    
    sNode*% conditional_node = create_load_var("Value");
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();

    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();

    int elif_num = 0;

    sBlock*% else_block = null;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;
        parse_sharp();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }

        /// else ///
        if(!(xisalpha(*info->p) || *info->p == '_')) {
            break;
        }
        parse_sharp();
        string buf = parse_word();
        parse_sharp();

        if(buf === "else") {
            if(parsecmp("if", info)) {
                parse_sharp();
                info->p+=strlen("if");
                skip_spaces_and_lf();
                parse_sharp();

                expected_next_character('(');

                /// expression ///
                sNode*% expression_node = expression();
                
                elif_expression_nodes.push_back(expression_node);

                expected_next_character(')');
                parse_sharp();

                
                sBlock*% elif_block = parse_block();
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };
    
    if(else_block == null) {
        else_block = new sBlock(info);
        else_block.mOmitSemicolon = true;
        
        else_block.mNodes.push_back(create_load_var("Value"));
    }

    sNode*% result = new sIfMethodNode(it_node, new sIfNode(conditional_node, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode, info) implements sNode;
    
    return result;
}

sNode*% parse_elif_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    sNode*% it_node = store_var(s"Value", null@multiple_assign, null@multiple_declare, null@type, true@alloc, expression_node@right_value, info);
    
    sNode*% conditional_node = create_load_var("Value");
    sNode*% conditional_node2 = craete_logical_denial(conditional_node, info);
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();

    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();

    int elif_num = 0;

    sBlock*% else_block = null;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;
        parse_sharp();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }

        /// else ///
        if(!(xisalpha(*info->p) || *info->p == '_')) {
            break;
        }
        parse_sharp();
        string buf = parse_word();
        parse_sharp();

        if(buf === "else") {
            if(parsecmp("if", info)) {
                parse_sharp();
                info->p+=strlen("if");
                skip_spaces_and_lf();
                parse_sharp();

                expected_next_character('(');

                /// expression ///
                sNode*% expression_node = expression();
                
                elif_expression_nodes.push_back(expression_node);

                expected_next_character(')');
                parse_sharp();

                
                sBlock*% elif_block = parse_block();
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };
    
    if(else_block == null) {
        else_block = new sBlock(info);
        else_block.mOmitSemicolon = true;
        
        else_block.mNodes.push_back(create_load_var("Value"));
    }

    sNode*% result = new sIfMethodNode(it_node, new sIfNode(conditional_node2, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode, info) implements sNode;
    
    return result;
}

sNode*% parse_less_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    sNode*% it_node = store_var(s"Value", null@multiple_assign, null@multiple_declare, null@type, true@alloc, expression_node@right_value, info);
    
    sNode*% conditional_node = create_load_var("Value");
    sNode*% conditional_node2 = create_less(conditional_node, create_int_node(0, info), info);
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();

    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();

    int elif_num = 0;

    sBlock*% else_block = null;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;
        parse_sharp();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }

        /// else ///
        if(!(xisalpha(*info->p) || *info->p == '_')) {
            break;
        }
        parse_sharp();
        string buf = parse_word();
        parse_sharp();

        if(buf === "else") {
            if(parsecmp("if", info)) {
                parse_sharp();
                info->p+=strlen("if");
                skip_spaces_and_lf();
                parse_sharp();

                expected_next_character('(');

                /// expression ///
                sNode*% expression_node = expression();
                
                elif_expression_nodes.push_back(expression_node);

                expected_next_character(')');
                parse_sharp();

                
                sBlock*% elif_block = parse_block();
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };
    
    if(else_block == null) {
        else_block = new sBlock(info);
        else_block.mOmitSemicolon = true;
        
        else_block.mNodes.push_back(create_load_var("Value"));
    }

    sNode*% result = new sIfMethodNode(it_node, new sIfNode(conditional_node2, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode, info) implements sNode;
    
    return result;
}

sNode*% parse_rescue_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    sNode*% it_node = store_var(s"Value", null@multiple_assign, null@multiple_declare, null@type, true@alloc, expression_node@right_value, info);
    sNode*% value_node = create_load_var("Value", info);
    
    sNode*% conditional_node = load_field(value_node, s"v2");
    sNode*% conditional_node2 = craete_logical_denial(conditional_node, info);
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();

    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();

    int elif_num = 0;

    sBlock*% else_block = null;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;
        parse_sharp();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }

        /// else ///
        if(!(xisalpha(*info->p) || *info->p == '_')) {
            break;
        }
        parse_sharp();
        string buf = parse_word();
        parse_sharp();

        if(buf === "else") {
            if(parsecmp("if", info)) {
                parse_sharp();
                info->p+=strlen("if");
                skip_spaces_and_lf();
                parse_sharp();

                expected_next_character('(');

                /// expression ///
                sNode*% expression_node = expression();
                
                elif_expression_nodes.push_back(expression_node);

                expected_next_character(')');
                parse_sharp();

                
                sBlock*% elif_block = parse_block();
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };
    
    if(else_block == null) {
        else_block = new sBlock(info);
        else_block.mOmitSemicolon = true;
        
        sNode*% node = load_field(value_node, s"v1");
        
        else_block.mNodes.push_back(node);
    }

    sNode*% result = new sIfMethodNode(it_node, new sIfNode(conditional_node2, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode, info) implements sNode;
    
    return result;
}

sNode*% parse_expect_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    sNode*% it_node = store_var(s"Value", null@multiple_assign, null@multiple_declare, null@type, true@alloc, expression_node@right_value, info);
    sNode*% value_node = create_load_var("Value", info);
    
    sNode*% conditional_node = load_field(value_node, s"v2");
    sNode*% conditional_node2 = craete_logical_denial(conditional_node, info);
    
    parse_sharp();
    
    buffer*% buf = xsprintf("{ puts(\"%s %d: exception\"); exit(39); 39 }\n", info->sname, info->sline).to_buffer();
    
    char* p = info.p;
    
    buffer*% source = info.source;
    char* head = info.head;
    char* p = info.p;
    int sline = info.sline;
    
    info.source = buf;
    info.head = info.source.to_string();
    info.p = info.head;
    info.sline = 0;

    sBlock*% if_block = parse_block();
    
    info.source = source;
    info.head = head;
    info.p = p;
    info.sline = sline;
    
    list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();

    list<sBlock*%>*% elif_blocks = new list<sBlock*%>();

    int elif_num = 0;

    sBlock*% else_block = null;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;
        parse_sharp();
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf();
        }

        /// else ///
        if(!(xisalpha(*info->p) || *info->p == '_')) {
            break;
        }
        parse_sharp();
        string buf = parse_word();
        parse_sharp();

        if(buf === "else") {
            if(parsecmp("if", info)) {
                parse_sharp();
                info->p+=strlen("if");
                skip_spaces_and_lf();
                parse_sharp();

                expected_next_character('(');

                /// expression ///
                sNode*% expression_node = expression();
                
                elif_expression_nodes.push_back(expression_node);

                expected_next_character(')');
                parse_sharp();

                
                sBlock*% elif_block = parse_block();
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };
    
    if(else_block == null) {
        else_block = new sBlock(info);
        else_block.mOmitSemicolon = true;
        
        sNode*% node = load_field(value_node, s"v1");
        
        else_block.mNodes.push_back(node);
    }

    sNode*% result = new sIfMethodNode(it_node, new sIfNode(conditional_node2, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode, info) implements sNode;
    
    return result;
}
