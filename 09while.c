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
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
        
        add_come_code(info, "while(");
    
        transpile_conditional_with_free_right_object_value(expression_node).elif {
            return false;
        }
        
        add_come_code(info, ") {\n");
    
        sBlock* block = self.mBlock;
    
        transpile_block(block, null, null, info, no_var_table:false, loop_block:true);
        
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
        
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
