#include "common.h"

class sIntNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sIntNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sUIntNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sUIntNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sLongNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sLongNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"long");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%sL", come_value.c_value);
        
        return true;
    }
};

class sULongNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sULongNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = self.value;
        come_value.type = new sType(s"long");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%sUL", come_value.c_value);
        
        return true;
    }
};

class sFloatNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sFloatNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"float");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%sf", come_value.c_value);
        
        return true;
    }
};

class sDoubleNode extends sNodeBase
{
    new(string value, sInfo* info)
    {
        self.super();
        
        string self.value = value;
    }
    
    string kind()
    {
        return string("sDoubleNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"double");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

class sDigitNode extends sNodeBase
{
    new(char* value, sInfo* info)
    {
        self.super();
        
        string self.value = string(value);
    }
    
    string kind()
    {
        return string("sDigitNode");
    }
    
    bool compile(sInfo* info)
    {
        CVALUE*% come_value = new CVALUE();
        
        come_value.c_value = xsprintf("%s", self.value);
        come_value.type = new sType(s"int");
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s", come_value.c_value);
        
        return true;
    }
};

sNode*% create_int_node(string value, sInfo* info)
{
    return new sIntNode(value, info) implements sNode;
}

sNode*% get_number(bool minus, sInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p2 = buf;

    if(minus) {
        *p2 = '-';
        p2++;
    }

    if(xisdigit(*info->p)) {
        while(xisdigit(*info->p) || *info->p == '_' || *info->p == 'e' || *info->p == 'E') {
            if(*info->p ==  '_') {
                info->p++;
            }
            else if(*info->p == 'e' || *info->p == 'E') {
                *p2++ = *info->p;
                info->p++;
                
                if(*info->p == '+' || *info->p == '-') {
                    *p2++ = *info->p;
                    info->p++;
                }
            }
            else {
                *p2++ = *info->p;
                info->p++;
            }

            if(p2 - buf >= buf_size) {
                printf("%s %d: overflow node of number\n", info->sname, info->sline);
                exit(5);
            }
        };
        *p2 = 0;
        skip_spaces_and_lf();
        
        char c = *(info->p+1);

        if(*info->p == '.' && xisdigit(c)) {
            *p2++ = *info->p;
            
            if(p2 - buf >= buf_size) {
                printf("%s %d: overflow node of number", info->sname, info->sline);
                exit(11);
            }
            
            info->p++;
            skip_spaces_and_lf();
            
            while(xisdigit(*info->p) || *info->p == '_') {
                if(*info->p ==  '_') {
                    info->p++;
                }
                else {
                    *p2++ = *info->p;
                    info->p++;
                }
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
            }
            
            if(*info->p == 'e') {
                *p2++ = *info->p;
                info->p++;
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
                
                if(*info->p == '+') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
                else if(*info->p == '-') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
            
                while(xisdigit(*info->p) || *info->p == '_') {
                    if(*info->p ==  '_') {
                        info->p++;
                    }
                    else {
                        *p2++ = *info->p;
                        info->p++;
                    }
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                };
            }
            skip_spaces_and_lf();
            
            if(*info->p == 'f' || *info->p == 'F') {
                *p2++ = *info->p;
                *p2 = 0;
                
                info->p++;
                skip_spaces_and_lf();
                
                return new sFloatNode(string(buf), info) implements sNode;
            }
            else if(*info->p == 'l' || *info->p == 'L') {
                *p2++ = *info->p;
                *p2 = 0;
                
                info->p++;
                skip_spaces_and_lf();
                
                return new sDoubleNode(string(buf), info) implements sNode;
            }
            else {
                *p2 = 0;
                return new sDoubleNode(string(buf), info) implements sNode;
            }
        }
        else if(*info->p == 'f' || *info->p == 'F') {
            *p2++ = *info->p;
            *p2 = 0;
            
            info->p++;
            skip_spaces_and_lf();
            
            return new sFloatNode(string(buf), info) implements sNode;
        }
        else if(*info->p == 'u' || *info->p == 'U')
        {
            *p2++ = *info->p;
            *p2 = 0;
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                *p2++ = *info->p;
                *p2 = 0;
                info->p++;
                skip_spaces_and_lf();

                if(*info->p == 'L' || *info->p == 'l')
                {
                    *p2++ = *info->p;
                    *p2 = 0;
                    info->p++;
                    skip_spaces_and_lf();
                    
                    return new sULongNode(buf.to_string(), info) implements sNode;
                }
                else {
                    return new sULongNode(buf.to_string(), info) implements sNode;
                }
            }
            else {
                return new sUIntNode(buf.to_string(), info) implements sNode;
            }
        }
        else if(*info->p == 'L' || *info->p == 'l') {
            *p2++ = *info->p;
            *p2 = 0;
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                *p2++ = *info->p;
                *p2 = 0;
                info->p++;
                skip_spaces_and_lf();
                
                return new sLongNode(buf.to_string(), info) implements sNode;
            }
            else if(*info->p == 'U' || *info->p == 'u')
            {
                *p2++ = *info->p;
                *p2 = 0;
                info->p++;
                skip_spaces_and_lf();
                
                return new sULongNode(buf.to_string(), info) implements sNode;
            }
            else {
                return new sLongNode(buf.to_string(), info) implements sNode;
            }
        }
        else {
            return new sIntNode(buf.to_string(), info) implements sNode;
        }
    }
    else {
        err_msg(info, "require digits after + or -");
        exit(2);
    }
    
    return (sNode*%)null;
}

sNode*% get_hex_number(bool minus, sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'x';

    while((*info->p >= '0' && *info->p <= '9') || (*info->p >= 'a' && *info->p <= 'f') || (*info->p >= 'A' && *info->p <= 'F') || *info->p == '_') 
    {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };
    *p = 0;
    skip_spaces_and_lf();

    if(*info->p == 'u' || *info->p == 'U')
    {
        *p++ = *info->p;
        *p = 0;
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p++ = *info->p;
            *p = 0;
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                *p++ = *info->p;
                *p = 0;
                info->p++;
                skip_spaces_and_lf();
                
                if(minus) {
                    return new sULongNode("-" + buf, info) implements sNode;
                }
                else {
                    return new sULongNode(buf.to_string(), info) implements sNode;
                }
            }
            else {
                if(minus) {
                    return new sULongNode("-" + buf.to_string(), info) implements sNode;
                }
                else {
                    return new sULongNode(buf.to_string(), info) implements sNode;
                }
            }
        }
        else {
            if(minus) {
                return new sUIntNode("-" + buf, info) implements sNode;
            }
            else {
                return new sUIntNode(buf.to_string(), info) implements sNode;
            }
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        *p++ = *info->p;
        *p = 0;
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p++ = *info->p;
            *p = 0;
            info->p++;
            skip_spaces_and_lf();

            if(minus) {
                return new sLongNode("-" + buf.to_string(), info) implements sNode;
            }
            else {
                return new sLongNode(buf.to_string(), info) implements sNode;
            }
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            *p++ = *info->p;
            *p = 0;
            info->p++;
            skip_spaces_and_lf();

            if(minus) {
                return new sULongNode("-" + buf.to_string(), info) implements sNode;
            }
            else {
                return new sULongNode(buf.to_string(), info) implements sNode;
            }
        }
        else {
            if(minus) {
                return new sLongNode("-" + buf.to_string(), info) implements sNode;
            }
            else {
                return new sLongNode(buf.to_string(), info) implements sNode;
            }
        }
    }
    else {
        if(minus) {
            return new sIntNode("-" + buf, info) implements sNode;
        }
        else {
            return new sIntNode(buf.to_string(), info) implements sNode;
        }
    }
    
    return (sNode*%)null;
}

sNode*% get_digits(sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'b';

    while(*info->p == '0' || *info->p == '1') {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    }
    *p = 0;
    skip_spaces_and_lf();

    if(*info->p == 'u' || *info->p == 'U')
    {
        *p++ = *info->p;
        *p = '0';
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p++ = *info->p;
            *p = '0';
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                *p++ = *info->p;
                *p = '0';
                info->p++;
                skip_spaces_and_lf();
            }
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        *p++ = *info->p;
        *p = '0';
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p++ = *info->p;
            *p = '0';
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            *p++ = *info->p;
            *p = '0';
            info->p++;
            skip_spaces_and_lf();
        }
    }
    *p = 0;
    skip_spaces_and_lf();
    
    return new sDigitNode(buf, info) implements sNode;
}

sNode*% get_oct_number(bool minus, sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    if(minus) {
        *p++ = '-';
    }
    *p++ = '0';

    while((*info->p >= '0' && *info->p <= '7') || *info->p == '_') {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p = *info->p;
            p++;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };

    *p = 0;
    skip_spaces_and_lf();

    if(*info->p == 'u' || *info->p == 'U')
    {
        *p++ = *info->p;
        *p = 0;
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p++ = *info->p;
            *p = 0;
            info->p++;
            skip_spaces_and_lf();

            if(*info->p == 'L' || *info->p == 'l')
            {
                *p++ = *info->p;
                *p = 0;
                info->p++;
                skip_spaces_and_lf();
                
                return new sULongNode(buf.to_string(), info) implements sNode;
            }
            else {
                return new sULongNode(buf.to_string(), info) implements sNode;
            }
        }
        else {
            return new sUIntNode(buf.to_string(), info) implements sNode;
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf();

        if(*info->p == 'L' || *info->p == 'l')
        {
            *p++ = *info->p;
            *p = 0;
            info->p++;
            skip_spaces_and_lf();

            return new sLongNode(buf.to_string(), info) implements sNode;
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            *p++ = *info->p;
            *p = 0;
            info->p++;
            skip_spaces_and_lf();

            return new sULongNode(buf.to_string(), info) implements sNode;
        }
        else {
            return new sLongNode(buf.to_string(), info) implements sNode;
        }
    }
    else {
        return new sIntNode(buf.to_string(), info) implements sNode;
    }
    
    return (sNode*%)null;
}

sNode*% expression_node(sInfo* info=info) version 99
{
    skip_spaces_and_lf();
    
    parse_sharp();
    
    if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
        info->p += 2;

        sNode*% node = get_hex_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '0' && (*(info->p+1) == 'b' || *(info->p+1) == 'B')) {
        info->p += 2;

        sNode*% node = get_digits(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '0' && xisdigit(*(info->p+1))) {
        info->p++;

        sNode*% node = get_oct_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(xisdigit(*info->p)) {
        sNode*% node = get_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '-' && (xisdigit(*(info->p+1)) || (*info->p == '0' && *(info->p+1) == 'x' || *(info->p+1) == 'X') || (*info->p == '0' && xisdigit(*(info->p+1))))) {
        info->p++;
        
        sNode*% node;
        if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
            info->p += 2;
    
            node = get_hex_number(true@minus, info);
            
            node = post_position_operator(node, info);
            
            return node;
        }
        else if(*info->p == '0' && xisdigit(*(info->p+1))) {
            info->p++;
    
            node = get_oct_number(true@minus, info);
            
            node = post_position_operator(node, info);
            
            return node;
        }
        else {
            node = get_number(true@minus, info);
            
            node = post_position_operator(node, info);
        }
        
        return node;
    }
    else {
        sNode*% node = inherit(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
}

