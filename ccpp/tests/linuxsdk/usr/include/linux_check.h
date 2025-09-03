#ifndef LINUX_CHECK_H
#define LINUX_CHECK_H

#if !defined(__linux__) || !defined(__ELF__)
#error not a linux + ELF environment
#endif

#if !defined(__BYTE_ORDER__) || !defined(__ORDER_LITTLE_ENDIAN__) || !defined(__ORDER_BIG_ENDIAN__)
#error missing byte-order macros
#endif

#if __BYTE_ORDER__ != __ORDER_LITTLE_ENDIAN__
#error expected little-endian in this test sysroot
#endif

#ifdef __riscv
# if !defined(__riscv_xlen)
#  error __riscv_xlen missing
# endif
# if __riscv_xlen != 64
#  error this test expects riscv64
# endif
#endif

#define LINUX_CHECK_OK 1

#endif

