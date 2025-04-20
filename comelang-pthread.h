#ifndef COMELANG_PTHREAD_H
#define COMELANG_PTHREAD_H

#ifdef __PICO__

#include "pico/mutex.h"
output {#include "pico/mutex.h"}
#include "pico/multicore.h"
output {#include "pico/multicore.h"}

struct come_mutex<T>
{
    T value;
    mutex_t mutex;
    bool lock;
};

#define MUTEX_INITIALIZER (mutex_t){ .locked = false, .core = NULL }

impl come_mutex<T>
{
    come_mutex<T>*% initialize(come_mutex<T>*% self, T value) {
        mutex_init(&self.mutex);
        self.value = value;
        return self;
    }
    
    T~ lock(come_mutex<T>* self) {
        mutex_enter_blocking(&self.mutex);
        self.lock = true;
        
        return self.value;
    }
    void unlock(come_mutex<T>* self) {
        if(self.lock) {
            mutex_exit(&self.mutex);
        }
    }
    
    void on_drop(come_mutex<T>* self) {
        self.unlock();
    }
/*
    T~ on_load(come_mutex<T>* self) {
        return self.lock();
    }
*/
}

uniq mutex_t gComeHeapMutex = MUTEX_INITIALIZER;

uniq void come_push_stackframe(char* sname, int sline, int id) version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit(sname, sline, id);
    mutex_exit(&gComeHeapMutex);
}

uniq void come_pop_stackframe() version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit();
    mutex_exit(&gComeHeapMutex);
}

uniq void come_save_stackframe(char* sname, int sline) version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit(sname, sline);
    mutex_exit(&gComeHeapMutex);
}

uniq void stackframe() version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit();
    mutex_exit(&gComeHeapMutex);
}

uniq string come_get_stackframe() version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    string result = inherit();
    mutex_exit(&gComeHeapMutex);
    
    return result;
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    void* result = inherit(count, size, sname, sline, class_name);
    mutex_exit(&gComeHeapMutex);
    
    return result;
}

uniq void come_free(void* mem) version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit(mem);
    mutex_exit(&gComeHeapMutex);
}

#else

#include <unistd.h>
#include <pthread.h>
#include <poll.h>

using comelang_pthread;

struct come_mutex<T>
{
    T value;
    pthread_mutex_t mutex;
    bool lock;
};

impl come_mutex<T>
{
    come_mutex<T>*% initialize(come_mutex<T>*% self, T value) {
        pthread_mutex_init(&self.mutex, NULL).if {
            perror("Failed to initialize mutex");
            exit(EXIT_FAILURE);
        }
        self.value = value;
        return self;
    }
    
    T~ lock(come_mutex<T>* self) {
        pthread_mutex_lock(&self.mutex);
        self.lock = true;
        
        return self.value;
    }
    void unlock(come_mutex<T>* self) {
        if(self.lock) {
            pthread_mutex_unlock(&self.mutex);
        }
    }
    
    void on_drop(come_mutex<T>* self) {
        self.unlock();
    }
/*
    T~ on_load(come_mutex<T>* self) {
        return self.lock();
    }
*/
}

uniq pthread_mutex_t gComeHeapMutex = PTHREAD_MUTEX_INITIALIZER;

uniq void come_push_stackframe(char* sname, int sline, int id) version 2
{
    pthread_mutex_lock(&gComeHeapMutex);
    inherit(sname, sline, id);
    pthread_mutex_unlock(&gComeHeapMutex);
}

uniq void come_pop_stackframe() version 2
{
    pthread_mutex_lock(&gComeHeapMutex);
    inherit();
    pthread_mutex_unlock(&gComeHeapMutex);
}

uniq void come_save_stackframe(char* sname, int sline) version 2
{
    pthread_mutex_lock(&gComeHeapMutex);
    inherit(sname, sline);
    pthread_mutex_unlock(&gComeHeapMutex);
}

uniq void stackframe() version 2
{
    pthread_mutex_lock(&gComeHeapMutex);
    inherit();
    pthread_mutex_unlock(&gComeHeapMutex);
}

uniq string come_get_stackframe() version 2
{
    pthread_mutex_lock(&gComeHeapMutex);
    string result = inherit();
    pthread_mutex_unlock(&gComeHeapMutex);
    
    return result;
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    pthread_mutex_lock(&gComeHeapMutex);
    void* result = inherit(count, size, sname, sline, class_name);
    pthread_mutex_unlock(&gComeHeapMutex);
    
    return result;
}

uniq void come_free(void* mem) version 2
{
    pthread_mutex_lock(&gComeHeapMutex);
    inherit(mem);
    pthread_mutex_unlock(&gComeHeapMutex);
}

#endif

#endif
