#include "common.h"
#include <ctype.h>

struct sIntNode 
{
    int intValue;
};


sIntNode* sIntNode*::initialize(sIntNode* self, int value)
{
    self.intValue = value;
    
    return self;
}

unsigned int sIntNode*::get_hash_key(sIntNode* self)
{
    return self.intValue;
}

bool sIntNode*::compile(sIntNode* self, buffer* codes, sParserInfo* info)
{
    codes.append_int(OP_INT_VALUE);
    codes.append_int(self.intValue);
    
    info->stack_num++;
    
    return true;
}

sNode*? exp_node(sParserInfo* info) version 1
{
    if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces_until_eol(info);
        
        return nullable new sNode(new sIntNode(value));
    }
    
    return null;
}

bool expression(sNode** node, sParserInfo* info) version 1
{
    *node = exp_node(info);
    
    if(*node == null) {
        return false;
    }
    
    return true;
}

