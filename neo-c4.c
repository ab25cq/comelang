#include "neo-c.h"

list<string>*% string::scan_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            auto str = self.substring(start[0], end[0]);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string str2 = block(parent, str, group_strings);
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            auto str = self.substring(start[0], end[0]);

            list<string>*% group_strings = new list<string>.initialize();
            for(int i= 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            string str2 = block(parent, str, group_strings);
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    return result;
}


list<string>*% char*::scan_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            auto str = self.substring(start[0], end[0]);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string str2 = block(parent, str, group_strings);
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            n++;
            if(n == count) {
                break;
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            auto str = self.substring(start[0], end[0]);

            list<string>*% group_strings = new list<string>.initialize();
            for(int i= 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            string str2 = block(parent, str, group_strings);
            
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            n++;
            if(n == count) {
                break;
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    return result;
}

list<string>*% char*::split_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            string str = self.substring(offset, start[0]);
            
            list<string>*% match_strings = new list<string>.initialize();
            string str2 = block(parent, str, match_strings);
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            string str = self.substring(offset, start[0]);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            list<string>*% match_strings = new list<string>.initialize();
            for(int i=1; i<regex_result; i++) {
                string match_str = self.substring(start[i], end[i]);
                match_strings.push_back(match_str);
            }
            
            string str2 = block(parent, str, match_strings);
            result.push_back(str2);
        }
        /// no match ///
        else
        {
            break;
        }
    }

    if(offset < self.length()) {
        string str = self.substring(offset, -1);
        list<string>*% match_strings = new list<string>.initialize();
        string str2 = block(parent, str, match_strings);
        result.push_back(str2);
    }

    return result;
}

list<string>*% char*::split_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);

        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            string str = self.substring(offset, start[0]);
            
            list<string>*% match_strings = new list<string>.initialize();
            string str2 = block(parent, str, match_strings);
            result.push_back(str2);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            string str = self.substring(offset, start[0]);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            list<string>*% match_strings = new list<string>.initialize();
            for(int i=1; i<regex_result; i++) {
                string match_str = self.substring(start[i], end[i]);
                match_strings.push_back(match_str);
            }
            
            string str2 = block(parent, str, match_strings);
            result.push_back(str2);
        }
        /// no match ///
        else
        {
            break;
        }
        
        n++;
        if(n == count) {
            break;
        }
    }

    return result;
}

bool regex_struct*::equals(regex_struct* left, regex_struct* right)
{
    if(strcmp(left.str, right.str) != 0) {
        return false;
    }

    if(left.ignore_case != right.ignore_case) {
        return false;
    }
    if(left.multiline != right.multiline) {
        return false;
    }
    if(left.global != right.global) {
        return false;
    }
    if(left.extended != right.extended) {
        return false;
    }
    if(left.dotall != right.dotall) {
        return false;
    }
    if(left.anchored != right.anchored) {
        return false;
    }
    if(left.dollar_endonly != right.dollar_endonly) {
        return false;
    }
    if(left.ungreedy != right.ungreedy) {
        return false;
    }
    if(left.options != right.options) {
        return false;
    }

    return true;
}

list<string>*% char*::scan_group_strings(char* self, regex_struct* reg, list<string>* group_strings, int* num_group_string_in_regex)
{
    auto result = new list<string>.initialize();

    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    //assert(group_strings != null);

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1)
        {
            auto str = self.substring(start[0], end[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            auto str = self.substring(start[0], end[0]);
            result.push_back(str);

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            *num_group_string_in_regex = regex_result-1;
            for(int i= 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    return result;
}

list<string>*% FILE::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();
    
    while(1) {
        char buf[BUFSIZ];
        
        if(fgets(buf, BUFSIZ, f) == NULL) {
            break;
        }
        
        result.push_back(string(buf));
    }
    
    return result;
}

string FILE::read(FILE* f)
{
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    return buf.to_string();
}

FILE* FILE::fprintf(FILE* f, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);

    (void)fprintf(f, "%s", msg2);
    
    return f;
}

FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);

    (void)fprintf(f, "%s", msg2);
    
    return f;
}

void FILE::fclose(FILE* f)
{
    fclose(f);
}

char* char*::puts(char* self)
{
    (void)puts(self);
    
    return self;
}

char* char*::print(char* self)
{
    printf("%s", self);
    
    return self;
}

string char*::strip(char* self)
{
    string result = string(self);
    
    int len = strlen(self);
    
    if(self[len-1] == '\n') {
        result[len-1] = '\0';
    }
    else if(self[len-1] == '\r') {
        result[len-1] = '\0';
    }
    else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
        result[len-2] = '\0';
    }
    
    return result;
}


