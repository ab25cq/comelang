#include "common.h"

exception int err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        char* p = info.p;
        
        char* last_lf = null;
        while(p >= info.head) {
            if(*p == '\n') {
                last_lf = p;
                break;
            }
            p--;
        }
        
        buffer*% buf = new buffer();
        
        if(last_lf) {
            int col = info.p - last_lf;
        
            buf.append_format("%s %d(real %d)(block %d) %d: %s", info.sname, info.sline, info.sline_real, info.sline_block, col, msg2);
        }
        else {
            int col = info.p - info.head;
        
            buf.append_format("%s %d(real %d)(block %d) %d: %s", info.sname, info.sline, info.sline_real, info.sline_block, col, msg2);
        }
        
        info.err_num++;

        free(msg2);
        
        printf(buf.to_string() + "\n");
        return none(s"compile error");
    }
    
    return 0;
}

int expected_next_character(char c, sInfo* info=info)
{
    parse_sharp();
    if(*info->p != c) {
        if(!info.no_output_err) {
            err_msg(info, "expected next charaster is %c, but %c, caller %s %d", c, *info->p, info->caller_sname, info->caller_line);
            exit(1);
        }
    }
    
    info->p++;
    skip_spaces_and_lf();
    
    return 0;
}

string parse_word(sInfo* info=info)
{
    var buf = new buffer();
    parse_sharp();
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf();
    
    if(buf.to_string().length() == 0) {
        err_msg(info, "unexpected character(%c), expected word character, caller %s %d", *info->p, info->caller_sname, info->caller_line);
        return string("");
    }
    
    string result = buf.to_string();
    
    if(info->module_params && info->module_params[string(result)]??) {
        return string(info->module_params[string(result)]);
    }
    
    return result;
}

string backtrace_parse_word(sInfo* info=info)
{
    char* p = info.p;
    int sline = info.sline;
    
    string buf;
    if(xisalpha(*info->p) || *info->p == '_') {
        buf = parse_word();
    }
    else {
        buf = string("");
    }
    
    info.p = p;
    info.sline = sline;
    
    return buf;
}

void skip_spaces_and_lf(sInfo* info=info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
    
    parse_sharp();
}

void skip_spaces_and_lf2(sInfo* info=info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
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

void parse_sharp(sInfo* info=info) version 5
{
    while(1) {
        if(*info->p == '#') {
            skip_spaces_and_lf2();
        
            info->p++;
            skip_spaces_and_lf2();
            
            if(strmemcmp(info->p, "pragma")) {
                while(*info->p) {
                    if(*info->p == '\n') {
                        skip_spaces_and_lf2();
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            else if(xisdigit(*info->p)) {
                int line = 0;
                buffer*% fname = new buffer();
    
                while(xisdigit(*info->p)) {
                    line = line * 10 + (*info->p - '0');
                    info->p++;
                }
                skip_spaces_and_lf2();
    
                if(*info->p == '"') {
                    info->p++;
    
                    while(*info->p != '"') {
                        fname.append_char(*info->p);
                        info->p++;
                    }
    
                    while(*info->p != '\n') {
                        info->p++;
                    }
                    info->p++;
                }
    
                info->sline = line;
                info->sname = fname.to_string();
    
                skip_spaces_and_lf2();
            }
            else if(*info->p == '"') {
                info->p++;
    
                while(*info->p != '"') {
                    info->p++;
                }
    
                while(*info->p != '\n') {
                    info->p++;
                }
                info->p++;
            }
        
            skip_spaces_and_lf2();
        }
        else if(*info->p == '/' && *(info->p+1) == '*') {
            int nest = 0;
            while(1) {
                if(*info->p == '/' && *(info->p+1) == '*') {
                    info->p +=2;
                    nest++;
                }
                else if(*info->p == '*' && *(info->p+1) == '/') {
                    info->p +=2;
                    nest--;
                    
                    if(nest == 0) {
                        skip_spaces_and_lf2();
                        break;
                    }
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
        /// comment
        else if(*info->p == '/' && *(info->p+1) == '/') {
            info->p+=2;
            
            while(1) {
                if(*info->p == '\n') {
                    info->p++;
                    info->sline++;
                    skip_spaces_and_lf2();
                    break;
                }
                else if(*info->p == '\0') {
                    break;
                }
                else { 
                    info->p++;
                }
            }
        }
/*
        else if(!info.parsing_struct && strmemcmp(info.p, "__attribute__")) {
            info->p += strlen("__attribute__");
            skip_spaces_and_lf2();
            skip_paren(info);
        }
        else if(!info.parsing_struct && strmemcmp(info.p, "__attribute")) {
            info->p += strlen("__attribute");
            skip_spaces_and_lf2();
            skip_paren(info);
        }
*/
        else if(strmemcmp(info.p, "__extension__")) {
            info->p += strlen("__extension__");
            skip_spaces_and_lf2();
        }
        else {
            break;
        }
    }
    
}

void skip_paren(sInfo* info)
{
    int nest = 0;
    while(true) {
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf();
            
            nest++;
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            
            nest--;
            if(nest == 0) {
                break;
            }
        }
        else if(*info->p == '\0') {
            err_msg(info, "invalid the source end. require )");
            break;
        }
        else {
            info->p++;
        }
    }
}
