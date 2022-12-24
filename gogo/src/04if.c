#include <neo-c.h>
#include "common.h"

public {
    #define ELIF_NUM_MAX 64
}

private struct sIfNode
{
    int id;
    
    sNode* if_exp;
    sNodeBlock* if_block;
    
    list<sNode*>* elif_exps;
    list<sNodeBlock*>* elif_blocks;
    
    sNodeBlock*? else_block;
    
    int sline;
    char* sname;
};

private sIfNode* sIfNode*::initialize(sIfNode* self, sNode* if_exp, sNodeBlock* if_block, list<sNode*>* elif_exps, list<sNodeBlock*>* elif_blocks, sNodeBlock*? else_block, sInfo* info)
{
    self.id = gNodeID++;
    
    self.if_exp = if_exp;
    self.if_block = if_block;
    
    self.elif_exps = elif_exps;
    self.elif_blocks = elif_blocks;
    
    self.else_block = else_block;
    
    self.sname = info.sname;
    self.sline = info.sline;
    
    return self;
}

private unsigned int sIfNode*::id(sIfNode* self)
{
    return self.id;
}

private bool sIfNode*::compile(sIfNode* self, sInfo* info)
{
    int sline = self.sline;
    char* sname = self.sname; 
    
    sNode* if_exp = self.if_exp;
    sNodeBlock* if_block = self.if_block;
    
    list<sNode*>* elif_exps = self.elif_exps;
    list<sNodeBlock*>* elif_blocks = self.elif_blocks;
    
    const int elif_num = elif_exps.length();
    
    sNodeBlock*? else_block = self.else_block;

    /// compile expression ///
    if(!if_exp.compile->(info)) {
        return false;
    }

    sType* conditional_type = clone info->type;

    LVALUE conditional_value = *get_value_from_stack(info, -1);
    dec_stack_ptr(1, info);

    if(!type_identify_with_class_name(conditional_type, "bool")) {
        fprintf(stderr, "%s %d: This conditional type is not bool\n", sname, sline);
        return true;
    }
    
    LLVMBasicBlockRef cond_then_block = LLVMAppendBasicBlockInContext(gContext, gFunction, "cond_jump_then");

    LLVMBasicBlockRef cond_else_block = NULL;

    LLVMBasicBlockRef cond_elif_block[ELIF_NUM_MAX];
    LLVMBasicBlockRef cond_elif_then_block[ELIF_NUM_MAX];
    if(elif_num > 0) {
        int i;
        for(i=0; i<elif_num; i++) {
            char buf[128];
            snprintf(buf, 128, "cond_jump_elif%d", i);

            cond_elif_block[i] = LLVMAppendBasicBlockInContext(gContext, gFunction, buf);

            char buf2[128];
            snprintf(buf2, 128, "cond_jump_elif_then%d", i);

            cond_elif_then_block[i] = LLVMAppendBasicBlockInContext(gContext, gFunction, buf2);
        }
    }

    if(else_block) {
        cond_else_block = LLVMAppendBasicBlockInContext(gContext, gFunction, "cond_else_block");
    }
    LLVMBasicBlockRef cond_end_block = LLVMAppendBasicBlockInContext(gContext, gFunction, "cond_end");

    if(elif_num > 0) {
        LLVMBuildCondBr(gBuilder, conditional_value.value, cond_then_block, cond_elif_block[0]);
    }
    else if(else_block) {
        LLVMBuildCondBr(gBuilder, conditional_value.value, cond_then_block, cond_else_block);
    }
    else {
        LLVMBuildCondBr(gBuilder, conditional_value.value, cond_then_block, cond_end_block);
    }

    llvm_change_block(cond_then_block, info);

    if(!compile_block(if_block, info)) {
        return false;
    }

    if(!info->last_expression_is_return) {
        LLVMBuildBr(gBuilder, cond_end_block);
    }

    //// elif ///
    if(elif_num > 0) {
        int i;
        for(i=0; i<elif_num; i++) {
            llvm_change_block(cond_elif_block[i], info);

            if(!elif_exps[i].compile->(info)) {
                return false;
            }

            sType* conditional_type = clone info->type;

            LVALUE conditional_value = *get_value_from_stack(info, -1);
            dec_stack_ptr(1, info);

            if(!type_identify_with_class_name(conditional_type, "bool")) 
            {
                fprintf(stderr, "%s %d: This conditional type is not bool\n", sname, sline);
                return true;
            }

            if(i == elif_num-1) {
                if(else_block) {
                    LLVMBuildCondBr(gBuilder, conditional_value.value, cond_elif_then_block[i], cond_else_block);
                }
                else {
                    LLVMBuildCondBr(gBuilder, conditional_value.value, cond_elif_then_block[i], cond_end_block);
                }
            }
            else {
                LLVMBuildCondBr(gBuilder, conditional_value.value, cond_elif_then_block[i], cond_elif_block[i+1]);
            }

            llvm_change_block(cond_elif_then_block[i], info);

            if(!compile_block(elif_blocks[i], info))
            {
                return false;
            }

            if(!info->last_expression_is_return) {
                LLVMBuildBr(gBuilder, cond_end_block);
            }
        }
    }

    if(else_block != null) {
        llvm_change_block(cond_else_block, info);

        if(!compile_block(else_block!, info))
        {
            return false;
        }

        if(!info->last_expression_is_return) {
            LLVMBuildBr(gBuilder, cond_end_block);
        }
    }

    llvm_change_block(cond_end_block, info);

    info->type = create_node_type_with_class_name("void");

    info->last_expression_is_return = false;

    return true;
}

sNode*? word_expression(string word, sInfo* info) version 4
{
    if(word === "if") {
        sNode*? if_exp = expression(info);
        
        guard (if_exp) {
            fprintf(stderr, "%s %d: invalid if exp\n", info.sname, info.sline);
            return null;
        }
        
        auto if_block, err = parse_block(info);
        
        if(!err) {
            fprintf(stderr, "%s %d: invalid if block\n", info.sname, info.sline);
            return null;
        }
        
        list<sNode*>* elif_exps = new list<sNode*>();
        list<sNodeBlock*>* elif_blocks = new list<sNodeBlock*>();
        
        sNodeBlock*? else_block = null;
        
        while(memcmp(info.p, "else", strlen("else")) == 0) {
            (void)parse_word(info);
            
            if(memcmp(info.p, "if", strlen("if")) == 0) {
                (void)parse_word(info);
                
                sNode*? elif_exp = expression(info);
                
                if(elif_exp == null) {
                    fprintf(stderr, "%s %d: invalid if exp\n", info.sname, info.sline);
                    return null;
                }
                
                auto elif_block, err = parse_block(info);
                
                if(!err) {
                    fprintf(stderr, "%s %d: invalid elif block\n", info.sname, info.sline);
                    return null;
                }
                
                elif_exps.push_back(elif_exp);
                elif_blocks.push_back(elif_block);
            }
            else {
                bool err;
                else_block, err = parse_block(info);
                
                if(!err) {
                    fprintf(stderr, "%s %d: invalid else block\n", info.sname, info.sline);
                    return null;
                }
                
                break;
            }
        }
        
        return new sNode(new sIfNode(if_exp, if_block, elif_exps, elif_blocks, else_block, info))
    }
    
    return inherit(word, info);
}

