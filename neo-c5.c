#include "neo-c.h"

char* char*::printf(char* self, const char* msg)
{
    (void)printf(msg, self);
    
    return self;
}

int int::printf(int self, const char* msg)
{
    (void)printf(msg, self);
    
    return self;
}

void fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f))
{
    FILE* f = fopen(path, mode);
    
    if(f) {
        block(parent, f);
        
        fclose(f);
    }
}

char char::putc(char self)
{
    (void)putc(self, stdout);
    
    return self;
}

unsigned int wchar_t*::get_hash_key(wchar_t* value)
{
    using unsafe;
    
    int result = 0;
    wchar_t* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}


bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

unsigned int regex_struct*::get_hash_key(regex_struct* self)
{
    return self.str.get_hash_key();
}

int int::compare(int left, int right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

string char*::printable(char* str)
{
    int len = str.length();
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        char c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

string wchar_t*::to_string(wchar_t* wstr)
{
    int len = MB_LEN_MAX*(wcslen(wstr)+1);

    string result = new char[len];

    if(wcstombs(result, wstr, len) < 0) 
    {
        strncpy(result, "", len);
    }

    return result;
}

wstring char*::to_wstring(char* str)
{
    return wstring(str);
}

int wchar_t*::length(wchar_t* str)
{
    return wcslen(str);
}

wchar_t* wchar_t*::delete(wchar_t* str, int head, int tail) 
{
    int len = wcslen(str);

    if(len == 0) {
        return str;
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return str;
    }

    if(tail >= len) {
        tail = len;
    }
    
    wstring sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sizeof(wchar_t)*(sub_str.length()+1));

    return str;
}

int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value)
{
    wchar_t* head = wcsstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value)
{
    int len = wcslen(search_str);

    wchar_t* p = str + wcslen(str) - len;

    while(p >= str) {
        int len2 = wcslen(p);
        bool result = true;
        int i;
        for(i=0; i<len && i < len2; i++) {
            if(p[i] != search_str[i]) {
                result = false;
            }
        }
        if(result) {
            return (p - str);
        }

        p--;
    }

    return default_value;
}

wstring wchar_t*::reverse(whar_t* str) 
{
    int len = wcslen(str);
    wstring result = new wchar_t[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

wstring wchar_t*::multiply(wchar_t* str, int n)
{
    int len = wcslen(str) * n + 1;

    wstring result = new wchar_t[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        wcscat(result, str);
    }

    return result;
}

wstring wchar_t*::printable(wchar_t* str)
{
    int len = str.length();
    wstring result = new wchar_t[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        wchar_t c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

bool char*::match_group_strings(char* self, regex_struct* reg, int count, list<string>* group_strings)
{
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
        if(regex_result == 1 || (group_strings == null && regex_result > 0)) 
        {
            n++;
            
            if(n == count) {
                return true;
            }

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
        /// group strings ///
        else if(regex_result > 1) {
            n++;
            
            group_strings.reset();
            for(int i = 1; i<regex_result; i++) {
                auto match_string = self.substring(start[i], end[i]);
                group_strings.push_back(match_string);
            }
            
            if(n == count) {
                return true;
            }

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
            return false;
        }
    }

    return false;
}

bool wchar_t*::comapre(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

unsigned int wchar_t::get_hash_key(wchar_t value)
{
    return value;
}

bool wchar_t::equals(wchar_t left, wchar_t right)
{
    return left == right;
}


string char*::operator_mult(char* str, int n)
{
    return charp_multiply(str, n);
}

string string::operator_mult(char* str, int n)
{
    return charp_multiply(str, n);
}

wstring wchar_t*::operator_mult(wchar_t* str, int n)
{
    return wchar_tp_multiply(str, n);
}

wstring wstring::operator_mult(wchar_t* str, int n)
{
    return wchar_tp_multiply(str, n);
}

bool char*::operator_equals(char* left, char* right)
{
    return strcmp(left, right) == 0;
}

bool string::operator_equals(char* left, char* right)
{
    return strcmp(left, right) == 0;
}

bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

bool wstring::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

void unwrap_exception(char* sname, int sline)
{
    fprintf(stderr, "%s %d: unwrap exception. The value is null\n", sname, sline);
    exit(2);
}

string char*::operator_add(char* left, char* right)
{
    buffer*% buf = new buffer.initialize();
    
    buf.append_str(left);
    buf.append_str(right);
    
    return buf.to_string();
}

string string::operator_add(char* left, char* right)
{
    buffer*% buf = new buffer.initialize();
    
    buf.append_str(left);
    buf.append_str(right);
    
    return buf.to_string();
}

wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

wstring wstring::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}
