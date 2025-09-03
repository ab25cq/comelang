#include "common.h"

class sForNode extends sNodeBase
{
    new(sNode*% expression_node, sNode*% expression_node2, sNode*% expression_node3, sBlock* block, sInfo* info)
    {
        self.super();
    
        sNode*% self.mExpressionNode;
        if(expression_node) {
            self.mExpressionNode = clone expression_node;
        }
        else {
            self.mExpressionNode = null;
        }
        sNode*% self.mExpressionNode2;
        if(expression_node2) {
            self.mExpressionNode2 = clone expression_node2;
        }
        else {
            self.mExpressionNode2 = null;
        }
        sNode*% self.mExpressionNode3;
        if(expression_node3) {
            self.mExpressionNode3 = clone expression_node3;
        }
        else {
            self.mExpressionNode3 = null;
        }
    
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
        return string("sForNode");
    }
    
    bool compile(sInfo* info)
    {
        if(info.comma_instead_of_semicolon) {
            err_msg(info, "In conditional operator comelang can't use for statment");
            return true;
        }
        
        bool in_loop = info.in_loop;
        info.in_loop = true;
        
        sBlock* block = self.mBlock;
        
        sVarTable* lv_table = info->lv_table;
        sVarTable*% for_var_table = new sVarTable(global:false, parent:lv_table);
        info->lv_table = for_var_table;
        
        add_come_code(info, "for(");
        
        /// compile expression ///
        sNode* expression_node = self.mExpressionNode;
        
        if(expression_node) {
            node_compile(expression_node).elif {
                return false;
            }
            
            bool normal_if = true;
            if(existance_free_right_value_objects(info)) {
                normal_if = false;
            }
            
            add_come_code(info, "({");
            
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            transpile_conditional_with_free_right_object_value(conditional_value);
            
            add_come_code(info, "});");
        }
        else {
            add_come_code(info, ";");
        }
        
        /// compile expression ///
        sNode* expression_node2 = self.mExpressionNode2;
    
        if(expression_node2) {
            add_come_code(info,"({");
            node_compile(expression_node2).elif {
                return false;
            }
            
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            transpile_conditional_with_free_right_object_value(conditional_value);
            
            add_come_code(info, "});");
        }
        else {
            add_come_code(info, ";");
        }
        
        sNode* expression_node3 = self.mExpressionNode3;
        
        if(expression_node3) {
            add_come_code(info, "({");
            
            node_compile(expression_node3).elif {
                return false;
            }
            
            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            transpile_conditional_with_free_right_object_value(conditional_value);
            add_come_code(info, "})");
        }
        
        add_come_code(info, "){\n");
    
        transpile_block(block, null, null, info, false, true);
    
        add_come_code(info, "}\n");
        
        free_objects(for_var_table, null, info);
        
        transpiler_clear_last_code(info);
        info->lv_table = lv_table;
        
        info.in_loop = in_loop;
    
        return true;
    }
};

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 11
{
    if(buf === "for") {
        expected_next_character('(');
        
        /// expression ///
        parse_sharp();
        sNode*% expression_node;
        if(*info->p == ';') {
            expression_node = null;
        }
        else {
            expression_node = expression();
        }
        parse_sharp();
        expected_next_character(';');
        parse_sharp();
        sNode*% expression_node2;
        if(*info->p == ';') {
            expression_node2 = null;
        }
        else {
            expression_node2 = expression();
        }
        parse_sharp();
        expected_next_character(';');
        parse_sharp();
        sNode*% expression_node3;
        if(*info->p == ')') {
            expression_node3 = null;
        }
        else {
            expression_node3 = expression();
        }
        parse_sharp();
        expected_next_character(')');
        parse_sharp();
        
        sBlock*% block = parse_block();
        
        return new sForNode(expression_node, expression_node2, expression_node3, block, info) implements sNode;
    }
    
    return inherit(buf, head,head_sline,info);
}
