#include "common.h"

class sDoWhileNode extends sNodeBase
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
        return string("sDoWhileNode");
    }
    
    bool compile(sInfo* info)
    {
        sBlock* block = self.mBlock;
    
        add_come_code(info, "do {\n");
    
        transpile_block(block, null, null, info, no_var_table:false, loop_block:true);
        
        /// compile expression ///
        
        add_come_code(info, "} while(");
        
        sNode* expression_node = self.mExpressionNode;
    
        transpile_conditional_with_free_right_object_value(expression_node).elif {
            return false;
        }
        
        add_come_code(info, ");\n");
        
        transpiler_clear_last_code(info);
        
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
