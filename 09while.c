#include "common.h"

class sWhileNode extends sNodeBase
{
    new(sNode*% expression_node, sBlock* block, sInfo* info)
    {
        self.super();
    
        sNode*% self.mExpressionNode = clone expression_node;
        sBlock*% self.mBlock = clone block;
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
        return string("sWhileNode");
    }
    
    bool compile(sInfo* info)
    {
        bool in_loop = info.in_loop;
        info.in_loop = true;
    
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
        
        add_come_code(info, "while(({");
    
        node_conditional_compile(expression_node).elif {
            return false;
        }
    
        sBlock* block = self.mBlock;
        
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
        transpile_conditional_with_free_right_object_value(conditional_value);
        
        add_come_code(info, "})) {\n");
    
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
