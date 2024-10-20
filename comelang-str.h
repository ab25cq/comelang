#ifndef COMELANG_STR_H
#define COMELANG_STR_H

using comelang-str;

#include <pcre.h>

#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE
#endif

#include <wchar.h>
#include <libgen.h>

typedef wchar_t*% wstring;

struct come_regex
{
    string str;
    pcre* regex;

    bool ignore_case;
    bool multiline;
    bool global;
    bool extended;
    bool dotall;
    bool anchored;
    bool dollar_endonly;
    bool ungreedy;

    int options;

    pcre* re;
};

exception record come_regex*% come_regex*::initialize(come_regex*% self, char* str, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
exception come_regex*% char*::to_regex(char* self, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
exception come_regex*% string::to_regex(char* self, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
void come_regex*::finalize(come_regex* reg);
come_regex*% come_regex*::clone(come_regex* reg);
bool come_regex*::equals(come_regex* left, come_regex* right);
unsigned int come_regex*::get_hash_key(come_regex* reg);

string come_regex*::to_string(come_regex* regex);
string string::lower_case(char* str);
string string::upper_case(char* str);

wstring wchar_t*::substring(wchar_t* str, int head, int tail);
static inline wstring wstring::substring(wchar_t* str, int head, int tail) 
{
    return wchar_t*::substring(str, head, tail);
}

int char*::index_count(char* str, char* search_str, int count=1, int default_value=-1);
static inline int string::index_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::index_count(str, search_str, count, default_value);
}

int char*::index_regex_count(char* self, come_regex* reg, int count=1, int default_value);
static inline int string::index_regex_count(char* self, come_regex* reg, int count=1, int default_value=-1)
{
    return char*::index_regex_count(self, reg, count, default_value);
}

int char*::rindex(char* str, char* search_str, int default_value=-1);
static inline int string::rindex(char* str, char* search_str, int default_value=-1) 
{
    return char*::rindex(str, search_str, default_value);
}

int char*::rindex_regex(char* self, come_regex* reg, int default_value=-1);
static inline int string::rindex_regex(char* self, come_regex* reg, int default_value=-1)
{
    return char*::rindex_regex(self, reg, default_value);
}

int char*::rindex_count(char* str, char* search_str, int count=1, int default_value=-1);
static inline int string::rindex_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::rindex_count(str, search_str, default_value);
}

list<string>*% char*::scan_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::scan_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::scan_block(self, reg, parent, block);
}

list<string>*% char*::scan_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::scan_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::scan_block_count(self, reg, count, parent, block);
}

list<string>*% char*::split_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::split_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::split_block(self, reg, parent, block);
}

list<string>*% char*::split_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline list<string>*% string::split_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::split_block_count(self, reg, count, parent, block);
}

list<string>*% char*::scan_group_strings(char* self, come_regex* reg, list<string>* group_strings, int* num_group_string_in_regex);
static inline list<string>*% string::scan_group_strings(char* self, come_regex* reg, list<string>* group_strings, int* num_group_string_in_regex)
{
    return char*::scan_group_strings(self, reg, group_strings, num_group_string_in_regex);
}

string char*::strip(char* self);
static inline string string::strip(char* self)
{
    return char*::strip(self);
}

string char*::printable(char* str);
static inline string string::printable(char* str)
{
    return string::printable(str);
}

wstring char*::to_wstring(char* str);
static inline wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

string wchar_t::to_string(wchar_t wc);

string wchar_t*::to_string(wchar_t* wstr);
static inline string wstring::to_string(wchar_t* wstr)
{
    return wchar_t*::to_string(wstr);
}

static inline wstring int::to_wstring(int self)
{
    return xsprintf("%d", self).to_wstring();
}

int wchar_t*::length(wchar_t* str);
static inline int wstring::length(wchar_t* str)
{
    return wchar_t*::length(str);
}

wstring wchar_t*::delete(wchar_t* str, int head, int tail) ;
static inline wstring wstring::delete(wchar_t* str, int head, int tail)
{
    return wchar_t*::delete(str, head, tail);
}

int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value=-1);
static inline int wstring::index(wchar_t* str, wchar_t* search_str, int default_value=1)
{
    return wchar_t*::index(str, search_str, default_value);
}

int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1);
static inline int wstring::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1)
{
    return wchar_t*::rindex(str, search_str, default_value);
}

wstring wchar_t*::reverse(wchar_t* str);
static inline wstring wstring::reverse(wchar_t* str)
{
    return wchar_t*::reverse(str);
}

wstring wchar_t*::multiply(wchar_t* str, int n);
static inline wstring wstring::multiply(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

wstring wchar_t*::printable(wchar_t* str);
static inline wstring wstring::printable(wchar_t* str)
{
    return wchar_t*::printable(str);
}

int wchar_t*::compare(wchar_t* left, wchar_t* right);
int wstring::compare(wchar_t* left, wchar_t* right);

bool wchar_t::operator_equals(wchar_t left, wchar_t right);
bool wchar_t::operator_not_equals(wchar_t left, wchar_t right);
bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right);
bool wstring::operator_equals(wchar_t* left, wchar_t* right);
bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right);
bool wstring::operator_not_equals(wchar_t* left, wchar_t* right);
wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right);
wstring wstring::operator_add(wchar_t* left, wchar_t* right);
wstring wchar_t*::operator_mult(wchar_t* str, int n);
wstring wstring::operator_mult(wchar_t* str, int n);

unsigned int wchar_t::get_hash_key(wchar_t value);

unsigned int wchar_t*::get_hash_key(wchar_t* value);
static inline unsigned int wstring::get_hash_key(wchar_t* value)
{
    return wchar_t*::get_hash_key(value);
}

bool wchar_t::equals(wchar_t left, wchar_t right);

bool wchar_t*::equals(wchar_t* left, wchar_t* right);
bool wstring::equals(wchar_t* left, wchar_t* right);


bool char*::match_group_strings(char* self, come_regex* reg, int count, list<string>* group_strings);
static inline bool string::match_group_strings(char* self, come_regex* reg, int count, list<string>* group_strings)
{
    return char*::match_group_strings(self, reg, count, group_strings);
}

int char*::index(char* str, char* search_str, int default_value=-1);
static inline int string::index(char* str, char* search_str, int default_value=-1)
{
    return char*::index(str, search_str, default_value);
}

int char*::index_regex(char* self, come_regex* reg, int default_value=-1);
static inline int string::index_regex(char* self, come_regex* reg, int default_value=-1)
{
    return char*::index_regex(self, reg, default_value);
}


string char*::replace(char* self, int index, char c);
static inline string string::replace(char* self, int index, char c)
{
    return char*::replace(self, index, c);
}

string char*::multiply(char* str, int n);
static inline string string::multiply(char* str, int n)
{
    return char*::multiply(str, n);
}

string char*::sub(char* self, come_regex* reg, char* replace);
static inline string string::sub(char* self, come_regex* reg, char* replace)
{
    return char*::sub(self, reg, replace);
}

string char*::sub_count(char* self, come_regex* reg, char* replace, int count=1);
static inline string string::sub_count(char* self, come_regex* reg, char* replace, int count=1)
{
    return char*::sub_count(self, reg, replace, count);
}

list<string>*% char*::split_str(char* self, char* str);
static inline list<string>*% string::split_str(char* self, char* str)
{
    return char*::split_str(self, str);
}

list<string>*% char*::scan(char* self, come_regex* reg);
static inline list<string>*% string::scan(char* self, come_regex* reg)
{
    return char*::scan(self, reg);
}

list<string>*% char*::split(char* self, come_regex* reg);
static inline list<string>*% string::split(char* self, come_regex* reg)
{
    return char*::split(self, reg);
}

bool char*::match(char* self, come_regex* reg);
static inline bool string::match(char* self, come_regex* reg)
{
    return char*::match(self, reg);
}

list<string>*% char*::split_maxsplit(char* self, come_regex* reg, int maxsplit);
static inline list<string>*% string::split_maxsplit(char* self, come_regex* reg, int maxsplit)
{
    return char*::split_maxsplit(self, reg, maxsplit);
}

int char*::rindex_regex_count(char* self, come_regex* reg, int count=1, int default_value=-1);
static inline int string::rindex_regex_count(char* self, come_regex* reg, int count=1, int default_value=-1)
{
    return char*::rindex_regex_count(self, reg, count, default_value);
}

bool char*::match_count(char* self, come_regex* reg, int count=1);
static inline bool string::match_count(char* self, come_regex* reg, int count=1)
{
    return char*::match_count(self, reg, count);
}

string char*::sub_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline string string::sub_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::sub_block(self, reg, parent, block);
}

string char*::sub_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
static inline string string::sub_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::sub_block_count(self, reg, count, parent, block);
}

bool come_regex*::operator_not_equals(come_regex* left, come_regex* right);
bool come_regex*::operator_equals(come_regex* left, come_regex* right);

wstring char*::to_wstring(char* str);
static inline wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

wstring __builtin_wstring(char* str);

string string::chomp(char* str);

static inline string char*::chomp(char* str)
{
    return string::chomp(str);
}

string xrealpath(char* path);
string xdirname(char* path);

size_t xwcslen(wchar_t* wstr); // for debian, ubuntu

#ifdef __DEBIAN__
#define wcslen(o) xwcslen(o)
#endif

#endif
