#include "common.h"

extern int parse_cmp(char* p, char* str);

BOOL parse_block_easy(ALLOC sNodeBlock** node_block, BOOL extern_c_lang, BOOL result_type_is_void, BOOL function_body, sParserInfo* info)
{
    BOOL single_expression = FALSE;
    if(*info->p == '{') {
        info->p++;
    }
    else {
        single_expression = TRUE;
    }
    

    sVarTable* old_table = info->lv_table;

    *node_block = ALLOC sNodeBlock_alloc();

    info->lv_table = init_block_vtable(old_table, extern_c_lang);

    if(!parse_block(*node_block, extern_c_lang, single_expression, result_type_is_void, FALSE, function_body, info)) {
        sNodeBlock_free(*node_block);
        return FALSE;
    }

    if(!single_expression) {
        if(gNCType) {
            if(*info->p != '\0') {
                expect_next_character_with_one_forward("}", info);
            }
        }
        else {
            expect_next_character_with_one_forward("}", info);
        }
    }

    info->lv_table = old_table;

    return TRUE;
}

BOOL parse_block(sNodeBlock* node_block, BOOL extern_c_lang, BOOL single_expression, BOOL result_type_is_void, BOOL return_self, BOOL function_body, sParserInfo* info)
{
    BOOL has_result = FALSE;
    info->change_sline = FALSE;
    node_block->mLVTable = info->lv_table;

    xstrncpy(node_block->mSName, info->sname, PATH_MAX);
    node_block->mSLine = info->sline;

    skip_spaces_and_lf(info);

    node_block->mExternCLang = extern_c_lang;

    if(!extern_c_lang) {
        info->mBlockLevel++;
    }

    char* source_head = info->p;

    if(single_expression) {
        while(TRUE) {
            if(parse_cmp(info->p, "__extension__") == 0)
            {
                info->p += 13;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
            else {
                break;
            }
        }

        if(*info->p == '\0') {
            parser_err_msg(info, "require } before the source end");
            return TRUE;
        }

        unsigned int node = 0;

        skip_spaces_and_lf(info);

        int sline = info->sline;
        char sname[PATH_MAX];
        xstrncpy(sname, info->sname, PATH_MAX);

        while(TRUE) {
            if(parse_cmp(info->p, "__extension__") == 0)
            {
                info->p += 13;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
            else {
                break;
            }
        }

        if(*info->p == ';') {
        }
        else {
            if(!expression(&node, TRUE, info)) {
                if(!extern_c_lang) {
                    info->mBlockLevel--;
                }
                return FALSE;
            }

            if(node == 0) {
                parser_err_msg(info, "require an expression(3)");
            }

            if(info->err_num == 0) {
                append_node_to_node_block(node_block, node);
            }

            if(info->change_sline) {
                info->change_sline = FALSE;

                gNodes[node].mLine = info->sline;
                xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
            }
        }

        while(TRUE) {
            if(parse_cmp(info->p, "__extension__") == 0)
            {
                info->p += 13;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
            else {
                break;
            }
        }

        while(*info->p == ';') 
        {
            info->p++;
            skip_spaces_and_lf(info);
        }
    }
    else {
        while(1) {
            while(TRUE) {
                if(parse_cmp(info->p, "__extension__") == 0)
                {
                    info->p += 13;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            if(*info->p == '}') {
                break;
            }
            else if(*info->p == '\0') {
                if(gNCType) {
                    node_block->mTerminated = TRUE;
                    break;
                }
                parser_err_msg(info, "require } before the source end");
                return TRUE;
            }

            unsigned int node = 0;

            skip_spaces_and_lf(info);

            int sline = info->sline;
            char sname[PATH_MAX];
            xstrncpy(sname, info->sname, PATH_MAX);

            while(TRUE) {
                if(parse_cmp(info->p, "__extension__") == 0)
                {
                    info->p += 13;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }
            
            if(!expression(&node, TRUE, info)) {
                if(!extern_c_lang) {
                    info->mBlockLevel--;
                }
                return FALSE;
            }

            if(node == 0) {
                char buf[512];
                snprintf(buf, 512, "require an expression(4) (%c)", *info->p);
                parser_err_msg(info, buf);
            }

            if(info->err_num == 0) {
                append_node_to_node_block(node_block, node);
            }

            while(TRUE) {
                if(parse_cmp(info->p, "__extension__") == 0)
                {
                    info->p += 13;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            if(info->change_sline) {
                info->change_sline = FALSE;

                gNodes[node].mLine = info->sline;
                xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
            }

            if(*info->p == ';') 
            {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(gNodes[node].mNodeType == kNodeTypeIf || gNodes[node].mNodeType == kNodeTypeWhile || gNodes[node].mNodeType == kNodeTypeFor || gNodes[node].mNodeType == kNodeTypeSwitch) 
            {
                skip_spaces_and_lf(info);
            }

            if(*info->p == '}') {
                if(return_self) {
                    sParserInfo info2;
                    
                    info2 = *info;
                    
                    info2.p = "; return self; ";
    
                    unsigned int node;
                    if(!expression(&node, TRUE, &info2)) {
                        return FALSE;
                    }
                    
                    if(info->err_num == 0) {
                        append_node_to_node_block(node_block, node);
                    }
                }
                break;
            }
            else if(*info->p == '\0') {
                if(gNCType) {
                    node_block->mTerminated = TRUE;
                    break;
                }
                parser_err_msg(info, "require } before the source end");
                return TRUE;
            }
            
            while(*info->p == ';') 
            {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }

    char* source_end = info->p;

    sBuf_append(&(node_block)->mSource, source_head, source_end - source_head);
    
    if(return_self) {
        sBuf_append(&(node_block)->mSource, "\nreturn self;\n", strlen("\nreturn self;\n"));
    }
    
    sBuf_append_char(&(node_block)->mSource, '\0');
    
    if(node_block->mNumNodes > 0) {
        unsigned int last_node = node_block->mNodes[node_block->mNumNodes-1];
        
        if(!result_type_is_void) {
            if(gNodes[last_node].mNodeType != kNodeTypeReturn 
                && gNodes[last_node].mNodeType != kNodeTypeIf 
                && gNodes[last_node].mNodeType != kNodeTypeWhile 
                && gNodes[last_node].mNodeType != kNodeTypeFor 
                && gNodes[last_node].mNodeType != kNodeTypeDoWhile
                && gNodes[last_node].mNodeType != kNodeTypeSwitch)
            {
                has_result = TRUE;
            }
        }
        
        if(has_result && info->exception_result_type_function) {
            create_exception_result_value(&last_node, FALSE, info);
            node_block->mNodes[node_block->mNumNodes-1] = last_node;
        }
    }
    
    node_block->mHasResult = has_result;
    node_block->mFunctionBody = function_body;

    if(!extern_c_lang) {
        info->mBlockLevel--;
    }

    return TRUE;
}

BOOL create_block(sNodeBlock** node_block, int num_nodes, unsigned int nodes[], BOOL result_type_is_void, sParserInfo* info)
{
    BOOL extern_c_lang = FALSE;
    sVarTable* old_table = info->lv_table;

    *node_block = ALLOC sNodeBlock_alloc();

    info->lv_table = init_block_vtable(old_table, extern_c_lang);
    
    BOOL has_result = FALSE;
    info->change_sline = FALSE;
    
    (*node_block)->mLVTable = info->lv_table;
    
    xstrncpy((*node_block)->mSName, info->sname, PATH_MAX);
    (*node_block)->mSLine = info->sline;

    (*node_block)->mExternCLang = extern_c_lang;

    if(!extern_c_lang) {
        info->mBlockLevel++;
    }

    char* source_head = info->p;
    int n = 0;

    while(1) {
        unsigned int node = nodes[n];
        n++;

        if(node == 0) {
            char buf[512];
            snprintf(buf, 512, "require an expression(4) (%c)", *info->p);
            parser_err_msg(info, buf);
        }

        if(info->err_num == 0) {
            append_node_to_node_block(*node_block, node);
        }
        
        if(n == num_nodes) {
            break;
        }
    }

    char* source_end = info->p;

    sBuf_append(&(*node_block)->mSource, source_head, source_end - source_head);
    
    sBuf_append_char(&(*node_block)->mSource, '\0');
    
    if((*node_block)->mNumNodes > 0) {
        unsigned int last_node = (*node_block)->mNodes[(*node_block)->mNumNodes-1];
        
        if(!result_type_is_void) {
            if(gNodes[last_node].mNodeType != kNodeTypeReturn 
                && gNodes[last_node].mNodeType != kNodeTypeIf 
                && gNodes[last_node].mNodeType != kNodeTypeWhile 
                && gNodes[last_node].mNodeType != kNodeTypeFor 
                && gNodes[last_node].mNodeType != kNodeTypeDoWhile
                && gNodes[last_node].mNodeType != kNodeTypeSwitch)
            {
                has_result = TRUE;
            }
        }
    }
    
    (*node_block)->mHasResult = has_result;

    if(!extern_c_lang) {
        info->mBlockLevel--;
    }

    info->lv_table = old_table;

    return TRUE;
}

BOOL skip_block(sParserInfo* info)
{
    if(*info->p == '{') {
        info->p++;

        BOOL dquort = FALSE;
        BOOL squort = FALSE;
        int sline = 0;
        int nest = 0;
        while(1) {
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        fprintf(stderr, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        return FALSE;
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == '{') {
                info->p++;

                nest++;
            }
            else if(*info->p == '}') {
                info->p++;

                if(nest == 0) {
                    skip_spaces_and_lf(info);
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                if(gNCType) {
                    break;
                }
                parser_err_msg(info, "The block requires } character for closing block");
                return TRUE;
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        char msg[1024];
        snprintf(msg, 1024, "Require block. This is %c", *info->p);
        parser_err_msg(info, msg);
    }

    return TRUE;
}

