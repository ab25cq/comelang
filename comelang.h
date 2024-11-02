#ifndef COMELANG_H
#define COMELANG_H

using comelang;

#define _GNU_SOURCE

using C
{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>
}

typedef void* any;
typedef char*% string;

extern any wildcard;

//////////////////////////////
/// exception
//////////////////////////////
#define COME_STACKFRAME_MAX 16

void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

bool bool::expect(bool self, void* parent, void (*block)(void* parent)) ;
bool bool::catch(bool self, void* parent, void (*block)(void* parent));
bool bool::value(bool self, void* parent, void (*block)(void* parent));
int int::expect(int self, void* parent, void (*block)(void* parent)) ;
int int::catch(int self, void* parent, void (*block)(void* parent));
int int::value(int self, void* parent, void (*block)(void* parent));

int int::except(int self, void* parent, void (*block)(void* parent));
bool bool::except(bool self, void* parent, void (*block)(void* parent));

record static inline bool die(char* msg)
{
    perror(msg);
    stackframe();
    exit(4);
    
    return false;
}

void xassert(char* msg, bool test);

//////////////////////////////
/// heap
//////////////////////////////
extern bool gComeGCLib;
extern void* gComeFunResultObject;

void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name=null);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null);
string __builtin_string(char* str);

//////////////////////////////
// list
//////////////////////////////
struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values) 
    {
        self.head = null;
        self.tail = null;
        self.len = 0;
        
        for(int i=0; i<num_value; i++) {
            self.push_back(values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }
    void force_finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            force_delete prev_it;
        }
    }
    list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            result.add(clone it.item);

            it = it.next;
        }

        return result;
    }
    list<T>* add(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    void pop_front(list<T>* self) {
        if(self.len == 1) {
            list_item<T>* litem = self.head;
            self.head = null;
            self.tail = null;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len == 2) {
            list_item<T>* litem = self.head;
            
            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            self.tail = self.head;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len >= 3) {
            list_item<T>* litem = self.head;
            
            self.head = litem.next;
            self.head.prev = null;
            
            delete borrow litem;
            
            self.len--;
        }
    }
    list<T>* push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    
    string to_string(list<T>* self)
    {
        buffer*% result = new buffer();
        
        result.append_str("[");
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            result.append_str(it.item.to_string());
            it = it.next;
            
            i++;
            
            if(i != self.length()) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    T& begin(list<T>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        if(self == null || self.it == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        
        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self == null || self.it == null;
    }
    list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*)) 
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }
    T& item(list<T>* self, int position, T default_value) 
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return default_value;
    }

    int length(list<T>* self)
    {
        if(self == null) {
            return 0;
        }
        return self.len;
    }
    
    list<T>* insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        if(position == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;
            
            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;
            
            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow gc_inc(new list_item<T>);

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }
        
        return self;
    }
    list<T>* reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
        
        return self;
    }
    list<T>* remove(list<T>* self, T item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;
            
            it = it.next;
        }
        
        return self;
    }
    list<T>* delete(list<T>* self, int head, int tail)
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
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail) 
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }
        
        return self;
    }
    list<T>* replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }
        if(position < 0) {
            position = 0;
        }
        
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }

    int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;
            
            it = it.next;
        }

        return default_value;
    }
    bool equals(list<T>* left, list<T>* right)
    {
        if(right == wildcard) {
            return true;
        }
        
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

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

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    T& operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);
        
        return item;
    }
    T&?? operator_load_element(list<T>* self, int position) {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        T` default_value;
        memset(&default_value, 0, sizeof(T));
        return default_value;
    }
    list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

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

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    bool operator_equals(list<T>* self, list<T>* right) 
    {
        return self.equals(right);
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.equals(right);
    }
    bool contained(list<T>* self, T& item) {
        for(var it = self.begin(); !self.end(); it = self.next())
        {
            if(it === item) {
                return true;
            }
        }
        
        return false;
    }
    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0) 
                {
                    result.push_back(dupe it.item);

                    it = it.next;
                }
                else {
                    result.push_back(dupe it2.item);


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        result.push_back(dupe it2.item);

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        result.push_back(dupe it.item);

                        it = it.next;
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
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                list1.push_back(dupe it.item);
                break;
            }
        }
        
        auto left_list = list1.merge_sort_with_lambda(compare);
        auto right_list = list2.merge_sort_with_lambda(compare);
        
        return left_list.merge_list_with_lambda(right_list, compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort_with_lambda(int lambda(T& left, T& right) { return left.compare(right); });
    }
    template<R> list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    template<R> list<R>*% map2(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>();

        list_item<T>* it = self.tail;
        while(it != null) {
            result.push_back(dupe it.item);
            it = it.prev;
        };

        return result;
    }
    list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T item_before = self.head.item;

            result.push_back(dupe item_before);

            list_item<T>* it = self.head;
            it = it.next;
            while(it != null) {
                if(!it.item.equals(item_before)) {
                    result.push_back(dupe it.item);
                }

                item_before = it.item;
                
                it = it.next;
            }
        }

        return result;
    }
    list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
    {
        list<T>*% result = new list<T>();

        list_item<T>* it = self.head;
        while(it != null) {
            if(block(parent, it.item)) {
                result.push_back(dupe it.item);
            }

            it = it.next;
        }

        return result;
    } 
    
    list<T>*% operator_add(list<T>*% left, list<T>*% right) {
        list<T>*% result = new list<T>();

        list_item<T>* it = left.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        it = right.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        return result;
    }
    list<T>*% operator_mult(list<T>* left, int right) {
        list<T>*% result = new list<T>();

        for(int i=0; i<right; i++) {
            list_item<T>* it = left.head;
            while(it != null) {
                result.push_back(dupe it.item);
    
                it = it.next;
            }
        }

        return result;
    }
    string join(list<T>* self, char* sep=" ") {
        buffer*% buf = new buffer();
        
        int n = 0;
        for(var it = self.begin(); !self.end(); it = self.next()) {
            buf.append_str(it);
            
            if(n < self.length()-1) {
                buf.append_str(sep);
            }
            
            n++;
        }
        
        return buf.to_string();
    }
}

#define foreach(o1, o2) for(var o2_saved = (o2), var o1 = (o2_saved).begin(); !(o2_saved).end(); o1 = (o2_saved).next())

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
    vector<T>*% initialize_with_values(vector<T>*% self, int num_value, T&* values) 
    {
        self.size = num_value + 1;
        self.len = num_value;
        self.items = borrow new T[self.size];
        
        memcpy(self.items, values, sizeof(T)*self.len);
        
        return self;
    }

    vector<T>*% clone(vector<T>* self)
    {
        if(self == null) {
            return null;
        }
        vector<T>*% result = new vector<T>;

        result.len = self.len;
        result.size = self.size;
        result.it = 0;
        result.items = borrow new T[result.size];
        
        for(int i=0; i<self.len; i++) 
        {
            result.items[i] = borrow dupe self.items[i];
        }

        return result;
    }

    void finalize(vector<T>* self)
    {
        if(isheap(T)) {
            for(int i=0; i<self.len; i++) 
            {
                delete borrow self.items[i];
            }
        }
        if(self && self.items) {
            come_free((char*)self.items);
        }
    }
    
    vector<T>*% operator_add(vector<T>* left, vector<T>* right) {
        vector<T>*% result = new vector<T>.initialize();
        
        foreach(it, left) {
            result.push_back(dupe it);
        }
        
        foreach(it, right) {
            result.push_back(dupe it);
        }
        
        return result;
    }
    vector<T>*% operator_mult(vector<T>* left, int n) {
        vector<T>*% result = new vector<T>.initialize();
        
        for(int i=0; i<n; i++) {
            foreach(it, left) {
                result.push_back(dupe it);
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
    void operator_store_element(vector<T>* self, int index, T item) {
        self.replace(index, item);
    }
    
    T&?? operator_load_element(vector<T>* self, int index) {
        T` default_value;
        memset(&default_value, 0, sizeof(T));
        
        return self.item(index, default_value)??;
    }
    
    vector<T>* push_back(vector<T>* self, T item) {
        if(self.len == self.size) {
            auto new_size = self.size * 2;
            auto items = self.items;

            self.items = new T[new_size];

            int i;
            for(i=0; i<self.size; i++) {
                self.items[i] = items[i];
            }

            self.size = new_size;

            come_free(items);
        }

        self.items[self.len] = item;
        self.len++;
        
        return self;
    }
    
    vector<T>* add(vector<T>* self, T item) {
        if(self.len == self.size) {
            auto new_size = self.size * 2;
            auto items = self.items;

            self.items = new T[new_size];

            int i;
            for(i=0; i<self.size; i++) {
                self.items[i] = items[i];
            }

            self.size = new_size;

            come_free(items);
        }

        self.items[self.len] = item;
        self.len++;
        
        return self;
    }

    T& item(vector<T>* self, int index, T default_value) 
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
        if(right == wildcard) {
            return true;
        }
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
    
    vector<T>* replace(vector<T>* self, int index, T value)
    {
        if(index < 0) {
            index += self.len;
        }
        if(index < 0) {
            index = 0;
        }
        
        if(self.len == 0 || index >= self.len) {
            int len = self.len;
            for(int i=0; i<index-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.add(default_value);
            }
            self.add(value);
            return self;
        }

        if(index >= 0 && index < self.len)
        {
            if(isheap(T)) {
                delete borrow self.items[index];
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

    vector<T>* reset(vector<T>* self) {
        if(isheap(T)) {
            for(int i=0; i<self.len; i++) 
            {
                delete borrow self.items[i];
            }
        }
        come_free((char*)self.items);
        
        self.size = 16;
        self.len = 0;
        self.items = borrow new T[self.size];
        
        self.len = 0;
        
        return self;
    }

    T& begin(vector<T>* self) {
        self.it = 0;

        T` default_value;
        return self.item(0, default_value);
    }

    T& next(vector<T>* self) {
        self.it++;

        T` default_value
        return self.item(self.it, default_value);
    }

    bool end(vector<T>* self) {
        return self.it >= self.len;
    }
    
    vector<T>* delete_back(vector<T>* self) {
        if(self.len > 0) {
            if(isheap(T)) {
                delete borrow self.items[self.len-1];
                self.items[self.len-1] = null;
            }
            
            self.len--;
        }
        
        return self;
    }
    vector<T>*% quick_sort(vector<T>* self, int left, int right, int (*compare_)(T&, T&)) {
        int l_hold = left;
        int r_hold = right;

        T& pivot = self.items[left];
        int pivot_num = left;

        while(left < right) {
            while((compare_(self.items[right], pivot) >= 0) && (left < right)) {
                right--;
            }

            if(left != right) {
                self.items[left] = self.items[right];
                left++;
            }

            while((compare_(self.items[left], pivot) <= 0) && (left < right)) {
                left++;
            }

            if(left != right) {
                self.items[right] = self.items[left];
                right--;
            }
        }

        self.items[left] = pivot;

        pivot_num = left;

        int left2 = l_hold;
        int right2 = r_hold;

        if(left2 < pivot_num) {
            self.quick_sort(left2, pivot_num-1, compare_);
        }

        if(right2 > pivot_num) {
            self.quick_sort(pivot_num+1, right2, compare_);
        }

        return self;
    }

    vector<T>*% sort_with_lambda(vector<T>* self, int (*compare_)(T&, T&)) {
        return self.quick_sort(0, self.length()-1, compare_);
    }
    vector<T>*% sort(vector<T>* self)  {
        return self.quick_sort(0, self.length()-1, int lambda(T& left, T& right) { return left.compare(right); });
    }
    string to_string(vector<T>* self)
    {
        buffer*% result = new buffer();
        
        result.append_str("v[");
        for(int i=0; i<self.len; i++) {
            result.append_str(self.items[i].to_string());
            
            if(i != self.length()-1) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    list<T>*% to_list(vector<T>* self) {
        var result = new list<T>();
        
        for(int i=0; i<self.len; i++) {
            result.add(self.items[i]);
        }
        
        return result;
    }
}

impl list <T>
{
    vector<T>*% to_vector(list<T>* self) {
        var result = new vector<T>();
        
        list_item<T>* it = self.head;
        while(it != null) {
            result.add(clone it.item);
            it = it.next;
        }
        
        return result;
    }
}

//////////////////////////////
// map
//////////////////////////////
struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;
    
    list<T&>*% key_list;

    int it;
};

#define MAP_TABLE_DEFAULT_SIZE 128

impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[MAP_TABLE_DEFAULT_SIZE]);
        self.items = borrow gc_inc(new T2[MAP_TABLE_DEFAULT_SIZE]);
        self.item_existance = borrow gc_inc(new bool[MAP_TABLE_DEFAULT_SIZE]);

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;
        
        self.key_list = new list<T&>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values) 
    {
        self.keys = borrow gc_inc(new T[MAP_TABLE_DEFAULT_SIZE]);
        self.items = borrow gc_inc(new T2[MAP_TABLE_DEFAULT_SIZE]);
        self.item_existance = borrow gc_inc(new bool[MAP_TABLE_DEFAULT_SIZE]);

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;

        self.it = 0;
        
        self.key_list = new list<T&>();
        
        for(int i=0; i<num_keys; i++) {
            self.insert(keys\[i], values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);
        
        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    void force_finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    force_delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    force_delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);
        
        force_delete borrow self.key_list;

        force_delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }
        
        var result = new map<T,T2>();
        
        result.key_list = new list<T&>();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            
            var it2 = self.at(it, default_value);

            result.put(dupe it, dupe it2);
        }

        return result;
    }
    
    string to_string(map<T,T2>* self)
    {
        buffer*% result = new buffer();
        
        result.append_str("[");
        
        list_item<T&>* it = self.key_list.head;
        while(it) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it.item, default_value);
            
            result.append_str(it.item.to_string());
            result.append_str(":");
            result.append_str(it2.to_string());
            
            it = it.next;
            
            if(it != null) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    T2& at(map<T, T2>* self, T& key, T2 default_value) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return self.items\[it];
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
    map<T,T2>* remove(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    self.key_list.remove(self.keys\[it]);
                    
                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    self.items\[it] = null;
                    
                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }
        
        return self;
    }
    int length(map<T, T2>* self) {
        return self.len;
    }
    
    T& begin(map<T, T2>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        if(self == null || self.key_list.it == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self == null || self.key_list == null || self.key_list.it == null;
    }
    
    void rehash(map<T,T2>* self) {
        int size = self.size * 10;
        T&* keys = borrow gc_inc(new T[size]);
        T2&* items = borrow gc_inc(new T2[size]);
        bool* item_existance = borrow gc_inc(new bool[size]);

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it, default_value);
            unsigned int hash = it.get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys\[n] = it;
                    T2& default_value;
                    items\[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free((char*)self.items);
        delete borrow self.item_existance;
        come_free((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }
    
    map<T,T2>* insert(map<T,T2>* self, T key, T2 item) {
        if(self.len*10 >= self.size) {
            self.rehash();
        }
        unsigned int hash = key.get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        self.key_list.remove(self.keys\[it]);
                        delete self.keys\[it];
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    map<T,T2>* put(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        unsigned int hash = key.get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        delete self.keys\[it];
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    T2&?? operator_load_element(map<T, T2>* self, T& key) {
        T2` default_value;
        memset(&default_value, 0, sizeof(T2));
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return self.items\[it];
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
    
    T2 operator_store_element(map<T, T2>* self, T key, T2 item) {
        self.insert(key, item);
        
        return item;
    }
    
    bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(right == wildcard) {
            return true;
        }
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T&` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);
            
            if(it.equals(it2)) {
                T2&` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = left.at(it2, default_value2);
                
                if(!item.equals(item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }
            
            n++;
        }

        return result;
    }
    
    bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        return left.equals(right);
    }
    
    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !left.equals(right);
    }
    
    bool find(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
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
    map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) {
        map<T,T2>*% result = new map<T,T2>();

        int n = 0;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);
            
            result.insert(dupe it, dupe it2);
            n++;
        }

        n=0;
        for(var it = right.key_list.begin(); !right.key_list.end(); it = right.key_list.next())
        {
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);
            
            result.insert(dupe it, dupe it2);
            n++;
        }

        return result;
    }
    map<T,T2>*% operator_mult(map<T,T2>* left, int right) {
        map<T,T2>*% result = new map<T,T2>();

        for(int i=0; i<right; i++ ) {
            int n = 0;
            for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
            {
                T2&` default_value;
                memset(&default_value, 0, sizeof(T2));
                
                T2& it2 = left.at(it, default_value);
                
                result.insert(dupe it, dupe it2);
                n++;
            }
        }

        return result;
    }
    list<T>*% keys(map<T, T2>* self) {
        var result = new list<T>();
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            result.push_back(dupe it);
        }
        
        return result;
    }
    
    list<T2>*% values(map<T, T2>* self) {
        var result = new list<T2>();
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) { 
            T2&` default_value;
            memset(&default_value, 0, sizeof(T2));
        
            var it2 = self.at(it, default_value);
            
            result.push_back(dupe it2);
        }
        
        return result;
    }
}

//////////////////////////////
// tuple
//////////////////////////////
struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;
        
        return self;
    }
    
    void catch(tuple1<T>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v1) {
            block(parent);
        }
    }
    bool equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(right == wildcard) {
            return true;
        }
        
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        
        return true;
    }
    bool operator_equals(tuple1<T>* self, tuple1<T>* right) 
    {
        return self.equals(right);
    }
    bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.equals(right);
    }
    
    string to_string(tuple1<T>* self)
    {
        return "(" + self.v1.to_string() + ")";
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;
        
        return self;
    }
    
    T catch(tuple2<T, T2>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v2) {
            block(parent);
        }
        
        return clone self.v1;
    }
    
    string to_string(tuple2<T, T2>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + ")";
    }
    bool equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(right == wildcard) {
            return true;
        }
        
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        
        return true;
    }
    bool operator_equals(tuple2<T,T2>* self, tuple2<T,T2>* right) 
    {
        return self.equals(right);
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
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        
        return self;
    }
    
    tuple2<T,T2>*% catch(tuple3<T, T2, T3>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v3) {
            block(parent);
        }
        
        return new tuple2<T, T2>.initialize(self.v1, self.v2);
    }
    
    string to_string(tuple3<T, T2, T3>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + ")";
    }
    bool equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(right == wildcard) {
            return true;
        }
        
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        
        return true;
    }
    bool operator_equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right) 
    {
        return self.equals(right);
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
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        
        return self;
    }
    
    tuple3<T,T2,T3>*% catch(tuple4<T, T2, T3, T4>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v4) {
            block(parent);
        }
        
        return new tuple3<T, T2, T3>.initialize(self.v1, self.v2, self.v3);
    }
    
    string to_string(tuple4<T, T2, T3, T4>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + ")";
    }
    bool equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(right == wildcard) {
            return true;
        }
        
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        
        return true;
    }
    bool operator_equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right) 
    {
        return self.equals(right);
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
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;
        
        return self;
    }
    
    tuple4<T,T2,T3,T4>*% catch(tuple5<T, T2, T3, T4, T5>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v5) {
            block(parent);
        }
        
        return new tuple4<T, T2, T3, T4>.initialize(self.v1, self.v2, self.v3, self.v4);
    }
    
    string to_string(tuple5<T, T2, T3, T4, T5>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + "," + self.v5.to_string() + ")";
    }
    bool equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(right == wildcard) {
            return true;
        }
        
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        if(!self.v5.equals(right.v5)) {
            return false;
        }
        
        return true;
    }
    bool operator_equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right) 
    {
        return self.equals(right);
    }
    bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.equals(right);
    }
}

//////////////////////////////
// buffer
//////////////////////////////
struct buffer 
{
    char*% buf;
    int len;
    int size;
};

buffer*% buffer*::initialize(buffer*% self);
void buffer*::finalize(buffer* self);
void buffer*::force_finalize(buffer* self);
buffer*% buffer*::clone(buffer* self);
int buffer*::length(buffer* self);
void buffer*::reset(buffer* self);
void buffer*::trim(buffer* self, int len);
buffer* buffer*::append(buffer* self, char* mem, size_t size);
buffer* buffer*::append_char(buffer* self, char c);
buffer* buffer*::append_str(buffer* self, char* str);
buffer* buffer*::append_nullterminated_str(buffer* self, char* str);
buffer* buffer*::append_int(buffer* self, int value);
buffer* buffer*::append_long(buffer* self, long value);
buffer* buffer*::append_short(buffer* self, short value);
buffer* buffer*::alignment(buffer* self);
int buffer*::compare(buffer* left, buffer* right);
buffer*% string::to_buffer(char* self);
buffer*% char*::to_buffer(char* self);
string buffer*::to_string(buffer* self);

static inline buffer*% char[]::to_buffer(char* self, size_t len) 
{
    var result = new buffer();
    result.append(self, sizeof(char)*len);
    return result;
}

static inline buffer*% char*[]::to_buffer(char** self, size_t len) 
{
    var result = new buffer();
    for(int i=0; i<len; i++) {
        result.append(self[i], strlen(self[i]));
    }
    return result;
}

static inline buffer*% short[]::to_buffer(short* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(short)*len);
    return result;
}

static inline buffer*% int[]::to_buffer(int* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(int)*len);
    return result;
}

static inline buffer*% long[]::to_buffer(long* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(long)*len);
    return result;
}

static inline buffer*% float[]::to_buffer(float* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(float)*len);
    return result;
}

static inline buffer*% double[]::to_buffer(double* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(double)*len);
    return result;
}

impl vector<T> 
{
    buffer*% to_buffer(vector<T>* self) {
        var result = new buffer();
        foreach(it, self) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}

impl list <T>
{
    buffer*% to_buffer(list<T>* self) {
        var result = new buffer();
        foreach(it, self) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}

//////////////////////////////
// smart_pointer
//////////////////////////////
struct smart_pointer<T> 
{
    buffer*% memory;
    T* p;
};

impl smart_pointer<T>
{
    smart_pointer<T>*% initialize(smart_pointer<T>*% self, void* memory, int size)
    {
        self.memory = new buffer();
        
        self.memory.append(memory, sizeof(T)*size);
        
        self.p = (T*)self.memory.buf;
        
        return self;
    }
    
    smart_pointer<T>*% initialize_with_value(smart_pointer<T>*% self, buffer*% value)
    {
        self.memory = value;
        
        self.p = (T*)value.buf;
        
        return self;
    }
    
    record smart_pointer<T>*% operator_add(smart_pointer<T>* self, int value)
    {
        var result = new smart_pointer<T>;
        
        result.memory = self.memory;
        int n = self.p - (T*)self.memory.buf;
        result.p = ((T*)result.memory.buf) + n + value;
        
        if((char*)result.p > result.memory.buf + result.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        return result;
    }
    
    record smart_pointer<T>*% operator_sub(smart_pointer<T>* self, int value)
    {
        smart_pointer<T>*% result = new smart_pointer<T>;
        
        result.memory = self.memory;
        int n = self.p - (T*)self.memory.buf;
        result.p = ((T*)result.memory.buf) + n - value;
        
        if((char*)result.p < result.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        return result;
    }
    
    record T operator_derefference(smart_pointer<T>* self)
    {
        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        T* p = self.p;
        return *p;
    }
    
    record smart_pointer<T>* operator_plus_plus(smart_pointer<T>* self)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n + 1;
        
        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        return self;
    }
    
    record smart_pointer<T>* operator_minus_minus(smart_pointer<T>* self)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n - 1;
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        return self;
    }
    
    record smart_pointer<T>* operator_plus_equal(smart_pointer<T>* self, int value)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n + value;
        
        if((char*)self.p > self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        return self;
    }
    
    record smart_pointer<T>* operator_minus_equal(smart_pointer<T>* self, int value)
    {
        int n = self.p - (T*)self.memory.buf;
        self.p = ((T*)self.memory.buf) + n - value;
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        return self;
    }
    
    bool as_bool(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        bool p = *(bool*)self.p;
        return p;
    }
    
    char as_char(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        char p = *(char*)self.p;
        return p;
    }
    
    short as_short(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        short p = *(short*)self.p;
        return p;
    }
    
    int as_int(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        int p = *(int*)self.p;
        return p;
    }
    
    long as_long(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        long p = *(long*)self.p;
        return p;
    }
    
    float as_float(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        float p = *(float*)self.p;
        return p;
    }
    
    double as_double(smart_pointer<T>* self)
    {
        if((char*)self.p >= self.memory.buf + self.memory.len) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        if((char*)self.p < self.memory.buf) {
            puts("out of range of smart pointer");
            stackframe();
            exit(1);
        }
        
        double p = *(double*)self.p;
        return p;
    }
    
    string to_string(smart_pointer<T>* self)
    {
        return self.memory.to_string();
    }
}

static inline smart_pointer<char>*% buffer*::to_pointer(buffer* self)
{
    return new smart_pointer<char>.initialize_with_value(clone self);
}

static inline smart_pointer<char>*% buffer*::to_char_pointer(buffer* self)
{
    return new smart_pointer<char>.initialize_with_value(clone self);
}

static inline smart_pointer<short>*% buffer*::to_short_pointer(buffer* self)
{
    return new smart_pointer<short>.initialize_with_value(clone self);
}

static inline smart_pointer<int>*% buffer*::to_int_pointer(buffer* self)
{
    return new smart_pointer<int>.initialize_with_value(clone self);
}

static inline smart_pointer<long>*% buffer*::to_long_pointer(buffer* self)
{
    return new smart_pointer<long>.initialize_with_value(clone self);
}

impl vector<T> 
{
    smart_pointer<T>*% to_pointer(vector<T>* self) {
        var buf = new buffer();
        foreach(it, self) {
            buf.append((char*)&it, sizeof(T));
        }
        return new smart_pointer<T>.initialize_with_value(buf);
    }
}

impl list <T>
{
    smart_pointer<T>*% to_pointer(list<T>* self) {
        var buf = new buffer();
        
        foreach(it, self) {
            buf.append((char*)&it, sizeof(T));
        }
        
        return new smart_pointer<T>.initialize_with_value(buf);
    }
    
}

//////////////////////////////
/// base library(primitive array)
//////////////////////////////
static inline smart_pointer<char>*% char[]::to_pointer(char* self, size_t len) 
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(char)*len);
    return new smart_pointer<char>.initialize_with_value(buf);
}

static inline smart_pointer<char*>*% char*[]::to_pointer(char** self, size_t len) 
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(char*)*len);
    return new smart_pointer<char*>.initialize_with_value(buf);
}

static inline smart_pointer<short>*% short[]::to_pointer(short* self, size_t len) 
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(short)*len);
    return new smart_pointer<short>.initialize_with_value(buf);
}

static inline smart_pointer<int>*% int[]::to_pointer(int* self, size_t len) 
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(int)*len);
    return new smart_pointer<int>.initialize_with_value(buf);
}

static inline smart_pointer<long>*% long[]::to_pointer(long* self, size_t len) 
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(long)*len);
    return new smart_pointer<long>.initialize_with_value(buf);
}

static inline smart_pointer<float>*% float[]::to_pointer(float* self, size_t len) 
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(float)*len);
    return new smart_pointer<float>.initialize_with_value(buf);
}

static inline smart_pointer<double>*% double[]::to_pointer(double* self, size_t len) 
{
    var buf = new buffer();
    buf.append((char*)self, sizeof(double)*len);
    return new smart_pointer<double>.initialize_with_value(buf);
}

static inline list<char>*% char[]::to_list(char* self, size_t len) 
{
    return new list<char>.initialize_with_values(len, self);
}

static inline list<char*>*% char*[]::to_list(char** self, size_t len) 
{
    return new list<char*>.initialize_with_values(len, self);
}

static inline list<short>*% short[]::to_list(short* self, size_t len) 
{
    return new list<short>.initialize_with_values(len, self);
}

static inline list<int>*% int[]::to_list(int* self, size_t len) 
{
    return new list<int>.initialize_with_values(len, self);
}

static inline list<long>*% long[]::to_list(long* self, size_t len) 
{
    return new list<long>.initialize_with_values(len, self);
}

static inline list<float>*% float[]::to_list(float* self, size_t len) 
{
    return new list<float>.initialize_with_values(len, self);
}

static inline list<double>*% double[]::to_list(double* self, size_t len) 
{
    return new list<double>.initialize_with_values(len, self);
}

static inline vector<char>*% char[]::to_vector(char* self, size_t len) 
{
    return new vector<char>.initialize_with_values(len, self);
}

static inline vector<char*>*% char*[]::to_vector(char** self, size_t len) 
{
    return new vector<char*>.initialize_with_values(len, self);
}

static inline vector<short>*% short[]::to_vector(short* self, size_t len) 
{
    return new vector<short>.initialize_with_values(len, self);
}

static inline vector<int>*% int[]::to_vector(int* self, size_t len) 
{
    return new vector<int>.initialize_with_values(len, self);
}

static inline vector<long>*% long[]::to_vector(long* self, size_t len) 
{
    return new vector<long>.initialize_with_values(len, self);
}

static inline vector<float>*% float[]::to_vector(float* self, size_t len) 
{
    return new vector<float>.initialize_with_values(len, self);
}

static inline vector<double>*% double[]::to_vector(double* self, size_t len) 
{
    return new vector<double>.initialize_with_values(len, self);
}

//////////////////////////////
/// base library(equals)
//////////////////////////////
bool bool::equals(bool self, bool right);
bool char::equals(char self, char right);
bool int::equals(int self, int right);
bool short::equals(short self, short right);
bool long::equals(long self, long right);
bool size_t::equals(long self, size_t right);
bool float::equals(float self, float right);
bool double::equals(double self, double right);
bool char*::equals(char* self, char* right);
bool string::equals(char* self, char* right);

bool string::operator_equals(char* self, char* right);
bool char*::operator_equals(char* self, char* right);
bool string::operator_not_equals(char* self, char* right);
bool char*::operator_not_equals(char* self, char* right);

string char*::operator_add(char* self, char* right);
string string::operator_add(char* self, char* right);
string char*::operator_mult(char* self, int right);
string string::operator_mult(char* self, int right);

static inline size_t char[]::length(char* self, size_t len) 
{
    return len;
}

static inline bool char*[]::contained(char** self, size_t len, char* str) 
{
    bool result = false;
    for(int i=0; i<len; i++) {
        if(strncmp(self[i], str, strlen(self[i])) == 0) {
            result = true;
            break;
        }
    }
    return result;
}

static inline size_t short[]::length(short* self, size_t len) 
{
    return len;
}

static inline size_t int[]::length(int* self, size_t len) 
{
    return len;
}

static inline size_t long[]::length(long* self, size_t len) 
{
    return len;
}

static inline size_t float[]::length(float* self, size_t len) 
{
    return len;
}

static inline size_t double[]::length(double* self, size_t len) 
{
    return len;
}

//////////////////////////////
/// base library(get_hash key)
//////////////////////////////
unsigned int bool::get_hash_key(bool value);
unsigned int char::get_hash_key(char value);
unsigned int short::get_hash_key(short value);
unsigned int int::get_hash_key(int value);
unsigned int long::get_hash_key(long value);
unsigned int size_t::get_hash_key(long value);
unsigned int float::get_hash_key(float value);
unsigned int double::get_hash_key(double value);
unsigned int string::get_hash_key(char* value);
unsigned int char*::get_hash_key(char* value);

//////////////////////////////
/// base library(clone)
//////////////////////////////
bool bool::clone(char self);
char char::clone(char self);
short int short::clone(short self);
int int::clone(int self);
long int long::clone(long self);
size_t size_t::clone(long self);
double double::clone(double self);
float float::clone(float self);
string char*::clone(char* self);
string string::clone(char* self);

//////////////////////////////
/// base library(character code)
//////////////////////////////
bool xiswascii(wchar_t c);
bool xiswalpha(wchar_t c);
bool xiswblank(wchar_t c);
bool xiswdigit(wchar_t c);
bool xiswalnum(wchar_t c);
bool xisalpha(char c);
bool xisblank(char c);
bool xisdigit(char c);
bool xisalnum(char c);
bool xisascii(char c);
bool xisalpha(char c);

//////////////////////////////
/// base library(simple string library)
//////////////////////////////
int string::length(char* str);
int char*::length(char* str);
string char*::substring(char* str, int head, int tail);
string string::substring(char* str, int head, int tail);
string string::operator_load_range_element(char* str, int head, int tail);
string char*::operator_load_range_element(char* str, int head, int tail);
string char*::reverse(char* str) ;
string string::reverse(char* str) ;
string xsprintf(char* msg, ...);

static inline string string::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

static inline string char*::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

static inline string int::xsprintf(int self, char* msg, ...)
{
    return xsprintf(msg, self);
}

string char*::delete(char* str, int head, int tail) ;
string string::delete(char* str, int head, int tail);
list<string>*% string::split_char(char* self, char c) ;
list<string>*% char*::split_char(char* self, char c);

//////////////////////////////
/// base library(path library)
//////////////////////////////
string xbasename(char* path);
string xextname(char* path);
string xnoextname(char* path);

//////////////////////////////
/// base library(to_string)
//////////////////////////////
string bool::to_string(bool self);
string char::to_string(char self);
string short::to_string(short self);
string int::to_string(int self);
string long::to_string(long self);
string size_t::to_string(size_t self);
string float::to_string(float self);
string double::to_string(double self);
string string::to_string(char* self);
string char*::to_string(char* self);

//////////////////////////////
/// base library(compare)
//////////////////////////////
int bool::compare(bool left, bool right);
int char::compare(char left, char right);
int short::compare(short left, short right);
int int::compare(int left, int right);
int long::compare(long left, long right);
int float::compare(float left, float right);
int double::compare(float left, float right);
int size_t::compare(long left, long right);
int string::compare(char* left, char* right);
int char*::compare(char* left, char* right);

//////////////////////////////
/// base library(IO-FILE)
//////////////////////////////
int FILE*::write(FILE* f, char* str);
string FILE*::read(FILE* f);
int FILE*::fclose(FILE* f) ;
int* FILE*::fprintf(FILE* f, const char* msg, ...);
list<string>*% FILE*::readlines(FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f));
int string::write(char* self, char* file_name, bool append=false);
int char*::write(char* self, char* file_name, bool append=false) ;
string char*::read(char* file_name) ;
string string::read(char* file_name) ;

//////////////////////////////
/// base library(STDOUT, STDIN)
//////////////////////////////
string char*::puts(char* self);
string string::puts(char* self);
int int::printf(int self, char* msg);
string string::printf(char* self, ...);
string char*::printf(char* self, ...);

string char*::print(char* self);

//////////////////////////////
/// loop
//////////////////////////////
void int::times(int self, void* parent, void (*block)(void* parent, int it));

//////////////////////////////
// integer
//////////////////////////////
struct integer
{
    long value;
};

integer*% integer*::initialize(integer*% self, long value);
integer*% char::to_integer(char self);
integer*% short::to_integer(short self);
integer*% int::to_integer(int self);
integer*% long::to_integer(long self);
int integer*::to_int(integer* self);
string integer::to_string(integer* self);
bool integer::equals(integer* self, integer* right);
int integer::compare(integer* self, integer* right);
bool integer::operator_equals(integer* self, integer* right);
bool integer::operator_not_equals(integer* self, integer* right);
int integer::operator_add(integer* left, integer* right);
int integer::operator_sub(integer* left, integer* right);
int integer::operator_mult(integer* left, integer* right);
int integer::operator_div(integer* left, integer* right);
int integer::operator_mod(integer* left, integer* right);
int integer::operator_lshift(integer* left, integer* right);
int integer::operator_rshift(integer* left, integer* right);
int integer::operator_gteq(integer* left, integer* right);
int integer::operator_lteq(integer* left, integer* right);
int integer::operator_lt(integer* left, integer* right);
int integer::operator_gt(integer* left, integer* right);
int integer::operator_and(integer* left, integer* right);
int integer::operator_xor(integer* left, integer* right);
int integer::operator_or(integer* left, integer* right);

#undef assert

record int assert(int exp) version 2;

/*
int __builtin_bswap32(int x) ;
long __builtin_bswap64(long x) ;
short __builtin_bswap16(short x) ;
*/

#endif
