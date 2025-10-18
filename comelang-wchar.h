#ifndef COMELANG_WCHAR_H
#define COMELANG_WCHAR_H

////////////////////////////////////////////////////////////////////////////////
// wchar_t
////////////////////////////////////////////////////////////////////////////////
#include <wchar.h>
#include <libgen.h>

typedef wchar_t*% wstring;


uniq wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

uniq string char*::chomp(char* str)
{
    return string::chomp(str);
}

uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

uniq wstring __builtin_wstring(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str);

    wstring wstr = new wchar_t[len+1];

    int ret = mbstowcs(wstr, str, len+1);
    wstr[ret] = '\0';

    if(ret < 0) {
        wstr[0] = 0;
    }

    return wstr;
}

uniq int wchar_t*::length(wchar_t* str)
{
    return wcslen(str);
}

uniq int wstring::length(wchar_t* str)
{
    return wchar_t*::length(str);
}
uniq wstring wchar_t*::substring(wchar_t* str, int head, int tail)
{
    using unsafe;
    
    if(str == null) {
        return wstring("");
    }

    int len = wcslen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return wstring("");
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return wstring("");
    }

    if(tail-head+1 < 1) {
        return wstring("");
    }

    wstring result = new wchar_t[tail-head+1];

    memcpy(result, str + head, sizeof(wchar_t)*(tail-head));
    result[tail-head] = '\0';

    return result;
}

uniq wstring char*::to_wstring(char* str)
{
    return wstring(str);
}

uniq wstring wchar_t*::delete(wchar_t* str, int head, int tail) 
{
    using unsafe;
    
    int len = wcslen(str);

    if(len == 0) {
        return str.to_string().to_wstring();
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
        return str.to_string().to_wstring();
    }

    if(tail >= len) {
        tail = len;
    }
    
    wstring sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sizeof(wchar_t)*(sub_str.length()+1));

    return str.to_string().to_wstring();
}

uniq int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value)
{
    using unsafe;
    
    wchar_t* head = wcsstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

uniq int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value)
{
    using unsafe;
    
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

uniq wstring wchar_t*::reverse(wchar_t* str) 
{
    int len = wcslen(str);
    wstring result = new wchar_t[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq wstring wchar_t*::multiply(wchar_t* str, int n)
{
    int len = wcslen(str) * n + 1;

    wstring result = new wchar_t[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        wcscat(result, str);
    }

    return result;
}

uniq wstring wchar_t*::printable(wchar_t* str)
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

uniq size_t xwcslen(wchar_t* wstr)
{
    wchar_t* p = wstr;
    
    size_t len = 0;
    while(*p) {
        p++;
        len++;
    }
    
    return len;
}

#ifdef __DEBIAN__
#define wcslen(o) xwcslen(o)
#endif

uniq wstring wstring::substring(wchar_t* str, int head, int tail) 
{
    return wchar_t*::substring(str, head, tail);
}

uniq string wchar_t*::to_string(wchar_t* wstr)
{
    int len = MB_LEN_MAX*(wcslen(wstr)+1);

    string result = new char[len];

    if(wcstombs(result, wstr, len) < 0) 
    {
        strncpy(result, "", len);
    }

    return result;
}
uniq int wchar_t*::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}

uniq int wstring::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}
uniq bool wchar_t*::equals(wchar_t left, wchar_t right)
{
    return left == right;
}
uniq wstring wchar_t*::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq wstring wstring::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wstring::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

uniq bool wstring::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

uniq wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

uniq wstring wstring::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}
uniq unsigned int wchar_t*::get_hash_key(wchar_t* value)
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

uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wstring::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}
uniq bool wchar_t::operator_equals(wchar_t left, wchar_t right)
{
    return left == right;
}

uniq bool wchar_t::operator_not_equals(wchar_t left, wchar_t right)
{
    return left != right;
}

uniq unsigned int wchar_t::get_hash_key(wchar_t value)
{
    return value;
}

uniq bool wchar_t::equals(wchar_t left, wchar_t right)
{
    return left == right;
}

uniq string wchar_t::to_string(wchar_t wc)
{
    return xsprintf("%ls", wc);
}
uniq string wstring::to_string(wchar_t* wstr)
{
    return wchar_t*::to_string(wstr);
}

uniq wstring int::to_wstring(int self)
{
    return xsprintf("%d", self).to_wstring();
}

uniq wstring wstring::delete(wchar_t* str, int head, int tail)
{
    return wchar_t*::delete(str, head, tail);
}

uniq int wstring::index(wchar_t* str, wchar_t* search_str, int default_value=1)
{
    return wchar_t*::index(str, search_str, default_value);
}

uniq int wstring::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1)
{
    return wchar_t*::rindex(str, search_str, default_value);
}

uniq wstring wstring::reverse(wchar_t* str)
{
    return wchar_t*::reverse(str);
}

uniq wstring wstring::multiply(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq wstring wstring::printable(wchar_t* str)
{
    return wchar_t*::printable(str);
}

uniq unsigned int wstring::get_hash_key(wchar_t* value)
{
    return wchar_t*::get_hash_key(value);
}

uniq wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}
uniq string xdirname(char* path)
{
    if(path == null) {
        return string("");
    }
    return string(dirname(string(path)));
}

#endif
