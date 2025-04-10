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
        if(info.comma_instead_of_semicolon) {
            err_msg(info, "In conditional operator comelang can't use while statment");
            return true;
        }
        
        bool in_loop = info.in_loop;
        info.in_loop = true;
    
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
        
        add_come_code(info, "while(");
    
        bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
        info.comma_instead_of_semicolon = true;
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        node_compile(expression_node).elif {
            return false;
        }
        info.without_semicolon = without_semicolon;
        info.comma_instead_of_semicolon = comma_instead_of_semicolon;
    
        sBlock* block = self.mBlock;
        
        bool normal_if = true;
        if(existance_free_right_value_objects(info)) {
            normal_if = false;
        }
        
        if(normal_if) {
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            add_come_code(info, "%s", conditional_value.c_value);
        }
        else {
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            transpile_conditional_with_free_right_object_value(conditional_value);
        }
        add_come_code(info, ") {\n");
    
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
