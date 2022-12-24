#ifndef COMELANG_H
#define COMELANG_H

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef __DARWIN__
#include <malloc/malloc.h>
#else
#include <malloc.h>
#endif

#include <gc.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/select.h>
#include <assert.h>

#include <limits.h>
#include <pcre.h>
#include <sys/ioctl.h>
#include <locale.h>
#include <wctype.h>

#include <sys/errno.h>

#include <ncurses.h>

#undef bool
#undef true
#undef false
#undef null

#undef __attribute__

#define __attribute__(x)

//#define _XOPEN_SOURCE
#include <wchar.h>

using neo-c;

#define foreach(o1, o2) for(auto _obj = nomove (o2), auto o1 = _obj.begin(); !_obj.end(); o1 = _obj.next())

typedef char*% string;

inline void xassert(const char* msg, bool exp)
{
    printf(msg);
    printf("...");

    if(exp) {
        puts("ok");
    }
    else {
        puts("false");
        exit(2);
    }
}

void call_finalizer(void* fun, void* mem);
void* call_cloner(void* fun, void* mem);

string string(char* str);
void ncfree(void* mem);
void* nccalloc(size_t nmemb, size_t size);
void*%? ncmemdup(void*% block);
void* gc_ncmemdup(void* block);
string xsprintf(char* msg, ...);
string string::reverse(char* str);
inline string char*::reverse(char* str)
{
    return string_reverse(str);
}

string string::lower_case(char* str);
inline string char*::lower_case(char* str)
{
    return string_lower_case(str);
}
string string::lower_case(char* str);
inline string char*::lower_case(char* str)
{
    return string_lower_case(str);
}
string string::upper_case(char* str);
inline string char*::upper_case(char* str)
{
    return string_upper_case(str);
}

string string::substring(char* str, int head, int tail);
inline string char*::substring(char* str, int head, int tail)
{
    return string_substring(str, head, tail);
}

int string::length(char* str);
inline int char*::length(char* str)
{
    return string_length(str);
}

unsigned int int::get_hash_key(int value);
unsigned int bool::get_hash_key(bool value);

bool bool::equals(bool left, bool right);

unsigned int string::get_hash_key(char* value);
inline unsigned int char*::get_hash_key(char* value)
{
    return string_get_hash_key(value);
}

bool string::equals(char* left, char* right);
inline bool char*::equals(char* left, char* right)
{
    return string_equals(left, right);
}

inline bool int::equals(int left, int right) 
{
    return left == right;
}

inline bool short::equals(short left, short right) 
{
    return left == right;
}

inline bool char::equals(char left, char right) 
{
    return left == right;
}

inline bool long::equals(long left, long right) 
{
    return left == right;
}

inline int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

int char::compare(char left, char right);
int int::compare(int left, int right);
int short::compare(short left, short right);
int long::compare(long left, long right);

inline string char::to_string(char self)
{
    return xsprintf("%c", self);
}

inline string short::to_string(short self)
{
    return xsprintf("%d", (int)self);
}

inline string int::to_string(int self)
{
    return xsprintf("%d", self);
}

inline string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

inline string float::to_string(float self)
{
    return xsprintf("%lf", (double)self);
}

inline string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

inline string string::to_string(char* self)
{
    return string(self);
}

inline string char*::to_string(char* self)
{
    return string(self);
}

/// vector ///
struct vector<T> 
{
    T&* items;
    int len;
    int size;

    int it;
};

impl vector<T> 
{
    vector<T>*% initialize(vector<T>*% self) 
    {
        self.size = 16;
        self.len = 0;
        self.items = borrow new T[self.size];
        
        return self;
    }

    vector<T>*% clone(vector<T>* self)
    {
        vector<T>*% result = new vector<T>;

        result.len = self.len;
        result.size = self.size;
        result.it = 0;
        result.items = borrow new T[result.size];
        
        if(isheap(T)) {
            for(int i=0; i<self.len; i++) 
            {
                result.items[i] = borrow clone self.items[i];
            }
        }
        else {
            for(int i=0; i<self.len; i++) 
            {
                if(is_gc_heap(self.items[i])) {
                    result.items[i] = clone self.items[i];
                }
                else {
                    result.items[i] = self.items[i];
                }
            }
        }

        return result;
    }

    void finalize(vector<T>* self)
    {
        if(isheap(T)) {
            for(int i=0; i<self.len; i++) 
            {
                delete self.items[i];
            }
        }
        ncfree((char*)self.items);  // don't call finalizer function
    }
    
    immutable vector<T>* to_immutable(vector<T>* self) {
        return self;
    }
    
    vector<T>*% operator_add(vector<T>* left, vector<T>* right) {
    
        vector<T>*% result = new vector<T>.initialize();
        
        foreach(it, left) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else if(is_gc_heap(it)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }
        
        foreach(it, right) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else if(is_gc_heap(it)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }
        
        return result;
    }
    vector<T>*% operator_mult(vector<T>* left, int n) {
        vector<T>*% result = new vector<T>.initialize();
        
        for(int i=0; i<n; i++) {
            foreach(it, left) {
                if(isheap(T)) {
                    result.push_back(clone it);
                }
                else if(is_gc_heap(it)) {
                    result.push_back(clone it);
                }
                else {
                    result.push_back(dummy_heap it);
                }
            }
        }
        
        return result;
    }
    bool operator_equals(vector<T>* left, vector<T>* right) {
        return left.equals(right);
    }
    bool operator_not_equals(vector<T>* left, vector<T>* right) {
        return !left.equals(right);
    }
    void operator_store_element(vector<T>* self, int index, T item) mutable {
        self.replace(index, item);
    }
    
    T& operator_load_element(vector<T>* self, int index) {
        T& default_value;
        memset(&default_value, 0, sizeof(T));
        
        return self.item(index, default_value);
    }
    
    vector<T>* push_back(vector<T>* self, T` item) mutable {
        managed item;
        
        if(self.len == self.size) {
            auto new_size = self.size * 2;
            auto items = self.items;

            self.items = nccalloc(1, sizeof(T)*new_size);

            int i;
            for(i=0; i<self.size; i++) {
                self.items[i] = items[i];
            }

            self.size = new_size;

            delete items;
        }

        self.items[self.len] = dummy_heap item;
        self.len++;
        
        return self;
    }

    T& item(vector<T>* self, int index, T& default_value) 
    {
        if(index < 0) {
            index += self.len;
        }

        if(index >= 0 && index < self.len)
        {
            return self.items[index];
        }

        return default_value;
    }


    bool equals(vector<T>* left, vector<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        for(int i=0; i<left.len; i++) {
            if(!(left.items[i].equals(right.items[i])))
            {
                return false;
            }
        }

        return true;
    }
    
    vector<T>* replace(vector<T>* self, int index, T value) mutable
    {
        managed value;

        if(index < 0) {
            index += self.len;
        }

        if(index >= 0 && index < self.len)
        {
            if(isheap(T)) {
                delete self.items[index];
            }

            self.items[index] = value;
        }
        
        return self;
    }
    
    int find(vector<T>* self, T& item, int default_value) {
        int it2 = 0;
        foreach(it, self) {
            if(it.equals(item)) {
                return it2;
            }
            it2++;
        }

        return default_value;
    }

    int length(vector<T>* self)
    {
        return self.len;
    }

    vector<T>* reset(vector<T>* self) mutable {
        if(isheap(T)) {
            for(int i=0; i<self.len; i++) 
            {
                delete self.items[i];

            }
        }
        delete self.items;
        
        self.size = 16;
        self.len = 0;
        self.items = borrow new T[self.size];
        
        self.len = 0;
        
        return self;
    }

    T& begin(vector<T>* self) {
        self.it = 0;

        T& default_value;
        return self.item(0, default_value);
    }

    T& next(vector<T>* self) {
        self.it++;

        T& default_value
        return self.item(self.it, default_value);
    }

    bool end(vector<T>* self) {
        return self.it >= self.len;
    }
    
    vector<T>* delete_back(vector<T>* self) {
        if(self.len > 0) {
            if(isheap(T)) {
                delete self.items[self.len-1];
                self.items[self.len-1] = null;
            }
            
            self.len--;
        }
        
        return self;
    }
}


/// list ///
struct list_item<T>
{
    T& item;
    list_item<T>*? prev;
    list_item<T>*? next;
};

struct list<T>
{
    list_item<T>*? head;
    list_item<T>*? tail;
    int len;

    list_item<T>*? it;
};

/// list ///
impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>*? it = self->head;
        while(it != null) {
            if(isheap(T)) {
                delete it!.item;
            }
            auto prev_it = it;
            it = it!.next;
            delete prev_it!;
        }
    }

    list<T>*% clone(list<T>* self) {
        auto result = new list<T>.initialize();

        list_item<T>*? it = self.head;
        while(it != null) {
            if(isheap(T)) {
                result.push_back(clone it!.item);
            }
            else if(is_gc_heap(it!.item)) {
                result.push_back(clone it!.item);
            }
            else {
                result.push_back(dummy_heap it!.item);
            }

            it = it!.next;
        }

        return result;
    }
    
    immutable list<T>* to_immutable(list<T>* self) {
        return self;
    }
    
    unsigned int get_hash_key(list<T>* self) {
        unsigned int sum = 0;
        foreach(it, self) {
            sum += it.get_hash_key();
        }
        return sum;
    }
    
    list<T>*% operator_add(list<T>* left, list<T>* right) {
        list<T>*% result = new list<T>.initialize();
        
        foreach(it, left) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else if(is_gc_heap(it)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }
        
        foreach(it, right) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else if(is_gc_heap(it)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }
        
        return result;
    }
    list<T>*% operator_mult(list<T>* left, int n) {
        list<T>*% result = new list<T>.initialize();
        
        for(int i=0; i<n; i++) {
            foreach(it, left) {
                if(isheap(T)) {
                    result.push_back(clone it);
                }
                else if(is_gc_heap(it)) {
                    result.push_back(clone it);
                }
                else {
                    result.push_back(dummy_heap it);
                }
            }
        }
        
        return result;
    }
    bool operator_equals(list<T>* left, list<T>* right) {
        return left.equals(right);
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.equals(right);
    }
    
    string to_string(list<T>* self)
    {
        buffer*% result = new buffer.initialize();
        
        result.append_str("[");
        
        for(int i=0; i<self.length(); i++) {
            result.append_str(self[i].to_string());
            
            if(i != self.length()-1) {
                result.append_str(",");
            }
        }
        result.append_str("]");
        
        return result.to_string();
    }
    
    void operator_store_element(list<T>* self, int position, T item) mutable {
        self.replace(position, item);
    }
    
    T& operator_load_element(list<T>* self, int index) {
        T& default_value;
        memset(&default_value, 0, sizeof(T));
        
        return self.item(index, default_value);
    }

    int length(list<T>* self)
    {
        return self.len;
    }
    list<T>* push_back(list<T>* self, T` item) mutable
    {
        managed item;
        

        if(self.len == 0) {
            list_item<T>*? litem = nullable borrow new list_item<T>;
            
            litem!.prev = null;
            litem!.next = null;
            litem!.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>*? litem = nullable borrow new list_item<T>;

            litem!.prev = self.head;
            litem!.next = null;
            litem!.item = item;
            
            self.tail = litem;
            self.head!.next = litem;
        }
        else {
            list_item<T>*? litem = nullable borrow new list_item<T>;

            litem!.prev = self.tail;
            litem!.next = null;
            litem!.item = item;
            
            self.tail!.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    
    T& item(list<T>* self, int position, T& default_value) 
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>*? it = self.head;
        auto i = 0;
        while(it != null) {
            if(position == i) {
                return it!.item;
            }
            it = it!.next;
            i++;
        };

        return default_value;
    }

    list<T>* insert(list<T>* self, int position, T` item) mutable
    {
        managed item;

        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) 
        {
            if(isheap(T)) {
                self.push_back(clone item);
            }
            else if(is_gc_heap(item)) {
                self.push_back(clone item);
            }
            else {
                self.push_back(dummy_heap item);
            }
            return self;
        }

        if(position == 0) {
            list_item<T>*? litem = nullable borrow new list_item<T>;

            litem!.prev = null;
            litem!.next = self.head;
            litem!.item = item;
            
            self.head!.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            auto litem = nullable borrow new list_item<T>;

            litem!.prev = self.head;
            litem!.next = self.tail;
            litem!.item = item;
            
            self.tail!.prev = litem;
            self.head!.next = litem;

            self.len++;
        }
        else {
            list_item<T>*? it = self.head;
            auto i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>*? litem = nullable borrow new list_item<T>;

                    litem!.prev = it!.prev;
                    litem!.next = it;
                    litem!.item = item;

                    it!.prev!.next = litem;
                    it!.prev = litem;

                    self.len++;
                }

                it = it!.next;
                i++;
            }
        }
        
        return self;
    }

    list<T>* reset(list<T>* self) mutable {
        list_item<T>*? it = self.head;
        while(it != null) {
            if(isheap(T)) {
                delete it!.item;
            }
            auto prev_it = it;
            it = it!.next;
            delete prev_it!;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
        
        return self;
    }

    list<T>* delete(list<T>* self, int head, int tail) mutable
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return self;
        }

        if(head == 0 && tail == self.len) 
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>*? it = self.head;
            auto i = 0;
            while(it != null) {
                if(i < tail) {
                    if(isheap(T)) {
                        delete it!.item;
                    }
                    list_item<T>*? prev_it = it;

                    it = it!.next;
                    i++;

                    delete prev_it!;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head!.prev = null;
                    break;
                }
                else {
                    it = it!.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>*? it = self.head;
            auto i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it!.prev;
                    self.tail!.next = null;
                }

                if(i >= head) {
                    if(isheap(T)) {
                        delete it!.item;
                    }
                    list_item<T>*? prev_it = it;

                    it = it!.next;
                    i++;

                    delete prev_it!;

                    self.len--;
                }
                else {
                    it = it!.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>*? it = self.head;

            list_item<T>*? head_prev_it = null;
            list_item<T>*? tail_it = null;


            auto i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it!.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail) 
                {
                    if(isheap(T)) {
                        delete it!.item;
                    }
                    list_item<T>*? prev_it = it;

                    it = it!.next;
                    i++;

                    delete prev_it!;

                    self.len--;
                }
                else {
                    it = it!.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it!.next = tail_it;
            }
            if(tail_it != null) {
                tail_it!.prev = head_prev_it;
            }
        }
        
        return self;
    }

    list<T>* replace(list<T>* self, int position, T item) mutable
    {
        managed item;

        if(position < 0) {
            position += self.len;
        }

        list_item<T>*? it = self.head;
        auto i = 0;
        while(it != null) {
            if(position == i) {
                if(isheap(T)) {
                    delete it!.item;
                }

                it!.item = item;
                break;
            }
            it = it!.next;
            i++;
        }
        
        return self;
    }

    int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        foreach(it, self) {
            if(it.equals(item)) {
                return it2;
            }
            it2++;
        }

        return default_value;
    }
    
    list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>%* result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>*? it = self.head;
        auto i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                if(is_gc_heap(it!.item)) {
                    result.push_back(clone it!.item);
                }
                else {
                    if(isheap(T)) {
                        result.push_back(clone it!.item);
                    }
                    else if(is_gc_heap(it!.item)) {
                        result.push_back(clone it!.item);
                    }
                    else {
                        result.push_back(dummy_heap it!.item);
                    }
                }
            }
            it = it!.next;
            i++;
        };

        return result;
    }
    
    list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>.initialize();

        list_item<T>*? it = self.tail;
        while(it != null) {
            if(is_gc_heap(it!.item)) {
                result.push_back(clone it!.item);
            }
            else {
                if(isheap(T)) {
                    result.push_back(clone it!.item);
                }
                else {
                    result.push_back(dummy_heap it!.item);
                }
            }
            it = it!.prev;
        };

        return result;
    }

    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>*? it = left.head;
        list_item<T>*? it2= right.head;

        while(true) {
            if(it && it2) {
                if(it!.item == null) {
                    it = it!.next;
                }
                else if(it2!.item == null) {
                    it2 = it2!.next;
                }
                else if(compare(it!.item, it2!.item) <= 0) 
                {
                    if(is_gc_heap(it!.item)) {
                        result.push_back(clone it!.item);
                    }
                    else {
                        if(isheap(T)) {
                            result.push_back(clone it!.item);
                        }
                        else {
                            result.push_back(dummy_heap it!.item);
                        }
                    }

                    it = it!.next;
                }
                else {
                    if(is_gc_heap(it2!.item)) {
                        result.push_back(clone it2!.item);
                    }
                    else {
                        if(isheap(T)) {
                            result.push_back(clone it2!.item);
                        }
                        else {
                            result.push_back(dummy_heap it2!.item);
                        }
                    }


                    it2 = it2!.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(is_gc_heap(it2!.item)) {
                            result.push_back(clone it2!.item);
                        }
                        else {
                            if(isheap(T)) {
                                result.push_back(clone it2!.item);
                            }
                            else {
                                result.push_back(dummy_heap it2!.item);
                            }
                        }

                        it2 = it2!.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(is_gc_heap(it!.item)) {
                            result.push_back(clone it!.item);
                        }
                        else {
                            if(isheap(T)) {
                                result.push_back(clone it!.item);
                            }
                            else {
                                result.push_back(dummy_heap it!.item);
                            }
                        }

                        it = it!.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head!.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>*? it = self.head;

        while(true) {
            if(is_gc_heap(it!.item)) {
                list1.push_back(clone it!.item);
            }
            else {
                if(isheap(T)) {
                    list1.push_back(clone it!.item);
                }
                else {
                    list1.push_back(dummy_heap it!.item);
                }
            }

            if(is_gc_heap(it!.next!.item)) {
                list2.push_back(clone it!.next!.item);
            }
            else {
                if(isheap(T)) {
                    list2.push_back(clone it!.next!.item);
                }
                else {
                    list2.push_back(dummy_heap it!.next!.item);
                }
            }

            if(it!.next!.next == null) {
                break;
            }

            it = it!.next!.next;

            if(it!.next == null) {
                if(is_gc_heap(it!.item)) {
                    list1.push_back(clone it!.item);
                }
                else {
                    if(isheap(T)) {
                        list1.push_back(clone it!.item);
                    }
                    else {
                        list1.push_back(dummy_heap it!.item);
                    }
                }
                break;
            }
        }

        return list1.merge_sort_with_lambda(compare).merge_list_with_lambda( list2.merge_sort_with_lambda(compare), compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% merge_list(list<T>* left, list<T>* right) {
        auto result = new list<T>.initialize();

        list_item<T>*? it = left.head;
        list_item<T>*? it2= right.head;

        while(true) {
            if(it && it2) {
                if(it!.item == null) {
                    it = it!.next;
                }
                else if(it2!.item == null) {
                    it2 = it2!.next;
                }
                else if(it!.item.compare(it2!.item) <= 0) 
                {
                    if(is_gc_heap(it!.item)) {
                        result.push_back(clone it!.item);
                    }
                    else {
                        if(isheap(T)) {
                            result.push_back(clone it!.item);
                        }
                        else {
                            result.push_back(dummy_heap it!.item);
                        }
                    }

                    it = it!.next;
                }
                else {
                    if(is_gc_heap(it2!.item)) {
                        result.push_back(clone it2!.item);
                    }
                    else {
                        if(isheap(T)) {
                            result.push_back(clone it2!.item);
                        }
                        else {
                            result.push_back(dummy_heap it2!.item);
                        }
                    }


                    it2 = it2!.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(is_gc_heap(it2!.item)) {
                            result.push_back(clone it2!.item);
                        }
                        else {
                            if(isheap(T)) {
                                result.push_back(clone it2!.item);
                            }
                            else {
                                result.push_back(dummy_heap it2!.item);
                            }
                        }

                        it2 = it2!.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(is_gc_heap(it!.item)) {
                            result.push_back(clone it!.item);
                        }
                        else {
                            if(isheap(T)) {
                                result.push_back(clone it!.item);
                            }
                            else {
                                result.push_back(dummy_heap it!.item);
                            }
                        }

                        it = it!.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort(list<T>* self) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head!.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>*? it = self.head;

        while(true) {
            if(is_gc_heap(it!.item)) {
                list1.push_back(clone it!.item);
            }
            else {
                if(isheap(T)) {
                    list1.push_back(clone it!.item);
                }
                else {
                    list1.push_back(dummy_heap it!.item);
                }
            }

            if(is_gc_heap(it!.next!.item)) {
                list2.push_back(clone it!.next!.item);
            }
            else {
                if(isheap(T)) {
                    list2.push_back(clone it!.next!.item);
                }
                else {
                    list2.push_back(dummy_heap it!.next!.item);
                }
            }

            if(it!.next!.next == null) {
                break;
            }

            it = it!.next!.next;

            if(it!.next == null) {
                if(is_gc_heap(it!.item)) {
                    list1.push_back(clone it!.item);
                }
                else {
                    if(isheap(T)) {
                        list1.push_back(clone it!.item);
                    }
                    else {
                        list1.push_back(dummy_heap it!.item);
                    }
                }
                break;
            }
        }

        return list1.merge_sort().merge_list( list2.merge_sort());
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort();
    }
    list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T& default_value;
            T& item_before = self.item(0, default_value);

            if(is_gc_heap(item_before)) {
                result.push_back(clone item_before);
            }
            else {
                if(isheap(T)) {
                    result.push_back(clone item_before);
                }
                else {
                    result.push_back(dummy_heap item_before);
                }
            }

            foreach(it, self.sublist(1,-1)) {
                if(!it.equals(item_before)) {
                    if(is_gc_heap(it)) {
                        result.push_back(clone it);
                    }
                    else {
                        if(isheap(T)) {
                            result.push_back(clone it);
                        }
                        else {
                            result.push_back(dummy_heap it);
                        }
                    }
                }

                item_before = it;
            }
        }

        return result;
    }


    bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>*? it = left.head;
        list_item<T>*? it2 = right.head;

        while(it != null) {
            if(!it!.item.equals(it2!.item)) {
                return false;
            }

            it = it!.next;
            it2 = it2!.next;
        }

        return true;
    }

    T& begin(list<T>* self) {
        self.it = self.head;

        if(self.it) {
            return self.it!.item;
        }
        
        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        self.it = self.it!.next;

        if(self.it) {
            return self.it!.item;
        }
        
        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self.it == null;
    }
    
    string join(list<string>* self, char* sep) {
        buffer*% buf = new buffer.initialize();
        
        int n = 0;
        foreach(it , self) {
            buf.append_str(it);
            
            if(n < self.length()-1) {
                buf.append_str(sep);
            }
            
            n++;
        }
        
        return buf.to_string();
    }
}

impl vector<T> 
{
    list<T>*% to_list(vector<T>* self) {
        auto result = new list<T>.initialize();
        
        foreach(it, self) {
            if(is_gc_heap(it)) {
                result.push_back(clone it);
            }
            else {
                if(isheap(T)) {
                    result.push_back(clone it);
                }
                else {
                    result.push_back(dummy_heap it);
                }
            }
        }
        
        return result;
    }
}

struct map<T, T2>
{
    T&* keys;
    bool* item_existance;
    T2&* items;
    int size;
    int len;

    int it;
};

#define MAP_TABLE_DEFAULT_SIZE 128

impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow new T[MAP_TABLE_DEFAULT_SIZE];
        self.items = borrow new T2[MAP_TABLE_DEFAULT_SIZE];
        self.item_existance = borrow new bool[MAP_TABLE_DEFAULT_SIZE];

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;

        self.it = 0;

        return self;
    }

    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items[i];
                }
            }
        }
        delete self.items;

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys[i];
                }
            }
        }
        delete self.keys;

        delete self.item_existance;
    }
    
    immutable map<T, T2>* to_immutable(map<T, T2>* self) {
        return self;
    }
    
    unsigned int get_hash_key(map<T, T2>* self) {
        unsigned int sum = 0;
        foreach(it, self) {
            T2& item = self[it];
            sum += it.get_hash_key();
            sum += item.get_hash_key();
        }
        return sum;
    }
    
    map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right)
    {
        map<T,T2>*% result = new map<T,T2>.initialize();
        
        foreach(it, left) {
            T2& default_value;
            T2& it2 = left.at(it, default_value);
            
            if(is_gc_heap(it) && is_gc_heap(it2)) {
                result.insert(clone it, clone it2);
            }
            else if(is_gc_heap(it) && !is_gc_heap(it2)) {
                result.insert(clone it, dummy_heap it2);
            }
            else if(!is_gc_heap(it) && is_gc_heap(it2)) {
                result.insert(dummy_heap it, clone it2);
            }
            else {
                if(isheap(T)) {
                    if(isheap(T2)) {
                        result.insert(clone it, clone it2);
                    }
                    else {
                        result.insert(clone it, dummy_heap it2);
                    }
                }
                else {
                    if(isheap(T2)) {
                        result.insert(dummy_heap it, clone it2);
                    }
                    else {
                        result.insert(dummy_heap it, dummy_heap it2);
                    }
                }
            }
        }
        foreach(it, right) {
            T2& default_value;
            T2& it2 = right.at(it, default_value);
            
            if(is_gc_heap(it) && is_gc_heap(it2)) {
                result.insert(clone it, clone it2);
            }
            else if(is_gc_heap(it) && !is_gc_heap(it2)) {
                result.insert(clone it, dummy_heap it2);
            }
            else if(!is_gc_heap(it) && is_gc_heap(it2)) {
                result.insert(dummy_heap it, clone it2);
            }
            else if(isheap(T)) {
                if(isheap(T2)) {
                    result.insert(clone it, clone it2);
                }
                else {
                    result.insert(clone it, dummy_heap it2);
                }
            }
            else {
                if(isheap(T2)) {
                    result.insert(dummy_heap it, clone it2);
                }
                else {
                    result.insert(dummy_heap it, dummy_heap it2);
                }
            }
        }
        
        return result;
    }
    
    map<T,T2>*% operator_mult(map<T,T2>* self, int n)
    {
        map<T,T2>*% result = new map<T,T2>.initialize();
        
        for(int i=0; i<n; i++) {
            foreach(it, self) {
                T2& default_value;
                T2& it2 = self.at(it, default_value);
                
                if(is_gc_heap(it) && is_gc_heap(it2)) {
                    result.insert(clone it, clone it2);
                }
                else if(is_gc_heap(it) && !is_gc_heap(it2)) {
                    result.insert(clone it, dummy_heap it2);
                }
                else if(!is_gc_heap(it) && is_gc_heap(it2)) {
                    result.insert(dummy_heap it, clone it2);
                }
                else if(isheap(T)) {
                    if(isheap(T2)) {
                        result.insert(clone it, clone it2);
                    }
                    else {
                        result.insert(clone it, dummy_heap it2);
                    }
                }
                else {
                    if(isheap(T2)) {
                        result.insert(dummy_heap it, clone it2);
                    }
                    else {
                        result.insert(dummy_heap it, dummy_heap it2);
                    }
                }
            }
        }
        
        return result;
    }
    
    string to_string(map<T,T2>* self)
    {
        buffer*% result = new buffer.initialize();
        
        result.append_str("[");
        
        int i = 0;
        foreach(it, self) {
            T2& item = self[it];
            
            result.append_str(it.to_string());
            result.append_str(":");
            result.append_str(item.to_string());
            
            if(i != self.length()-1) {
                result.append_str(",");
            }
            
            i++;
        }
        result.append_str("]");
        
        return result.to_string();
    }
    
    bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !left.equals(right);
    }
    
    T2& operator_load_element(map<T, T2>* self, T& key) {
        T2& default_value;
        memset(&default_value, 0, sizeof(T2));
        
        return self.at(key, default_value);
    }
    
    void operator_store_element(map<T, T2>* self, T key, T2 item) mutable {
        self.insert(key, item);
    }
    
    T2& at(map<T, T2>* self, T& key, T2& default_value) 
    {
        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    return self.items[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    
    void rehash(map<T,T2>* self) {
        int size = self.size * 3;
        T&* keys = borrow new T[size];
        T2&* items = borrow new T2[size];
        bool* item_existance = borrow new bool[size];

        int len = 0;

        for(auto it = self.begin(); !self.end(); it = self.next()) {
            T2& default_value;
            T2& it2 = self.at(it, default_value);
            int hash = it.get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        fprintf(stderr, "unexpected error in map.rehash(1)\n");
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys[n] = it;
                    T2& default_value;
                    items[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        delete self.items;
        delete self.item_existance;
        delete self.keys;

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }

    map<T,T2>* insert(map<T,T2>* self, T` key, T2` item) mutable
    {
        managed key;
        managed item;

        if(self.len*2 >= self.size) {
            self.rehash();
        }

        int hash = key.get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key)) 
                {
                    if(isheap(T)) {
                        delete dummy_heap self.keys[it];
                    }
                    if(isheap(T2)) {
                        delete dummy_heap self.items[it];
                    }
                    self.keys[it] = key;
                    self.items[it] = item;

                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    fprintf(stderr, "unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                self.keys[it] = key;
                self.items[it] = item;

                self.len++;

                break;
            }
        }
        
        return self;
    }

    map<T, T2>*% clone(map<T, T2>* self)
    {
        auto result = new map<T,T2>.initialize();

        for(auto it = self.begin(); !self.end(); it = self.next()) {
            T2& default_value;
            auto it2 = self.at(it, default_value);

            if(is_gc_heap(it) && is_gc_heap(it2)) {
                result.insert(clone it, clone it2);
            }
            else if(is_gc_heap(it) && !is_gc_heap(it2)) {
                result.insert(clone it, dummy_heap it2);
            }
            else if(!is_gc_heap(it) && is_gc_heap(it2)) {
                result.insert(dummy_heap it, clone it2);
            }
            else if(isheap(T)) {
                if(isheap(T2)) {
                    result.insert(clone it, clone it2);
                }
                else {
                    result.insert(clone it, dummy_heap it2);
                }
            }
            else {
                if(isheap(T2)) {
                    result.insert(dummy_heap it, clone it2);
                }
                else {
                    result.insert(dummy_heap it, dummy_heap it2);
                }
            }
        }

        return result;
    }

    bool find(map<T, T2>* self, T& key) {
        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }
    
    list<T>*% keys(map<T, T2>* self) {
        auto result = new list<T>.initialize();
        
        foreach(it, self) {
            if(is_gc_heap(it)) {
                result.push_back(clone it);
            }
            else if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap it);
            }
        }
        
        return result;
    }
    
    list<T>*% values(map<T, T2>* self) {
        auto result = new list<T>.initialize();
        
        foreach(it, self) {
            T2& default_value;
            memset(&default_value, 0, sizeof(T2));
        
            auto it2 = self.at(it, default_value);
            
            if(is_gc_heap(it2)) {
                result.push_back(clone it2);
            }
            else if(isheap(T2)) {
                result.push_back(clone it2);
            }
            else {
                result.push_back(dummy_heap it2);
            }
        }
        
        return result;
    }

    bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        bool result = true;
        foreach(it, left) {
            T2& default_value;
            T2& it2 = left.at(it, default_value);

            if(right.find(it)) {
                T2& default_value;
                T2& item = right.at(it, default_value);
                if(!it2.equals(item)) {
                    result = false;
                }
            }
            else {
                result = false;
            }
        }

        return result;
    }

    int length(map<T, T2>* self) {
        return self.len;
    }
    
    T& begin(map<T, T2>* self) {
        self.it = 0;
        while(self.it < self.size) {
            if(self.item_existance[self.it]) {
                return self.keys[self.it++];
            }
            self.it++;
        }
        
        T& result;
        memset(&result, 0, sizeof(T));

        return result;
    }

    T& next(map<T, T2>* self) {
        while(self.it < self.size) {
            if(self.item_existance[self.it]) {
                return self.keys[self.it++];
            }
            self.it++;
        }
        
        T& result;
        memset(&result, 0, sizeof(T));

        return result;
    }

    bool end(map<T, T2>* self) {
        int count = 0;
        for(int i=self.it-1; i<self.size; i++) {
            if(self.item_existance[i]) {
                count ++;
            }
        }

        if(count == 0) {
            return true;
        }
        else {
            return false;
        }
        
        return true;
    }
}

struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T value)
    {
        self.v1 = value;
        
        return self;
    }
    tuple1<T>*% clone(tuple1<T>* self)
    {
        tuple1<T>*% result = new tuple1<T>;

        if(is_gc_heap(self.v1)) {
            result.v1 = clone self.v1;
        }
        else if(isheap(T)) {
            result.v1 = clone self.v1;
        }
        else {
            result.v1 = self.v1;
        }

        return result;
    }

    void finalize(tuple1<T>* self)
    {
        if(isheap(T)) {
            delete self.v1;
        }
    }
    
    T& item0(tuple1<T>* self) {
        return self.v1;
    }
    
    immutable tuple1<T>* to_immutable(tuple1<T>* self) {
        return self;
    }

    bool equals(tuple1<T>* left, tuple1<T>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }

        return true;
    }
    
    bool operator_equals(tuple1<T>* left, tuple1<T>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.equals(right);
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T,T2>*% self, T value, T2 value2)
    {
        self.v1 = value;
        self.v2 = value2;
        
        return self;
    }

    void finalize(tuple2<T, T2>* self)
    {
        if(isheap(T)) {
            delete self.v1;
        }
        if(isheap(T2)) {
            delete self.v2;
        }
    }
    
    immutable tuple2<T,T2>* to_immutable(tuple2<T, T2>* self) {
        return self;
    }
    tuple2<T,T2>*% clone(tuple2<T, T2>* self)
    {
        tuple2<T,T2>*% result = new tuple2<T, T2>;

        if(is_gc_heap(self.v1)) {
            result.v1 = clone self.v1;
        }
        else if(isheap(T)) {
            result.v1 = clone self.v1;
        }
        else {
            result.v1 = self.v1;
        }
        
        if(is_gc_heap(self.v2)) {
            result.v2 = clone self.v2;
        }
        else if(isheap(T2)) {
            result.v2 = clone self.v2;
        }
        else {
            result.v2 = self.v2;
        }

        return result;
    }
    
    T& item0(tuple2<T, T2>* self) {
        return self.v1;
    }
    
    T2& item1(tuple2<T, T2>* self) {
        return self.v2;
    }

    bool equals(tuple2<T, T2>* left, tuple2<T, T2>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }

        return true;
    }
    
    bool operator_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return !left.equals(right);
    }
}

struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T,T2, T3>*% self, T value, T2 value2, T3 value3)
    {
        self.v1 = value;
        self.v2 = value2;
        self.v3 = value3;
        
        return self;
    }
    
    immutable tuple3<T,T2,T3>* to_immutable(tuple3<T, T2, T3>* self) {
        return self;
    }
    tuple3<T,T2, T3>*% clone(tuple3<T, T2, T3>* self)
    {
        tuple3<T,T2,T3>*% result = new tuple3<T, T2, T3>;

        if(is_gc_heap(self.v1)) {
            result.v1 = clone self.v1;
        }
        else if(isheap(T)) {
            result.v1 = clone self.v1;
        }
        else {
            result.v1 = self.v1;
        }
        
        if(is_gc_heap(self.v2)) {
            result.v2 = clone self.v2;
        }
        else if(isheap(T2)) {
            result.v2 = clone self.v2;
        }
        else {
            result.v2 = self.v2;
        }
        
        if(is_gc_heap(self.v3)) {
            result.v3 = clone self.v3;
        }
        else if(isheap(T3)) {
            result.v3 = clone self.v3;
        }
        else {
            result.v3 = self.v3;
        }

        return result;
    }

    void finalize(tuple3<T, T2, T3>* self)
    {
        if(isheap(T)) {
            delete self.v1;
        }
        if(isheap(T2)) {
            delete self.v2;
        }
        if(isheap(T3)) {
            delete self.v3;
        }
    }

    bool equals(tuple3<T, T2, T3>* left, tuple3<T, T2, T3>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }

        return true;
    }
    
    T& item0(tuple3<T, T2, T3>* self) {
        return self.v1;
    }
    
    T2& item1(tuple3<T, T2, T3>* self) {
        return self.v2;
    }
    
    T3& item2(tuple3<T, T2, T3>* self) {
        return self.v3;
    }
    
    bool operator_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return !left.equals(right);
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T,T2, T3, T4>*% self, T value, T2 value2, T3 value3, T4 value4)
    {
        self.v1 = value;
        self.v2 = value2;
        self.v3 = value3;
        self.v4 = value4;
        
        return self;
    }
    
    immutable tuple4<T,T2,T3,T4>* to_immutable(tuple4<T, T2, T3, T4>* self) {
        return self;
    }
    tuple4<T,T2, T3, T4>*% clone(tuple4<T, T2, T3, T4>* self)
    {
        tuple4<T,T2,T3,T4>*% result = new tuple4<T, T2, T3, T4>;

        if(is_gc_heap(self.v1)) {
            result.v1 = clone self.v1;
        }
        else if(isheap(T)) {
            result.v1 = clone self.v1;
        }
        else {
            result.v1 = self.v1;
        }
        
        if(is_gc_heap(self.v2)) {
            result.v2 = clone self.v2;
        }
        else if(isheap(T2)) {
            result.v2 = clone self.v2;
        }
        else {
            result.v2 = self.v2;
        }
        
        if(is_gc_heap(self.v3)) {
            result.v3 = clone self.v3;
        }
        else if(isheap(T3)) {
            result.v3 = clone self.v3;
        }
        else {
            result.v3 = self.v3;
        }
        
        if(is_gc_heap(self.v4)) {
            result.v4 = clone self.v4;
        }
        else if(isheap(T4)) {
            result.v4 = clone self.v4;
        }
        else {
            result.v4 = self.v4;
        }


        return result;
    }

    void finalize(tuple4<T, T2, T3, T4>* self)
    {
        if(isheap(T)) {
            delete self.v1;
        }
        if(isheap(T2)) {
            delete self.v2;
        }
        if(isheap(T3)) {
            delete self.v3;
        }
        if(isheap(T4)) {
            delete self.v4;
        }
    }

    bool equals(tuple4<T, T2, T3, T4>* left, tuple4<T, T2, T3, T4>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }
        if(!left.v4.equals(right.v4)) {
            return false;
        }

        return true;
    }
    
    T& item0(tuple4<T, T2, T3, T4>* self) {
        return self.v1;
    }
    
    T2& item1(tuple4<T, T2, T3, T4>* self) {
        return self.v2;
    }
    
    T3& item2(tuple4<T, T2, T3, T4>* self) {
        return self.v3;
    }
    
    T4& item3(tuple4<T, T2, T3, T4>* self) {
        return self.v4;
    }
    
    bool operator_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return !left.equals(right);
    }
}

struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T,T2, T3, T4, T5>*% self, T value, T2 value2, T3 value3, T4 value4, T5 value5)
    {
        self.v1 = value;
        self.v2 = value2;
        self.v3 = value3;
        self.v4 = value4;
        self.v5 = value5;
        
        return self;
    }
    immutable tuple5<T,T2,T3,T4,T5>* to_immutable(tuple5<T, T2, T3, T4, T5>* self) {
        return self;
    }
    tuple5<T,T2, T3, T4, T5>*% clone(tuple5<T, T2, T3, T4, T5>* self)
    {
        tuple5<T,T2,T3,T4,T5>*% result = new tuple5<T, T2, T3, T4, T5>;

        if(is_gc_heap(self.v1)) {
            result.v1 = clone self.v1;
        }
        else if(isheap(T)) {
            result.v1 = clone self.v1;
        }
        else {
            result.v1 = self.v1;
        }
        
        if(is_gc_heap(self.v2)) {
            result.v2 = clone self.v2;
        }
        else if(isheap(T2)) {
            result.v2 = clone self.v2;
        }
        else {
            result.v2 = self.v2;
        }
        
        if(is_gc_heap(self.v3)) {
            result.v3 = clone self.v3;
        }
        else if(isheap(T3)) {
            result.v3 = clone self.v3;
        }
        else {
            result.v3 = self.v3;
        }
        
        if(is_gc_heap(self.v4)) {
            result.v4 = clone self.v4;
        }
        else if(isheap(T4)) {
            result.v4 = clone self.v4;
        }
        else {
            result.v4 = self.v4;
        }
        
        if(is_gc_heap(self.v5)) {
            result.v5 = clone self.v5;
        }
        else if(isheap(T5)) {
            result.v5 = clone self.v5;
        }
        else {
            result.v5 = self.v5;
        }

        return result;
    }

    bool equals(tuple5<T, T2, T3, T4, T5>* left, tuple5<T, T2, T3, T4, T5>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }
        if(!left.v4.equals(right.v4)) {
            return false;
        }
        if(!left.v5.equals(right.v5)) {
            return false;
        }

        return true;
    }
    
    T& item0(tuple5<T, T2, T3, T4, T5>* self) {
        return self.v1;
    }
    
    T2& item1(tuple5<T, T2, T3, T4, T5>* self) {
        return self.v2;
    }
    
    T3& item2(tuple5<T, T2, T3, T4, T5>* self) {
        return self.v3;
    }
    
    T4& item3(tuple5<T, T2, T3, T4, T5>* self) {
        return self.v4;
    }
    
    T5& item4(tuple5<T, T2, T3, T4, T5>* self) {
        return self.v5;
    }
    
    bool operator_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.equals(right);
    }
}

struct tuple6<T, T2, T3, T4, T5, T6>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
    T6 v6;
};

impl tuple6 <T, T2, T3, T4, T5, T6>
{
    tuple6<T, T2, T3, T4, T5, T6>*% initialize(tuple6<T,T2, T3, T4, T5, T6>*% self, T value, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6)
    {
        self.v1 = value;
        self.v2 = value2;
        self.v3 = value3;
        self.v4 = value4;
        self.v5 = value5;
        self.v6 = value6;
        
        return self;
    }
    immutable tuple6<T,T2,T3,T4,T5,T6>* to_immutable(tuple6<T, T2, T3, T4, T5,T6>* self) {
        return self;
    }
    tuple6<T,T2, T3, T4, T5, T6>*% clone(tuple6<T, T2, T3, T4, T5, T6>* self)
    {
        tuple6<T,T2,T3,T4,T5, T6>*% result = new tuple6<T, T2, T3, T4, T5, T6>;

        if(is_gc_heap(self.v1)) {
            result.v1 = clone self.v1;
        }
        else if(isheap(T)) {
            result.v1 = clone self.v1;
        }
        else {
            result.v1 = self.v1;
        }
        
        if(is_gc_heap(self.v2)) {
            result.v2 = clone self.v2;
        }
        else if(isheap(T2)) {
            result.v2 = clone self.v2;
        }
        else {
            result.v2 = self.v2;
        }
        
        if(is_gc_heap(self.v3)) {
            result.v3 = clone self.v3;
        }
        else if(isheap(T3)) {
            result.v3 = clone self.v3;
        }
        else {
            result.v3 = self.v3;
        }
        
        if(is_gc_heap(self.v4)) {
            result.v4 = clone self.v4;
        }
        else if(isheap(T4)) {
            result.v4 = clone self.v4;
        }
        else {
            result.v4 = self.v4;
        }
        
        if(is_gc_heap(self.v5)) {
            result.v5 = clone self.v5;
        }
        else if(isheap(T5)) {
            result.v5 = clone self.v5;
        }
        else {
            result.v5 = self.v5;
        }
        
        if(is_gc_heap(self.v6)) {
            result.v6 = clone self.v6;
        }
        else if(isheap(T6)) {
            result.v6 = clone self.v6;
        }
        else {
            result.v6 = self.v6;
        }

        return result;
    }

    bool equals(tuple6<T, T2, T3, T4, T5, T6>* left, tuple6<T, T2, T3, T4, T5, T6>* right)
    {
        if(!left.v1.equals(right.v1)) {
            return false;
        }
        if(!left.v2.equals(right.v2)) {
            return false;
        }
        if(!left.v3.equals(right.v3)) {
            return false;
        }
        if(!left.v4.equals(right.v4)) {
            return false;
        }
        if(!left.v5.equals(right.v5)) {
            return false;
        }
        if(!left.v6.equals(right.v6)) {
            return false;
        }

        return true;
    }
    
    T& item0(tuple6<T, T2, T3, T4, T5, T6>* self) {
        return self.v1;
    }
    
    T2& item1(tuple6<T, T2, T3, T4, T5, T6>* self) {
        return self.v2;
    }
    
    T3& item2(tuple6<T, T2, T3, T4, T5, T6>* self) {
        return self.v3;
    }
    
    T4& item3(tuple6<T, T2, T3, T4, T5, T6>* self) {
        return self.v4;
    }
    
    T5& item4(tuple6<T, T2, T3, T4, T5, T6>* self) {
        return self.v5;
    }
    
    T6& item5(tuple6<T, T2, T3, T4, T5, T6>* self) {
        return self.v6;
    }
    
    bool operator_equals(tuple6<T,T2,T3,T4,T5, T6>* left, tuple6<T,T2,T3,T4,T5, T6>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(tuple6<T,T2,T3,T4,T5, T6>* left, tuple6<T,T2,T3,T4,T5, T6>* right) {
        return !left.equals(right);
    }
}

struct buffer {
    char*% buf;
    int len;
    int size;
};

impl buffer*
{
    buffer*% initialize(buffer*% self);
    void finalize(buffer* self);
    
    buffer*% clone(buffer* self);
    
    int length(buffer* self);
    
    void reset(buffer* self);
    
    inline immutable buffer* to_immutable(buffer* self) {
        return self;
    }
    
    buffer* append(buffer* self, char* mem, size_t size) mutable;
    buffer* append_char(buffer* self, char c) mutable;
    buffer* append_str(buffer* self, char* str) mutable;
    buffer* append_nullterminated_str(buffer* self, char* str) mutable;
    string to_string(buffer* self);
    buffer* append_int(buffer* self, int value) mutable;
    buffer* append_long(buffer* self, long value) mutable;
    buffer* append_short(buffer* self, short value) mutable;
    void alignment(buffer* self) mutable;
    int compare(buffer* left, buffer* right);
}

struct smart_pointer<T> {
    buffer*% memory;
    T* p;
};

inline smart_pointer<char>*% buffer*::to_pointer(buffer* self)
{
    auto result = new smart_pointer<char>;
    
    result.memory = clone self;
    result.p = result.memory.buf;
    
    return result;
}

impl smart_pointer<T>
{
    smart_pointer<T>*% initialize(smart_pointer<T>*% self, void* memory, int size)
    {
        self.memory = new buffer.initialize();
        self.memory.append(memory, sizeof(T)*size);
        
        self.p = (T*)self.memory.buf;
        
        return self;
    }
    
    smart_pointer<T>* operator_add(smart_pointer<T>* self, int value)
    {
        using unsafe;
        self.p+=value;
        
        if(self.p > self.memory.buf + self.memory.len) {
            fprintf(stderr, "%s %d: out of range of smart pointer\n", __caller_sname__, __caller_sline__);
            exit(1);
        }
        
        return self;
    }
    
    smart_pointer<T>* operator_sub(smart_pointer<T>* self, int value)
    {
        using unsafe;
        self.p-=value;
        
        if(self.p < self.memory.buf) {
            fprintf(stderr, "%s %d: out of range of smart pointer\n", __caller_sname__, __caller_sline__);
            exit(1);
        }
        
        return self;
    }
    
    T operator_derefference(smart_pointer<T>* self)
    {
        using unsafe;
        T* p = self.p;
        return *p;
    }
    
    int as_int(smart_pointer<T>* self)
    {
        using unsafe;
        int p = *(int*)self.p;
        return *p;
    }
    
    short as_short(smart_pointer<T>* self)
    {
        using unsafe;
        short p = *(short*)self.p;
        return *p;
    }
    
    long as_long(smart_pointer<T>* self)
    {
        using unsafe;
        long p = *(long*)self.p;
        return *p;
    }
    
    float as_float(smart_pointer<T>* self)
    {
        using unsafe;
        float p = *(float*)self.p;
        return *p;
    }
    
    double as_double(smart_pointer<T>* self)
    {
        using unsafe;
        double p = *(double*)self.p;
        return *p;
    }
    
    bool as_bool(smart_pointer<T>* self)
    {
        using unsafe;
        bool p = *(bool*)self.p;
        return *p;
    }
    
    string to_string(smart_pointer<T>* self)
    {
        return self.memory.to_string();
    }
}


buffer*% string::to_buffer(char* self);
inline buffer*% char*::to_buffer(char* self) {
    return string_to_buffer(self);
}


int int::except(int self, void* parent, void (*block)(void* parent));
bool bool::except(bool self, void* parent, void (*block)(void* parent));
bool bool::if(bool self, void* parent, void (*block)(void* parent));
void int::times(int self, void* parent, void (*block)(void* parent));

typedef wchar_t*% wstring;

int wchar_t*::compare(wchar_t* left, wchar_t* right);
inline int wstring::compare(wchar_t* left, wchar_t* right) {
    return wchar_tp_compare(left, right);
}

int char*::compare(char* left, char* right);
inline int string::compare(char* left, char* right) {
    return charp_compare(left, right);
}



impl list<T>
{
    list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
    {
        auto result = new list<T>.initialize();

        list_item<T>?* it = self.head;
        while(it != null) {
            if(block(parent, it!.item)) {
                if(is_gc_heap(it!.item)) {
                    result.push_back(clone it!.item);
                }
                else if(isheap(T)) {
                    result.push_back(clone it!.item);
                }
                else {
                    result.push_back(dummy_heap it!.item);
                }
            }

            it = it!.next;
        }

        return result;
    } 
    list<T>* each(list<T>* self, void* parent, void (*block_)(void*, T&,int,bool*)) {
        list_item<T>?* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block_(parent, it!.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it!.next;
            i++;
        }

        return self;
    }
    template <R> list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>?* it = self.head;
        while(it != null) {
            result.push_back(block(parent, it!.item));

            it = it!.next;
        }

        return result;
    }
}

bool xiswalpha(wchar_t c);
bool xiswblank(wchar_t c);
bool xiswdigit(wchar_t c);
bool xiswalnum(wchar_t c);
bool xiswascii(wchar_t c);
bool xisalpha(char c);
bool xisblank(char c);
bool xisdigit(char c);
bool xisascii(char c);
bool xisalnum(char c);

string xbasename(char* path);
string xextname(char* path);
string xrealpath(char* path);

void come_fd_zero(fd_set* fds);
void come_fd_set(int fd, fd_set* fds);
int come_fd_isset(int fd, fd_set* fds);
void come_gc_init();

struct regex_struct 
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

typedef regex_struct*% nregex;

regex_struct*% regex_struct*::clone(regex_struct* reg);
nregex nregex::clone(regex_struct* reg);
void regex_struct*::finalize(regex_struct* reg);
void nregex::finalize(regex_struct* reg);;

regex_struct*% regex(char* str, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);

bool char*::match(char* self, regex_struct* reg);
inline bool string::match(char* self, regex_struct* reg)
{
    return charp_match(self, reg);
}

int char*::index(char* str, char* search_str, int default_value);
inline int string::index(char* str, char* search_str, int default_value)
{
    return charp_index(str, search_str, default_value);
}


int char*::index_regex(char* self, regex_struct* reg, int default_value);
inline int string::index_regex(char* self, regex_struct* reg, int default_value)
{
    return charp_index_regex(self, reg, default_value);
}

char* char*::replace(char* self, int index, char c);
inline char* string::replace(char* self, int index, char c)
{
    return charp_replace(self, index, c);
}

string char*::multiply(char* str, int n);
inline string string::multiply(char* str, int n)
{
    return charp_multiply(str, n);
}

string char*::sub(char* self, regex_struct* reg, char* replace);
inline string string::sub(char* self, regex_struct* reg, char* replace)
{
    return charp_sub(self, reg, replace);
}


list<string>*% char*::scan(char* self, regex_struct* reg);
inline list<string>*% string::scan(char* self, regex_struct* reg)
{
    return charp_scan(self, reg);
}


list<string>*% char*::split(char* self, regex_struct* reg);
inline list<string>*% string::split(char* self, regex_struct* reg)
{
    return charp_split(self, reg);
}

list<string>*% char*::split_char(char* self, char c) ;
inline list<string>*% string::split_char(char* self, char c) 
{
    return charp_split_char(self, c);
}

regex_struct*% char*::to_regex(char* self) ;
inline regex_struct*% string::to_regex(char* self) 
{
    return charp_to_regex(self);
}

string char*::printable(char* str);
inline string string::printable(char* str)
{
    return charp_printable(str);
}

char* char*::delete(char* str, int head, int tail) ;
inline char* string::delete(char* str, int head, int tail) 
{
    return charp_delete(str, head, tail);
}

string wchar_t*::to_string(wchar_t* wstr);
inline string wstring::to_string(wchar_t* wstr) 
{
    return wchar_tp_to_string(wstr);
}

wstring wstring(char* str);

wstring char*::to_wstring(char* str);
inline wstring string::to_wstring(char* str)
{
    return charp_to_wstring(str);
}

wstring wchar_t*::substring(wchar_t* str, int head, int tail);
inline wstring wstring::substring(wchar_t* str, int head, int tail)
{
    return wchar_tp_substring(str, head, tail);
}


int wchar_t*::length(wchar_t* str);
inline int wstring::length(wchar_t* str)
{
    return wchar_tp_length(str);
}

wchar_t* wchar_t*::delete(wchar_t* str, int head, int tail) ;
inline wchar_t* wstring::delete(wchar_t* str, int head, int tail) 
{
    return wchar_tp_delete(str, head, tail);
}

int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value);
inline int wstring::index(wchar_t* str, wchar_t* search_str, int default_value)
{
    return wchar_tp_index(str, search_str, default_value);
}

int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value);
inline int wstring::rindex(wchar_t* str, wchar_t* search_str, int default_value)
{
    return wchar_tp_rindex(str, search_str, default_value);
}

wstring wchar_t*::reverse(whar_t* str) ;
inline wstring wtring::reverse(whar_t* str) 
{
    return wchar_tp_reverse(str);
}

wstring wchar_t*::multiply(wchar_t* str, int n);
inline wstring wstring::multiply(wchar_t* str, int n)
{
    return wchar_tp_multiply(str, n);
}

wstring wchar_t*::printable(wchar_t* str);
inline wstring wstring::printable(wchar_t* str)
{
    return wchar_tp_printable(str);
}

regex_struct*% char*::to_regex_flags(char* self, bool global, bool ignore_case);

inline regex_struct*% string::to_regex_flags(char* self, bool global, bool ignore_case)
{
    return charp_to_regex_flags(self, global, ignore_case);
}

list<string>*% char*::split_str(char* self, char* str);

inline list<string>*% string::split_str(char* self, char* str)
{
    return charp_split_str(self, str);
}


list<string>*% char*::split_maxsplit(char* self, regex_struct* reg, int maxsplit);

inline list<string>*% string::split_maxsplit(char* self, regex_struct* reg, int maxsplit)
{
    return charp_split_maxsplit(self, reg, maxsplit);
}

char* char*::delete(char* str, int head, int tail);

inline char* string::delete(char* str, int head, int tail)
{
    return charp_delete(str, head, tail);
}

int char*::index_count(char* str, char* search_str, int count, int default_value);

inline int string::index_count(char* str, char* search_str, int count, int default_value)
{
    return charp_index_count(str, search_str, count, default_value);
}

int char*::index_regex_count(char* self, regex_struct* reg, int count, int default_value);

inline int string::index_regex_count(char* self, regex_struct* reg, int count, int default_value)
{
    return charp_index_regex_count(self, reg, count, default_value);
}

int char*::rindex(char* str, char* search_str, int default_value);

inline int string::rindex(char* str, char* search_str, int default_value)
{
    return charp_rindex(str, search_str, default_value);
}

int char*::rindex_regex(char* self, regex_struct* reg, int default_value);

inline int string::rindex_regex(char* self, regex_struct* reg, int default_value)
{
    return charp_rindex_regex(self, reg, default_value);
}

int char*::rindex_count(char* str, char* search_str, int count, int default_value);

inline int string::rindex_count(char* str, char* search_str, int count, int default_value)
{
    return charp_rindex_count(str, search_str, count, default_value);
}

int char*::rindex_regex_count(char* self, regex_struct* reg, int count, int default_value);

inline int string::rindex_regex_count(char* self, regex_struct* reg, int count, int default_value)
{
    return charp_rindex_regex_count(self, reg, count, default_value);
}

bool char*::match_count(char* self, regex_struct* reg, int count);

inline bool string::match_count(char* self, regex_struct* reg, int count)
{
    return charp_match_count(self, reg, count);
}

string char*::sub_count(char* self, regex_struct* reg, char* replace, int count);

inline string string::sub_count(char* self, regex_struct* reg, char* replace, int count)
{
    return charp_sub_count(self, reg, replace, count);
}

string char*::sub_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));

inline string string::sub_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return charp_sub_block(self, reg, parent, block);
}


string char*::sub_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));


inline string string::sub_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return charp_sub_block_count(self, reg, count, parent, block);
}

list<string>*% string::scan_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));

inline list<string>*% char*::scan_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return string_scan_block(self, reg, parent, block);
}

list<string>*% char*::scan_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));

inline list<string>*% string::scan_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return charp_scan_block_count(self, reg, count ,parent, block);
}

list<string>*% char*::split_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));

inline list<string>*% string::split_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return charp_split_block(self, reg, parent, block);
}

list<string>*% char*::split_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));

inline list<string>*% string::split_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return charp_split_block_count(self, reg, count, parent, block);
}

bool regex_struct*::equals(regex_struct* left, regex_struct* right);

inline bool nregex::equals(regex_struct* left, regex_struct* right) {
    return regex_structp_equals(left, right);
}

inline bool regex_struct::equals(regex_struct* left, regex_struct* right) {
    return regex_structp_equals(&left, &right);
}


list<string>*% char*::scan_group_strings(char* self, regex_struct* reg, list<string>* group_strings, int* num_group_string_in_regex);

inline list<string>*% string::scan_group_strings(char* self, regex_struct* reg, list<string>* group_strings, int* num_group_string_in_regex)
{
    return charp_scan_group_strings(self, reg, group_strings, num_group_string_in_regex);
}

list<string>*% FILE::readlines(FILE* f);
inline list<string>*% FILE*::readlines(FILE* f) {
    return FILE_readlines(f);
}
string FILE::read(FILE* f);
inline string FILE*::read(FILE* f) {
    return FILE_read(f);
}
FILE* FILE::fprintf(FILE* f, const char* msg, ...);
FILE* FILE*::fprintf(FILE* f, const char* msg, ...);
void FILE::fclose(FILE* f);
inline void FILE*::fclose(FILE* f) {
    FILE_fclose(f);
}
void fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f));

inline string string::read(char* file_name) {
    FILE* f = fopen(file_name, "r");
    
    string result = f.read();
    
    f.fclose()
    
    return result;
}

inline string char*::read(char* file_name) {
    return string_read(file_name);
}

inline char* string::write(char* self, char* file_name, bool append=false) {
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }
    
    f.fprintf("%s", self);
    
    f.fclose()
    
    return self;
}

inline char* char*::write(char* self, char* file_name, bool append=false) {
    return string_write(self, file_name, append);
}

char* char*::puts(char* self);
inline char* string::puts(char* self) {
    return charp_puts(self);
}

inline int int::puts(int self)
{
    printf("%d\n", self);
    return self;
}

inline int int::print(int self)
{
    printf("%d", self);
    return self;
}

char* char*::print(char* self);

inline char* string::print(char* self) {
    return charp_print(self);
}

string char*::strip(char* self);

inline string string::strip(char* self) {
    return charp_strip(self);
}


char* char*::printf(char* self, const char* msg);

inline char* string::printf(char* self, const char* msg) {
    return charp_printf(self, msg);
}

int int::printf(int self, const char* msg);
char char::putc(char self);

unsigned int wchar_t::get_hash_key(wchar_t value);
bool wchar_t::equals(wchar_t left, wchar_t right);

unsigned int wchar_t*::get_hash_key(wchar_t* value);

inline unsigned int wstring::get_hash_key(wchar_t* value) {
    return wchar_tp_get_hash_key(value);
}

unsigned int wchar_t*::get_hash_key(wchar_t* value);

inline unsigned int wstring::get_hash_key(wchar_t* value) {
    return wchar_tp_get_hash_key(value);
}

bool wchar_t*::equals(wchar_t* left, wchar_t* right);

inline bool wstring::equals(wchar_t* left, wchar_t* right)
{
    return wchar_tp_equals(left, right);
}

unsigned int regex_struct*::get_hash_key(regex_struct* self);

inline unsigned int nregex::get_hash_key(regex_struct* self) {
    return regex_structp_get_hash_key(self);
}

inline unsigned int regex_struct::get_hash_key(regex_struct self)
{
    return regex_structp_get_hash_key(&self);
}



bool char*::match_group_strings(char* self, regex_struct* reg, int count, list<string>* group_strings);
inline bool string::match_group_strings(char* self, regex_struct* reg, int count, list<string>* group_strings) {
    return charp_match_group_string(self, reg, count, group_strings);
}

#define OVEC_MAX 16

struct match_object
{
    int num;
    int start[OVEC_MAX];
    int end[OVEC_MAX];
};

inline string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

void unwrap_exception(char* sname, int sline);

string char*::operator_mult(char* str, int n);
string string::operator_mult(char* str, int n);
wstring wchar_t*::operator_mult(wchar_t* str, int n);
wstring wstring::operator_mult(wchar_t* str, int n);
bool char*::operator_equals(char* left, char* right);
bool string::operator_equals(char* left, char* right);
bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right);
bool wstring::operator_equals(wchar_t* left, wchar_t* right);

string char*::operator_add(char* left, char* right);
string string::operator_add(char* left, char* right);
wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right);
wstring wstring::operator_add(wchar_t* left, wchar_t* right);


string regex_struct*::to_string(regex_struct* regex);

inline string nregex::to_string(regex_struct* regex) 
{
    return regex_structp_to_string(regex);
}

/*
char string::operator_load_element(char* str, int n);

char char*::operator_load_element(char* str, int n);
*/

inline bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

inline bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

inline bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

inline bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

inline bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

inline bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

inline bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

inline bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

inline bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

inline bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

typedef int i32;
typedef short i16;
typedef char i8;
typedef long i64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long u64;

void check_null_pointer(int sline, char* sname);

using neo-c;

#endif
