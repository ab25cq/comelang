#include "buffer.h"
#include "xfunc.h"
#include <wchar.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

//////////////////////////////////////////////////
// resizable buf
//////////////////////////////////////////////////
void sBuf_init(sBuf* self)
{
    self->mBuf = (char*)xcalloc(1, sizeof(char)*64);
    self->mSize = 64;
    self->mLen = 0;
    *(self->mBuf) = '\0';
}

void sBuf_clone(sBuf* self, sBuf* buf)
{
    self->mSize = buf->mSize;
    self->mLen = buf->mLen;
    self->mBuf = xcalloc(1, buf->mSize);

    memcpy(self->mBuf, buf->mBuf, buf->mLen);
    self->mBuf[buf->mLen] = '\0';
}

void sBuf_append(sBuf* self, void* str, size_t size)
{
    void* str2;

    str2 = xcalloc(1, size);        // prevent deleting from bellow REALLOC
    memcpy(str2, str, size);

    if(self->mSize <= self->mLen + size + 1) {
        self->mSize = (self->mLen + size + 1) * 2;
        self->mBuf = xrealloc(self->mBuf, sizeof(char)*self->mSize);
    }

    memcpy(self->mBuf + self->mLen, str2, size);

    self->mLen += size;
    self->mBuf[self->mLen] = 0;

    free(str2);
}

/*
void sBuf_append(sBuf* self, void* str, size_t size)
{
    if(self->mSize <= self->mLen + size + 1) {
        self->mSize = (self->mLen + size + 1) * 2;
        self->mBuf = (char*)MREALLOC(self->mBuf, sizeof(char)*self->mSize);
    }

    memcpy(self->mBuf + self->mLen, str, size);

    self->mLen += size;
    self->mBuf[self->mLen] = 0;
}
*/

void sBuf_append_char(sBuf* self, char c)
{
    if(self->mSize <= self->mLen + 1 + 1) {
        self->mSize = (self->mLen + 1 + 1) * 2;
        self->mBuf = (char*)xrealloc(self->mBuf, self->mSize);
    }

    self->mBuf[self->mLen] = c;
    self->mLen++;
    self->mBuf[self->mLen] = 0;
}

void sBuf_append_str(sBuf* self, char* str)
{
    sBuf_append(self, str, strlen(str));
}

void sBuf_append_int(sBuf* self, int value)
{
    sBuf_append(self, &value, sizeof(int));
}

void sBuf_append_long(sBuf* self, long long value)
{
    sBuf_append(self, &value, sizeof(long long));
}

