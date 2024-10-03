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
        sBlock* else_block = self.mElseBlock;
        int elif_num = self.mElifNum;
        bool guard_ = self.mGuard;
        
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
        
        int sline = info.sline;
        char* sname = info.sname;
        
        info.writing_source_file_position = true;
    
        info.without_semicolon = true;
        if(!node_compile(expression_node)) {
            return false;
        }
        info.without_semicolon = false;
    
        sBlock* if_block = self.mIfBlock;
        
        bool normal_if = true;
/*
        if(info.module.mLastCode || info.module.mLastCode2 || info.module.mLastCode3) {
            normal_if = false;
        }
*/
        if(existance_free_right_value_objects(info)) {
            normal_if = false;
        }
        
        if(normal_if) {
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            if(guard_) {
                sVar* var_ = conditional_value.var;
                
                if(var_) {
                    var_->mType->mGuardValue = false;
                }
            }
            
            add_come_code(info, "if(%s) {\n", conditional_value.c_value);
        }
        else {
            static int num_if_conditional = 0;
            add_come_code_at_function_head(info, "_Bool _if_conditional%d;\n", ++num_if_conditional);
            int num_if_conditional_stack = num_if_conditional;
            
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            if(guard_) {
                sVar* var_ = conditional_value.var;
                
                if(var_) {
                    var_->mType->mGuardValue = false;
                }
            }
            
            add_come_code(info, "if((_if_conditional%d=(%s)),", num_if_conditional, conditional_value.c_value);
            add_last_code_to_source_with_comma(info);
            
            free_right_value_objects(info, comma:true);
            add_come_code(info, "_if_conditional%d) {\n", num_if_conditional_stack);
        }
    
        transpile_block(if_block, null, null, info);
        
        add_come_code(info, "}\n");
    
        //// elif ///
        if(elif_num > 0) {
            for(int i=0; i<elif_num; i++) {
                sNode* expression_node2 = self.mElifExpressionNodes[i];
    
                info.writing_source_file_position = true;
                info.without_semicolon = true;
                if(!node_compile(expression_node2)) {
                    return false;
                }
                info.without_semicolon = false;
                sBlock* elif_node_block = self.mElifBlocks[i];
                
        
                bool normal_if = true;
/*
                if(info.module.mLastCode || info.module.mLastCode2 || info.module.mLastCode3) {
                    normal_if = false;
                }
*/
                if(existance_free_right_value_objects(info)) {
                    normal_if = false;
                }
                
                if(normal_if) {
                    CVALUE*% conditional_value = get_value_from_stack(-1, info);
                    dec_stack_ptr(1, info);
    
                    add_come_code(info, "else if(%s) {\n", conditional_value.c_value);
                }
                else {
                    CVALUE*% conditional_value = get_value_from_stack(-1, info);
                    dec_stack_ptr(1, info);
                    
                    static int num_elif_conditional = 0;
                    add_come_code_at_function_head(info, "_Bool _elif_conditional%d;\n", ++num_elif_conditional);
                    int num_elif_conditional_stack = num_elif_conditional;
        
                    add_come_code(info, "else if((_elif_conditional%d=(%s)),", num_elif_conditional, conditional_value.c_value);
                    add_last_code_to_source_with_comma(info);
                    free_right_value_objects(info, comma:true);
                    add_come_code(info, "_elif_conditional%d) {\n", num_elif_conditional_stack);
                }
                
                transpile_block(elif_node_block, null, null, info);
    
                add_come_code(info, "}\n");
            }
        }
    
        if(else_block) {
            add_come_code(info, "else {\n");
    
            transpile_block(else_block, null, null, info);
            
            add_come_code(info, "}\n");
        }
        
        transpiler_clear_last_code(info);
    
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
    
        info.without_semicolon = true;
        if(!node_compile(expression_node)) {
            return false;
        }
        info.without_semicolon = false;
        
    
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
    
        sBlock* if_block = self.mIfBlock;
        
        static int num_or_conditional = 0;
        add_come_code_at_function_head(info, "_Bool _or_conditional%d;\n", ++num_or_conditional);
        
        add_come_code(info, "if((_or_conditional%d=(%s)),", num_or_conditional, conditional_value.c_value);
        int num_or_conditional_stack = num_or_conditional;
        add_last_code_to_source_with_comma(info);
        free_right_value_objects(info, comma:true);
        add_come_code(info, "_or_conditional%d != 0) {\n", num_or_conditional_stack);
    
        transpile_block(if_block, null, null, info);
        
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
        
    //    info.stack.push_back(conditional_value);
    //    add_come_last_code(info, "%s;\n", conditional_value.c_value);
    
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
    
        info.without_semicolon = true;
        if(!node_compile(expression_node)) {
            return false;
        }
        info.without_semicolon = false;
        
    
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
    
        sBlock* if_block = self.mIfBlock;
        
        static int num_and_conditional = 0;
        add_come_code_at_function_head(info, "_Bool _and_conditional%d;\n", ++num_and_conditional);
        
        add_come_code(info, "if((_and_conditional%d=(%s)),", num_and_conditional, conditional_value.c_value);
        int num_and_conditional_stack = num_and_conditional;
        add_last_code_to_source_with_comma(info);
        free_right_value_objects(info, comma:true);
        add_come_code(info, "_and_conditional%d == 0) {\n", num_and_conditional_stack);
    
        transpile_block(if_block, null, null, info);
        
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
        
    //    info.stack.push_back(conditional_value);
    //    add_come_last_code(info, "%s;\n", conditional_value.c_value);
        
        return true;
    }
};

sNode*% parse_if_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
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
        if(!xisalpha(*info->p)) {
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

    sNode*% result = new sIfNode(expression_node, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode;
    
    return result;
}

sNode*% parse_elif_method_call(sNode*% expression_node, sInfo* info)
{
    string sname = clone info->sname;
    int sline = info->sline;
    
    parse_sharp();
    
    sNode*% expression_node2 = craete_logical_denial(expression_node, info);

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
        if(!xisalpha(*info->p)) {
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

    sNode*% result = new sIfNode(expression_node2, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode;
    
    return result;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 8
{
    if(buf === "if") {
        string sname = clone info->sname;
        int sline = info->sline;
        
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
            if(!xisalpha(*info->p)) {
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
    
        sNode*% result = new sIfNode(expression_node, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, false@guard, info) implements sNode;
        
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
