#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <PalmTypes.h>
#include <stdarg.h>

typedef UInt16 wchar_t;
typedef unsigned long long UInt64;
typedef signed long long Int64;
typedef Boolean (*printf_write_c)(void* userData, char c);		//callbacks can return false anytime to abort
typedef Boolean (*printf_write_w)(void* userData, wchar_t c);		// printing immediately


UInt32 cvsprintf(printf_write_c writeF, void* writeD, const char* fmtStr, va_list vl);








#endif
