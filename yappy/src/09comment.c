#include "common.h"

static void comment(sParserInfo* info)
{
    while(true) {
        if(*info->p == '#') {
            info->p++;
            while(*info->p != '\n' && *info->p != '\0') {
                info->p++;
            }
            
            if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

bool expression(sNode** node, sParserInfo* info) version 99
{
    comment(info);
    
    if(*info->p == '\0') {
        *node = 0;
        return true;
    }
    else {
        return inherit(node, info);
    }
}
