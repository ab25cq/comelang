#include "comelang.h"

void ncfree(void* mem)
{
    if(mem) {
//printf("ncfree %p\n", mem);
        free(mem);
    }
}

void* nccalloc(size_t nmemb, size_t size)
{
    void* result = calloc(nmemb, size);
//printf("nccalloc %p %d\n", result, size);
    return result;
}

void* gc_nccalloc(size_t nmemb, size_t size)
{
    void* result = GC_malloc(nmemb * size);
//printf("GC_malloc %p %d\n", result, size);
    return result;
}

void*%? ncmemdup(void*% block)
{
    managed block;

    if(!block) {
        return dummy_heap null;
    }

#ifdef __DARWIN__
    size_t size = malloc_size(block);
#else
    size_t size = malloc_usable_size(block);
#endif

    void*% ret = dummy_heap nccalloc(1, size);

    if (ret) {
        char* p = ret;
        char* p2 = block;
        while(p - ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }
    
//printf("clone %p\n", ret);

    return nullable ret;
}

void call_finalizer(void* fun, void* mem)
{
    if(fun && mem) {
        void (*finalizer)(void*) = fun;
        finalizer(mem);
    }
}

void* call_cloner(void* fun, void* mem)
{
    if(fun && mem) {
        void* (*cloner)(void*) = fun;
        return cloner(mem);
    }
    
    return null;
}

string string(char* str)
{
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

void* gc_ncmemdup(void* block)
{
    if(!block) {
        return null;
    }
    if(!GC_is_heap_ptr(block)) {
        return block;
    }
    
    size_t size = GC_size(block);

    void* ret = GC_malloc(size);

    if (ret) {
        char* p = ret;
        char* p2 = block;
        while(p - ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

    return ret;
}

string xsprintf(char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);

    if(len < 0) {
        fprintf(stderr, "can't get heap memory.\n");

        exit(2);
    }
    
    string result2 = string(result);
    
    free(result);
    
    return result2;
}

string string::reverse(char* str) 
{
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}


string string::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

int string::length(char* str)
{
    return strlen(str);
}

unsigned int int::get_hash_key(int value)
{
    return value;
}

unsigned int string::get_hash_key(char* value)
{
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

bool string::equals(char* left, char* right)
{
    return strcmp(left, right) == 0;
}

int char::compare(char left, char right) 
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
}

int short::compare(short left, short right) 
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
}

int long::compare(long left, long right) 
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
}

int wchar_t*::compare(wchar_t* left, wchar_t* right) 
{
    return wcscmp(left,right);
}

buffer*% buffer*::initialize(buffer*% self) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete self.buf;
}

buffer*% buffer*::clone(buffer* self)
{
    auto result = new buffer;
    
    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);
    
    return result;
}

int buffer*::length(buffer* self) 
{
    return self.len;
}

void buffer*::reset(buffer* self)
{
    self.buf[0] = '\0';
    self.len = 0;
}

buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self.len + size + 1 + 1 >= self.size) {
        char* old_buf = self.buf;
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;

    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_char(buffer* self, char c)
{
    if(self.len + 1 + 1 + 1 >= self.size) {
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_str(buffer* self, char* str)
{
    return self.append(str, strlen(str));
}

buffer* buffer*::append_nullterminated_str(buffer* self, char* str)
{
    self.append(str, strlen(str));
    self.append_char('\0');
    
    return self;
}

string buffer*::to_string(buffer* self)
{
    return (string(self.buf));
}

buffer* buffer*::append_int(buffer* self, int value) 
{
    return self.append((char*)&value, sizeof(int));
}

buffer* buffer*::append_long(buffer* self, long value) 
{
    return self.append((char*)&value, sizeof(long));
}

buffer* buffer*::append_short(buffer* self, short value) 
{
    return self.append((char*)&value, sizeof(short));
}

void buffer*::alignment(buffer* self) 
{
    int len = self.len;
    len = (len + 3) & ~3;
    
    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }
    
    self.len = len;
}

int buffer*::compare(buffer* left, buffer* right) 
{
    return strcmp(left.buf, right.buf);
}

buffer*% string::to_buffer(char* self) 
{
    auto result = new buffer.initialize();

    result.append_str(self);

    return result;
}

int int::except(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
    }

    return self;
}

bool bool::except(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }

    return self;
}

bool bool::if(bool self, void* parent, void (*block)(void* parent))
{
    if(self) {
        block(parent);
    }

    return self;
}

void int::times(int self, void* parent, void (*block)(void* parent))
{
    int i;
    for(i=0; i<self; i++) {
        block(parent);
    }
}

bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

string xbasename(char* path)
{
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
}

string xextname(char* path)
{
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
}

string xrealpath(char* path)
{
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}

string regex_struct*::to_string(regex_struct* regex)
{
    return string(regex.str);
}

unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

bool bool::equals(bool left, bool right)
{
    return left == right;
}

/*
char string::operator_load_element(char* str, int n) 
{
    string str2 = str.substring(n, n);
    
    if(strlen(str2) > 0) {
        return str2.substring(n, n)[0];
    }
    else {
        return '\0';
    }
}


char char*::operator_load_element(char* str, int n) 
{
    string str2 = str.substring(n, n);
    
    if(strlen(str2) > 0) {
        return str2.substring(n, n)[0];
    }
    else {
        return '\0';
    }
}
*/

string string::lower_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

string string::upper_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

int char*::compare(char* left, char* right) 
{
    return strcmp(left, right);
}

smart_pointer*% buffer*::to_pointer(buffer* self)
{
    auto result = new smart_pointer;
    
    result.p = self.buf;
    result.start = self.buf;
    result.end = self.buf + self.len;
    
    return result;
}

