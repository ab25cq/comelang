#include <comelang.h>

class sWhileNode extends sNodeBase
{
    sNode*% conditional_exp;
    sBlock*% block;
    
    new(sNode*% conditional_exp, sBlock*% block, sInfo* info=info)
    {
        self.conditional_exp = conditional_exp;
        self.block = block;
        
        self.sline = info->sline;
        self.sname = string(info->sname);
    }
    
    string kind()
    {
        return string("sWhileNode");
    }
    
    bool compile(sInfo* info)
    {
        if(!self.conditional_exp.compile(info)) {
            return false;
        }
        
        CVALUE*% come_value = clone get_value_from_stack();
        dec_stack_ptr(1);
        
        sType* conditional_type = come_value.type;
        
        if(conditional_type == null) {
            err_msg(info, "require conditional value type");
            return false;
        }
        
        check_assign_type(new sType("bool"), conditional_type, come_value);
        
        add_come_code(info, s"while \{come_value.c_value} do\n");
        
        compile_block(self.block);
        
        add_come_code(info, s"end\n");
        
        return true;
    }
};

sNode*% string_node(string buf, sInfo* info=info) version 3
{
    if(buf === "while") {
        expected_next_character('(');
        
        sNode*% conditional_exp = expression()??;
        
        if(conditional_exp == null) {
            err_msg(info, "require onditional value");
            exit(2);
        }
        
        expected_next_character(')');
        
        if(conditional_exp == null) {
            err_msg(info, "require conditional exp");
            exit(2);
        }
        
        sBlock*% block = parse_block();
        
        return new sWhileNode(conditional_exp, block) implements sNode;
    }
    else {
        return inherit(buf, info);
    }
}
