#include "common.h"

struct sForNode
{
  sNode*% mExpressionNode;
  sNode*% mExpressionNode2;
  sNode*% mExpressionNode3;
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sForNode*% sForNode*::initialize(sForNode*% self, sNode*%? expression_node, sNode*%? expression_node2, sNode*%? expression_node3, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    if(expression_node) {
        self.mExpressionNode = clone expression_node;
    }
    else {
        self.mExpressionNode = null;
    }
    if(expression_node2) {
        self.mExpressionNode2 = clone expression_node2;
    }
    else {
        self.mExpressionNode2 = null;
    }
    if(expression_node3) {
        self.mExpressionNode3 = clone expression_node3;
    }
    else {
        self.mExpressionNode3 = null;
    }
    self.mBlock = clone block;

    return self;
}

bool sForNode*::terminated()
{
    return true;
}

bool sForNode*::compile(sForNode* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    sVarTable* lv_table = info->lv_table;
    sVarTable*% for_var_table = new sVarTable(global:false, parent:lv_table);
    info->lv_table = for_var_table;
    
    add_come_code(info, "for(\n");
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;
    
    CVALUE*% conditional_value = null;
    if(expression_node) {
        if(!expression_node.compile->(info)) {
            return false;
        }
        add_last_code_to_source_without_semicolon(info);
        add_come_code(info, ",");
        
        conditional_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
    
        free_right_value_objects(info, comma:true);
        
        add_come_code(info, "0;");
    }
    else {
        add_come_code(info, ";");
    }
    
    /// compile expression ///
    sNode* expression_node2 = self.mExpressionNode2;

    CVALUE*% conditional_value2 = null;
    if(expression_node2) {
        if(!expression_node2.compile->(info)) {
            return false;
        }
        
        static int num_for_condtionalA = 0;
        add_come_code_at_function_head(info, "_Bool _for_condtionalA%d;\n", ++num_for_condtionalA);
        
        add_come_code(info, "_for_condtionalA%d=", num_for_condtionalA);
        
        add_last_code_to_source_without_semicolon(info);
        add_come_code(info, ",");
        
        conditional_value2 = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
    
        free_right_value_objects(info, comma:true);
        
        add_come_code(info, "_for_condtionalA%d;", num_for_condtionalA);
    }
    else {
        add_come_code(info, ";");
    }
    
    sNode* expression_node3 = self.mExpressionNode3;
    
    CVALUE*% conditional_value3;
    if(expression_node3) {
        if(!expression_node3.compile->(info)) {
            return false;
        }
        
        add_last_code_to_source_without_semicolon(info);
        add_come_code(info, ",");
        
        CVALUE*% conditional_value3 = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
    
        free_right_value_objects(info, comma:true);
        
        add_come_code(info, "0");
    }
    
    add_come_code(info, "){\n");

    transpile_block(block, null, null, info);

    add_come_code(info, "}\n");
    
    free_objects(for_var_table, null, info);
    
    transpiler_clear_last_code(info);
    info->lv_table = lv_table;

    return true;
}

int sForNode*::sline(sForNode* self, sInfo* info)
{
    return self.sline;
}

string sForNode*::sname(sForNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 11
{
    if(buf === "for") {
        expected_next_character('(', info);
        
        /// expression ///
        parse_sharp(info);
        sNode*% expression_node;
        if(*info->p == ';') {
            expression_node = null;
        }
        else {
            expression_node = expression(info);
        }
        parse_sharp(info);
        expected_next_character(';', info);
        parse_sharp(info);
        sNode*% expression_node2;
        if(*info->p == ';') {
            expression_node2 = null;
        }
        else {
            expression_node2 = expression(info);
        }
        parse_sharp(info);
        expected_next_character(';', info);
        parse_sharp(info);
        sNode*% expression_node3;
        if(*info->p == ')') {
            expression_node3 = null;
        }
        else {
            expression_node3 = expression(info);
        }
        parse_sharp(info);
        expected_next_character(')', info);
        parse_sharp(info);
        
        sBlock*% block = parse_block(info);
        
        return new sNode(new sForNode(expression_node, expression_node2, expression_node3, block, info));
    }
    
    return inherit(buf, head,head_sline,info);
}
