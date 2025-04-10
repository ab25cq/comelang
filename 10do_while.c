#include "common.h"

class sDoWhileNode extends sNodeBase
{
    new(sNode*% expression_node, sBlock* block, sInfo* info)
    {
        self.super();
    
        sNode*% self.mExpressionNode = clone expression_node;
        sBlock*% self.mBlock = clone block;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sDoWhileNode");
    }
    
    bool compile(sInfo* info)
    {
        if(info.comma_instead_of_semicolon) {
            err_msg(info, "In conditional operator comelang can't use do while statment");
            return true;
        }
        
        bool in_loop = info.in_loop;
        info.in_loop = true;
        
        sBlock* block = self.mBlock;
    
        add_come_code(info, "do {\n");
    
        transpile_block(block, null, null, info, false, true);
        
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
    
        bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
        info.comma_instead_of_semicolon = true;
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        node_compile(expression_node).elif {
            return false;
        }
        info.without_semicolon = without_semicolon;
        info.comma_instead_of_semicolon = comma_instead_of_semicolon;
        
        bool normal_if = true;
        if(existance_free_right_value_objects(info)) {
            normal_if = false;
        }
        
        if(normal_if) {
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            add_come_code(info, "} while(%s);\n", conditional_value.c_value);
        }
        else {
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            
            static int num_while_condtional = 0;
            add_come_code_at_function_head(info, "_Bool _do_while_condtional%d;\n", ++num_while_condtional);
            int num_while_conditional_stack = num_while_condtional;
        
            add_come_code(info, "} while((_do_while_condtional%d=(%s)),", num_while_conditional_stack, conditional_value.c_value);
            add_last_code_to_source_with_comma(info);
            free_right_value_objects(info, comma:true);
            add_come_code(info, "_do_while_condtional%d);\n", num_while_conditional_stack);
        }
        
        transpiler_clear_last_code(info);
        
        info.in_loop = in_loop;
    
        return true;
    }
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 10
{
    if(buf === "do") {
        string sname = clone info->sname;
        int sline = info->sline;
    
        sBlock*% block = parse_block();
        
        string buf2 = parse_word();
        
        if(buf2 !== "while") {
            err_msg(info, "require while");
            exit(2);
        }
    
        expected_next_character('(');
    
        /// expression ///
        sNode*% expression_node = expression();
        
        expected_next_character(')');
    
        return new sDoWhileNode(expression_node, block, info) implements sNode;
    }
    
    return inherit(buf, head,head_sline, info);
}
