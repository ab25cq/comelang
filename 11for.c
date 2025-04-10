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
        
        CVALUE*% conditional_value = null;
        if(expression_node) {
            bool without_semicolon = info.without_semicolon;
            info.without_semicolon = true;
            bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
            info.comma_instead_of_semicolon = true;
            node_compile(expression_node).elif {
                return false;
            }
            info.comma_instead_of_semicolon = comma_instead_of_semicolon;
            info.without_semicolon = without_semicolon;
            
            bool normal_if = true;
            if(existance_free_right_value_objects(info)) {
                normal_if = false;
            }
            
            if(normal_if) {
                conditional_value = get_value_from_stack(-1, info);
                add_come_code(info, "%s", conditional_value.c_value);
            }
            else {
                CVALUE*% conditional_value = get_value_from_stack(-1, info);
                transpile_conditional_with_free_right_object_value(conditional_value);
            }
            
            add_come_code(info, ";");
        }
        else {
            add_come_code(info, ";");
        }
        
        /// compile expression ///
        sNode* expression_node2 = self.mExpressionNode2;
    
        if(expression_node2) {
            bool without_semicolon = info.without_semicolon;
            info.without_semicolon = true;
            bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
            info.comma_instead_of_semicolon = true;
            node_compile(expression_node2).elif {
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
                
                add_come_code(info, "%s", conditional_value.c_value);
            }
            else {
                CVALUE*% conditional_value = get_value_from_stack(-1, info);
                transpile_conditional_with_free_right_object_value(conditional_value);
            }
            
            add_come_code(info, ";");
        }
        else {
            add_come_code(info, ";");
        }
        
        sNode* expression_node3 = self.mExpressionNode3;
        
        CVALUE*% conditional_value3;
        if(expression_node3) {
            bool without_semicolon = info.without_semicolon;
            bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
            info.comma_instead_of_semicolon = true;
            info.without_semicolon = true;
            node_compile(expression_node3).elif {
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
                add_come_code(info, "%s", conditional_value.c_value);
            }
            else {
                CVALUE*% conditional_value = get_value_from_stack(-1, info);
                transpile_conditional_with_free_right_object_value(conditional_value);
            }
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

class sForEachNode extends sNodeBase
{
    new(string iterator_name, sNode*% expression_node, sBlock* block, sInfo* info)
    {
        self.super();
    
        sNode*% self.mExpressionNode = clone expression_node;
        string self.iterator_name = iterator_name;
        sBlock*% self.mBlock = clone block;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sForEachNode");
    }
    
    bool compile(sInfo* info)
    {
        if(info.comma_instead_of_semicolon) {
            err_msg(info, "In conditional operator comelang can't use foreach statment");
            return true;
        }
        
        bool in_loop = info.in_loop;
        info.in_loop = true;
        
        sBlock* block = self.mBlock;
        
        sVarTable* lv_table = info->lv_table;
        sVarTable*% for_var_table = new sVarTable(global:false, parent:lv_table);
        info->lv_table = for_var_table;
        
        add_come_code(info, "for(");
        
        static int n = 0;
        ++n;
        string var_name = s"_foreach_var_name\{n}";
        
        sNode*% obj = self.mExpressionNode;
        
        sNode*% node = store_var(var_name, null@multiple_assign, null@multiple_declare, null@type, true@alloc, obj@right_value, info);
        
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
        info.comma_instead_of_semicolon = true;
        node_compile(node).elif {
            return false;
        }
        info.comma_instead_of_semicolon = comma_instead_of_semicolon;
        info.without_semicolon = without_semicolon;
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        add_come_code(info, "%s,", come_value.c_value);
        
        sNode*% node2 = create_load_var(var_name);
        
        var params = new list<tup: string, sNode*%>();
        
        params.add(((string)null, node2));
        
        sNode*% right_node = create_method_call("begin", node2, params, null@method_block, 0@method_block_sline, null@method_generics_types, false@guard_break, info);
        
        sNode*% node3 = store_var(self.iterator_name, null@multiple_assign, null@multiple_declare, null@type, true@alloc, right_node@right_value, info);
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
        info.comma_instead_of_semicolon = true;
        node_compile(node3).elif {
            return false;
        }
        info.comma_instead_of_semicolon = comma_instead_of_semicolon;
        info.without_semicolon = without_semicolon;
        
        CVALUE*% come_value2 = get_value_from_stack(-1, info);
        
        add_come_code(info, "%s;", come_value2.c_value);
        
        sNode*% conditional_node = create_method_call("end", node2, params, null@method_block, 0@method_block_sline, null@method_generics_types, false@guard_break, info);
        sNode*% conditional_node2 = reverse_node(conditional_node, info);
        
        bool without_semicolon = info.without_semicolon;
        info.without_semicolon = true;
        bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
        info.comma_instead_of_semicolon = true;
        node_compile(conditional_node2).elif {
            return false;
        }
        info.comma_instead_of_semicolon = comma_instead_of_semicolon;
        info.without_semicolon = without_semicolon;
        
        CVALUE*% come_value4 = get_value_from_stack(-1, info);
        
        add_come_code(info, "%s;", come_value4.c_value);
        
        sNode*% next_node = create_method_call("next", node2, params, null@method_block, 0@method_block_sline, null@method_generics_types, false@guard_break, info);
        
        sNode*% node4 = store_var(self.iterator_name, null@multiple_assign, null@multiple_declare, null@type, false@alloc, next_node@right_value, info);
        
        node_compile(node4).elif {
            return false;
        }
        
        CVALUE*% come_value5 = get_value_from_stack(-1, info);
        
        add_come_code(info, "%s", come_value5.c_value);
        
        add_come_code(info, "){\n");
    
        transpile_block(self.mBlock, null, null, info, false, true);
    
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
    else if(buf === "foreach") {
        expected_next_character('(');
        
        /// expression ///
        parse_sharp();
        
        string iterator_name = parse_word();
        
        expected_next_character(',');
        sNode*% expression_node = expression();
        
        expected_next_character(')');
        
        sBlock*% block = parse_block();
        
        return new sForEachNode(iterator_name, expression_node, block, info) implements sNode;
    }
    
    return inherit(buf, head,head_sline,info);
}
