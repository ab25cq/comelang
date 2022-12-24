#include "common.h"
#include <ctype.h>

// from left to right order
BOOL expression_mult_div(unsigned int* node, sParserInfo* info)
{
    if(!expression_node(node, TRUE, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }
    
    if(!gMultDivPlusPlusEnableNode[gNodes[*node].mNodeType] && *info->p != '/' && *info->p != '%') 
    {
        return TRUE;
    }


    while(*info->p) {
        if(*info->p == '*' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_node(&right, TRUE, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator *");
            };

            *node = sNodeTree_create_mult(*node, right, 0, info);
        }
        else if(*info->p == '/' && *(info->p+1) != '=' && *(info->p+1) != '*') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_node(&right, TRUE, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator /");
            };

            *node = sNodeTree_create_div(*node, right, 0, info);
        }
        else if(*info->p == '%' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_node(&right, TRUE, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator ^");
            };

            *node = sNodeTree_create_mod(*node, right, 0, info);
        }
        else {
            break;
        }
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
BOOL expression_add_sub(unsigned int* node, sParserInfo* info)
{
    if(!expression_mult_div(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_mult_div(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator +");
            };

            *node = sNodeTree_create_add(*node, right, 0, TRUE, info);
        }
        else if(*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_mult_div(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator -");
            };

            *node = sNodeTree_create_sub(*node, right, 0, TRUE, info);
        }
        else {
            break;
        }
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
BOOL expression_shift(unsigned int* node, sParserInfo* info)
{
    if(!expression_add_sub(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) != '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_add_sub(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator <<");
            };

            *node = sNodeTree_create_left_shift(*node, right, 0, info);
        }
        else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) != '=') {
            info->p+=2;
            skip_spaces_and_lf(info);
            
            unsigned int right = 0;
            if(!expression_add_sub(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator >>");
            };

            *node = sNodeTree_create_right_shift(*node, right, 0, info);
        }
        else {
            break;
        }
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
BOOL expression_comparison(unsigned int* node, sParserInfo* info)
{
    if(!expression_shift(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '>' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for >= operator");
            };

            *node = sNodeTree_create_gteq(*node, right, 0, info);
        }
        else if(*info->p == '<' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for <= operator");
            };

            *node = sNodeTree_create_leeq(*node, right, 0, info);
        }
        else if(*info->p == '>' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for > operator");
            };

            *node = sNodeTree_create_gt(*node, right, 0, info);
        }
        else if(*info->p == '<' && *(info->p+1) != '<') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_shift(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for < operator");
            };

            *node = sNodeTree_create_le(*node, right, 0, info);
        }
        else {
            break;
        }
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
BOOL expression_equal(unsigned int* node, sParserInfo* info)
{
    if(!parse_sharp(info)) {
        return FALSE;
    }
    if(!expression_comparison(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '=' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p += 3;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for === operator");
            };

            *node = sNodeTree_create_equals2(*node, right, 0, info);
        }
        else if(*info->p == '=' && *(info->p+1) == '=') {
            info->p += 2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for == operator");
            };

            *node = sNodeTree_create_equals(*node, right, 0, info);
        }
        else if(*info->p == '!' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for !== operator");
            };

            *node = sNodeTree_create_not_equals2(*node, right, 0, info);
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for != operator");
            };

            *node = sNodeTree_create_not_equals(*node, right, 0, info);
        }
        else {
            break;
        }
    }
    
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
BOOL expression_and(unsigned int* node, sParserInfo* info)
{
    if(!expression_equal(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) != '&' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_equal(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for & operator");
            };

            *node = sNodeTree_create_and(*node, right, 0, info);
        }
        else {
            break;
        }
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
BOOL expression_xor(unsigned int* node, sParserInfo* info)
{
    if(!expression_and(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '^' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_and(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for ^ operator");
            };

            *node = sNodeTree_create_xor(*node, right, 0, info);
        }
        else {
            break;
        }
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

// from left to right order
BOOL expression_or(unsigned int* node, sParserInfo* info)
{
    if(!expression_xor(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) != '=' && *(info->p+1) != '|') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_xor(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for | operator");
            };

            *node = sNodeTree_create_or(*node, right, 0, info);
        }
        else {
            break;
        }
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

BOOL expression_and_and(unsigned int* node, sParserInfo* info)
{
    if(!expression_or(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }


    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_or(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for && operator");
            };

            *node = sNodeTree_create_and_and(*node, right, info);
        }
        else {
            break;
        }
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

BOOL expression_or_or(unsigned int* node, sParserInfo* info)
{
    if(!expression_and_and(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }

    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right = 0;
            if(!expression_and_and(&right, info)) {
                return FALSE;
            }

            if(right == 0) {
                parser_err_msg(info, "require right value for operator ||");
            };

            *node = sNodeTree_create_or_or(*node, right, info);
        }
        else {
            break;
        }
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

BOOL expression_comma_operator(unsigned int* node, BOOL comma, sParserInfo* info)
{
    if(!expression_or_or(node, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(comma && *info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int node2 = 0;
            if(!expression_or_or(&node2, info)) {
                return FALSE;
            }

            if(node2 == 0) {
                parser_err_msg(info, "require right value for , operator");
            };

            *node = sNodeTree_create_comma(*node, node2, info);
        }
        else {
            break;
        }
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    return TRUE;
}

BOOL expression_conditional_operator(unsigned int* node, BOOL comma, sParserInfo* info)
{
    if(!expression_comma_operator(node, comma, info)) {
        return FALSE;
    }
    if(*node == 0) {
        return TRUE;
    }
    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }

    while(*info->p) {
        if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);

            while(TRUE) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            info->in_conditional_operator = TRUE;

            unsigned int value1 = 0;
            if(*info->p == ':') {
                value1 = sNodeTree_create_null(info);
            }
            else {
                if(!expression_comma_operator(&value1, TRUE, info)) {
                    info->in_conditional_operator = FALSE;
                    return FALSE;
                }
    
                if(value1 == 0) {
                    parser_err_msg(info, "require right value for ? operator");
                }
            }

            while(TRUE) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        info->in_conditional_operator = FALSE;
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            info->in_conditional_operator = FALSE;

            expect_next_character_with_one_forward(":", info);

            unsigned int value2 = 0;
            if(!expression_comma_operator(&value2, FALSE, info)) {
                return FALSE;
            }

            while(TRUE) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                else {
                    break;
                }
            }

            if(value2 == 0) {
                parser_err_msg(info, "require right value for ? operator");
            };

            *node = sNodeTree_create_conditional(*node, value1, value2, info);
        }
        else {
            break;
        }
    }

    while(TRUE) {
        if(*info->p == '#') {
            if(!parse_sharp(info)) {
                return FALSE;
            }
        }
        else {
            break;
        }
    }


    return TRUE;
}

BOOL expression(unsigned int* node, BOOL comma, sParserInfo* info) 
{
    BOOL comma2 = info->comma_op;
    info->comma_op = comma;
    
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
    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }
    
    if(!expression_conditional_operator(node, comma, info)) {
        return FALSE;
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
    
    info->comma_op = comma2;

    return TRUE;
}
