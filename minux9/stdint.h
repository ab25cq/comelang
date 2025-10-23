#ifndef _STDINT_H
#define _STDINT_H

// 符号付き整数型
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;

// 符号なし整数型
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

// 最小幅保証整数型（任意の型に一致）
typedef int8_t   int_least8_t;
typedef int16_t  int_least16_t;
typedef int32_t  int_least32_t;
typedef int64_t  int_least64_t;

typedef uint8_t  uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

// 高速整数型（最低限）
typedef int64_t   int_fast8_t;
typedef int64_t   int_fast16_t;
typedef int64_t   int_fast32_t;
typedef int64_t   int_fast64_t;

typedef uint64_t  uint_fast8_t;
typedef uint64_t  uint_fast16_t;
typedef uint64_t  uint_fast32_t;
typedef uint64_t  uint_fast64_t;

// ポインタサイズに依存する整数型（RISC-V 64bit = 64bit）
typedef long             intptr_t;
typedef unsigned long    uintptr_t;

// サイズに関するマクロ
#define INT8_MIN     (-128)
#define INT8_MAX     127
#define UINT8_MAX    255

#define INT16_MIN    (-32768)
#define INT16_MAX    32767
#define UINT16_MAX   65535

#define INT32_MIN    (-2147483647 - 1)
#define INT32_MAX    2147483647
#define UINT32_MAX   4294967295U

#define INT64_MIN    (-9223372036854775807LL - 1)
#define INT64_MAX    9223372036854775807LL
#define UINT64_MAX   18446744073709551615ULL

#endif // _STDINT_H
