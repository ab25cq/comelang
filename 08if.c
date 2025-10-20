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
    
    bool no_mutex() {
        return true;
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
        bool existance_of_result_value = false;
        
        sBlock* else_block = self.mElseBlock;
        int elif_num = self.mElifNum;
        bool guard_ = self.mGuard;
        
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
        
        int sline = info.sline;
        char* sname = info.sname;
        
        add_come_code(info, "if(({");
        
        node_conditional_compile(expression_node).elif {
            return false;
        }
        
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
        transpile_conditional_with_free_right_object_value(conditional_value);
        
        add_come_code(info, "})) {\n");
    
        sBlock* if_block = self.mIfBlock;
    
        transpile_block(if_block, null, null, info, if_result:existance_of_result_value);
        
        add_come_code(info, "}\n");
    
        //// elif ///
        if(elif_num > 0) {
            for(int i=0; i<elif_num; i++) {
                sNode* expression_node2 = self.mElifExpressionNodes[i];
    
                add_come_code(info, "else if(({");
                
                node_conditional_compile(expression_node2).elif {
                    return false;
                }
                
                CVALUE*% conditional_value = get_value_from_stack(-1, info);
                transpile_conditional_with_free_right_object_value(conditional_value);
                
                add_come_code(info, "})) {\n");
                
                sBlock* elif_node_block = self.mElifBlocks[i];
                
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
    
    bool no_mutex() {
        return true;
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
    
    bool no_mutex() {
        return true;
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
    
    bool no_mutex() {
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
        
        add_come_code(info, "if(!({");
    
        node_conditional_compile(expression_node).elif {
            return false;
        }
    
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
        transpile_conditional_with_free_right_object_value(conditional_value);
        
        add_come_code(info, "})) {\n");
        sBlock* if_block = self.mIfBlock;
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
    
    bool no_mutex() {
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
        
        add_come_code(info, "if(({");
    
        node_conditional_compile(expression_node).elif {
            return false;
        }
        
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
        transpile_conditional_with_free_right_object_value(conditional_value);
        
        add_come_code(info, "})) {\n");
    
        sBlock* if_block = self.mIfBlock;
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
        
        /*
        if(if_block.mOmitSemicolon) {
            err_msg(info, "no omit semicolon");
            exit(1);
        }
        */
        
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
                    /*
                    if(elif_block.mOmitSemicolon) {
                        err_msg(info, "no omit semicolon");
                        exit(1);
                    }
                    */
                    
                    elif_blocks.push_back(elif_block);
    
                    elif_num++;
                }
                else {
                    else_block = parse_block();
                    /*
                    if(else_block.mOmitSemicolon) {
                        err_msg(info, "no omit semicolon");
                        exit(1);
                    }
                    */
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
    /*
    if(if_block.mOmitSemicolon) {
        err_msg(info, "no omit semicolon");
        exit(1);
    }
    */
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
            /*
            if(else_block.mOmitSemicolon) {
                err_msg(info, "no omit semicolon");
                exit(1);
            }
            */
        }
        else {
            expected_next_character('(');
            
            sNode*% conditional_value = expression();
            
            elif_expression_nodes.add(conditional_value);
            
            expected_next_character(')');
            
            parse_sharp();
            
            sBlock*% elif_block = parse_block();
            /*
            if(elif_block.mOmitSemicolon) {
                err_msg(info, "no omit semicolon");
                exit(1);
            }
            */
            
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
        else_block = new sBlock();
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
    /*
    if(if_block.mOmitSemicolon) {
        err_msg(info, "no omit semicolon");
        exit(1);
    }
    */
    
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
                /*
                if(elif_block.mOmitSemicolon) {
                    err_msg(info, "no omit semicolon");
                    exit(1);
                }
                */
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                /*
                if(else_block.mOmitSemicolon) {
                    err_msg(info, "no omit semicolon");
                    exit(1);
                }
                */
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
        else_block = new sBlock();
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
    /*
    if(if_block.mOmitSemicolon) {
        err_msg(info, "no omit semicolon");
        exit(1);
    }
    */
    
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
                /*
                if(elif_block.mOmitSemicolon) {
                    err_msg(info, "no omit semicolon");
                    exit(1);
                }
                */
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                /*
                if(else_block.mOmitSemicolon) {
                    err_msg(info, "no omit semicolon");
                    exit(1);
                }
                */
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
        else_block = new sBlock();
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
    sNode*% conditional_node2 = create_less(conditional_node, create_int_node(0.to_string(), info), info);
    
    parse_sharp();

    sBlock*% if_block = parse_block();
    /*
    if(if_block.mOmitSemicolon) {
        err_msg(info, "no omit semicolon");
        exit(1);
    }
    */
    
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
                /*
                if(elif_block.mOmitSemicolon) {
                    err_msg(info, "no omit semicolon");
                    exit(1);
                }
                */
                
                elif_blocks.push_back(elif_block);

                elif_num++;
            }
            else {
                else_block = parse_block();
                /*
                if(else_block.mOmitSemicolon) {
                    err_msg(info, "no omit semicolon");
                    exit(1);
                }
                */
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
        else_block = new sBlock();
        else_block.mOmitSemicolon = true;
        
        else_block.mNodes.push_back(create_load_var("Value"));
    }

    sNode*% result = new sIfMethodNode(it_node, new sIfNode(conditional_node2, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode, info) implements sNode;
    
    return result;
}



