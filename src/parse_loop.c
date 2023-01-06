#include "common.h"
#include <ctype.h>

BOOL parse_if(unsigned int* node, sParserInfo* info)
{
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);
    int sline = info->sline;

    expect_next_character_with_one_forward("(", info);

    /// expression ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, TRUE, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for if");
        return TRUE;
    }

    if(*info->p == '\0') {
        gNodes[expression_node].mTerminated = TRUE;
        *node = sNodeTree_if_expression(expression_node, NULL, NULL, NULL, 0, NULL, info, sname, sline);
        return TRUE;
    }
    
    expect_next_character_with_one_forward(")", info);

    sNodeBlock* if_node_block = NULL;
    BOOL result_type_is_void = TRUE;
    if(!parse_block_easy(ALLOC &if_node_block, FALSE, result_type_is_void, FALSE, info))
    {
        return FALSE;
    }

    unsigned int elif_expression_nodes[ELIF_NUM_MAX];
    memset(elif_expression_nodes, 0, sizeof(unsigned int)*ELIF_NUM_MAX);

    sNodeBlock* elif_node_blocks[ELIF_NUM_MAX];
    memset(elif_node_blocks, 0, sizeof(sNodeBlock*)*ELIF_NUM_MAX);

    int elif_num = 0;

    sNodeBlock* else_node_block = NULL;

    while(1) {
        char* saved_p = info->p;
        int saved_sline = info->sline;

        char buf[VAR_NAME_MAX];

        /// else ///
        if(!xisalpha(*info->p)) {
            break;
        }
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
            return FALSE;
        }

        if(strcmp(buf, "else") == 0) {
            if(parse_cmp(info->p, "if") == 0) {
                info->p+=2;
                skip_spaces_and_lf(info);

                expect_next_character_with_one_forward("(", info);

                /// expression ///
                if(!expression(&elif_expression_nodes[elif_num], TRUE, info)) {
                    return FALSE;
                }

                if(elif_expression_nodes[elif_num] == 0) {
                    parser_err_msg(info, "require elif expression");
                    return TRUE;
                }
            
                if(*info->p == '\0') {
                    gNodes[elif_expression_nodes[elif_num]].mTerminated = TRUE;
                    elif_num++;
                    *node = sNodeTree_if_expression(expression_node, MANAGED if_node_block, elif_expression_nodes, elif_node_blocks, elif_num, NULL, info, sname, sline);
                    return TRUE;
                }

                expect_next_character_with_one_forward(")", info);

                BOOL result_type_is_void = TRUE;
                if(!parse_block_easy(ALLOC &elif_node_blocks[elif_num], FALSE, result_type_is_void, FALSE, info))
                {
                    return FALSE;
                }

                elif_num++;
                if(elif_num >= ELIF_NUM_MAX) {
                    parser_err_msg(info, "overflow elif num");
                    return FALSE;
                }
            }
            else {
                BOOL result_type_is_void = TRUE;
                if(!parse_block_easy(ALLOC &else_node_block, FALSE, result_type_is_void, FALSE, info))
                {
                    return FALSE;
                }
                break;
            }
        }
        else {
            info->p = saved_p;
            info->sline = saved_sline;
            break;
        }
    };

    *node = sNodeTree_if_expression(expression_node, MANAGED if_node_block, elif_expression_nodes, elif_node_blocks, elif_num, MANAGED else_node_block, info, sname, sline);

    return TRUE;
}

BOOL parse_throw(unsigned int* node, sParserInfo* info)
{
    *node = sNodeTree_create_int_value(0, info);
    
    create_exception_result_value(node, TRUE, info);
    
    *node = sNodeTree_create_return(*node, info);
    
    return TRUE;
}

BOOL parse_catch(unsigned int* node, sParserInfo* info)
{
    gNodes[*node].uValue.sFunctionCall.mParseCatch = TRUE;
    
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);
    int sline = info->sline;
    
    unsigned int nodes[128];
    int num_nodes = 0;

    /// expression ///
    static int n = 0;
    n++;
    
    int num_vars = 2;
    char var_names[2][VAR_NAME_MAX];
    snprintf(var_names[0], VAR_NAME_MAX, "catcha%d", n);
    snprintf(var_names[1], VAR_NAME_MAX, "catchb%d", n);
    
    check_already_added_variable(info->lv_table, var_names[0], info);
    if(!add_variable_to_table(info->lv_table, var_names[0], NULL, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, FALSE, FALSE))
    {
        fprintf(stderr, "overflow variable table\n");
        exit(2);
    }
    
    check_already_added_variable(info->lv_table, var_names[1], info);
    if(!add_variable_to_table(info->lv_table, var_names[1], NULL, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, FALSE, FALSE))
    {
        fprintf(stderr, "overflow variable table\n");
        exit(2);
    }
    
    BOOL alloc = TRUE;
    char* var_names2[2] = { var_names[0], var_names[1] };
    nodes[num_nodes] = sNodeTree_create_store_variable_multiple(num_vars, var_names2, *node, alloc, info);
    num_nodes++;
    
    unsigned int node2 = sNodeTree_create_load_variable(var_names[1], info);
    
    unsigned int expression_node = sNodeTree_create_logical_denial(node2, 0, 0, info);

    sNodeBlock* if_node_block = NULL;
    BOOL result_type_is_void = TRUE;
    if(!parse_block_easy(ALLOC &if_node_block, FALSE, result_type_is_void, FALSE, info))
    {
        return FALSE;
    }

    unsigned int elif_expression_nodes[ELIF_NUM_MAX];
    memset(elif_expression_nodes, 0, sizeof(unsigned int)*ELIF_NUM_MAX);

    sNodeBlock* elif_node_blocks[ELIF_NUM_MAX];
    memset(elif_node_blocks, 0, sizeof(sNodeBlock*)*ELIF_NUM_MAX);

    int elif_num = 0;

    sNodeBlock* else_node_block = NULL;

    nodes[num_nodes] = sNodeTree_if_expression(expression_node, MANAGED if_node_block, elif_expression_nodes, elif_node_blocks, elif_num, MANAGED else_node_block, info, sname, sline);
    num_nodes++;
    
    nodes[num_nodes] = sNodeTree_create_load_variable(var_names[0], info);
    num_nodes++;
    
    BOOL result_type_is_void2 = FALSE;
    sNodeBlock* node_block = NULL;
    if(!create_block(&node_block, num_nodes, nodes, result_type_is_void2, info)) {
        return FALSE;
    }
    
    *node = sNodeTree_create_normal_block(node_block, info);
    
    return TRUE;
}

BOOL parse_guard(unsigned int* node, sParserInfo* info)
{
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);
    int sline = info->sline;

    expect_next_character_with_one_forward("(", info);
    
    char buf[VAR_NAME_MAX];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
        return FALSE;
    }

    /// expression ///
    expect_next_character_with_one_forward(")", info);

    sNodeBlock* if_node_block = NULL;
    BOOL result_type_is_void = TRUE;
    if(!parse_block_easy(ALLOC &if_node_block, FALSE, result_type_is_void, FALSE, info))
    {
        return FALSE;
    }

    unsigned int elif_expression_nodes[ELIF_NUM_MAX];
    memset(elif_expression_nodes, 0, sizeof(unsigned int)*ELIF_NUM_MAX);

    sNodeBlock* elif_node_blocks[ELIF_NUM_MAX];
    memset(elif_node_blocks, 0, sizeof(sNodeBlock*)*ELIF_NUM_MAX);

    int elif_num = 0;

    sNodeBlock* else_node_block = NULL;

    *node = sNodeTree_guard_expression(buf,  MANAGED if_node_block, info, sname, sline);

    return TRUE;
}

BOOL parse_while(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    /// expression ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, TRUE, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for while");
        return TRUE;
    }

    if(*info->p == '\0') {
        gNodes[expression_node].mTerminated = TRUE;
        *node = sNodeTree_while_expression(expression_node, NULL, info);
        return TRUE;
    }

    expect_next_character_with_one_forward(")", info);

    sNodeBlock* while_node_block = NULL;
    BOOL result_type_is_void = TRUE;
    if(!parse_block_easy(ALLOC &while_node_block, FALSE, result_type_is_void, FALSE, info))
    {
        return FALSE;
    };


    *node = sNodeTree_while_expression(expression_node, MANAGED while_node_block, info);

    return TRUE;
}

BOOL parse_do(unsigned int* node, sParserInfo* info)
{
    sNodeBlock* while_node_block = NULL;
    BOOL result_type_is_void = TRUE;
    if(!parse_block_easy(ALLOC &while_node_block, FALSE, result_type_is_void, FALSE, info))
    {
        return FALSE;
    }
    
    char buf[VAR_NAME_MAX];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
        return FALSE;
    }

    if(strcmp(buf, "while") != 0) {
        parser_err_msg(info, "require while word");
        return TRUE;
    }

    expect_next_character_with_one_forward("(", info);

    /// expression ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, TRUE, info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for do while");
        return TRUE;
    }
    
    if(*info->p == '\0') {
        gNodes[expression_node].mTerminated = TRUE;
        *node = sNodeTree_do_while_expression(expression_node, NULL, info);
        return TRUE;
    }

    expect_next_character_with_one_forward(")", info);

    *node = sNodeTree_do_while_expression(expression_node, MANAGED while_node_block, info);

    return TRUE;
}

BOOL parse_for(unsigned int* node, sParserInfo* info)
{
    sVarTable* old_vtable = info->lv_table;
    info->lv_table = init_block_vtable(old_vtable, FALSE);
    
    expect_next_character_with_one_forward("(", info);
    
    unsigned int expression_node = 0;
    if(*info->p != ';') {
        /// expression1 ///
        if(!expression(&expression_node, TRUE, info)) {
            return FALSE;
        }
        
        if(*info->p == '\0') {
            sVarTable* old_vtable2 = info->lv_table;
            sNodeBlock* for_node_block = ALLOC sNodeBlock_alloc();
            for_node_block->mLVTable = init_block_vtable(old_vtable2, FALSE);
            gNodes[expression_node].mTerminated = TRUE;
            *node = sNodeTree_for_expression(expression_node, 0, 0, for_node_block, info);
            return TRUE;
        }
    
        if(expression_node == 0) {
            parser_err_msg(info, "require expression for \"for\"");
            return TRUE;
        }
    }

    if(*info->p == ';') {
        expect_next_character_with_one_forward(";", info);
    }
    else {
        *node = expression_node;
        return TRUE;
    }

    /// expression2 ///
    unsigned int expression_node2 = 0;
    
    if(*info->p != ';') {
        if(!expression(&expression_node2, TRUE, info)) {
            return FALSE;
        }
        
        if(*info->p == '\0') {
            sVarTable* old_vtable2 = info->lv_table;
            sNodeBlock* for_node_block = ALLOC sNodeBlock_alloc();
            for_node_block->mLVTable = init_block_vtable(old_vtable2, FALSE);
            gNodes[expression_node2].mTerminated = TRUE;
            *node = sNodeTree_for_expression(expression_node, expression_node2, 0, for_node_block, info);
            return TRUE;
        }
    
        if(expression_node2 == 0) {
            parser_err_msg(info, "require expression2 for \"for\"");
            return TRUE;
        }
    }

    if(*info->p == ';') {
        expect_next_character_with_one_forward(";", info);
    }
    else {
        *node = expression_node2;
        return TRUE;
    }

    /// expression3 ///
    unsigned int expression_node3 = 0;
    if(*info->p != ')') {
        if(!expression(&expression_node3, TRUE, info)) {
            return FALSE;
        }
    
        if(expression_node3 == 0) {
            parser_err_msg(info, "require expression3 for \"for\"");
            return TRUE;
        }
        
        if(*info->p == '\0') {
            sVarTable* old_vtable2 = info->lv_table;
            sNodeBlock* for_node_block = ALLOC sNodeBlock_alloc();
            for_node_block->mLVTable = init_block_vtable(old_vtable2, FALSE);
            gNodes[expression_node3].mTerminated = TRUE;
            *node = sNodeTree_for_expression(expression_node, expression_node2, expression_node3, for_node_block, info);
            return TRUE;
        }
    }

    if(*info->p == ')') {
        expect_next_character_with_one_forward(")", info);
    }
    else {
        *node = expression_node3;
        return TRUE;
    }

    BOOL single_expression = FALSE;
    if(*info->p == '{') {
        info->p++;
    }
    else {
        single_expression = TRUE;
    }

    sVarTable* old_vtable2 = info->lv_table;
    info->lv_table = init_block_vtable(old_vtable2, FALSE);

    sNodeBlock* for_node_block = ALLOC sNodeBlock_alloc();
    BOOL result_type_is_void = TRUE;
    if(!parse_block(for_node_block, FALSE, single_expression, result_type_is_void, FALSE, FALSE, info)) 
    {
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

    *node = sNodeTree_for_expression(expression_node, expression_node2, expression_node3, MANAGED for_node_block, info);

    info->lv_table = old_vtable;

    return TRUE;
}

BOOL parse_select(unsigned int* node, sParserInfo* info)
{
    int num_pipes = 0;
    char pipes[SELECT_MAX][VAR_NAME_MAX+1];
    sNodeBlock* pipe_blocks[SELECT_MAX];

    expect_next_character_with_one_forward("{", info);

    while(TRUE) {
        if(!parse_word(pipes[num_pipes], VAR_NAME_MAX, info, TRUE, FALSE))
        {
            return FALSE;
        }

        BOOL result_type_is_void = TRUE;
        if(!parse_block_easy(ALLOC &pipe_blocks[num_pipes], FALSE, result_type_is_void, FALSE, info))
        {
            return FALSE;
        }

        num_pipes++;

        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }

    char* pipes2[SELECT_MAX];

    int i;
    for(i=0; i<num_pipes; i++) {
        pipes2[i] = pipes[i];
    }

    *node = sNodeTree_create_select(num_pipes, pipes2, pipe_blocks, info);

    return TRUE;
}

BOOL parse_pselect(unsigned int* node, sParserInfo* info)
{
    int num_pipes = 0;
    char pipes[SELECT_MAX][VAR_NAME_MAX+1];
    sNodeBlock* pipe_blocks[SELECT_MAX];
    sNodeBlock* default_block = NULL;

    expect_next_character_with_one_forward("{", info);

    while(TRUE) {
        char buf[VAR_NAME_MAX];
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
        {
            return FALSE;
        }

        if(strcmp(buf, "default") == 0) {
            BOOL result_type_is_void = TRUE;
            if(!parse_block_easy(ALLOC &default_block, FALSE, result_type_is_void, FALSE, info))
            {
                return FALSE;
            }
        }
        else {
            xstrncpy(pipes[num_pipes], buf, VAR_NAME_MAX);

            BOOL result_type_is_void = TRUE;
            if(!parse_block_easy(ALLOC &pipe_blocks[num_pipes], FALSE, result_type_is_void, FALSE, info))
            {
                return FALSE;
            }

            num_pipes++;
        }

        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }

    char* pipes2[SELECT_MAX];

    int i;
    for(i=0; i<num_pipes; i++) {
        pipes2[i] = pipes[i];
    }

    *node = sNodeTree_create_pselect(num_pipes, pipes2, pipe_blocks, default_block, info);

    return TRUE;
}

BOOL parse_switch(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);
    
    if(!parse_sharp(info)) {
        return FALSE;
    }

    /// expression1 ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, FALSE, info)) {
        return FALSE;
    }
    
    if(!parse_sharp(info)) {
        return FALSE;
    }

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for \"switch\"");
        return TRUE;
    }

    if(*info->p == '\0') {
        gNodes[expression_node].mTerminated = TRUE;
        *node = sNodeTree_switch_expression(expression_node, 0, NULL, info);
        return TRUE;
    }

    expect_next_character_with_one_forward(")", info);
    BOOL block = TRUE;
    if(*info->p == '{') {
        info->p++;
        skip_spaces_and_lf(info);
    }
    else {
        block = FALSE;
    }
    
    if(!parse_sharp(info)) {
        return FALSE;
    }

    int size_switch_expression = 16;
    int num_switch_expression = 0;
    unsigned int* switch_expression = (unsigned int*)xcalloc(1, sizeof(unsigned int)*size_switch_expression);
    info->switch_nest++;
    
    BOOL first_case = TRUE;
    BOOL case_after_return = FALSE;
    BOOL case_after_break = TRUE;

    while(1) {
        if(!parse_sharp(info)) {
            return FALSE;
        }
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            info->switch_nest--;
            break;
        }
        else {
            int sline = info->sline;
            
            if(!parse_sharp(info)) {
                return FALSE;
            }
            
            if(!expression(switch_expression + num_switch_expression, TRUE, info)) 
            {
                return FALSE;
            }
            
            if(!parse_sharp(info)) {
                return FALSE;
            }

            if(gNodes[switch_expression[num_switch_expression]].mNodeType == kNodeTypeReturn) 
            {
                case_after_return = TRUE;
            }
            else if(gNodes[switch_expression[num_switch_expression]].mNodeType == kNodeTypeBreak) 
            {
                case_after_break = TRUE;
            }
            else if(gNodes[switch_expression[num_switch_expression]].mNodeType == kNodeTypeCase) 
            {
            }
            else {
                case_after_return = FALSE;
                case_after_break = FALSE;
            }

            unsigned int node = switch_expression[num_switch_expression];
            
            gNodes[node].mLine = sline;

            if(gNodes[node].mNodeType == kNodeTypeCase) {
                gNodes[node].uValue.sCase.mFirstCase = first_case;
                gNodes[node].uValue.sCase.mCaseAfterReturn = case_after_return;
                gNodes[node].uValue.sCase.mCaseAfterBreak = case_after_break;
                first_case = FALSE;
            }
            else {
                first_case = TRUE;
            }

            num_switch_expression++;

            if(num_switch_expression >= size_switch_expression) 
            {
                size_switch_expression *= 2;
                switch_expression = xrealloc(switch_expression, sizeof(unsigned int)*size_switch_expression);
            }
            
            if(!parse_sharp(info)) {
                return FALSE;
            }

            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            if(!parse_sharp(info)) {
                return FALSE;
            }
            
            if(gNodes[node].mNodeType != kNodeTypeCase && !block) {
                break;
            }
        }
    };

    *node = sNodeTree_switch_expression(expression_node, num_switch_expression, MANAGED switch_expression, info);

    return TRUE;
}

BOOL parse_case(unsigned int* node, sParserInfo* info)
{
    BOOL in_case = info->in_case;
    info->in_case = TRUE;

    /// expression1 ///
    unsigned int expression_node = 0;
    if(!expression(&expression_node, FALSE, info)) {
        info->in_case = in_case;
        return FALSE;
    }

    info->in_case = in_case;

    if(expression_node == 0) {
        parser_err_msg(info, "require expression for \"case\"");
        return TRUE;
    }

    expect_next_character_with_one_forward(":", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
    {
        return FALSE;
    }

    BOOL last_case = strcmp(buf, "case") != 0;

    info->p = p_before;
    info->sline = sline_before;

    *node = sNodeTree_case_expression(expression_node, last_case, info);

    return TRUE;
}

BOOL parse_default(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward(":", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
    {
        return FALSE;
    }

    BOOL last_case = strcmp(buf, "case") != 0;

    info->p = p_before;
    info->sline = sline_before;

    *node = sNodeTree_case_expression(0, last_case, info);

    return TRUE;
}

BOOL parse_label(unsigned int* node, char* name, sParserInfo* info)
{
    expect_next_character_with_one_forward(":", info);

    *node = sNodeTree_label_expression(name, info);

    return TRUE;
}

BOOL parse_goto(unsigned int* node, sParserInfo* info)
{
    char buf[VAR_NAME_MAX+1];
    buf[0] = '\0';
    unsigned int expression_node = 0;
    
    if(xisalpha(*info->p) || *info->p == '_') {
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
        {
            return FALSE;
        }
    }
    else {
        if(!expression(&expression_node, FALSE, info)) {
            return FALSE;
        }
    }

    *node = sNodeTree_goto_expression(buf, expression_node, info);

    return TRUE;
}

BOOL parse_defer(unsigned int* node, sParserInfo* info)
{
    unsigned int node2 = 0;
    if(!expression(&node2, TRUE, info)) {
        return FALSE;
    }

    if(node2 == 0) {
        parser_err_msg(info, "require defer expression");
    }

    *node = sNodeTree_create_defer(node2, info);

    return TRUE;
}

