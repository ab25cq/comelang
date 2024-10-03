#include "common.h"

class sWhileNode extends sNodeBase
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
        return string("sWhileNode");
    }
    
    bool compile(sInfo* info)
    {
        bool in_loop = info.in_loop;
        info.in_loop = true;
    
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
    
        info.without_semicolon = true;
        if(!node_compile(expression_node)) {
            return false;
        }
        info.without_semicolon = false;
    
        sBlock* block = self.mBlock;
        
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
            add_come_code(info, "while(%s) {\n", conditional_value.c_value);
        }
        else {
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            static int num_while_condtional = 0;
            add_come_code_at_function_head(info, "_Bool _while_condtional%d;\n", ++num_while_condtional);
            int num_while_conditional_stack = num_while_condtional;
            
            add_come_code(info, "while((_while_condtional%d=(%s)),", num_while_condtional, conditional_value.c_value);
            add_last_code_to_source_with_comma(info);
            
            free_right_value_objects(info, comma:true);
            add_come_code(info, "_while_condtional%d) {\n", num_while_conditional_stack);
        }
    
        transpile_block(block, null, null, info, false, true);
        
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
        
        info.in_loop = in_loop;
    
        return true;
    }
};

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 9
{
    if(buf === "while") {
        string sname = clone info->sname;
        int sline = info->sline;
    
        expected_next_character('(');
    
        /// expression ///
        sNode*% expression_node = expression();
        
        expected_next_character(')');
    
        sBlock*% block = parse_block();
    
        return new sWhileNode(expression_node, block, info) implements sNode;
    }
    
    return inherit(buf, head,head_sline, info);
}
