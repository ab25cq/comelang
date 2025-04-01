#include "common.h"

class sSwitchNode extends sNodeBase
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
        return string("sSwitchNode");
    }
    
    bool compile(sInfo* info)
    {
        if(info.comma_instead_of_semicolon) {
            err_msg(info, "In conditional operator comelang can't use switch statment");
        }
        
        sBlock* block = self.mBlock;
        
        /// compile expression ///
        add_come_code(info, "switch (");
        sNode* expression_node = self.mExpressionNode;
        bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
        info.comma_instead_of_semicolon = true;
    
        node_compile(expression_node).elif {
            return false;
        }
        
        info.comma_instead_of_semicolon = comma_instead_of_semicolon;
        
        CVALUE*% conditional_value = get_value_from_stack(-1, info);
        
        add_come_code(info, "%s) {\n", conditional_value.c_value);
    
        transpile_block(block, null, null, info, false, true);
    
        add_come_code(info, "}\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sCaseNode extends sNodeBase
{
    new(sNode*% node, sInfo* info)
    {
        self.super();
    
        sNode*% self.mNode = clone node;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sCaseNode");
    }
    
    bool compile(sInfo* info)
    {
        sNode* node = self.mNode;
        
        node_compile(node).elif {
            return false;
        }
        
        CVALUE*% label_value = get_value_from_stack(-1, info);
        
        add_come_code(info, "case %s:\n", label_value.c_value);
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sDefaultNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sDefaultNode");
    }
    
    bool compile(sInfo* info)
    {
        add_come_code(info, "default:\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sLabelNode extends sNodeBase
{
    new(string label, sInfo* info, bool semi_colon=false)
    {
        self.super();
        
        string self.label = label;
        bool self.semi_colon = semi_colon;
    }
    
    bool terminated()
    {
        return true;
    }
    
    string kind()
    {
        return string("sLabelNode");
    }
    
    bool compile(sInfo* info)
    {
        if(self.semi_colon) {
            add_come_code(info, s"\{self.label}: ;\n");
        }
        else {
            add_come_code(info, s"\{self.label}:\n");
        }
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sGotoNode extends sNodeBase
{
    new(string label, sInfo* info)
    {
        self.super();
        
        string self.label = label;
    }
    
    string kind()
    {
        return string("sGotoNode");
    }
    
    bool compile(sInfo* info)
    {
        add_come_code(info, s"goto \{self.label};\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sBreakNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sBreakNode");
    }
    
    bool compile(sInfo* info)
    {
        free_objects_on_break(info);
    
        add_come_code(info, "break;\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

class sContinueNode extends sNodeBase
{
    new(sInfo* info)
    {
        self.super();
    }
    
    string kind()
    {
        return string("sContinueNode");
    }
    
    bool compile(sInfo* info)
    {
        free_objects_on_break(info);
    
        add_come_code(info, "continue;\n");
        
        transpiler_clear_last_code(info);
    
        return true;
    }
};

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 12
{
    if(buf === "case") {
        bool no_label = info.no_label;
        info.no_label = true;
        sNode*% node = expression();
        info.no_label = no_label;
        expected_next_character(':');
        
        return new sCaseNode(node, info) implements sNode;
    }
    else if(buf === "default") {
        expected_next_character(':');
        
        return new sDefaultNode(info) implements sNode;
    }
    else if(buf === "break") {
        return new sBreakNode(info) implements sNode;
    }
    else if(buf === "continue") {
        return new sContinueNode(info) implements sNode;
    }
    else if(!info->no_label && *info->p == ':' && buf !== "tup") {
        info->p++;
        skip_spaces_and_lf();
        
        if(*info->p == ';') {
            return new sLabelNode(string(buf), info, true@semi_colon) implements sNode;
        }
        else {
            return new sLabelNode(string(buf), info, false@semi_colon) implements sNode;
        }
    }
    else if(buf === "goto") {
        string buf = parse_word();
        
        return new sGotoNode(buf, info) implements sNode;
    }
    else if(buf === "switch") {
        expected_next_character('(');
        
        /// expression ///
        sNode*% expression_node = expression();
        expected_next_character(')');
        
        sBlock*% block = parse_block();
    
        return new sSwitchNode(expression_node, block, info) implements sNode;
    }
    
    return inherit(buf, head ,head_sline, info);
}
