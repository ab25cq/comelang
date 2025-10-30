#ifndef COMELANG_PTHREAD_H
#define COMELANG_PTHREAD_H

#include <unistd.h>
#include <pthread.h>
#include <poll.h>

using comelang_pthread;

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
