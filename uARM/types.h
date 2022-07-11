#ifndef _TYPES_H_
#define _TYPES_H_

#include <sys/types.h>
#include <stdint.h>

typedef uint32_t UInt32;
typedef int32_t Int32;
typedef uint16_t UInt16;
typedef int16_t Int16;
typedef uint8_t UInt8;
typedef int8_t Int8;
typedef unsigned char Err;
typedef unsigned char Boolean;

#define true	1
#define false	0

#ifndef NULL
	#define NULL ((void*)0)
#endif

#define TYPE_CHECK ((sizeof(UInt32) == 4) && (sizeof(UInt16) == 2) && (sizeof(UInt8) == 1))

#define errNone		0x00
#define errInternal	0x01


#define _INLINE_   	inline __attribute__ ((always_inline))
#define _UNUSED_	__attribute__((unused))


/* runtime stuffs */
void err_str(const char* str);
void err_hex(UInt32 val);
void err_dec(UInt32 val);
void __mem_zero(void* mem, UInt16 len);
UInt32 rtcCurTime(void);
void* emu_alloc(UInt32 size);
void emu_free(void* ptr);
void __mem_copy(void* d, const void* s, UInt32 sz);

#if !defined(__OpenBSD__)
#define memset __memset_disabled__
#endif
#define memcpy __memcpy_disabled__

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
#include <sys/endian.h>
#endif /* defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) */

#ifndef LITTLE_ENDIAN
#define	LITTLE_ENDIAN	(0xAABBCCDDUL)
#endif /* LITTLE_ENDIAN */
#ifndef BIG_ENDIAN
#define	BIG_ENDIAN	(0xDDCCBBAAUL)
#endif /* BIG_ENDIAN */

#if defined(__ppc__)
#ifndef BYTE_ORDER
#define	BYTE_ORDER	BIG_ENDIAN
#endif /* BYTE_ORDER */
#endif /* defined(__ppc__) */

/* default byte order is little (same as original) */
#ifndef BYTE_ORDER
#define	BYTE_ORDER	LITTLE_ENDIAN
#endif /* BYTE_ORDER */

#if BYTE_ORDER == LITTLE_ENDIAN
#ifndef le32toh
#define	le32toh(x)	(x)
#endif /* le32toh */
#ifndef le16toh
#define	le16toh(x)	(x)
#endif /* le16toh */
#endif /* BYTE_ORDER == LITTLE_ENDIAN */

#if BYTE_ORDER == BIG_ENDIAN
#ifndef le32toh
#define	le32toh(x)	((((x) << 24) & 0xFF000000UL) | \
			 (((x) <<  8) & 0x00FF0000UL) | \
			 (((x) >>  8) & 0x0000FF00UL) | \
			 (((x) >> 24) & 0x000000FFUL))
#endif /* le32toh */
#ifndef le16toh
#define	le16toh(x)	((((x) << 8) & 0xFF00U) | \
			 (((x) >> 8) & 0x00FFU))
#endif /* le16toh */
#endif /* BYTE_ORDER == BIG_ENDIAN */

#ifndef htole32
#define	htole32		le32toh
#endif /* htole32 */
#ifndef htole16
#define	htole16		le16toh
#endif /* htole16 */

#endif

