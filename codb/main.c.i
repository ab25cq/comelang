# 0 "main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4

# 1 "/usr/include/stdc-predef.h" 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
# 56 "/usr/include/stdc-predef.h" 3 4
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
# 0 "<command-line>" 2
# 1 "./common.h" 1


# 1 "/usr/local/include/comelang.h" 1 3
# 53 "/usr/local/include/comelang.h" 3
using C
{
# 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2024 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */





# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */







# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   _ISOC2X_SOURCE	Extensions to ISO C99 from ISO C2X.
   __STDC_WANT_LIB_EXT2__
			Extensions to ISO C99 from TR 27431-2:2010.
   __STDC_WANT_IEC_60559_BFP_EXT__
			Extensions to ISO C11 from TS 18661-1:2014.
   __STDC_WANT_IEC_60559_FUNCS_EXT__
			Extensions to ISO C11 from TS 18661-4:2015.
   __STDC_WANT_IEC_60559_TYPES_EXT__
			Extensions to ISO C11 from TS 18661-3:2015.
   __STDC_WANT_IEC_60559_EXT__
			ISO C2X interfaces defined only in Annex F.

   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _ATFILE_SOURCE	Additional *at interfaces.
   _DYNAMIC_STACK_SIZE_SOURCE Select correct (but non compile-time constant)
			MINSIGSTKSZ, SIGSTKSZ and PTHREAD_STACK_MIN.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).

   _FORTIFY_SOURCE	Add security hardening to many library functions.
			Set to 1, 2 or 3; 3 performs stricter checks than 2, which
			performs stricter checks than 1.

   _REENTRANT, _THREAD_SAFE
			Obsolete; equivalent to _POSIX_C_SOURCE=199506L.

   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200809L, as well as enabling miscellaneous functions from BSD and
   SVID.  If more than one of these are defined, they accumulate.  For
   example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE together
   give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __GLIBC_USE (F)	Define things from feature set F.  This is defined
			to 1 or 0; the subsequent macros are either defined
			or undefined, and those tests should be moved to
			__GLIBC_USE.
   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_ISOCXX11	Define ISO C++11 things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_MISC		Define things from 4.3BSD or System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_DYNAMIC_STACK_SIZE Define correct (but non compile-time constant)
			MINSIGSTKSZ, SIGSTKSZ and PTHREAD_STACK_MIN.
   __USE_GNU		Define GNU extensions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.

   ISO C feature test macros depend on the definition of the macro
   when an affected header is included, not when the first system
   header is included, and so they are handled in
   <bits/libc-header-start.h>, which does not have a multiple include
   guard.  Feature test macros that can be handled from the first
   system header included are handled here.  */


/* Undefine everything, so we get a clean slate.  */
# 156 "/usr/include/features.h" 3 4
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Convenience macro to test the version of gcc.
   Use like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note: only works for GCC 2.0 and later, because __GNUC_MINOR__ was
   added in 2.0.  */







/* Similarly for clang.  Features added to GCC after version 4.2 may
   or may not also be available in clang, and clang's definitions of
   __GNUC(_MINOR)__ are fixed at 4 and 2 respectively.  Not all such
   features can be queried via __has_extension/__has_feature.  */







/* Whether to use feature set F.  */


/* _BSD_SOURCE and _SVID_SOURCE are deprecated aliases for
   _DEFAULT_SOURCE.  If _DEFAULT_SOURCE is present we do not
   issue a warning; the expectation is that the source is being
   transitioned to use the new macro.  */







/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
# 229 "/usr/include/features.h" 3 4
/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE.  */
# 241 "/usr/include/features.h" 3 4
/* This is to enable the ISO C2X extension.  */







/* This is to enable the ISO C11 extension.  */





/* This is to enable the ISO C99 extension.  */






/* This is to enable the ISO C90 Amendment 1:1995 extension.  */
# 282 "/usr/include/features.h" 3 4
/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
# 311 "/usr/include/features.h" 3 4
/* Some C libraries once required _REENTRANT and/or _THREAD_SAFE to be
   defined in all multithreaded code.  GNU libc has not required this
   for many years.  We now treat them as compatibility synonyms for
   _POSIX_C_SOURCE=199506L, which is the earliest level of POSIX with
   comprehensive support for multithreaded code.  Using them never
   lowers the selected level of POSIX conformance, only raises it.  */
# 394 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
/* Features part to handle 64-bit time_t support.
   Copyright (C) 2021-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* We need to know the word size in order to check the time size.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
/* Bit size of the time_t type at glibc build time, x86-64 and x32 case.
   Copyright (C) 2018-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4





/* For others, time size is word size.  */
# 22 "/usr/include/features-time64.h" 2 3 4
# 395 "/usr/include/features.h" 2 3 4
# 436 "/usr/include/features.h" 3 4
/* The function 'gets' existed in C89, but is impossible to use
   safely.  It has been removed from ISO C11 and ISO C++14.  Note: for
   compatibility with various implementations of <cstdio>, this test
   must consider only the value of __cplusplus when compiling C++.  */






/* GNU formerly extended the scanf functions with modified format
   specifiers %as, %aS, and %a[...] that allocate a buffer for the
   input using malloc.  This extension conflicts with ISO C99, which
   defines %a as a standalone format specifier that reads a floating-
   point number; moreover, POSIX.1-2008 provides the same feature
   using the modifier letter 'm' instead (%ms, %mS, %m[...]).

   We now follow C99 unless GNU extensions are active and the compiler
   is specifically in C89 or C++98 mode (strict or not).  For
   instance, with GCC, -std=gnu11 will have C99-compliant scanf with
   or without -D_GNU_SOURCE, but -std=c89 -D_GNU_SOURCE will have the
   old extension.  */
# 467 "/usr/include/features.h" 3 4
/* ISO C2X added support for a 0b or 0B prefix on binary constants as
   inputs to strtol-family functions (base 0 or 2).  This macro is
   used to condition redirection in headers to allow that redirection
   to be disabled when building those functions, despite _GNU_SOURCE
   being defined.  */






/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
# 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 481 "/usr/include/features.h" 2 3 4

/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */






/* This is here only because every header file already includes this one.  */


# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2024 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* We are almost always included from features.h. */




/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   supported anymore.  */




/* Some user header file might have defined this before.  */



/* Compilers that lack __has_attribute may object to
       #if defined __has_attribute && __has_attribute (...)
   even though they do not need to evaluate the right-hand side of the &&.
   Similarly for __has_builtin, etc.  */
# 123 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */



/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */




/* This is not a typedef so `const __ptr_t' does the right thing.  */



/* C++ needs to know that types and declarations are C, not C++.  */
# 148 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Fortify support.  */



/* Use __builtin_dynamic_object_size at _FORTIFY_SOURCE=3 when available.  */
# 220 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Support for flexible arrays.
   Headers that should use flexible arrays only if they're "real"
   (e.g. only if they won't affect sizeof()) should test
   #if __glibc_c99_flexarr_available.  */
# 244 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
# 287 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* GCC and clang have various useful declarations that can be made with
   the '__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it.  */




/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */







/* Tell the compiler which argument to an allocation function
   indicates the alignment of the allocation.  */







/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* This declaration tells the compiler that the value is constant.  */
# 343 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
# 354 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Since version 3.2, gcc allows marking deprecated functions.  */






/* Since version 4.5, gcc also allows one to specify the message printed
   when a deprecated function is used.  clang claims to be gcc 4.2, but
   may also support this feature.  */
# 372 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */






/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */







/* The nonnull function attribute marks pointer parameters that
   must not be NULL.  This has the name __nonnull in glibc,
   and __attribute_nonnull__ in files shared with Gnulib to avoid
   collision with a different __nonnull in DragonFlyBSD 5.9.  */
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* The returns_nonnull function attribute marks the return type of the function
   as always being non-null.  */
# 420 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
# 435 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Forces a function to be always inlined.  */

/* The Linux kernel defines __always_inline in stddef.h (283d7573), and
   it conflicts with this definition.  Therefore undefine it first to
   allow either header to be included first.  */







/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */






/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  Using __GNUC_STDC_INLINE__
   or __GNUC_GNU_INLINE is not a good enough check for gcc because gcc versions
   older than 4.3 may define these macros and still not guarantee GNU inlining
   semantics.

   clang++ identifies itself as gcc-4.2, but has support for GNU inlining
   semantics, that can be checked for by using the __GNUC_STDC_INLINE_ and
   __GNUC_GNU_INLINE__ macro definitions.  */
# 481 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */





/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */




/* __restrict is known in EGCS 1.2 and above, and in clang.
   It works also in C++ mode (outside of arrays), but only when spelled
   as '__restrict', not 'restrict'.  */
# 507 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 and clang support this.
   This syntax is not usable in C++ mode.  */
# 554 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Undefine (also defined in libc-symbols.h).  */
# 573 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Gnulib avoids including these, as they don't work on non-glibc or
   older glibc platforms.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 577 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
# 578 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 647 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* __glibc_macro_warning (MESSAGE) issues warning MESSAGE.  This is
   intended for use in preprocessor macros.

   Note: MESSAGE must be a _single_ string; concatenation of string
   literals is not supported.  */
# 660 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Generic selection (ISO C11) is a C-only feature, available in GCC
   since version 4.9.  Previous versions do not provide generic
   selection, even though they might set __STDC_VERSION__ to 201112L,
   when in -std=c11 mode.  Thus, we must check for !defined __GNUC__
   when testing __STDC_VERSION__ for generic selection support.
   On the other hand, Clang also defines __GNUC__, so a clang-specific
   check is required to enable the use of generic selection.  */
# 715 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Specify that a function such as setjmp or vfork may return
   twice.  */
# 503 "/usr/include/features.h" 2 3 4


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */







/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */






# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 527 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X.  In C2X, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C2X does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C2X (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C2X features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C2X.

   __GLIBC_USE (IEC_60559_BFP_EXT_C2X) controls those features from TS
   18661-1 that are also included in C2X (with no feature test macro
   required in C2X).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C2X but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
# 103 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 214 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 35 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 38 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
/* Bit size of the time_t type at glibc build time, x86-64 and x32 case.
   Copyright (C) 2018-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4





/* For others, time size is word size.  */
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;





/* Smallest types with at least a given width.  */
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;

/* quad_t is also 64 bits.  */

typedef long int __quad_t;
typedef unsigned long int __u_quad_t;





/* Largest integral types.  */

typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;






/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, traditionally long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */
# 136 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
/* No need to mark the typedef with __extension__.   */




# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */

/* X32 kernel interface is 64-bit.  */
# 78 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */


/* Same for ino_t and ino64_t.  */


/* And for __rlim_t and __rlim64_t.  */


/* And for fsblkcnt_t, fsblkcnt64_t, fsfilcnt_t and fsfilcnt64_t.  */


/* And for getitimer, setitimer and rusage  */
# 102 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
/* Number of descriptors that can fit in an `fd_set'.  */
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
/* bits/time64.h -- underlying types for __time64_t.  Generic version.
   Copyright (C) 2018-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/time64.h" 3 4
/* Define __TIME64_T_TYPE so that it is always a 64-bit type.  */


/* If we already have 64-bit time type then use it.  */
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t; /* Type of device numbers.  */
typedef unsigned int __uid_t; /* Type of user identifications.  */
typedef unsigned int __gid_t; /* Type of group identifications.  */
typedef unsigned long int __ino_t; /* Type of file serial numbers.  */
typedef unsigned long int __ino64_t; /* Type of file serial numbers (LFS).*/
typedef unsigned int __mode_t; /* Type of file attribute bitmasks.  */
typedef unsigned long int __nlink_t; /* Type of file link counts.  */
typedef long int __off_t; /* Type of file sizes and offsets.  */
typedef long int __off64_t; /* Type of file sizes and offsets (LFS).  */
typedef int __pid_t; /* Type of process identifications.  */
typedef struct { int __val[2]; } __fsid_t; /* Type of file system IDs.  */
typedef long int __clock_t; /* Type of CPU usage counts.  */
typedef unsigned long int __rlim_t; /* Type for resource measurement.  */
typedef unsigned long int __rlim64_t; /* Type for resource measurement (LFS).  */
typedef unsigned int __id_t; /* General type for IDs.  */
typedef long int __time_t; /* Seconds since the Epoch.  */
typedef unsigned int __useconds_t; /* Count of microseconds.  */
typedef long int __suseconds_t; /* Signed count of microseconds.  */
typedef long int __suseconds64_t;

typedef int __daddr_t; /* The type of a disk address.  */
typedef int __key_t; /* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
typedef int __clockid_t;

/* Timer ID returned by `timer_create'.  */
typedef void * __timer_t;

/* Type to represent block size.  */
typedef long int __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;

/* Type to count file system blocks.  */
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;

/* Type to count file system nodes.  */
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

/* Type of miscellaneous file system fields.  */
typedef long int __fsword_t;

typedef long int __ssize_t; /* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */
typedef long int __syscall_slong_t;
/* Unsigned long type used in system calls.  */
typedef unsigned long int __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t; /* Type of file sizes and offsets (LFS).  */
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
typedef long int __intptr_t;

/* Duplicate info from sys/socket.h.  */
typedef unsigned int __socklen_t;

/* C99: An integer type that can be accessed as an atomic entity,
   even in the presence of asynchronous interrupts.
   It is not currently necessary for this to be machine-specific.  */
typedef int __sig_atomic_t;

/* Seconds since the Epoch, visible to user code when time_t is too
   narrow only for consistency with the old way of widening too-narrow
   types.  User code should never use __time64_t.  */
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4



/* Integral type unchanged by default argument promotions that can
   hold any value corresponding to members of the extended character
   set, as well as at least one value that does not correspond to any
   member of the extended character set.  */




/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value; /* Value so far.  */
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4

/* The tag name of this struct is _G_fpos_t to preserve historic
   C++ mangled names for functions taking fpos_t arguments.
   That name should not be used in new code.  */
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 2 3 4


/* The tag name of this struct is _G_fpos64_t to preserve historic
   C++ mangled names for functions taking fpos_t and/or fpos64_t
   arguments.  That name should not be used in new code.  */
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;

/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;
# 44 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Caution: The contents of this file are not part of the official
   stdio.h API.  However, much of it is part of the official *binary*
   interface, and therefore cannot be changed.  */
# 33 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 34 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 2 3 4

struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;

/* During the build of glibc itself, _IO_lock_t will already have been
   defined by internal headers.  */

typedef void _IO_lock_t;


/* The tag name of this struct is _IO_FILE to preserve historic
   C++ mangled names for functions taking FILE* arguments.
   That name should not be used in new code.  */
struct _IO_FILE
{
  int _flags; /* High-order word is _IO_MAGIC; rest is flags. */

  /* The following pointers correspond to the C++ streambuf protocol. */
  char *_IO_read_ptr; /* Current read pointer */
  char *_IO_read_end; /* End of get area. */
  char *_IO_read_base; /* Start of putback+get area. */
  char *_IO_write_base; /* Start of put area. */
  char *_IO_write_ptr; /* Current put pointer. */
  char *_IO_write_end; /* End of put area. */
  char *_IO_buf_base; /* Start of reserve area. */
  char *_IO_buf_end; /* End of reserve area. */

  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base; /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset; /* This used to be _offset but it's too small.  */

  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;
  /* Wide character stream stuff.  */
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};

/* These macros are used by bits/stdio.h and internal headers.  */
# 118 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
/* Many more flag bits are defined internally.  */
# 45 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 22 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 2 3 4

/* Functions to do I/O and file management for a stream.  */

/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
   Return number of bytes read.  */
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);

/* Write NBYTES bytes pointed to by BUF to COOKIE.  Write all NBYTES bytes
   unless there is an error.  Return number of bytes written.  If
   there is an error, return 0 and do not write anything.  If the file
   has been opened for append (__mode.__append set), then set the file
   pointer to the end of the file and then do the write; if not, just
   write at the current file pointer.  */
typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);

/* Move COOKIE's file position to *POS bytes from the
   beginning of the file (if W is SEEK_SET),
   the current position (if W is SEEK_CUR),
   or the end of the file (if W is SEEK_END).
   Set *POS to the new file position.
   Returns zero if successful, nonzero if not.  */
typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);

/* Close COOKIE.  */
typedef int cookie_close_function_t (void *__cookie);

/* The structure with the cookie function pointers.
   The tag name of this struct is _IO_cookie_io_functions_t to
   preserve historic C++ mangled names for functions taking
   cookie_io_functions_t arguments.  That name should not be used in
   new code.  */
typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read; /* Read bytes.  */
  cookie_write_function_t *write; /* Write bytes.  */
  cookie_seek_function_t *seek; /* Seek/tell file position.  */
  cookie_close_function_t *close; /* Close file.  */
} cookie_io_functions_t;
# 48 "/usr/include/stdio.h" 2 3 4
# 57 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */






/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 60 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 90 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 58 "/usr/include/stdio.h" 2 3 4






typedef __off_t off_t;






typedef __off64_t off64_t;






typedef __ssize_t ssize_t;




/* The type of the second argument to `fgetpos' and `fsetpos'.  */

typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;


/* The possibilities for the third argument to `setvbuf'.  */





/* Default buffer size.  */



/* The value returned by fgetc and similar functions to indicate the
   end of the file.  */



/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
# 120 "/usr/include/stdio.h" 3 4
/* Default path prefix for `tempnam' and `tmpnam'.  */






/* Get the values:
   FILENAME_MAX	Maximum length of a filename.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
/* System specific stdio.h definitions.  Linux version.
   Copyright (C) 2023-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 130 "/usr/include/stdio.h" 2 3 4
# 143 "/usr/include/stdio.h" 3 4
/* Maximum length of printf output for a NaN.  */




/* Standard streams.  */
extern FILE *stdin; /* Standard input stream.  */
extern FILE *stdout; /* Standard output stream.  */
extern FILE *stderr; /* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */




/* Remove file FILENAME.  */
extern int remove (const char *__filename) ;
/* Rename file OLD to NEW.  */
extern int rename (const char *__old, const char *__new) ;


/* Rename file OLD relative to OLDFD to NEW relative to NEWFD.  */
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;



/* Flags for renameat2.  */




/* Rename file OLD relative to OLDFD to NEW relative to NEWFD, with
   additional flags.  */
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) ;


/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream) ;




/* Create a temporary file and open it read/write.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern FILE *tmpfile (void)
  ;
# 206 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void)
   ;


/* Generate a temporary filename.  */
extern char *tmpnam (char[20]) ;


/* This is the reentrant variant of `tmpnam'.  The only difference is
   that it does not allow S to be NULL.  */
extern char *tmpnam_r (char __s[20]) ;




/* Generate a unique temporary filename using up to five characters of PFX
   if it is not NULL.  The directory to put this file in is searched for
   as follows: First the environment variable "TMPDIR" is checked.
   If it contains the name of a writable directory, that directory is used.
   If not and if DIR is not NULL, that value is checked.  If that fails,
   P_tmpdir is tried and finally "/tmp".  The storage for the filename
   is allocated by `malloc'.  */
extern char *tempnam (const char *__dir, const char *__pfx)
   ;


/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);


/* Faster versions when locking is not required.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fflush_unlocked (FILE *__stream);



/* Close all streams.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fcloseall (void);




/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (const char *restrict __filename,
      const char *restrict __modes)
  ;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (const char *restrict __filename,
        const char *restrict __modes,
        FILE *restrict __stream) ;
# 289 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *restrict __filename,
        const char *restrict __modes)
  ;
extern FILE *freopen64 (const char *restrict __filename,
   const char *restrict __modes,
   FILE *restrict __stream) ;



/* Create a new stream that refers to an existing system file descriptor.  */
extern FILE *fdopen (int __fd, const char *__modes)
  ;



/* Create a new stream that refers to the given magic cookie,
   and uses the given functions for input and output.  */
extern FILE *fopencookie (void *restrict __magic_cookie,
     const char *restrict __modes,
     cookie_io_functions_t __io_funcs)
  ;



/* Create a new stream that refers to a memory buffer.  */
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  ;

/* Open a stream that writes into a malloc'd buffer that is expanded as
   necessary.  *BUFLOC and *SIZELOC are updated with the buffer's location
   and the number of characters written on fflush or fclose.  */
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc)
  ;
# 332 "/usr/include/stdio.h" 3 4
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *restrict __stream, char *restrict __buf)
  ;
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
      int __modes, size_t __n) ;


/* If BUF is NULL, make STREAM unbuffered.
   Else make it use SIZE bytes of BUF for buffering.  */
extern void setbuffer (FILE *restrict __stream, char *restrict __buf,
         size_t __size) ;

/* Make STREAM line-buffered.  */
extern void setlinebuf (FILE *__stream) ;



/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *restrict __stream,
      const char *restrict __format, ...) ;
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (const char *restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *restrict __s,
      const char *restrict __format, ...) ;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg) ;
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg) ;


/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *restrict __s, size_t __maxlen,
       const char *restrict __format, ...)
     ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
        const char *restrict __format, __gnuc_va_list __arg)
     ;



/* Write formatted output to a string dynamically allocated with `malloc'.
   Store the address of the string in *PTR.  */
extern int vasprintf (char **restrict __ptr, const char *restrict __f,
        __gnuc_va_list __arg)
     ;
extern int __asprintf (char **restrict __ptr,
         const char *restrict __fmt, ...)
     ;
extern int asprintf (char **restrict __ptr,
       const char *restrict __fmt, ...)
     ;



/* Write formatted output to a file descriptor.  */
extern int vdprintf (int __fd, const char *restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *restrict __fmt, ...)
     ;



/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *restrict __stream,
     const char *restrict __format, ...) ;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (const char *restrict __format, ...) ;
/* Read formatted input from S.  */
extern int sscanf (const char *restrict __s,
     const char *restrict __format, ...) ;

/* For historical reasons, the C99-compliant versions of the scanf
   functions are at alternative names.  When __LDBL_COMPAT or
   __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI are in effect, this is handled in
   bits/stdio-ldbl.h.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
/* Macros to control TS 18661-3 glibc features on x86.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 23 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the IEEE 754 binary128 format, and this
   glibc includes corresponding *f128 interfaces for it.  The required
   libgcc support was added some time after the basic compiler
   support, for x86_64 and x86.  */
# 37 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
/* Defined to 1 if __HAVE_FLOAT128 is 1 and the type is ABI-distinct
   from the default float, double and long double types in this glibc.  */






/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for _Float64x, and this
   glibc includes corresponding *f64x interfaces for it.  */


/* Defined to 1 if __HAVE_FLOAT64X is 1 and _Float64x has the format
   of long double.  Otherwise, if __HAVE_FLOAT64X is 1, _Float64x has
   the format of _Float128, which must be different from that of long
   double.  */




/* Defined to concatenate the literal suffix to be used with _Float128
   types, if __HAVE_FLOAT128 is 1. */
# 69 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
/* Defined to a complex binary128 type if __HAVE_FLOAT128 is 1.  */
# 81 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
/* The remaining of this file provides support for older compilers.  */
# 119 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
/* Macros to control TS 18661-3 glibc features where the same
   definitions are appropriate for all platforms.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4

/* This header should be included at the bottom of each bits/floatn.h.
   It defines the following macros for each _FloatN and _FloatNx type,
   where the same definitions, or definitions based only on the macros
   in bits/floatn.h, are appropriate for all glibc configurations.  */

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for this type, and this
   glibc includes corresponding *fN or *fNx interfaces for it.  */






/* Defined to 1 if the corresponding __HAVE_<type> macro is 1 and the
   type is the first with its format in the sequence of (the default
   choices for) float, double, long double, _Float16, _Float32,
   _Float64, _Float128, _Float32x, _Float64x, _Float128x for this
   glibc; that is, if functions present once per floating-point format
   rather than once per type are present for this type.

   All configurations supported by glibc have _Float32 the same format
   as float, _Float64 and _Float32x the same format as double, the
   _Float64x the same format as either long double or _Float128.  No
   configurations support _Float128x or, as of GCC 7, have compiler
   support for a type meeting the requirements for _Float128x.  */







/* Defined to 1 if the corresponding _FloatN type is not binary compatible
   with the corresponding ISO C type in the current compilation unit as
   opposed to __HAVE_DISTINCT_FLOATN, which indicates the default types built
   in glibc.  */



/* Defined to 1 if any _FloatN or _FloatNx types that are not
   ABI-distinct are however distinct types at the C language level (so
   for the purposes of __builtin_types_compatible_p and _Generic).  */
# 77 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
/* Defined to concatenate the literal suffix to be used with _FloatN
   or _FloatNx types, if __HAVE_<type> is 1.  The corresponding
   literal suffixes exist since GCC 7, for C only.  */
# 137 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
/* Defined to a complex type if __HAVE_<type> is 1.  */
# 195 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
/* The remaining of this file provides support for older compilers.  */
# 214 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
# 228 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
/* If double, long double and _Float64 all have the same set of
   values, TS 18661-3 requires the usual arithmetic conversions on
   long double and _Float64 to produce _Float64.  For this to be the
   case when building with a compiler without a distinct _Float64
   type, _Float64 must be a typedef for long double, not for
   double.  */
# 251 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 438 "/usr/include/stdio.h" 2 3 4
# 451 "/usr/include/stdio.h" 3 4
extern int __isoc23_fscanf (FILE *restrict __stream,
       const char *restrict __format, ...)
  ;
extern int __isoc23_scanf (const char *restrict __format, ...) ;
extern int __isoc23_sscanf (const char *restrict __s,
       const char *restrict __format, ...) ;
# 486 "/usr/include/stdio.h" 3 4
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
      __gnuc_va_list __arg)
     ;

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
     ;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (const char *restrict __s,
      const char *restrict __format, __gnuc_va_list __arg)
     ;

/* Same redirection as above for the v*scanf family.  */
# 525 "/usr/include/stdio.h" 3 4
extern int __isoc23_vfscanf (FILE *restrict __s,
        const char *restrict __format,
        __gnuc_va_list __arg) ;
extern int __isoc23_vscanf (const char *restrict __format,
       __gnuc_va_list __arg) ;
extern int __isoc23_vsscanf (const char *restrict __s,
        const char *restrict __format,
        __gnuc_va_list __arg) ;
# 571 "/usr/include/stdio.h" 3 4
/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream) ;
extern int getc (FILE *__stream) ;

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);


/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int getc_unlocked (FILE *__stream) ;
extern int getchar_unlocked (void);



/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fgetc_unlocked (FILE *__stream) ;



/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.

   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream) ;
extern int putc (int __c, FILE *__stream) ;

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);


/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputc_unlocked (int __c, FILE *__stream) ;



/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int putc_unlocked (int __c, FILE *__stream) ;
extern int putchar_unlocked (int __c);





/* Get a word (int) from STREAM.  */
extern int getw (FILE *__stream) ;

/* Write a word (int) to STREAM.  */
extern int putw (int __w, FILE *__stream) ;



/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
     ;
# 671 "/usr/include/stdio.h" 3 4
/* This function does the same as `fgets' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern char *fgets_unlocked (char *restrict __s, int __n,
        FILE *restrict __stream)
    ;




/* Read up to (and including) a DELIMITER from STREAM into *LINEPTR
   (and null-terminate it). *LINEPTR is a pointer returned from malloc (or
   NULL), pointing to *N characters of space.  It is realloc'd as
   necessary.  Returns the number of characters read (not including the
   null terminator), or -1 on error or EOF.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern __ssize_t __getdelim (char **restrict __lineptr,
                             size_t *restrict __n, int __delimiter,
                             FILE *restrict __stream) ;
extern __ssize_t getdelim (char **restrict __lineptr,
                           size_t *restrict __n, int __delimiter,
                           FILE *restrict __stream) ;

/* Like `getdelim', but reads up to a newline.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern __ssize_t getline (char **restrict __lineptr,
                          size_t *restrict __n,
                          FILE *restrict __stream) ;



/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (const char *restrict __s, FILE *restrict __stream)
  ;

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream) ;


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void *restrict __ptr, size_t __size,
       size_t __n, FILE *restrict __stream)
  ;
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (const void *restrict __ptr, size_t __size,
        size_t __n, FILE *restrict __s) ;


/* This function does the same as `fputs' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputs_unlocked (const char *restrict __s,
      FILE *restrict __stream) ;



/* Faster versions when locking is not necessary.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern size_t fread_unlocked (void *restrict __ptr, size_t __size,
         size_t __n, FILE *restrict __stream)
  ;
extern size_t fwrite_unlocked (const void *restrict __ptr, size_t __size,
          size_t __n, FILE *restrict __stream)
  ;



/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence)
  ;
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) ;
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream) ;

/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */



/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseeko (FILE *__stream, __off_t __off, int __whence)
  ;
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __off_t ftello (FILE *__stream) ;
# 825 "/usr/include/stdio.h" 3 4
/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos)
  ;
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, const fpos_t *__pos) ;
# 851 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence)
  ;
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *restrict __stream, fpos64_t *restrict __pos)
  ;
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos) ;


/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) ;
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) ;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) ;


/* Faster versions when locking is not required.  */
extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;



/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (const char *__s) ;



/* Return the system file descriptor for STREAM.  */
extern int fileno (FILE *__stream) ;



/* Faster version when locking is not required.  */
extern int fileno_unlocked (FILE *__stream) ;




/* Close a stream opened by popen and return the status of its child.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int pclose (FILE *__stream) ;

/* Create a new stream connected to a pipe running the given command.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *popen (const char *__command, const char *__modes)
  ;





/* Return the name of the controlling terminal.  */
extern char *ctermid (char *__s)
  ;




/* Return the name of the current user.  */
extern char *cuserid (char *__s)
  ;




struct obstack; /* See <obstack.h>.  */

/* Write formatted output to an obstack.  */
extern int obstack_printf (struct obstack *restrict __obstack,
      const char *restrict __format, ...)
     ;
extern int obstack_vprintf (struct obstack *restrict __obstack,
       const char *restrict __format,
       __gnuc_va_list __args)
     ;




/* These are defined in POSIX.1:1996.  */

/* Acquire ownership of STREAM.  */
extern void flockfile (FILE *__stream) ;

/* Try to acquire ownership of STREAM but do not block if it is not
   possible.  */
extern int ftrylockfile (FILE *__stream) ;

/* Relinquish the ownership granted for STREAM.  */
extern void funlockfile (FILE *__stream) ;
# 957 "/usr/include/stdio.h" 3 4
/* Slow-path routines used by the optimized inline functions in
   bits/stdio.h.  */
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);






/* The following headers provide asm redirections.  These redirections must
   appear before the first usage of these functions, e.g. in bits/stdio.h.  */




/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
# 983 "/usr/include/stdio.h" 3 4

# 56 "/usr/local/include/comelang.h" 2 3
# 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */




# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */







# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X.  In C2X, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C2X does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C2X (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C2X features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C2X.

   __GLIBC_USE (IEC_60559_BFP_EXT_C2X) controls those features from TS
   18661-1 that are also included in C2X (with no feature test macro
   required in C2X).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C2X but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
# 103 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/stdlib.h" 2 3 4

/* Get size_t, wchar_t and NULL from <stddef.h>.  */



# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 284 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 311 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 329 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
typedef int wchar_t;
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 33 "/usr/include/stdlib.h" 2 3 4






/* XPG requires a few symbols from <sys/wait.h> being defined.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
/* Definitions of flag bits for `waitpid' et al.
   Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Bits in the third argument to `waitpid'.  */



/* Bits in the fourth argument to `waitid'.  */
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
/* Definitions of status bits for `wait' et al.
   Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Everything extant so far uses these same bits.  */


/* If WIFEXITED(STATUS), the low-order 8 bits of the status.  */


/* If WIFSIGNALED(STATUS), the terminating signal.  */


/* If WIFSTOPPED(STATUS), the signal that stopped the child.  */


/* Nonzero if STATUS indicates normal termination.  */


/* Nonzero if STATUS indicates termination by a signal.  */



/* Nonzero if STATUS indicates the child is stopped.  */


/* Nonzero if STATUS indicates the child continued after a stop.  We only
   define this if <bits/waitflags.h> provides the WCONTINUED flag bit.  */




/* Nonzero if STATUS indicates the child dumped core.  */


/* Macros for constructing status values.  */
# 42 "/usr/include/stdlib.h" 2 3 4

/* Define the macros <sys/wait.h> also would define this way.  */
# 55 "/usr/include/stdlib.h" 3 4
/* _FloatN API tests for enablement.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
/* Macros to control TS 18661-3 glibc features on x86.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 57 "/usr/include/stdlib.h" 2 3 4

/* Returned by `div'.  */
typedef struct
  {
    int quot; /* Quotient.  */
    int rem; /* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */

typedef struct
  {
    long int quot; /* Quotient.  */
    long int rem; /* Remainder.  */
  } ldiv_t;




/* Returned by `lldiv'.  */
 typedef struct
  {
    long long int quot; /* Quotient.  */
    long long int rem; /* Remainder.  */
  } lldiv_t;




/* The largest number rand will return (same as INT_MAX).  */



/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */




/* Maximum length of a multibyte character in the current locale.  */

extern size_t __ctype_get_mb_cur_max (void) ;


/* Convert a string to a floating-point number.  */
extern double atof (const char *__nptr)
     ;
/* Convert a string to an integer.  */
extern int atoi (const char *__nptr)
     ;
/* Convert a string to a long integer.  */
extern long int atol (const char *__nptr)
     ;


/* Convert a string to a long long integer.  */
 extern long long int atoll (const char *__nptr)
     ;


/* Convert a string to a floating-point number.  */
extern double strtod (const char *restrict __nptr,
        char **restrict __endptr)
     ;


/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (const char *restrict __nptr,
       char **restrict __endptr) ;

extern long double strtold (const char *restrict __nptr,
       char **restrict __endptr)
     ;


/* Likewise for '_FloatN' and '_FloatNx'.  */
# 141 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *restrict __nptr,
     char **restrict __endptr)
     ;



extern _Float64 strtof64 (const char *restrict __nptr,
     char **restrict __endptr)
     ;
# 159 "/usr/include/stdlib.h" 3 4
extern _Float32x strtof32x (const char *restrict __nptr,
       char **restrict __endptr)
     ;



extern _Float64x strtof64x (const char *restrict __nptr,
       char **restrict __endptr)
     ;
# 176 "/usr/include/stdlib.h" 3 4
/* Convert a string to a long integer.  */
extern long int strtol (const char *restrict __nptr,
   char **restrict __endptr, int __base)
     ;
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (const char *restrict __nptr,
      char **restrict __endptr, int __base)
     ;


/* Convert a string to a quadword integer.  */

extern long long int strtoq (const char *restrict __nptr,
        char **restrict __endptr, int __base)
     ;
/* Convert a string to an unsigned quadword integer.  */

extern unsigned long long int strtouq (const char *restrict __nptr,
           char **restrict __endptr, int __base)
     ;



/* Convert a string to a quadword integer.  */

extern long long int strtoll (const char *restrict __nptr,
         char **restrict __endptr, int __base)
     ;
/* Convert a string to an unsigned quadword integer.  */

extern unsigned long long int strtoull (const char *restrict __nptr,
     char **restrict __endptr, int __base)
     ;


/* Versions of the above functions that handle '0b' and '0B' prefixes
   in base 0 or 2.  */
# 249 "/usr/include/stdlib.h" 3 4
extern long int __isoc23_strtol (const char *restrict __nptr,
     char **restrict __endptr, int __base)
     ;
extern unsigned long int __isoc23_strtoul (const char *restrict __nptr,
        char **restrict __endptr,
        int __base)
     ;

extern long long int __isoc23_strtoll (const char *restrict __nptr,
           char **restrict __endptr, int __base)
     ;

extern unsigned long long int __isoc23_strtoull (const char *restrict __nptr,
       char **restrict __endptr,
       int __base)
     ;
# 276 "/usr/include/stdlib.h" 3 4
/* Convert a floating-point number to a string.  */

extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     ;

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     ;

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     ;
# 298 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     ;



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     ;
# 316 "/usr/include/stdlib.h" 3 4
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     ;



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     ;
# 335 "/usr/include/stdlib.h" 3 4
/* Parallel versions of the functions above which take the locale to
   use as an additional parameter.  These are GNU extensions inspired
   by the POSIX.1-2008 extended locale API.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
/* Definition of locale_t.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
/* Definition of struct __locale_struct and __locale_t.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* POSIX.1-2008: the locale_t type, representing a locale context
   (implementation-namespace version).  This type should be treated
   as opaque by applications; some details are exposed for the sake of
   efficiency in e.g. ctype functions.  */

struct __locale_struct
{
  /* Note: LC_ALL is not a valid index into this array.  */
  struct __locale_data *__locales[13]; /* 13 = __LC_LAST. */

  /* To increase the speed of this solution we add some special members.  */
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;

  /* Note: LC_ALL is not a valid index into this array.  */
  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 339 "/usr/include/stdlib.h" 2 3 4

extern long int strtol_l (const char *restrict __nptr,
     char **restrict __endptr, int __base,
     locale_t __loc) ;

extern unsigned long int strtoul_l (const char *restrict __nptr,
        char **restrict __endptr,
        int __base, locale_t __loc)
     ;


extern long long int strtoll_l (const char *restrict __nptr,
    char **restrict __endptr, int __base,
    locale_t __loc)
     ;


extern unsigned long long int strtoull_l (const char *restrict __nptr,
       char **restrict __endptr,
       int __base, locale_t __loc)
     ;

/* Versions of the above functions that handle '0b' and '0B' prefixes
   in base 0 or 2.  */
# 391 "/usr/include/stdlib.h" 3 4
extern long int __isoc23_strtol_l (const char *restrict __nptr,
       char **restrict __endptr, int __base,
       locale_t __loc) ;
extern unsigned long int __isoc23_strtoul_l (const char *restrict __nptr,
          char **restrict __endptr,
          int __base, locale_t __loc)
     ;

extern long long int __isoc23_strtoll_l (const char *restrict __nptr,
      char **restrict __endptr,
      int __base, locale_t __loc)
     ;

extern unsigned long long int __isoc23_strtoull_l (const char *restrict __nptr,
         char **restrict __endptr,
         int __base, locale_t __loc)
     ;







extern double strtod_l (const char *restrict __nptr,
   char **restrict __endptr, locale_t __loc)
     ;

extern float strtof_l (const char *restrict __nptr,
         char **restrict __endptr, locale_t __loc)
     ;

extern long double strtold_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;
# 436 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
     ;



extern _Float64 strtof64_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
     ;
# 457 "/usr/include/stdlib.h" 3 4
extern _Float32x strtof32x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;



extern _Float64x strtof64x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;
# 502 "/usr/include/stdlib.h" 3 4
/* Convert N to base 64 using the digits "./0-9A-Za-z", least-significant
   digit first.  Returns a pointer to static storage overwritten by the
   next call.  */
extern char *l64a (long int __n) ;

/* Read a number from a string S in base 64 as above.  */
extern long int a64l (const char *__s)
     ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 2 3 4

/* Returned by `clock'.  */
typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 2 3 4

/* Clock ID used in clock and timer functions.  */
typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 2 3 4

/* Returned by `time'.  */



typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 2 3 4

/* Timer ID returned by `timer_create'.  */
typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


/* Old compatibility names for C types.  */
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;


/* These size-specific names are used by some of the inet code.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
/* Define intN_t types.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 23 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 2 3 4

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

/* These were defined by ISO C without the first `_'.  */
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;




typedef int register_t;


/* Some code from BIND tests this macro to see if the types above are
   defined.  */




/* In BSD <sys/types.h> is expected to define BYTE_ORDER.  */
# 1 "/usr/include/endian.h" 1 3 4
/* Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 22 "/usr/include/endian.h" 2 3 4

/* Get the definitions of __*_ENDIAN, __BYTE_ORDER, and __FLOAT_WORD_ORDER.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
/* Endian macros for string.h functions
   Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* Definitions for byte order, according to significance of bytes,
   from low addresses to high addresses.  The value is what you get by
   putting '4' in the most significant byte, '3' in the second most
   significant byte, '2' in the second least significant byte, and '1'
   in the least significant byte, and then writing down one digit for
   each byte, starting with the byte at the lowest address at the left,
   and proceeding to the byte with the highest address at the right.  */





/* This file defines `__BYTE_ORDER' for the particular machine.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4







/* i386/x86_64 are little-endian.  */
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4

/* Some machines may need to use a different endianness for floating point
   values.  */
# 25 "/usr/include/endian.h" 2 3 4
# 34 "/usr/include/endian.h" 3 4
/* Conversion interfaces.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
/* Macros and inline functions to swap the order of bytes in integer values.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4

/* Swap bytes in 16-bit value.  */



static inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}

/* Swap bytes in 32-bit value.  */




static inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}

/* Swap bytes in 64-bit value.  */
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
 static inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56));

}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
/* Inline functions to return unsigned integer values unchanged.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 27 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 2 3 4

/* These inline functions are to ensure the appropriate type
   conversions and associated diagnostics from macros that convert to
   a given endianness.  */

static inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

/* It also defines `fd_set' and the FD_* macros for `select'.  */
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
/* `fd_set' type and related macros, and `select'/`pselect' declarations.
   Copyright (C) 1996-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*	POSIX 1003.1g: 6.2 Select from File Descriptor Sets <sys/select.h>  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

/* Get definition of needed basic types.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 28 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

/* Get __FD_* definitions.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
/* Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* We don't use `memset' because this would require a prototype and
   the array isn't too big.  */
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

/* Get sigset_t.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4

/* A set of signals to be blocked, unblocked, or waited for.  */
typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

/* Get definition of timer specification structures.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 2 3 4

/* A time value that is accurate to the nearest
   microsecond but also has a range of years.  */
struct timeval
{




  __time_t tv_sec; /* Seconds.  */
  __suseconds_t tv_usec; /* Microseconds.  */

};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
/* NB: Include guard matches what <linux/time.h> uses.  */



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 6 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
/* Endian macros for string.h functions
   Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 2 3 4


/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */
struct timespec
{



  __time_t tv_sec; /* Seconds.  */




  __syscall_slong_t tv_nsec; /* Nanoseconds.  */
# 31 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
/* The fd_set member is required to be an array of longs.  */
typedef long int __fd_mask;

/* Some versions of <linux/posix_types.h> define this macros.  */

/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */




/* fd_set for select and pselect.  */
typedef struct
  {
    /* XPG4.2 requires this member name.  Otherwise avoid the name
       from the global namespace.  */

    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;

/* Maximum number of file descriptors in `fd_set'.  */



/* Sometimes the fd_set member is assumed to have this type.  */
typedef __fd_mask fd_mask;

/* Number of bits per word of `fd_set' (some code assumes this is 32).  */




/* Access macros for `fd_set'.  */








/* Check the first NFDS descriptors each in READFDS (if not NULL) for read
   readiness, in WRITEFDS (if not NULL) for write readiness, and in EXCEPTFDS
   (if not NULL) for exceptional conditions.  If TIMEOUT is not NULL, time out
   after waiting the interval specified therein.  Returns the number of ready
   descriptors, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int select (int __nfds, fd_set *restrict __readfds,
     fd_set *restrict __writefds,
     fd_set *restrict __exceptfds,
     struct timeval *restrict __timeout);
# 120 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
/* Same as above only that the TIMEOUT value is given with higher
   resolution and a sigmask which is been set temporarily.  This version
   should be used.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int pselect (int __nfds, fd_set *restrict __readfds,
      fd_set *restrict __writefds,
      fd_set *restrict __exceptfds,
      const struct timespec *restrict __timeout,
      const __sigset_t *restrict __sigmask);
# 148 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
/* Define some inlines helping to catch common problems.  */





# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;



/* Types from the Large File Support interface.  */


typedef __blkcnt_t blkcnt_t; /* Type to count number of disk blocks.  */



typedef __fsblkcnt_t fsblkcnt_t; /* Type to count file system blocks.  */



typedef __fsfilcnt_t fsfilcnt_t; /* Type to count file system inodes.  */
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t; /* Type to count number of disk blocks. */
typedef __fsblkcnt64_t fsblkcnt64_t; /* Type to count file system blocks.  */
typedef __fsfilcnt64_t fsfilcnt64_t; /* Type to count file system inodes.  */



/* Now add the thread types.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
/* Declaration of common pthread types for all architectures.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* For internal mutex and condition variable definitions.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
/* Common threading primitives definitions for both POSIX and C11.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Arch-specific definitions.  Each architecture must define the following
   macros to define the expected sizes of pthread data types:

   __SIZEOF_PTHREAD_ATTR_T        - size of pthread_attr_t.
   __SIZEOF_PTHREAD_MUTEX_T       - size of pthread_mutex_t.
   __SIZEOF_PTHREAD_MUTEXATTR_T   - size of pthread_mutexattr_t.
   __SIZEOF_PTHREAD_COND_T        - size of pthread_cond_t.
   __SIZEOF_PTHREAD_CONDATTR_T    - size of pthread_condattr_t.
   __SIZEOF_PTHREAD_RWLOCK_T      - size of pthread_rwlock_t.
   __SIZEOF_PTHREAD_RWLOCKATTR_T  - size of pthread_rwlockattr_t.
   __SIZEOF_PTHREAD_BARRIER_T     - size of pthread_barrier_t.
   __SIZEOF_PTHREAD_BARRIERATTR_T - size of pthread_barrierattr_t.

   The additional macro defines any constraint for the lock alignment
   inside the thread structures:

   __LOCK_ALIGNMENT - for internal lock/futex usage.

   Same idea but for the once locking primitive:

   __ONCE_ALIGNMENT - for pthread_once_t/once_flag definition.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
/* Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 1 3 4
/* Monotonically increasing wide counters (at least 62 bits).
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Counter that is monotonically increasing (by less than 2**31 per
   increment), with a single writer, and an arbitrary number of
   readers.  */
typedef union
{
  unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4


/* Common definition of pthread_mutex_t. */

typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;

/* Arch-specific mutex definitions.  A generic implementation is provided
   by sysdeps/nptl/bits/struct_mutex.h.  If required, an architecture
   can override it by defining:

   1. struct __pthread_mutex_s (used on both pthread_mutex_t and mtx_t
      definition).  It should contains at least the internal members
      defined in the generic version.

   2. __LOCK_ALIGNMENT for any extra attribute for internal lock used with
      atomic operations.

   3. The macro __PTHREAD_MUTEX_INITIALIZER used for static initialization.
      It should initialize the mutex internal flag.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
/* x86 internal mutex struct definitions.
   Copyright (C) 2019-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;

  /* KIND must stay at this position in the structure to maintain
     binary compatibility with static initializers.  */
  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

/* Arch-sepecific read-write lock definitions.  A generic implementation is
   provided by struct_rwlock.h.  If required, an architecture can override it
   by defining:

   1. struct __pthread_rwlock_arch_t (used on pthread_rwlock_t definition).
      It should contain at least the internal members defined in the
      generic version.

   2. The macro __PTHREAD_RWLOCK_INITIALIZER used for static initialization.
      It should initialize the rwlock internal type.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
/* x86 internal rwlock struct definitions.
   Copyright (C) 2019-2024 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;
  /* FLAGS must stay at this position in the structure to maintain
     binary compatibility.  */
  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4


/* Common definition of pthread_cond_t. */

struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4

/* Thread identifiers.  The structure of the attribute type is not
   exposed on purpose.  */
typedef unsigned long int pthread_t;


/* Data structures for mutex handling.  The structure of the attribute
   type is not exposed on purpose.  */
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;


/* Data structure for condition variable handling.  The structure of
   the attribute type is not exposed on purpose.  */
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;


/* Keys for thread-specific data */
typedef unsigned int pthread_key_t;


/* Once-only execution */
typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  long long int __align;
} pthread_cond_t;



/* Data structure for reader-writer lock variable handling.  The
   structure of the attribute type is deliberately not exposed.  */
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;




/* POSIX spinlock data type.  */
typedef volatile int pthread_spinlock_t;


/* POSIX barriers data type.  The structure of the type is
   deliberately not exposed.  */
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 515 "/usr/include/stdlib.h" 2 3 4

/* These are the functions that actually do things.  The `random', `srandom',
   `initstate' and `setstate' functions are those from BSD Unices.
   The `rand' and `srand' functions are required by the ANSI standard.
   We provide both interfaces to the same random number generator.  */
/* Return a random long integer between 0 and 2^31-1 inclusive.  */
extern long int random (void) ;

/* Seed the random number generator with the given number.  */
extern void srandom (unsigned int __seed) ;

/* Initialize the random number generator to use state buffer STATEBUF,
   of length STATELEN, and seed it with SEED.  Optimal lengths are 8, 16,
   32, 64, 128 and 256, the bigger the better; values less than 8 will
   cause an error and values greater than 256 will be rounded down.  */
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;

/* Switch the random number generator to state buffer STATEBUF,
   which should have been previously initialized by `initstate'.  */
extern char *setstate (char *__statebuf) ;



/* Reentrant versions of the `random' family of functions.
   These functions all use the following data structure to contain
   state, rather than global state variables.  */

struct random_data
  {
    int32_t *fptr; /* Front pointer.  */
    int32_t *rptr; /* Rear pointer.  */
    int32_t *state; /* Array of state values.  */
    int rand_type; /* Type of random number generator.  */
    int rand_deg; /* Degree of random number generator.  */
    int rand_sep; /* Distance between front and rear.  */
    int32_t *end_ptr; /* Pointer behind state table.  */
  };

extern int random_r (struct random_data *restrict __buf,
       int32_t *restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *restrict __statebuf,
   size_t __statelen,
   struct random_data *restrict __buf)
     ;

extern int setstate_r (char *restrict __statebuf,
         struct random_data *restrict __buf)
     ;




/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) ;
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) ;


/* Reentrant interface according to POSIX.1.  */
extern int rand_r (unsigned int *__seed) ;




/* System V style 48-bit random number generator functions.  */

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;

/* Return non-negative, long integer in [0,2^31).  */
extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;

/* Return signed, long integers in [-2^31,2^31).  */
extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;

/* Seed random number generator.  */
extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;


/* Data structure for communication with thread safe versions.  This
   type is to be regarded as opaque.  It's only exported because users
   have to allocate objects of this type.  */
struct drand48_data
  {
    unsigned short int __x[3]; /* Current state.  */
    unsigned short int __old_x[3]; /* Old state.  */
    unsigned short int __c; /* Additive const. in congruential formula.  */
    unsigned short int __init; /* Flag for initializing.  */
    unsigned long long int __a; /* Factor in congruential
						   formula.  */
  };

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern int drand48_r (struct drand48_data *restrict __buffer,
        double *restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        double *restrict __result) ;

/* Return non-negative, long integer in [0,2^31).  */
extern int lrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;

/* Return signed, long integers in [-2^31,2^31).  */
extern int mrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;

/* Seed random number generator.  */
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;

/* Return a random integer between zero and 2**32-1 (inclusive).  */
extern __uint32_t arc4random (void)
     ;

/* Fill the buffer with random data.  */
extern void arc4random_buf (void *__buf, size_t __size)
     ;

/* Return a random number between zero (inclusive) and the specified
   limit (exclusive).  */
extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
     ;



/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size)
     ;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
     ;

/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
     ;

/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) ;


/* Re-allocate the previously allocated block in PTR, making the new
   block large enough for NMEMB elements of SIZE bytes each.  */
/* __attribute_malloc__ is not used, because if reallocarray returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
    
    
    ;

/* Add reallocarray as its own deallocator.  */
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     ;



# 1 "/usr/include/alloca.h" 1 3 4
/* Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 22 "/usr/include/alloca.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 25 "/usr/include/alloca.h" 2 3 4



/* Remove any previous definition.  */


/* Allocate a block that will be freed when the calling function exits.  */
extern void *alloca (size_t __size) ;






# 707 "/usr/include/stdlib.h" 2 3 4




/* Allocate SIZE bytes on a page boundary.  The storage cannot be freed.  */
extern void *valloc (size_t __size)
     ;



/* Allocate memory of SIZE bytes with an alignment of ALIGNMENT.  */
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;



/* ISO C variant of aligned allocation.  */
extern void *aligned_alloc (size_t __alignment, size_t __size)
    
     ;


/* Abort execution and generate a core-dump.  */
extern void abort (void) ;


/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) ;


/* Register a function to be called when `quick_exit' is called.  */




extern int at_quick_exit (void (*__func) (void)) ;




/* Register a function to be called with the status
   given to `exit' and the given argument.  */
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;


/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) ;


/* Call all functions registered with `at_quick_exit' in the reverse
   of the order in which they were registered and terminate program
   execution with STATUS.  */
extern void quick_exit (int __status) ;



/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) ;



/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (const char *__name) ;


/* This function is similar to the above but returns NULL if the
   programs is running with SUID or SGID enabled.  */
extern char *secure_getenv (const char *__name)
     ;



/* The SVID says this is in <stdio.h>, but this seems a better place.	*/
/* Put STRING, which is of the form "NAME=VALUE", in the environment.
   If there is no `=', remove NAME from the environment.  */
extern int putenv (char *__string) ;



/* Set NAME to VALUE in the environment.
   If REPLACE is nonzero, overwrite an existing value.  */
extern int setenv (const char *__name, const char *__value, int __replace)
     ;

/* Remove the variable NAME from the environment.  */
extern int unsetenv (const char *__name) ;



/* The `clearenv' was planned to be added to POSIX.1 but probably
   never made it.  Nevertheless the POSIX.9 standard (POSIX bindings
   for Fortran 77) requires this function.  */
extern int clearenv (void) ;





/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the file name unique.
   Always returns TEMPLATE, it's either a temporary file name or a null
   string if it cannot get a unique file name.  */
extern char *mktemp (char *__template) ;



/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the filename unique.
   Returns a file descriptor open on the file for reading and writing,
   or -1 if it cannot create a uniquely-named file.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int mkstemp (char *__template) ;
# 837 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) ;




/* Similar to mkstemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int mkstemps (char *__template, int __suffixlen) ;
# 859 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     ;




/* Create a unique temporary directory from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the directory name unique.
   Returns TEMPLATE, or a null pointer if it cannot get a unique name.
   The directory is created mode 700.  */
extern char *mkdtemp (char *__template) ;



/* Generate a unique temporary file name from TEMPLATE similar to
   mkstemp.  But allow the caller to pass additional flags which are
   used in the open call to create the file..

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int mkostemp (char *__template, int __flags) ;
# 891 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) ;


/* Similar to mkostemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int mkostemps (char *__template, int __suffixlen, int __flags)
     ;
# 913 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     ;




/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (const char *__command) ;



/* Return a malloc'd string containing the canonical absolute name of the
   existing named file.  */
extern char *canonicalize_file_name (const char *__name)
    
     ;



/* Return the canonical absolute name of file NAME.  If RESOLVED is
   null, the result is malloc'd; otherwise, if the canonical name is
   PATH_MAX chars or more, returns null with `errno' set to
   ENAMETOOLONG; if the name fits in fewer than PATH_MAX chars,
   returns the name in RESOLVED.  */
extern char *realpath (const char *restrict __name,
         char *restrict __resolved) ;



/* Shorthand for type of comparison functions.  */


typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);


/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;





/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  ;



/* Return the absolute value of X.  */
extern int abs (int __x) ;
extern long int labs (long int __x) ;


 extern long long int llabs (long long int __x)
     ;



/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;


 extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;





/* Convert floating point numbers to strings.  The returned values are
   valid only until another call to the same function.  */

/* Convert VALUE to a string with NDIGIT digits and return a pointer to
   this.  Set *DECPT with the position of the decimal character and *SIGN
   with the sign of the number.  */
extern char *ecvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign) ;

/* Convert VALUE to a string rounded to NDIGIT decimal digits.  Set *DECPT
   with the position of the decimal character and *SIGN with the sign of
   the number.  */
extern char *fcvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign) ;

/* If possible convert VALUE to a string with NDIGIT significant digits.
   Otherwise use exponential representation.  The resulting string will
   be written to BUF.  */
extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;



/* Long double versions of above functions.  */
extern char *qecvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;


/* Reentrant version of the functions above which provide their own
   buffers.  */
extern int ecvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
     ;



/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (const char *__s, size_t __n) ;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t *restrict __pwc,
     const char *restrict __s, size_t __n) ;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) ;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t *restrict __pwcs,
   const char *restrict __s, size_t __n)
    ;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char *restrict __s,
   const wchar_t *restrict __pwcs, size_t __n)
    
 
  ;


/* Determine whether the string value of RESPONSE matches the affirmation
   or negative response expression as specified by the LC_MESSAGES category
   in the program's current locale.  Returns 1 if affirmative, 0 if
   negative, and -1 if not matching.  */
extern int rpmatch (const char *__response) ;




/* Parse comma separated suboption from *OPTIONP and match against
   strings in TOKENS.  If found return index and set *VALUEP to
   optional value introduced by an equal sign.  If the suboption is
   not part of TOKENS return in *VALUEP beginning of unknown
   suboption.  On exit *OPTIONP is set to the beginning of the next
   token or at the terminating NUL character.  */
extern int getsubopt (char **restrict __optionp,
        char *const *restrict __tokens,
        char **restrict __valuep)
     ;



/* X/Open pseudo terminal handling.  */


/* Return a master pseudo-terminal handle.  */
extern int posix_openpt (int __oflag) ;



/* The next four functions all take a master pseudo-tty fd and
   perform an operation on the associated slave:  */

/* Chown the slave to the calling user.  */
extern int grantpt (int __fd) ;

/* Release an internal lock so the slave can be opened.
   Call after grantpt().  */
extern int unlockpt (int __fd) ;

/* Return the pathname of the pseudo terminal slave associated with
   the master FD is open on, or NULL on errors.
   The returned storage is good until the next call to this function.  */
extern char *ptsname (int __fd) ;



/* Store at most BUFLEN characters of the pathname of the slave pseudo
   terminal associated with the master FD is open on in BUF.
   Return 0 on success, otherwise an error number.  */
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     ;

/* Open a master pseudo terminal and return its file descriptor.  */
extern int getpt (void);



/* Put the 1 minute, 5 minute and 15 minute load averages into the first
   NELEM elements of LOADAVG.  Return the number written (never more than
   three, but may be less than NELEM), or -1 if an error occurred.  */
extern int getloadavg (double __loadavg[], int __nelem)
     ;
# 1155 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 1156 "/usr/include/stdlib.h" 2 3 4

/* Define some macros helping to catch buffer overflows.  */




# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
/* Macros to control TS 18661-3 glibc features on x86.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 1163 "/usr/include/stdlib.h" 2 3 4





# 57 "/usr/local/include/comelang.h" 2 3
# 1 "/usr/include/string.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.21 String handling	<string.h>
 */





# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */







# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X.  In C2X, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C2X does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C2X (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C2X features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C2X.

   __GLIBC_USE (IEC_60559_BFP_EXT_C2X) controls those features from TS
   18661-1 that are also included in C2X (with no feature test macro
   required in C2X).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C2X but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
# 103 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/string.h" 2 3 4



/* Get size_t and NULL from <stddef.h>.  */


# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 34 "/usr/include/string.h" 2 3 4

/* Tell the caller that we provide correct C++ prototypes.  */






/* Copy N bytes of SRC to DEST.  */
extern void *memcpy (void *restrict __dest, const void *restrict __src,
       size_t __n) ;
/* Copy N bytes of SRC to DEST, guaranteeing
   correct behavior for overlapping strings.  */
extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;

/* Copy no more than N bytes of SRC to DEST, stopping when C is found.
   Return the position in DEST one byte past where C was copied,
   or NULL if C was not found in the first N bytes of SRC.  */

extern void *memccpy (void *restrict __dest, const void *restrict __src,
        int __c, size_t __n)
    ;



/* Set N bytes of S to C.  */
extern void *memset (void *__s, int __c, size_t __n) ;

/* Compare N bytes of S1 and S2.  */
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;

/* Compare N bytes of S1 and S2.  Return zero if S1 and S2 are equal.
   Return some non-zero value otherwise.

   Essentially __memcmpeq has the exact same semantics as memcmp
   except the return value is less constrained.  memcmp is always a
   correct implementation of __memcmpeq.  As well !!memcmp, -memcmp,
   or bcmp are correct implementations.

   __memcmpeq is meant to be used by compilers when memcmp return is
   only used for its boolean value.

   __memcmpeq is declared only for use by compilers.  Programs should
   continue to use memcmp.  */
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     ;

/* Search N bytes of S for C.  */
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      ;



/* Search in S for C.  This is similar to `memchr' but there is no
   length limit.  */






extern void *rawmemchr (const void *__s, int __c)
     ;


/* Search N bytes of S for the final occurrence of C.  */
# 133 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
     
      ;




/* Copy SRC to DEST.  */
extern char *strcpy (char *restrict __dest, const char *restrict __src)
     ;
/* Copy no more than N characters of SRC to DEST.  */
extern char *strncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
     ;

/* Append SRC onto DEST.  */
extern char *strcat (char *restrict __dest, const char *restrict __src)
     ;
/* Append no more than N characters from SRC onto DEST.  */
extern char *strncat (char *restrict __dest, const char *restrict __src,
        size_t __n) ;

/* Compare S1 and S2.  */
extern int strcmp (const char *__s1, const char *__s2)
     ;
/* Compare N characters of S1 and S2.  */
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;

/* Compare the collated forms of S1 and S2.  */
extern int strcoll (const char *__s1, const char *__s2)
     ;
/* Put a transformation of SRC into no more than N bytes of DEST.  */
extern size_t strxfrm (char *restrict __dest,
         const char *restrict __src, size_t __n)
    ;


/* POSIX.1-2008 extended locale interface (see locale.h).  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
/* Definition of locale_t.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 173 "/usr/include/string.h" 2 3 4

/* Compare the collated forms of S1 and S2, using sorting rules from L.  */
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     ;
/* Put a transformation of SRC into no more than N bytes of DEST,
   using sorting rules from L.  */
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l)
     ;




/* Duplicate S, returning an identical malloc'd string.  */
extern char *strdup (const char *__s)
     ;


/* Return a malloc'd copy of at most N bytes of STRING.  The
   resultant string is terminated even if no null terminator
   appears before STRING[N].  */

extern char *strndup (const char *__string, size_t __n)
     ;
# 222 "/usr/include/string.h" 3 4
/* Find the first occurrence of C in S.  */
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     ;

/* Find the last occurrence of C in S.  */
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     ;



/* This function is similar to `strchr'.  But it returns a pointer to
   the closing NUL byte in case C is not found in S.  */






extern char *strchrnul (const char *__s, int __c)
     ;



/* Return the length of the initial segment of S which
   consists entirely of characters not in REJECT.  */
extern size_t strcspn (const char *__s, const char *__reject)
     ;
/* Return the length of the initial segment of S which
   consists entirely of characters in ACCEPT.  */
extern size_t strspn (const char *__s, const char *__accept)
     ;
/* Find the first occurrence in S of any character in ACCEPT.  */
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     ;

/* Find the first occurrence of NEEDLE in HAYSTACK.  */
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     ;



/* Divide S into tokens separated by characters in DELIM.  */
extern char *strtok (char *restrict __s, const char *restrict __delim)
     ;

/* Divide S into tokens separated by characters in DELIM.  Information
   passed between calls are stored in SAVE_PTR.  */
extern char *__strtok_r (char *restrict __s,
    const char *restrict __delim,
    char **restrict __save_ptr)
     ;

extern char *strtok_r (char *restrict __s, const char *restrict __delim,
         char **restrict __save_ptr)
     ;



/* Similar to `strstr' but this function ignores the case of both strings.  */







extern char *strcasestr (const char *__haystack, const char *__needle)
     ;




/* Find the first occurrence of NEEDLE in HAYSTACK.
   NEEDLE is NEEDLELEN bytes long;
   HAYSTACK is HAYSTACKLEN bytes long.  */
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
    
   
    ;

/* Copy N bytes of SRC to DEST, return pointer to bytes after the
   last written byte.  */
extern void *__mempcpy (void *restrict __dest,
   const void *restrict __src, size_t __n)
     ;
extern void *mempcpy (void *restrict __dest,
        const void *restrict __src, size_t __n)
     ;



/* Return the length of S.  */
extern size_t strlen (const char *__s)
     ;


/* Find the length of STRING, but scan at most MAXLEN characters.
   If no '\0' terminator is found in that many characters, return MAXLEN.  */
extern size_t strnlen (const char *__string, size_t __maxlen)
     ;



/* Return a string describing the meaning of the `errno' code in ERRNUM.  */
extern char *strerror (int __errnum) ;

/* Reentrant version of `strerror'.
   There are 2 flavors of `strerror_r', GNU which returns the string
   and may or may not use the supplied temporary buffer and POSIX one
   which fills the string into the buffer.
   To use the POSIX version, -D_XOPEN_SOURCE=600 or -D_POSIX_C_SOURCE=200112L
   without -D_GNU_SOURCE is needed, otherwise the GNU version is
   preferred.  */
# 442 "/usr/include/string.h" 3 4
/* If a temporary buffer is required, at most BUFLEN bytes of BUF will be
   used.  */
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     ;



/* Return a string describing the meaning of tthe error in ERR.  */
extern const char *strerrordesc_np (int __err) ;
/* Return a string with the error name in ERR.  */
extern const char *strerrorname_np (int __err) ;




/* Translate error number to string according to the locale L.  */
extern char *strerror_l (int __errnum, locale_t __l) ;



# 1 "/usr/include/strings.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 22 "/usr/include/strings.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 24 "/usr/include/strings.h" 2 3 4

/* Tell the caller that we provide correct C++ prototypes.  */







/* Compare N bytes of S1 and S2 (same as memcmp).  */
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;

/* Copy N bytes of SRC to DEST (like memmove, but args reversed).  */
extern void bcopy (const void *__src, void *__dest, size_t __n)
  ;

/* Set N bytes of S to 0.  */
extern void bzero (void *__s, size_t __n) ;

/* Find the first occurrence of C in S (same as strchr).  */
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     ;


/* Find the last occurrence of C in S (same as strrchr).  */
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     ;




/* Return the position of the first bit set in I, or 0 if none are set.
   The least-significant bit is position 1, the most-significant 32.  */
extern int ffs (int __i) ;


/* The following two functions are non-standard but necessary for non-32 bit
   platforms.  */

extern int ffsl (long int __l) ;
 extern int ffsll (long long int __ll)
     ;


/* Compare S1 and S2, ignoring case.  */
extern int strcasecmp (const char *__s1, const char *__s2)
     ;

/* Compare no more than N chars of S1 and S2, ignoring case.  */
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;


/* POSIX.1-2008 extended locale interface (see locale.h).  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
/* Definition of locale_t.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 126 "/usr/include/strings.h" 2 3 4

/* Compare S1 and S2, ignoring case, using collation rules from LOC.  */
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     ;

/* Compare no more than N chars of S1 and S2, ignoring case, using
   collation rules from LOC.  */
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     ;



# 463 "/usr/include/string.h" 2 3 4

/* Set N bytes of S to 0.  The compiler will not delete a call to this
   function, even if S is dead after the call.  */
extern void explicit_bzero (void *__s, size_t __n)
    ;

/* Return the next DELIM-delimited token from *STRINGP,
   terminating it with a '\0', and update *STRINGP to point past it.  */
extern char *strsep (char **restrict __stringp,
       const char *restrict __delim)
     ;



/* Return a string describing the meaning of the signal number in SIG.  */
extern char *strsignal (int __sig) ;


/* Return an abbreviation string for the signal number SIG.  */
extern const char *sigabbrev_np (int __sig) ;
/* Return a string describing the meaning of the signal number in SIG,
   the result is not translated.  */
extern const char *sigdescr_np (int __sig) ;


/* Copy SRC to DEST, returning the address of the terminating '\0' in DEST.  */
extern char *__stpcpy (char *restrict __dest, const char *restrict __src)
     ;
extern char *stpcpy (char *restrict __dest, const char *restrict __src)
     ;

/* Copy no more than N characters of SRC to DEST, returning the address of
   the last character written into DEST.  */
extern char *__stpncpy (char *restrict __dest,
   const char *restrict __src, size_t __n)
     ;
extern char *stpncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
     ;



/* Copy at most N - 1 characters from SRC to DEST.  */
extern size_t strlcpy (char *restrict __dest,
         const char *restrict __src, size_t __n)
  ;

/* Append SRC to DEST, possibly with truncation to keep the total size
   below N.  */
extern size_t strlcat (char *restrict __dest,
         const char *restrict __src, size_t __n)
  ;



/* Compare S1 and S2 as strings holding name & indices/version numbers.  */
extern int strverscmp (const char *__s1, const char *__s2)
     ;

/* Sautee STRING briskly.  */
extern char *strfry (char *__string) ;

/* Frobnicate N bytes of S.  */
extern void *memfrob (void *__s, size_t __n)
    ;


/* Return the file name within directory of FILENAME.  We don't
   declare the function if the `basename' macro is available (defined
   in <libgen.h>) which makes the XPG version of this function
   available.  */






extern char *basename (const char *__filename) ;
# 552 "/usr/include/string.h" 3 4

# 58 "/usr/local/include/comelang.h" 2 3
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 59 "/usr/local/include/comelang.h" 2 3
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 1 3 4
/* Copyright (C) 1992-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */

/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */




/* Use "..." so that we find syslimits.h only in this same directory.  */
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/syslimits.h" 1 3 4
/* syslimits.h stands for the system's own limits.h file.
   If we can use it ok unmodified, then we install this text.
   If fixincludes fixes it, then the fixed version is installed
   instead of this text.  */


# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 1 3 4
/* Copyright (C) 1992-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */

/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
# 205 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.10/5.2.4.2.1 Sizes of integer types	<limits.h>
 */





# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */







# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X.  In C2X, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C2X does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C2X (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C2X features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C2X.

   __GLIBC_USE (IEC_60559_BFP_EXT_C2X) controls those features from TS
   18661-1 that are also included in C2X (with no feature test macro
   required in C2X).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C2X but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
# 103 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/limits.h" 2 3 4


/* Maximum length of any multibyte character in any locale.
   We define this value here since the gcc header does not define
   the correct value.  */



/* If we are not using GNU CC we have to define all the symbols ourself.
   Otherwise use gcc's definitions (see below).  */


/* We only protect from multiple inclusion here, because all the other
   #include's protect themselves, and in GCC 2 we may #include_next through
   multiple copies of this file before we get to GCC's.  */



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 46 "/usr/include/limits.h" 2 3 4

/* We don't have #include_next.
   Define ANSI <limits.h> for standard 32-bit words.  */

/* These assume 8-bit `char's, 16-bit `short int's,
   and 32-bit `int's and `long int's.  */

/* Number of bits in a `char'.	*/


/* Minimum and maximum values a `signed char' can hold.  */



/* Maximum value an `unsigned char' can hold.  (Minimum is 0.)  */


/* Minimum and maximum values a `char' can hold.  */
# 72 "/usr/include/limits.h" 3 4
/* Minimum and maximum values a `signed short int' can hold.  */



/* Maximum value an `unsigned short int' can hold.  (Minimum is 0.)  */


/* Minimum and maximum values a `signed int' can hold.  */



/* Maximum value an `unsigned int' can hold.  (Minimum is 0.)  */


/* Minimum and maximum values a `signed long int' can hold.  */







/* Maximum value an `unsigned long int' can hold.  (Minimum is 0.)  */
# 103 "/usr/include/limits.h" 3 4
/* Minimum and maximum values a `signed long long int' can hold.  */



/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0.)  */
# 117 "/usr/include/limits.h" 3 4
 /* Get the compiler's limits.h, which defines almost all the ISO constants.

    We put this #include_next outside the double inclusion check because
    it should be possible to include this file more than once and still get
    the definitions from gcc's header.  */





/* The <limits.h> files in some gcc versions don't define LLONG_MIN,
   LLONG_MAX, and ULLONG_MAX.  Instead only the values gcc defined for
   ages are available.  */
# 142 "/usr/include/limits.h" 3 4
/* The integer width macros are not defined by GCC's <limits.h> before
   GCC 7, or if _GNU_SOURCE rather than
   __STDC_WANT_IEC_60559_BFP_EXT__ is used to enable this feature.  */
# 181 "/usr/include/limits.h" 3 4
/* The macros for _Bool are not defined by GCC's <limits.h> before GCC
   11, or if _GNU_SOURCE is defined rather than enabling C2x support
   with -std.  */
# 194 "/usr/include/limits.h" 3 4
/* POSIX adds things to <limits.h>.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.9.2 Minimum Values	Added to <limits.h>
 *
 *	Never include this file directly; use <limits.h> instead.
 */




# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4

/* These are the standard-mandated minimum values.  */

/* Minimum number of operations in one list I/O call.  */


/* Minimal number of outstanding asynchronous I/O operations.  */


/* Maximum length of arguments to `execve', including environment.  */


/* Maximum simultaneous processes per real user ID.  */






/* Minimal number of timer expiration overruns.  */


/* Maximum length of a host name (not including the terminating null)
   as returned from the GETHOSTNAME function.  */


/* Maximum link count of a file.  */


/* Maximum length of login name.  */


/* Number of bytes in a terminal canonical input queue.  */


/* Number of bytes for which space will be
   available in a terminal input queue.  */


/* Maximum number of message queues open for a process.  */


/* Maximum number of supported message priorities.  */


/* Number of bytes in a filename.  */


/* Number of simultaneous supplementary group IDs per process.  */






/* Number of files one process can have open at once.  */







/* Number of descriptors that a process may examine with `pselect' or
   `select'.  */



/* Number of bytes in a pathname.  */


/* Number of bytes than can be written atomically to a pipe.  */


/* The number of repeated occurrences of a BRE permitted by the
   REGEXEC and REGCOMP functions when using the interval notation.  */


/* Minimal number of realtime signals reserved for the application.  */


/* Number of semaphores a process can have.  */


/* Maximal value of a semaphore.  */


/* Number of pending realtime signals.  */


/* Largest value of a `ssize_t'.  */


/* Number of streams a process can have open at once.  */


/* The number of bytes in a symbolic link.  */


/* The number of symbolic links that can be traversed in the
   resolution of a pathname in the absence of a loop.  */


/* Number of timer for a process.  */


/* Maximum number of characters in a tty name.  */


/* Maximum length of a time zone abbreviation (element of 'tzname').  */







/* Maximum number of connections that can be queued on a socket.  */


/* Maximum number of bytes that can be buffered on a socket for send
   or receive.  */


/* Maximum number of elements in an `iovec' array.  */



/* Maximum clock resolution in nanoseconds.  */



/* Get the implementation-specific values for the above.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
/* Minimum guaranteed maximum values for system limits.  Linux version.
   Copyright (C) 1993-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If
   not, see <https://www.gnu.org/licenses/>.  */

/* The kernel header pollutes the namespace with the NR_OPEN symbol
   and defines LINK_MAX although filesystems have different maxima.  A
   similar thing is true for OPEN_MAX: the limit can be changed at
   runtime and therefore the macro must not be defined.  Remove this
   after including the header if necessary.  */
# 37 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
/* The kernel sources contain a file with all the needed information.  */
# 1 "/usr/include/linux/limits.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4

/* Have to remove NR_OPEN?  */




/* Have to remove LINK_MAX?  */




/* Have to remove OPEN_MAX?  */




/* Have to remove ARG_MAX?  */





/* The number of data keys per process.  */

/* This is the value this implementation supports.  */


/* Controlling the iterations of destructors for thread-specific data.  */

/* Number of iterations this implementation does.  */


/* The number of threads per process.  */

/* We have no predefined limit on the number of threads.  */


/* Maximum amount by which a process can decrease its asynchronous I/O
   priority level.  */


/* Arrange for the definition of PTHREAD_STACK_MIN.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h" 1 3 4
/* Definition of PTHREAD_STACK_MIN, possibly dynamic.
   Copyright (C) 2021-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






extern long int __sysconf (int __name) ;

# 82 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4

/* Maximum number of timer expiration overruns.  */


/* Maximum tty name length.  */


/* Maximum login name length.  This is arbitrary.  */


/* Maximum host name length.  */


/* Maximum message queue priority level.  */


/* Maximum value the semaphore can have.  */
# 162 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4



/* ssize_t is not formally required to be the signed type
   corresponding to size_t, but it is for all configurations supported
   by glibc.  */
# 176 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
/* This value is a guaranteed minimum maximum.
   The current maximum can be got from `sysconf'.  */
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; include <limits.h> instead.
 */





/* The maximum `ibase' and `obase' values allowed by the `bc' utility.  */


/* The maximum number of elements allowed in an array by the `bc' utility.  */


/* The maximum `scale' value allowed by the `bc' utility.  */


/* The maximum length of a string constant accepted by the `bc' utility.  */


/* The maximum number of weights that can be assigned to an entry of
   the LC_COLLATE `order' keyword in the locale definition file.  */


/* The maximum number of expressions that can be nested
   within parentheses by the `expr' utility.  */


/* The maximum length, in bytes, of an input line.  */


/* The maximum number of repeated occurrences of a regular expression
   permitted when using the interval notation `\{M,N\}'.  */


/* The maximum number of bytes in a character class name.  We have no
   fixed limit, 2048 is a high number.  */



/* These values are implementation-specific,
   and may vary within the implementation.
   Their precise values can be obtained from sysconf.  */
# 87 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 3 4
/* This value is defined like this in regex.h.  */
# 200 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
/* Copyright (C) 1996-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <limits.h> instead.
 */

/* Additional definitions from X/Open Portability Guide, Issue 4, Version 2
   System Interfaces and Headers, 4.16 <limits.h>

   Please note only the values which are not greater than the minimum
   stated in the standard document are listed.  The `sysconf' functions
   should be used to obtain the actual value.  */




/* We do not provide fixed values for

   ARG_MAX	Maximum length of argument to the `exec' function
		including environment data.

   ATEXIT_MAX	Maximum number of functions that may be registered
		with `atexit'.

   CHILD_MAX	Maximum number of simultaneous processes per real
		user ID.

   OPEN_MAX	Maximum number of files that one process can have open
		at anyone time.

   PAGESIZE
   PAGE_SIZE	Size of bytes of a page.

   PASS_MAX	Maximum number of significant bytes in a password.

   We only provide a fixed limit for

   IOV_MAX	Maximum number of `iovec' structures that one process has
		available for use with `readv' or writev'.

   if this is indeed fixed by the underlying system.
*/


/* Maximum number of `iovec' structures that may be used in a single call
   to `readv', `writev', etc.  */


# 1 "/usr/include/x86_64-linux-gnu/bits/uio_lim.h" 1 3 4
/* Implementation limits related to sys/uio.h - Linux version.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Maximum length of the 'struct iovec' array in a single call to
   readv or writev.

   This macro has different values in different kernel versions.  The
   latest versions of the kernel use 1024 and this is good choice.  Since
   the C library implementation of readv/writev is able to emulate the
   functionality even if the currently running kernel does not support
   this large value the readv/writev call will not fail because of this.  */
# 65 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4






/* Maximum value of `digit' in calls to the `printf' and `scanf'
   functions.  We have no limit, so return a reasonable value.  */


/* Maximum number of bytes in a `LANG' name.  We have no limit.  */


/* Maximum message number.  We have no limit.  */


/* Maximum number of bytes in N-to-1 collation mapping.  We have no
   limit.  */




/* Maximum set number.  We have no limit.  */


/* Maximum number of bytes in a message.  We have no limit.  */


/* Default process priority.  */



/* Number of bits in a word of type `int'.  */
# 124 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
/* Number of bits in a word of type `long int'.  */




/* Safe assumption.  */
# 204 "/usr/include/limits.h" 2 3 4
# 206 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/13/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 2 3 4

/* Copyright (C) 1991-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */




/* Number of bits in a `char'.  */



/* Maximum length of a multibyte character.  */




/* Minimum and maximum values a `signed char' can hold.  */





/* Maximum value an `unsigned char' can hold.  (Minimum is 0).  */







/* Minimum and maximum values a `char' can hold.  */
# 102 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 3 4
/* Minimum and maximum values a `signed short int' can hold.  */





/* Maximum value an `unsigned short int' can hold.  (Minimum is 0).  */







/* Minimum and maximum values a `signed int' can hold.  */





/* Maximum value an `unsigned int' can hold.  (Minimum is 0).  */



/* Minimum and maximum values a `signed long int' can hold.
   (Same as `int').  */





/* Maximum value an `unsigned long int' can hold.  (Minimum is 0).  */




/* Minimum and maximum values a `signed long long int' can hold.  */





/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0).  */





/* Minimum and maximum values a `signed long long int' can hold.  */





/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0).  */
# 199 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 3 4
/* This administrivia gets added to the end of limits.h
   if the system has its own version of limits.h.  */
# 60 "/usr/local/include/comelang.h" 2 3
# 1 "/usr/include/locale.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.11 Localization	<locale.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/locale.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
/* Definition of locale category symbol values.
   Copyright (C) 2001-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 30 "/usr/include/locale.h" 2 3 4



/* These are the possibilities for the first argument to setlocale.
   The code assumes that the lowest LC_* symbol has the value zero.  */
# 50 "/usr/include/locale.h" 3 4
/* Structure giving information about numeric and monetary notation.  */
struct lconv
{
  /* Numeric (non-monetary) information.  */

  char *decimal_point; /* Decimal point character.  */
  char *thousands_sep; /* Thousands separator.  */
  /* Each element is the number of digits in each group;
     elements with higher indices are farther left.
     An element with value CHAR_MAX means that no further grouping is done.
     An element with value 0 means that the previous element is used
     for all groups farther left.  */
  char *grouping;

  /* Monetary information.  */

  /* First three chars are a currency symbol from ISO 4217.
     Fourth char is the separator.  Fifth char is '\0'.  */
  char *int_curr_symbol;
  char *currency_symbol; /* Local currency symbol.  */
  char *mon_decimal_point; /* Decimal point character.  */
  char *mon_thousands_sep; /* Thousands separator.  */
  char *mon_grouping; /* Like `grouping' element (above).  */
  char *positive_sign; /* Sign for positive values.  */
  char *negative_sign; /* Sign for negative values.  */
  char int_frac_digits; /* Int'l fractional digits.  */
  char frac_digits; /* Local fractional digits.  */
  /* 1 if currency_symbol precedes a positive value, 0 if succeeds.  */
  char p_cs_precedes;
  /* 1 iff a space separates currency_symbol from a positive value.  */
  char p_sep_by_space;
  /* 1 if currency_symbol precedes a negative value, 0 if succeeds.  */
  char n_cs_precedes;
  /* 1 iff a space separates currency_symbol from a negative value.  */
  char n_sep_by_space;
  /* Positive and negative sign positions:
     0 Parentheses surround the quantity and currency_symbol.
     1 The sign string precedes the quantity and currency_symbol.
     2 The sign string follows the quantity and currency_symbol.
     3 The sign string immediately precedes the currency_symbol.
     4 The sign string immediately follows the currency_symbol.  */
  char p_sign_posn;
  char n_sign_posn;

  /* 1 if int_curr_symbol precedes a positive value, 0 if succeeds.  */
  char int_p_cs_precedes;
  /* 1 iff a space separates int_curr_symbol from a positive value.  */
  char int_p_sep_by_space;
  /* 1 if int_curr_symbol precedes a negative value, 0 if succeeds.  */
  char int_n_cs_precedes;
  /* 1 iff a space separates int_curr_symbol from a negative value.  */
  char int_n_sep_by_space;
  /* Positive and negative sign positions:
     0 Parentheses surround the quantity and int_curr_symbol.
     1 The sign string precedes the quantity and int_curr_symbol.
     2 The sign string follows the quantity and int_curr_symbol.
     3 The sign string immediately precedes the int_curr_symbol.
     4 The sign string immediately follows the int_curr_symbol.  */
  char int_p_sign_posn;
  char int_n_sign_posn;
# 118 "/usr/include/locale.h" 3 4
};


/* Set and/or return the current locale.  */
extern char *setlocale (int __category, const char *__locale) ;

/* Return the numeric/monetary information for the current locale.  */
extern struct lconv *localeconv (void) ;



/* POSIX.1-2008 extends the locale interface with functions for
   explicit creation and manipulation of 'locale_t' objects
   representing locale contexts, and a set of parallel
   locale-sensitive text processing functions that take a locale_t
   argument.  This enables applications to work with data from
   multiple locales simultaneously and thread-safely.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
/* Definition of locale_t.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 136 "/usr/include/locale.h" 2 3 4

/* Return a reference to a data structure representing a set of locale
   datasets.  Unlike for the CATEGORY parameter for `setlocale' the
   CATEGORY_MASK parameter here uses a single bit for each category,
   made by OR'ing together LC_*_MASK bits above.  */
extern locale_t newlocale (int __category_mask, const char *__locale,
      locale_t __base) ;

/* These are the bits that can be set in the CATEGORY_MASK argument to
   `newlocale'.  In the GNU implementation, LC_FOO_MASK has the value
   of (1 << LC_FOO), but this is not a part of the interface that
   callers can assume will be true.  */
# 174 "/usr/include/locale.h" 3 4
/* Return a duplicate of the set of locale in DATASET.  All usage
   counters are increased if necessary.  */
extern locale_t duplocale (locale_t __dataset) ;

/* Free the data associated with a locale dataset previously returned
   by a call to `setlocale_r'.  */
extern void freelocale (locale_t __dataset) ;

/* Switch the current thread's locale to DATASET.
   If DATASET is null, instead just return the current setting.
   The special value LC_GLOBAL_LOCALE is the initial setting
   for all threads and can also be installed any time, meaning
   the thread uses the global settings controlled by `setlocale'.  */
extern locale_t uselocale (locale_t __dataset) ;

/* This value can be passed to `uselocale' and may be returned by it.
   Passing this value to any other function has undefined behavior.  */





# 61 "/usr/local/include/comelang.h" 2 3
# 1 "/usr/include/errno.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.5 Errors	<errno.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/errno.h" 2 3 4

/* The system-specific definitions of the E* constants, as macros.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
/* Error constants.  Linux specific version.
   Copyright (C) 1996-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 6 "/usr/include/asm-generic/errno.h" 2 3 4





/*
 * This error code is special: arch syscall entry code will return
 * -ENOSYS if users try to call a syscall that doesn't exist.  To keep
 * failures of syscalls that really do exist distinguishable from
 * failures due to attempts to use a nonexistent syscall, syscall
 * implementations should refrain from returning -ENOSYS.
 */
# 115 "/usr/include/asm-generic/errno.h" 3 4
/* for robust mutexes */
# 2 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4

/* Older Linux headers do not define these constants.  */
# 29 "/usr/include/errno.h" 2 3 4

/* When included from assembly language, this header only provides the
   E* constants.  */




/* The error code set by various library functions.  */
extern int *__errno_location (void) ;




/* The full and simple forms of the name with which the program was
   invoked.  These variables are set up automatically at startup based on
   the value of argv[0].  */
extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 1 3 4
/* Define error_t.
   Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




typedef int error_t;
# 49 "/usr/include/errno.h" 2 3 4




# 62 "/usr/local/include/comelang.h" 2 3
# 1 "/usr/include/assert.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.2 Diagnostics	<assert.h>
 */
# 35 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 36 "/usr/include/assert.h" 2 3 4







/* void assert (int expression);

   If NDEBUG is defined, do nothing.
   If not, and EXPRESSION is zero, print an error message and abort.  */
# 66 "/usr/include/assert.h" 3 4


/* This prints an "Assertion failed" message and aborts.  */
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;

/* Likewise, but prints the error text for ERRNUM.  */
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;


/* The following is not at all used here but needed for standard
   compliance.  */
extern void __assert (const char *__assertion, const char *__file, int __line)
     ;





/* When possible, define assert so that it does not add extra
   parentheses around EXPR.  Otherwise, those added parentheses would
   suppress warnings we'd expect to be detected by gcc's -Wparentheses.  */
# 134 "/usr/include/assert.h" 3 4
/* Version 2.4 and later of GCC define a magical variable `__PRETTY_FUNCTION__'
   which contains the name of the function currently being defined.
   This is broken in G++ before version 2.6.
   C9x has a similar variable called __func__, but prefer the GCC one since
   it demangles C++ function names.  */
# 63 "/usr/local/include/comelang.h" 2 3
}



using comelang;




typedef void* any;
typedef char*% string;

uniq void* gComeFunResultObject = ((void *)0);
uniq char* gComeStackFrameSName[128];
uniq int gComeStackFrameSLine[128];
uniq int gComeStackFrameID[128];
uniq int gNumComeStackFrame = 0;

void* gComeFunResultObject = ((void *)0);
uniq char* gComeStackFrameBuffer = ((void *)0);

extern any wildcard;

//////////////////////////////
/// exception
//////////////////////////////
struct buffer
{
    char*% buf;
    int len;
    int size;
};

uniq buffer*% buffer*::initialize(buffer*% self);
uniq buffer* buffer*::append_str(buffer* self, char* mem);
uniq buffer* buffer*::append(buffer* self, char* mem, size_t size);
uniq string xsprintf(char* msg, ...);
uniq string char*::to_string(char* self);
uniq string int::to_string(int self);
uniq unsigned int int::get_hash_key(int value);
uniq string char*::substring(char* str, int head, int tail);
uniq buffer* buffer*::append_format(buffer* self, char* msg, ...);
uniq string __builtin_string(char* str);
uniq string buffer*::to_string(buffer* self);
uniq string char*::to_string(char* self);
uniq string string::to_string(char* self);
uniq string double::to_string(double self);
uniq string float::to_string(float self);
uniq string size_t::to_string(size_t self);
uniq string long::to_string(long self);
uniq string int::to_string(int self);
uniq string short::to_string(short self);
uniq string char::to_string(char self);
uniq string bool::to_string(bool self);

uniq void come_push_stackframe(char* sname, int sline, int id)
{
    if(gNumComeStackFrame < 128) {
        gComeStackFrameSName[gNumComeStackFrame] = sname; // const string
        gComeStackFrameSLine[gNumComeStackFrame] = sline;
        gComeStackFrameID[gNumComeStackFrame] = id;

        gNumComeStackFrame++;
    }
}

uniq void come_pop_stackframe()
{
    if(gNumComeStackFrame > 0) {
        gNumComeStackFrame--;
    }
}

uniq void come_save_stackframe(char* sname, int sline)
{
    buffer*% buf = new buffer();
    buf.append_format("%s %d\n", sname, sline);
    for(int i=gNumComeStackFrame-2; i>=0; i--) {
        buf.append_format("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }

    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer = strdup(buf.to_string());
}

uniq void stackframe()
{
    for(int i=gNumComeStackFrame-1; i>=0; i--) {
        printf("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }
}

uniq string come_get_stackframe()
{
    return string(gComeStackFrameBuffer);
}

uniq void* come_null_check(void* mem, char* sname, int sline, int id)
{
    if(mem == null) {
        printf("%s %d #%d: null check error\n", sname, sline, id);
        stackframe();
        exit(2);
    }

    return mem;
}

uniq void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline)
{
    if(mem == null) {
        printf("%s %d: null check error\n", sname, sline);
        stackframe();
        exit(2);
    }

    if(mem < begin) {
        printf("%s %d: range check error\n", sname, sline);
        stackframe();
        exit(2);
    }

    if(mem >= end) {
        printf("%s %d: range check error\n", sname, sline);
        stackframe();
        exit(2);
    }

    return mem;
}

uniq bool bool::expect(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
        stackframe();
        exit(1);
    }

    return self;
}

uniq bool bool::value(bool self)
{
    return self;
}

uniq int int::catch(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
    }

    return self;
}

uniq int int::expect(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
        stackframe();
        exit(1);
    }

    return self;
}

uniq int int::value(int self)
{
    return self;
}

uniq int int::except(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
    }

    return self;
}

uniq bool bool::except(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }

    return self;
}

uniq bool bool::catch(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }

    return self;
}

uniq void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

record static inline bool die(char* msg)
{
    perror(msg);
    stackframe();
    exit(4);

    return false;
}

//////////////////////////////
/// heap
//////////////////////////////
struct sMemHeaderTiny
{
    size_t size;
    int allocated; //AALLOCATED_MAGIC_NUM
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
//    char* class_name;
};

struct sMemHeader
{
    size_t size;
    int allocated; /// ALLOCATED_MAGIC_NUM 
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;

    char* sname[16];
    int sline[16];
    int id[16];
};

uniq sMemHeader* gAllocMem;

uniq any gComeResultObject = ((void *)0);
bool gComeGCLib;
uniq void* gComeFunResultObject = ((void *)0);

uniq bool gComeMallocLib = false;
uniq bool gComeDebugLib = false;
uniq bool gComeGCLib = false;

uniq int gNumAlloc = 0;
uniq int gNumFree = 0;







struct sHeapPage
{
    char** mPages;
    int mSizePages;

    char* mTop;
    int mCurrentPages;

    sMemHeaderTiny* mFreeMem[2048*2];
};

uniq struct sHeapPage gHeapPages;

uniq void come_heap_init(int come_malloc, int come_debug, int come_gc)
{
    gComeMallocLib = come_malloc;
    gComeDebugLib = come_debug
    gComeGCLib = come_gc;

    gComeStackFrameBuffer = ((void *)0);
    memset(gComeStackFrameSName, 0, sizeof(char*)*128);
    memset(gComeStackFrameSLine, 0, sizeof(int)*128);
    memset(gComeStackFrameID, 0, sizeof(int)*128);

    gHeapPages.mSizePages = 4;

    gHeapPages.mPages = calloc(1, sizeof(char**)*gHeapPages.mSizePages);
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        gHeapPages.mPages[i] = calloc(1, sizeof(char)*2048*2);
    }

    gHeapPages.mTop = gHeapPages.mPages[0];
    gHeapPages.mCurrentPages = 0;

    memset(gHeapPages.mFreeMem, 0, sizeof(sMemHeaderTiny*)*2048*2);

    gAllocMem = ((void *)0);
}

uniq void come_heap_final()
{
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }

    if(gComeGCLib) {
    }
    else if(gComeDebugLib) {
        sMemHeader* it = gAllocMem;
        int n = 0;
        while(it) {
            n++;

            bool flag = false;
            printf("#%d ", n);
            if(it->class_name) {
                printf("%p (%s): ", (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name);
            }
            for(int i=0; i<16; i++) {
                if(it->sname[i]) {
                    printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
                    flag = true;
                }
            }
            if(flag) {
                puts("");
            }
            it = it->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n", n, gNumAlloc, gNumFree);
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)gAllocMem;
        int n = 0;
        while(it) {
            n++;
            it = it->next;
        }
        if(n > 0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n", n, gNumAlloc, gNumFree);
        }
    }
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        free(gHeapPages.mPages[i]);
    }
    free(gHeapPages.mPages);
}

uniq void* alloc_from_pages(size_t size)
{
    void* result = null;
    if(size < 2048*2) {
        if(gHeapPages.mFreeMem[size]) {
            result = gHeapPages.mFreeMem[size];

            gHeapPages.mFreeMem[size] = gHeapPages.mFreeMem[size]->free_next;
            memset(result, 0, size);
        }

        if(result == null) {
            size_t free_area = gHeapPages.mPages[gHeapPages.mCurrentPages] + 2048*2 - gHeapPages.mTop;

            if(size >= free_area) {
                gHeapPages.mCurrentPages++;

                if(gHeapPages.mCurrentPages == gHeapPages.mSizePages) {
                    int new_size_pages = gHeapPages.mSizePages * 2;
                    void** new_pages = calloc(1, sizeof(char*)*new_size_pages);

                    int i=0;
                    for(; i<gHeapPages.mSizePages; i++) {
                        new_pages[i] = gHeapPages.mPages[i];
                    }

                    for(; i<new_size_pages; i++) {
                        new_pages[i] = calloc(1, sizeof(char)*2048*2);
                    }

                    free(gHeapPages.mPages);

                    gHeapPages.mPages = new_pages;
                    gHeapPages.mSizePages = new_size_pages;
                }

                gHeapPages.mTop = gHeapPages.mPages[gHeapPages.mCurrentPages];
            }

            result = gHeapPages.mTop;
            gHeapPages.mTop += size;
        }
    }
    else {
        result = calloc(1, size);
    }

    return result;
}

uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name=null)
{
    if(gComeDebugLib) {
        void* result = alloc_from_pages(size + sizeof(sMemHeader));

        sMemHeader* it = result;

        it->allocated = 177783;

        it->size = size + sizeof(sMemHeader);
        it->free_next = ((void *)0);

        come_push_stackframe(sname, sline, 0);


        if(gNumComeStackFrame < 16) {
            memcpy(it.sname, gComeStackFrameSName, sizeof(char*)*gNumComeStackFrame);
            memcpy(it.sline, gComeStackFrameSLine, sizeof(int)*gNumComeStackFrame);
            memcpy(it.id, gComeStackFrameID, sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it.sname, gComeStackFrameSName + gNumComeStackFrame - 16 -1, sizeof(char*)*16);
            memcpy(it.sline, gComeStackFrameSLine + gNumComeStackFrame - 16 -1, sizeof(int)*16);
            memcpy(it.id, gComeStackFrameID + gNumComeStackFrame - 16 -1, sizeof(int)*16);
        }

        come_pop_stackframe();

        it->next = gAllocMem;
        it->prev = null;

        if(class_name) {
            it->class_name = strdup(class_name);
        }
        else {
            it->class_name = null;
        }

        if(gAllocMem) {
            gAllocMem->prev = it;
        }

        gAllocMem = it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeader);
    }
    else {
        void* result = alloc_from_pages(size + sizeof(sMemHeaderTiny));

        sMemHeaderTiny* it = result;

        it->allocated = 177783;

/*
        if(class_name) { 
            it->class_name = strdup(class_name); 
        }
        else {
            it->class_name = null;
        }
*/

        it->size = size + sizeof(sMemHeaderTiny);
        it->free_next = ((void *)0);

        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;

        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }

        gAllocMem = (sMemHeader*)it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeaderTiny);
    }
}

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeGCLib) {
        }
        else if(gComeDebugLib) {
            sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(sMemHeader));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;

            sMemHeader* prev_it = it->prev;
            sMemHeader* next_it = it->next;

            if(it->class_name) {
                free(it->class_name);
            }

            if(gAllocMem == it) {
                gAllocMem = next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            size_t size = it->size;

            if(size < 2048*2) {
                if(gHeapPages.mFreeMem[size] == ((void *)0)) {
                    it->free_next = ((void *)0);
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
                else {
                    it->free_next = (sMemHeader*)gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
            }
            else {
                free(it);
            }

            gNumFree++;
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;

/*
            if(it->class_name) {
                free(it->class_name);
            }
*/

            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;

            if(gAllocMem == it) {
                gAllocMem = (sMemHeader*)next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            size_t size = it->size;

            if(size < 2048*2) {
                if(gHeapPages.mFreeMem[size] == ((void *)0)) {
                    it->free_next = ((void *)0);
                    gHeapPages.mFreeMem[size] = it;
                }
                else {
                    it->free_next = gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = it;
                }
            }
            else {
                free(it);
            }

            gNumFree++;
        }
    }
}

uniq char* come_dynamic_typeof(void* mem)
{
    sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));

    if(it->allocated != 177783) {
        printf("invalid heap object(%p)\n", it);
        exit(2);
    }

    return it->class_name;
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name=null)
{
    //char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline, null);
    char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline, class_name);

    size_t* ref_count = (size_t*)mem;

    *ref_count = 0;

    size_t* size2 = (size_t*)(mem + sizeof(size_t));

    *size2 = size*count + sizeof(size_t) + sizeof(size_t);

    return mem + sizeof(size_t) + sizeof(size_t);
}

uniq void come_free_object(void* mem)
{
    if(mem == ((void *)0)) {
        return;
    }
/*
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return ;
        }
    }
*/

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void come_free(void* mem)
{
    if(mem == ((void *)0)) {
        return;
    }
/*
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return ;
        }
    }
*/

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null)
{
    if(!block) {
        return null;
    }
/*
    if(gComeMallocLib) {
        if(!is_valid_object(block)) {
            return null;
        }
    }
*/

    char* mem = (char*)block - sizeof(size_t) - sizeof(size_t);

    size_t* size_p = (size_t*)(mem + sizeof(size_t));

    size_t size = *size_p - sizeof(size_t) - sizeof(size_t);

    //void* result = come_calloc(1, size, sname, sline);
    void* result = come_calloc(1, size, sname, sline, class_name);

    memcpy(result, block, size);

    return result;
}

uniq void* come_increment_ref_count(void* mem)
{
    if(mem == ((void *)0)) {
        return mem;
    }
/*
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return mem;
        }
    }
*/

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    (*ref_count)++;

    return mem;
}

uniq void* come_print_ref_count(void* mem)
{
    if(mem == ((void *)0)) {
        return mem;
    }
/*
    if(gComeMallocLib) {
        if(!is_valid_object(mem)) {
            return mem;
        }
    }
*/

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    printf("ref_count %ld\n", *ref_count);

    return mem;
}

uniq void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_)
{
    if(mem == ((void *)0)) {
        return ((void *)0);
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    if(!no_decrement) {
        (*ref_count)--;
    }

    size_t count = *ref_count;
    if(!no_free && (count <= 0 || force_delete_)) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);

            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        return ((void *)0);
    }

    return mem;
}

uniq void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, bool force_delete_, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return mem;
        }
    }
    if(mem == ((void *)0)) {
        return ((void *)0);
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    if(!no_decrement) {
        (*ref_count)--;
    }

    size_t count = *ref_count;
    if(!no_free && (count <= 0 || force_delete_)) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);

            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        return ((void *)0);
    }

    return mem;
}

uniq void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_)
{
    if(mem == ((void *)0)) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

        if(!no_decrement) {
            (*ref_count)--;
        }

        size_t count = *ref_count;
        if(!no_free && (count <= 0 || force_delete_)) {
            if(mem) {
                if(protocol_obj && protocol_fun) {
                    void (*finalizer)(void*) = protocol_fun;
                    finalizer(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

uniq void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == ((void *)0)) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

        if(!no_decrement) {
            (*ref_count)--;
        }

        size_t count = *ref_count;
        if(!no_free && (count <= 0 || force_delete_)) {
            if(mem) {
                if(protocol_obj && protocol_fun) {
                    void (*finalizer)(void*) = protocol_fun;
                    finalizer(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

uniq void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == ((void *)0)) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

        if(!no_decrement) {
            (*ref_count)--;
        }

        size_t count = *ref_count;
        if(!no_free && (count <= 0 || force_delete_)) {
            if(mem) {
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

uniq string __builtin_string(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str) + 1;

    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

uniq bool come_is_contained_element(void** array, int len, void* element)
{
    bool found = false;
    for(int i=0; i<len; i++) {
        if(array[i] == element) {
            found = true;
            break;
        }
    }
    return found;
}

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
    bool operator_equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!(it.item === it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.operator_equals(right);
    }
    bool contained(list<T>* self, T& item) {
        for(var it = self.begin(); !self.end(); it = self.next())
        {
            if(it.equals(item)) {
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

        for(var o2_saved = (left), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            result.push_back(dupe it);
        }

        for(var o2_saved = (right), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            result.push_back(dupe it);
        }

        return result;
    }
    vector<T>*% operator_mult(vector<T>* left, int n) {
        vector<T>*% result = new vector<T>.initialize();

        for(int i=0; i<n; i++) {
            for(var o2_saved = (left), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
                result.push_back(dupe it);
            }
        }

        return result;
    }
    bool operator_equals(vector<T>* left, vector<T>* right) {
        if(left.len != right.len) {
            return false;
        }

        for(int i=0; i<left.len; i++) {
            if(!(left.items[i] === right.items[i]))
            {
                return false;
            }
        }

        return true;
        return left.equals(right);
    }
    bool operator_not_equals(vector<T>* left, vector<T>* right) {
        return !left.operator_equals(right);
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
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
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
    vector<T>*% sort(vector<T>* self) {
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



impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
        self.len = 0;

        self.key_list = new list<T&>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values)
    {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
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
                T2& item2 = right.at(it2, default_value2);

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

            if(it === it2) {
                T2&` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);

                if(!(item === item2)) {
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

    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !(left.operator_equals(right);
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
        if(!self.v1.equals(right.v1)) {
            return false;
        }

        return true;
    }
    bool operator_equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.operator_equals(right);
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
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return !left.operator_equals(right);
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
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return !left.operator_equals(right);
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
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return !left.operator_equals(right);
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
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }
        if(!(self.v5 === right.v5)) {
            return false;
        }

        return true;
    }
    bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.operator_equals(right);
    }
}

//////////////////////////////
// buffer
//////////////////////////////
uniq buffer*% buffer*::initialize(buffer*% self)
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

uniq buffer*% buffer*::initialize_with_value(buffer*% self, char* mem, size_t size)
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    self.append(mem, size);

    return self;
}

uniq void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

uniq buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }

    var result = new buffer;

    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);

    return result;
}

uniq int buffer*::length(buffer* self)
{
    if(self == null) {
        return 0;
    }
    return self.len;
}

uniq void buffer*::reset(buffer* self)
{
    if(self == null) {
        return;
    }
    self.buf[0] = '\0';
    self.len = 0;
}

uniq void buffer*::trim(buffer* self, int len)
{
    if(self == null) {
        return;
    }
    self.len -= len;
    self.buf[self.len] = '\0';
}

uniq buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self == null || mem == null) {
        return self;
    }
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
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

uniq buffer* buffer*::append_char(buffer* self, char c)
{
    if(self == null) {
        return null;
    }
    if(self.len + 1 + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;

        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }

    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
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

uniq buffer* buffer*::append_format(buffer* self, char* msg, ...)
{
    if(self == null || msg == null) {
        return self;
    }

    va_list args;
    __builtin_va_start(args,msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    __builtin_va_end(args);

    if(len < 0) {
        return self;
    }

    string mem = string(result);

    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
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

    free(result);

    return self;
}

uniq buffer* buffer*::append_nullterminated_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    int size = strlen(mem) + 1;
    if(self.len + size + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
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
    self.len++;

    return self;
}

uniq buffer* buffer*::append_int(buffer* self, int value)
{
    if(self == null) {
        return null;
    }
    int* mem = &value;
    int size = sizeof(int);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
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

uniq buffer* buffer*::append_long(buffer* self, long value)
{
    long* mem = &value;
    int size = sizeof(long);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
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

uniq buffer* buffer*::append_short(buffer* self, short value)
{
    if(self == null) {
        return null;
    }

    short* mem = &value;
    int size = sizeof(short);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
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

uniq buffer* buffer*::alignment(buffer* self)
{
    if(self == null) {
        return null;
    }

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

    return self;
}

uniq int buffer*::compare(buffer* left, buffer* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left.buf, right.buf);
}

uniq buffer*% string::to_buffer(char* self)
{
    var result = new buffer.initialize();

    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq buffer*% char*::to_buffer(char* self)
{
    var result = new buffer.initialize();

    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq string buffer*::to_string(buffer* self)
{
    if(self == null) {
        return string("");
    }

    return string(self.buf);
}

static inline unsigned char* buffer*::head_pointer(buffer* self)
{
    return self.buf;
}

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

uniq string buffer*::printable(buffer* self)
{
    int len = self.len;
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        unsigned char c = self.buf[i];

        if((c >= 0 && c < ' ')
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else if(c > 127) {
            result[n++] = '?';
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

impl vector<T>
{
    buffer*% to_buffer(vector<T>* self) {
        var result = new buffer();
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}

impl list <T>
{
    buffer*% to_buffer(list<T>* self) {
        var result = new buffer();
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
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
        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
            buf.append((char*)&it, sizeof(T));
        }
        return new smart_pointer<T>.initialize_with_value(buf);
    }
}

impl list <T>
{
    smart_pointer<T>*% to_pointer(list<T>* self) {
        var buf = new buffer();

        for(var o2_saved = (self), var it = (o2_saved).begin(); !(o2_saved).end(); it = (o2_saved).next()) {
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
uniq bool bool::equals(bool self, bool right)
{
    return self == right;
}

uniq bool char::equals(char self, char right)
{
    return self == right;
}

uniq bool short::equals(short self, short right)
{
    return self == right;
}

uniq bool int::equals(int self, int right)
{
    return self == right;
}

uniq bool long::equals(long self, long right)
{
    return self == right;
}

uniq bool size_t::equals(size_t self, size_t right)
{
    return self == right;
}

uniq bool float::equals(float self, float right)
{
    return self == right;
}

uniq bool double::equals(double self, double right)
{
    return self == right;
}

uniq bool bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq bool char::operator_equals(char self, char right)
{
    return self == right;
}

uniq bool short::operator_equals(short self, short right)
{
    return self == right;
}

uniq bool int::operator_equals(int self, int right)
{
    return self == right;
}

uniq bool long::operator_equals(long self, long right)
{
    return self == right;
}

uniq bool bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool char::operator_not_equals(char self, char right)
{
    return !(self == right);
}

uniq bool short::operator_not_equals(short self, short right)
{
    return !(self == right);
}

uniq bool int::operator_not_equals(int self, int right)
{
    return !(self == right);
}

uniq bool long::operator_not_equals(long self, long right)
{
    return !(self == right);
}

uniq bool string::equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool char*::equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool void*::equals(void* self, void* right)
{
    return self == right;
}

uniq bool string::operator_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool char*::operator_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool void*::operator_equals(char* self, char* right)
{
    return self == right;
}

uniq bool void*::operator_not_equals(char* self, char* right)
{
    return !self.operator_equals(right);
}

uniq bool string::operator_not_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }

    return strcmp(self, right) != 0;
}

uniq bool char*::operator_not_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }

    return strcmp(self, right) != 0;
}


uniq string char*::operator_add(char* self, char* right)
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

uniq string string::operator_add(char* self, char* right)
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

uniq string char*::operator_mult(char* self, int right)
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();

    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }

    return buf.to_string();
}

uniq string string::operator_mult(char* self, int right)
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();

    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }

    return buf.to_string();
}

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
uniq unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int char::get_hash_key(char value)
{
    return value;
}

uniq unsigned int short::get_hash_key(short int value)
{
    return value;
}

uniq unsigned int int::get_hash_key(int value)
{
    return value;
}

uniq unsigned int long::get_hash_key(long value)
{
    return value;
}

uniq unsigned int size_t::get_hash_key(size_t value)
{
    return value;
}

uniq unsigned int float::get_hash_key(float value)
{
    return (unsigned int)value;
}

uniq unsigned int double::get_hash_key(double value)
{
    return (unsigned int)value;
}

uniq unsigned int string::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int char*::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

//////////////////////////////
/// base library(clone)
//////////////////////////////
uniq bool bool::clone(bool self)
{
    return self;
}

uniq char char::clone(char self)
{
    return self;
}

uniq short int short::clone(short self)
{
    return self;
}

uniq int int::clone(int self)
{
    return self;
}

uniq long int long::clone(long self)
{
    return self;
}

uniq size_t size_t::clone(size_t self)
{
    return self;
}

uniq double double::clone(double self)
{
    return self;
}

uniq float float::clone(float self)
{
    return self;
}

uniq string char*::clone(char* self)
{
    if(self == null) { return null; }
    return string(self);
}

uniq string string::clone(char* self)
{
    if(self == null) { return null; }

    return string(self);
}

//////////////////////////////
/// base library(character code)
//////////////////////////////
uniq bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

uniq bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

uniq bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

uniq bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

uniq bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

uniq bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

//////////////////////////////
/// base library(simple string library)
//////////////////////////////
uniq int string::length(char* str)
{
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq int char*::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq string string::reverse(char* str)
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq string char*::reverse(char* str)
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq string string::operator_load_range_element(char* str, int head, int tail)
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

uniq string char*::operator_load_range_element(char* str, int head, int tail)
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

uniq string char*::substring(char* str, int head, int tail)
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

uniq string string::substring(char* str, int head, int tail)
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

uniq string xsprintf(char* msg, ...)
{
    if(msg == null) {
        return string("");
    }
    va_list args;
    __builtin_va_start(args,msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    __builtin_va_end(args);

    if(len < 0) {
        return string("");
    }

    string result2 = string(result);

    free(result);

    return result2;
}

uniq string char*::delete(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }

    if(head < 0) {
       head += len;
    }

    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }

    char*% result = new char[len-(tail-head)+1];

    memcpy(result, str, head);
    memcpy(result + head, str + tail, len-tail);

    result[len -(tail-head)] = '\0';

    return result;
}

uniq string string::delete(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }

    if(head < 0) {
       head += len;
    }

    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }

    string sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sub_str.length()+1);

    return string(str);
}

uniq list<string>*% char*::split_char(char* self, char c)
{
    if(self == null) {
        return new list<string>();
    }

    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

uniq list<string>*% string::split_char(char* self, char c)
{
    if(self == null) {
        return new list<string>();
    }

    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

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


uniq string char*::printable(char* str)
{
    int len = str.length();
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        char c = str[i];

        if((c >= 0 && c < ' ')
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}
static inline string string::printable(char* str)
{
    return string::printable(str);
}

//////////////////////////////
/// base library(path library)
//////////////////////////////
uniq string xbasename(char* path)
{
    if(path == null) {
        return string("");
    }
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

    return string("");
}

uniq string xnoextname(char* path)
{
    if(path == null) {
        return string("");
    }
    string path2 = xbasename(path);

    char* p = path2 + strlen(path2);

    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }

    return string("");
}

uniq string xextname(char* path)
{
    if(path == null) {
        return string("");
    }
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

    return string("");
}

//////////////////////////////
/// base library(to_string)
//////////////////////////////
uniq string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string char::to_string(char self)
{
    return xsprintf("%c", self);
}

uniq string short::to_string(short self)
{
    return xsprintf("%d", self);
}

uniq string int::to_string(int self)
{
    return xsprintf("%d", self);
}

uniq string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

uniq string size_t::to_string(size_t self)
{
    return xsprintf("%ld", self);
}

uniq string float::to_string(float self)
{
    return xsprintf("%f", self);
}

uniq string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

uniq string string::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

uniq string char*::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

//////////////////////////////
/// base library(compare)
//////////////////////////////
uniq int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
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

uniq int char::compare(char left, char right)
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

    return 0;
}

uniq int short::compare(short left, short right)
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

    return 0;
}

uniq int int::compare(int left, int right)
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

    return 0;
}

uniq int long::compare(long left, long right)
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

    return 0;
}

uniq int size_t::compare(size_t left, size_t right)
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

    return 0;
}

uniq int float::compare(float left, float right)
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

    return 0;
}

uniq int double::compare(double left, double right)
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

    return 0;
}

uniq int string::compare(char* left, char* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left,right);
}

uniq int char*::compare(char* left, char* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left,right);
}

//////////////////////////////
/// base library(IO-FILE)
//////////////////////////////
uniq string FILE*::read(FILE* f)
{
    if(f == null) {
        return string("");
    }
    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[8192];

        int size = fread(buf2, 1, 8192, f);

        buf.append(buf2, size);

        if(size < 8192) {
            break;
        }
    }

    return buf.to_string();
}

uniq int FILE*::write(FILE* f, char* str)
{
    if(f == null || str == null) {
        return -1;
    }

    return fwrite(str, strlen(str), 1, f);
}

uniq int FILE*::fclose(FILE* f)
{
    if(f == null) {
        return -1;
    }

    int result = fclose(f);

    if(result < 0) {
        return result;
    }

    return result;
}

uniq FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    if(f == null || msg == null) {
        return f;
    }
    char msg2[1024*2*2*2];

    va_list args;
    __builtin_va_start(args,msg);
    vsnprintf(msg2, 1024*2*2*2, msg, args);
    __builtin_va_end(args);

    int result = fprintf(f, "%s", msg2);

    if(result < 0) {
        return f;
    }

    return f;
}

uniq int string::write(char* self, char* file_name, bool append=false)
{
    if(self == null || file_name == null) {
        return -1;
    }

    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }

    if(f == ((void *)0)) {
        return -1;
    }

    int result = fwrite(self, strlen(self), 1, f);

    if(result < 0) {
        return result;
    }

    int result2 = fclose(f)

    if(result2 < 0) {
        return result2;
    }

    return result;
}

uniq int char*::write(char* self, char* file_name, bool append=false)
{
    if(self == null || file_name == null) {
        return -1;
    }

    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }

    if(f == ((void *)0)) {
        return -1;
    }

    int result = fwrite(self, strlen(self), 1, f);

    if(result < 0) {
        return result;
    }

    int result2 = fclose(f)

    if(result2 < 0) {
        return result2;
    }

    return result;
}

uniq string string::read(char* file_name)
{
    if(file_name == null) {
        return string("");
    }

    FILE* f = fopen(file_name, "r");

    if(f == ((void *)0)) {
        return string("");
    }

    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[8192];

        int size = fread(buf2, 1, 8192, f);

        buf.append(buf2, size);

        if(size < 8192) {
            break;
        }
    }

    string result = buf.to_string();

    int result2 = fclose(f)

    if(result2 < 0) {
        return string("");
    }

    return result;
}

uniq string char*::read(char* file_name)
{
    if(file_name == null) {
        return string("");
    }

    FILE* f = fopen(file_name, "r");

    if(f == ((void *)0)) {
        return string("");
    }

    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[8192];

        int size = fread(buf2, 1, 8192, f);

        buf.append(buf2, size);

        if(size < 8192) {
            break;
        }
    }

    string result = buf.to_string();

    int result2 = fclose(f)

    if(result2 < 0) {
        return string("");
    }

    return result;
}

uniq list<string>*% FILE*::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();

    if(f == null) {
        return result;
    }

    while(1) {
        char buf[8192];

        if(fgets(buf, 8192, f) == ((void *)0)) {
            break;
        }

        result.push_back(string(buf));
    }

    return result;
}

uniq int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f))
{
    if(path == null || mode == null) {
        return -1;
    }
    FILE* f = fopen(path, mode);

    if(f) {
        block(parent, f);

        fclose(f);

        return 0;
    }

    return -1;
}

//////////////////////////////
/// base library(STDOUT, STDIN)
//////////////////////////////
uniq string char*::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);

    return string(self);
}

uniq string char*::print(char* self)
{
    if(self == null) {
        return string("");
    }
    printf("%s", self);

    return string(self);
}

uniq string string::printf(char* self, ...)
{
    if(self == null) {
        return string("");
    }
    char* msg2;

    va_list args;
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);

    printf("%s", msg2);

    free(msg2);

    return string(self);
}

uniq string char*::printf(char* self, ...)
{
    if(self == null) {
        return string("");
    }
    char* msg2;

    va_list args;
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);

    printf("%s", msg2);

    free(msg2);

    return string(self);
}

uniq int int::printf(int self, char* msg)
{
    printf(msg, self);

    return self;
}

uniq string string::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);

    return string(self);
}

//////////////////////////////
/// loop
//////////////////////////////
uniq void int::times(int self, void* parent, void (*block)(void* parent, int it))
{
    for(int i = 0; i < self; i++) {
        block(parent, i);
    }
}



uniq record int assert(int exp) version 2
{
    if(exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}
# 4 "./common.h" 2

# 4 "./common.h"
map<string, void*>*% get_function_addr_from_elf_file(const char *filename);
void run_target(char* target_program);
void run_debugger(pid_t child_pid, void *func_addr);
int main(int argc, char **argv);
# 0 "<command-line>" 2
# 1 "main.c"

# 1 "/usr/include/stdio.h" 1 3 4

# 1 "/usr/include/stdio.h" 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2024 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */
# 3 "main.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */
# 4 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/ptrace.h" 1 3 4
/* `ptrace' debugger support interface.  Linux/x86 version.
   Copyright (C) 1996-2024 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 24 "/usr/include/x86_64-linux-gnu/sys/ptrace.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 25 "/usr/include/x86_64-linux-gnu/sys/ptrace.h" 2 3 4



/* Type of the REQUEST argument to `ptrace.'  */
enum __ptrace_request
{
  /* Indicate that the process making this request should be traced.
     All signals received by this process can be intercepted by its
     parent, and its parent can use the other `ptrace' requests.  */
  PTRACE_TRACEME = 0,


  /* Return the word in the process's text space at address ADDR.  */
  PTRACE_PEEKTEXT = 1,


  /* Return the word in the process's data space at address ADDR.  */
  PTRACE_PEEKDATA = 2,


  /* Return the word in the process's user area at offset ADDR.  */
  PTRACE_PEEKUSER = 3,


  /* Write the word DATA into the process's text space at address ADDR.  */
  PTRACE_POKETEXT = 4,


  /* Write the word DATA into the process's data space at address ADDR.  */
  PTRACE_POKEDATA = 5,


  /* Write the word DATA into the process's user area at offset ADDR.  */
  PTRACE_POKEUSER = 6,


  /* Continue the process.  */
  PTRACE_CONT = 7,


  /* Kill the process.  */
  PTRACE_KILL = 8,


  /* Single step the process.  */
  PTRACE_SINGLESTEP = 9,


  /* Get all general purpose registers used by a processes.  */
  PTRACE_GETREGS = 12,


  /* Set all general purpose registers used by a processes.  */
  PTRACE_SETREGS = 13,


  /* Get all floating point registers used by a processes.  */
  PTRACE_GETFPREGS = 14,


  /* Set all floating point registers used by a processes.  */
  PTRACE_SETFPREGS = 15,


  /* Attach to a process that is already running. */
  PTRACE_ATTACH = 16,


  /* Detach from a process attached to with PTRACE_ATTACH.  */
  PTRACE_DETACH = 17,


  /* Get all extended floating point registers used by a processes.  */
  PTRACE_GETFPXREGS = 18,


  /* Set all extended floating point registers used by a processes.  */
  PTRACE_SETFPXREGS = 19,


  /* Continue and stop at the next entry to or return from syscall.  */
  PTRACE_SYSCALL = 24,


  /* Get a TLS entry in the GDT.  */
  PTRACE_GET_THREAD_AREA = 25,


  /* Change a TLS entry in the GDT.  */
  PTRACE_SET_THREAD_AREA = 26,



  /* Access TLS data.  */
  PTRACE_ARCH_PRCTL = 30,



  /* Continue and stop at the next syscall, it will not be executed.  */
  PTRACE_SYSEMU = 31,


  /* Single step the process, the next syscall will not be executed.  */
  PTRACE_SYSEMU_SINGLESTEP = 32,


  /* Execute process until next taken branch.  */
  PTRACE_SINGLEBLOCK = 33,


  /* Set ptrace filter options.  */
  PTRACE_SETOPTIONS = 0x4200,


  /* Get last ptrace message.  */
  PTRACE_GETEVENTMSG = 0x4201,


  /* Get siginfo for process.  */
  PTRACE_GETSIGINFO = 0x4202,


  /* Set new siginfo for process.  */
  PTRACE_SETSIGINFO = 0x4203,


  /* Get register content.  */
  PTRACE_GETREGSET = 0x4204,


  /* Set register content.  */
  PTRACE_SETREGSET = 0x4205,


  /* Like PTRACE_ATTACH, but do not force tracee to trap and do not affect
     signal or group stop state.  */
  PTRACE_SEIZE = 0x4206,


  /* Trap seized tracee.  */
  PTRACE_INTERRUPT = 0x4207,


  /* Wait for next group event.  */
  PTRACE_LISTEN = 0x4208,


  /* Retrieve siginfo_t structures without removing signals from a queue.  */
  PTRACE_PEEKSIGINFO = 0x4209,


  /* Get the mask of blocked signals.  */
  PTRACE_GETSIGMASK = 0x420a,


  /* Change the mask of blocked signals.  */
  PTRACE_SETSIGMASK = 0x420b,


  /* Get seccomp BPF filters.  */
  PTRACE_SECCOMP_GET_FILTER = 0x420c,


  /* Get seccomp BPF filter metadata.  */
  PTRACE_SECCOMP_GET_METADATA = 0x420d,


  /* Get information about system call.  */
  PTRACE_GET_SYSCALL_INFO = 0x420e,


  /* Get rseq configuration information.  */
  PTRACE_GET_RSEQ_CONFIGURATION = 0x420f,


  /* Set configuration for syscall user dispatch.  */
  PTRACE_SET_SYSCALL_USER_DISPATCH_CONFIG = 0x4210,



  /* Get configuration for syscall user dispatch.  */
  PTRACE_GET_SYSCALL_USER_DISPATCH_CONFIG = 0x4211


};


# 1 "/usr/include/x86_64-linux-gnu/bits/ptrace-shared.h" 1 3 4
/* `ptrace' debugger support interface.  Linux version,
   not architecture-specific.
   Copyright (C) 1996-2024 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Options set using PTRACE_SETOPTIONS.  */
enum __ptrace_setoptions
{
  PTRACE_O_TRACESYSGOOD = 0x00000001,
  PTRACE_O_TRACEFORK = 0x00000002,
  PTRACE_O_TRACEVFORK = 0x00000004,
  PTRACE_O_TRACECLONE = 0x00000008,
  PTRACE_O_TRACEEXEC = 0x00000010,
  PTRACE_O_TRACEVFORKDONE = 0x00000020,
  PTRACE_O_TRACEEXIT = 0x00000040,
  PTRACE_O_TRACESECCOMP = 0x00000080,
  PTRACE_O_EXITKILL = 0x00100000,
  PTRACE_O_SUSPEND_SECCOMP = 0x00200000,
  PTRACE_O_MASK = 0x003000ff
};

enum __ptrace_eventcodes
{
/* Wait extended result codes for the above trace options.  */
  PTRACE_EVENT_FORK = 1,
  PTRACE_EVENT_VFORK = 2,
  PTRACE_EVENT_CLONE = 3,
  PTRACE_EVENT_EXEC = 4,
  PTRACE_EVENT_VFORK_DONE = 5,
  PTRACE_EVENT_EXIT = 6,
  PTRACE_EVENT_SECCOMP = 7,
/* Extended result codes enabled by means other than options.  */
  PTRACE_EVENT_STOP = 128
};

/* Type of stop for PTRACE_GET_SYSCALL_INFO.  */
enum __ptrace_get_syscall_info_op
{
  PTRACE_SYSCALL_INFO_NONE = 0,
  PTRACE_SYSCALL_INFO_ENTRY = 1,
  PTRACE_SYSCALL_INFO_EXIT = 2,
  PTRACE_SYSCALL_INFO_SECCOMP = 3
};

/* Arguments for PTRACE_PEEKSIGINFO.  */
struct __ptrace_peeksiginfo_args
{
  __uint64_t off; /* From which siginfo to start.  */
  __uint32_t flags; /* Flags for peeksiginfo.  */
  __int32_t nr; /* How many siginfos to take.  */
};

enum __ptrace_peeksiginfo_flags
{
  /* Read signals from a shared (process wide) queue.  */
  PTRACE_PEEKSIGINFO_SHARED = (1 << 0)
};

/* Argument and results of PTRACE_SECCOMP_GET_METADATA.  */
struct __ptrace_seccomp_metadata
{
  __uint64_t filter_off; /* Input: which filter.  */
  __uint64_t flags; /* Output: filter's flags.  */
};

/* Results of PTRACE_GET_SYSCALL_INFO.  */
struct __ptrace_syscall_info
{
  __uint8_t op; /* One of the enum
				   __ptrace_get_syscall_info_op
				   values.  */
  __uint32_t arch ; /* AUDIT_ARCH_*
							value.  */
  __uint64_t instruction_pointer; /* Instruction pointer.  */
  __uint64_t stack_pointer; /* Stack pointer.  */
  union
  {
    /* System call number and arguments, for
       PTRACE_SYSCALL_INFO_ENTRY.  */
    struct
    {
      __uint64_t nr;
      __uint64_t args[6];
    } entry;
    /* System call return value and error flag, for
       PTRACE_SYSCALL_INFO_EXIT.  */
    struct
    {
      __int64_t rval;
      __uint8_t is_error;
    } exit;
    /* System call number, arguments and SECCOMP_RET_DATA portion of
       SECCOMP_RET_TRACE return value, for
       PTRACE_SYSCALL_INFO_SECCOMP.  */
    struct
    {
      __uint64_t nr;
      __uint64_t args[6];
      __uint32_t ret_data;
    } seccomp;
  };
};

/* Results of PTRACE_GET_RSEQ_CONFIGURATION.  */
struct __ptrace_rseq_configuration
{
  __uint64_t rseq_abi_pointer;
  __uint32_t rseq_abi_size;
  __uint32_t signature;
  __uint32_t flags;
  __uint32_t pad;
};

/* Argument of PTRACE_SET_SYSCALL_USER_DISPATCH_CONFIG and
   PTRACE_GET_SYSCALL_USER_DISPATCH_CONFIG.  */
struct __ptrace_sud_config
{
  __uint64_t mode;
  __uint64_t selector;
  __uint64_t offset;
  __uint64_t len;
};

/* Perform process tracing functions.  REQUEST is one of the values
   above, and determines the action to be taken.
   For all requests except PTRACE_TRACEME, PID specifies the process to be
   traced.

   PID and the other arguments described above for the various requests should
   appear (those that are used for the particular request) as:
     pid_t PID, void *ADDR, int DATA, void *ADDR2
   after REQUEST.  */
extern long int ptrace (enum __ptrace_request __request, ...) ;
# 213 "/usr/include/x86_64-linux-gnu/sys/ptrace.h" 2 3 4


# 5 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */
# 6 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 3.2.1 Wait for Process Termination	<sys/wait.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 30 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4






# 1 "/usr/include/signal.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.14 Signal handling <signal.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 30 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 1 3 4
/* Signal number constants.  Generic template.
   Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 3 4
/* Fake signal functions.  */
# 36 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 3 4
/* We define here all the signal names listed in POSIX (1003.1-2008);
   as of 1003.1-2013, no additional signals have been added by POSIX.
   We also define here signal names that historically exist in every
   real-world POSIX variant (e.g. SIGWINCH).

   Signals in the 1-15 range are defined with their historical numbers.
   For other signals, we use the BSD numbers.
   There are two unallocated signal numbers in the 1-31 range: 7 and 29.
   Signal number 0 is reserved for use as kill(pid, 0), to test whether
   a process exists without sending it a signal.  */

/* ISO C99 signals.  */







/* Historical signals specified by POSIX. */







/* Archaic names for compatibility.  */




/* Not all systems support real-time signals.  bits/signum.h indicates
   that they are supported by overriding __SIGRTMAX to a value greater
   than __SIGRTMIN.  These constants give the kernel-level hard limits,
   but some real-time signals may be used internally by glibc.  Do not
   use these constants in application code; use SIGRTMIN and SIGRTMAX
   (defined in signal.h) instead.  */

/* Include system specific bits.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/signum-arch.h" 1 3 4
/* Signal number definitions.  Linux version.
   Copyright (C) 1995-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/signum-arch.h" 3 4
/* Adjustments and additions to the signal number constants for
   most Linux systems.  */




/* Historical signals specified by POSIX. */



/* New(er) POSIX signals (1003.1-2008, 1003.1-2013).  */
# 52 "/usr/include/x86_64-linux-gnu/bits/signum-arch.h" 3 4
/* Nonstandard signals found in all modern POSIX systems
   (including both BSD and Linux).  */


/* Archaic names for compatibility.  */
# 77 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 2 3 4

/* Biggest signal number + 1 (including real-time signals).  */
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 2 3 4

/* An integral type that can be modified atomically, without the
   possibility of a signal arriving in the middle of the operation.  */
typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4
# 52 "/usr/include/signal.h" 3 4
/* We need `struct timespec' later on.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
/* NB: Include guard matches what <linux/time.h> uses.  */
# 54 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 6 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
/* Define __sigval_t.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Type for data associated with a signal.  */

union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 15 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
/* Some fields of siginfo_t have architecture-specific variations.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-arch.h" 1 3 4
/* Architecture-specific adjustments to siginfo_t.  x86 version.  */
# 17 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
typedef struct
  {
    int si_signo; /* Signal number.  */

    int si_errno; /* If non-zero, an errno value associated with
				   this signal, as defined in <errno.h>.  */
    int si_code; /* Signal code.  */





    int __pad0; /* Explicit padding.  */


    union
      {
 int _pad[((128 / sizeof (int)) - 4)];

  /* kill().  */
 struct
   {
     __pid_t si_pid; /* Sending process ID.  */
     __uid_t si_uid; /* Real user ID of sending process.  */
   } _kill;

 /* POSIX.1b timers.  */
 struct
   {
     int si_tid; /* Timer ID.  */
     int si_overrun; /* Overrun count.  */
     __sigval_t si_sigval; /* Signal value.  */
   } _timer;

 /* POSIX.1b signals.  */
 struct
   {
     __pid_t si_pid; /* Sending process ID.  */
     __uid_t si_uid; /* Real user ID of sending process.  */
     __sigval_t si_sigval; /* Signal value.  */
   } _rt;

 /* SIGCHLD.  */
 struct
   {
     __pid_t si_pid; /* Which child.	 */
     __uid_t si_uid; /* Real user ID of sending process.  */
     int si_status; /* Exit value or signal.  */
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;

 /* SIGILL, SIGFPE, SIGSEGV, SIGBUS.  */
 struct
   {
     void *si_addr; /* Faulting insn/memory ref.  */
    
     short int si_addr_lsb; /* Valid LSB of the reported address.  */
     union
       {
  /* used when si_code=SEGV_BNDERR */
  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;
  /* used when si_code=SEGV_PKUERR */
  __uint32_t _pkey;
       } _bounds;
   } _sigfault;

 /* SIGPOLL.  */
 struct
   {
     long int si_band; /* Band event for SIGPOLL.  */
     int si_fd;
   } _sigpoll;

 /* SIGSYS.  */

 struct
   {
     void *_call_addr; /* Calling user insn.  */
     int _syscall; /* Triggering system call number.  */
     unsigned int _arch; /* AUDIT_ARCH_* of syscall.  */
   } _sigsys;

      } _sifields;
  } siginfo_t ;


/* X/Open requires some more fields with fixed names.  */
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 1 3 4
/* siginfo constants.  Linux version.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
/* Most of these constants are uniform across all architectures, but there
   is one exception.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-arch.h" 1 3 4
/* Architecture-specific adjustments to siginfo_t.  x86 version.  */
# 29 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 2 3 4




/* Values for `si_code'.  Positive values are reserved for kernel-generated
   signals.  */
enum
{
  SI_ASYNCNL = -60, /* Sent by asynch name lookup completion.  */
  SI_DETHREAD = -7, /* Sent by execve killing subsidiary
				   threads.  */
  SI_TKILL, /* Sent by tkill.  */
  SI_SIGIO, /* Sent by queued SIGIO. */

  SI_ASYNCIO, /* Sent by AIO completion.  */
  SI_MESGQ, /* Sent by real time mesq state change.  */
  SI_TIMER, /* Sent by timer expiration.  */





  SI_QUEUE, /* Sent by sigqueue.  */
  SI_USER, /* Sent by kill, sigsend.  */
  SI_KERNEL = 0x80 /* Send by kernel.  */
# 66 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
};



/* `si_code' values for SIGILL signal.  */
enum
{
  ILL_ILLOPC = 1, /* Illegal opcode.  */

  ILL_ILLOPN, /* Illegal operand.  */

  ILL_ILLADR, /* Illegal addressing mode.  */

  ILL_ILLTRP, /* Illegal trap. */

  ILL_PRVOPC, /* Privileged opcode.  */

  ILL_PRVREG, /* Privileged register.  */

  ILL_COPROC, /* Coprocessor error.  */

  ILL_BADSTK, /* Internal stack error.  */

  ILL_BADIADDR /* Unimplemented instruction address.  */

};

/* `si_code' values for SIGFPE signal.  */
enum
{
  FPE_INTDIV = 1, /* Integer divide by zero.  */

  FPE_INTOVF, /* Integer overflow.  */

  FPE_FLTDIV, /* Floating point divide by zero.  */

  FPE_FLTOVF, /* Floating point overflow.  */

  FPE_FLTUND, /* Floating point underflow.  */

  FPE_FLTRES, /* Floating point inexact result.  */

  FPE_FLTINV, /* Floating point invalid operation.  */

  FPE_FLTSUB, /* Subscript out of range.  */

  FPE_FLTUNK = 14, /* Undiagnosed floating-point exception.  */

  FPE_CONDTRAP /* Trap on condition.  */

};

/* `si_code' values for SIGSEGV signal.  */
enum
{
  SEGV_MAPERR = 1, /* Address not mapped to object.  */

  SEGV_ACCERR, /* Invalid permissions for mapped object.  */

  SEGV_BNDERR, /* Bounds checking failure.  */

  SEGV_PKUERR, /* Protection key checking failure.  */

  SEGV_ACCADI, /* ADI not enabled for mapped object.  */

  SEGV_ADIDERR, /* Disrupting MCD error.  */

  SEGV_ADIPERR, /* Precise MCD exception.  */

  SEGV_MTEAERR, /* Asynchronous ARM MTE error.  */

  SEGV_MTESERR, /* Synchronous ARM MTE exception.  */

  SEGV_CPERR /* Control protection fault.  */

};

/* `si_code' values for SIGBUS signal.  */
enum
{
  BUS_ADRALN = 1, /* Invalid address alignment.  */

  BUS_ADRERR, /* Non-existent physical address.  */

  BUS_OBJERR, /* Object specific hardware error.  */

  BUS_MCEERR_AR, /* Hardware memory error: action required.  */

  BUS_MCEERR_AO /* Hardware memory error: action optional.  */

};



/* `si_code' values for SIGTRAP signal.  */
enum
{
  TRAP_BRKPT = 1, /* Process breakpoint.  */

  TRAP_TRACE, /* Process trace trap.  */

  TRAP_BRANCH, /* Process taken branch trap.  */

  TRAP_HWBKPT, /* Hardware breakpoint/watchpoint.  */

  TRAP_UNK /* Undiagnosed trap.  */

};



/* `si_code' values for SIGCHLD signal.  */
enum
{
  CLD_EXITED = 1, /* Child has exited.  */

  CLD_KILLED, /* Child was killed.  */

  CLD_DUMPED, /* Child terminated abnormally.  */

  CLD_TRAPPED, /* Traced child has trapped.  */

  CLD_STOPPED, /* Child has stopped.  */

  CLD_CONTINUED /* Stopped child has continued.  */

};

/* `si_code' values for SIGPOLL signal.  */
enum
{
  POLL_IN = 1, /* Data input available.  */

  POLL_OUT, /* Output buffers available.  */

  POLL_MSG, /* Input message available.   */

  POLL_ERR, /* I/O error.  */

  POLL_PRI, /* High priority input available.  */

  POLL_HUP /* Device disconnected.  */

};


/* Architectures might also add architecture-specific constants.
   These are all considered GNU extensions.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts-arch.h" 1 3 4
/* Architecture-specific additional siginfo constants.  */



/* This architecture has no additional siginfo constants.  */
# 216 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 2 3 4
# 59 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
/* Define __sigval_t.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 2 3 4

/* To avoid sigval_t (not a standard type name) having C++ name
   mangling depending on whether the selected standard includes union
   sigval, it should not be defined at all when using a standard for
   which the sigval name is not reserved; in that case, headers should
   not include <bits/types/sigval_t.h> and should use only the
   internal __sigval_t name.  */




typedef __sigval_t sigval_t;
# 63 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 6 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
/* Define __sigval_t.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 15 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 3 4
/* Forward declaration.  */





/* Structure to transport application-defined values with signals.  */
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];

 /* When SIGEV_SIGNAL and SIGEV_THREAD_ID set, LWP ID of the
	   thread to receive the signal.  */
 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t); /* Function to start.  */
     pthread_attr_t *_attribute; /* Thread attributes.  */
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;

/* POSIX names to access some of the members.  */
# 67 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 1 3 4
/* sigevent constants.  Linux version.
   Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 3 4
/* `sigev_notify' values.  */
enum
{
  SIGEV_SIGNAL = 0, /* Notify via signal.  */

  SIGEV_NONE, /* Other notification: meaningless.  */

  SIGEV_THREAD, /* Deliver via thread creation.  */


  SIGEV_THREAD_ID = 4 /* Send signal to specific thread.
				   This is a Linux extension.  */

};
# 68 "/usr/include/signal.h" 2 3 4



/* Type of a signal handler.  */
typedef void (*__sighandler_t) (int);

/* The X/Open definition of `signal' specifies the SVID semantic.  Use
   the additional function `sysv_signal' when X/Open compatibility is
   requested.  */
extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     ;

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     ;


/* Set the handler for the signal SIG to HANDLER, returning the old
   handler, or SIG_ERR on error.
   By default `signal' has the BSD semantic.  */

extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     ;
# 108 "/usr/include/signal.h" 3 4
/* Send signal SIG to process number PID.  If PID is zero,
   send SIG to all processes in the current process's process group.
   If PID is < -1, send SIG to all processes in process group - PID.  */

extern int kill (__pid_t __pid, int __sig) ;



/* Send SIG to all processes in process group PGRP.
   If PGRP is zero, send SIG to all processes in
   the current process's process group.  */
extern int killpg (__pid_t __pgrp, int __sig) ;


/* Raise signal SIG, i.e., send SIG to yourself.  */
extern int raise (int __sig) ;


/* SVID names for the same things.  */
extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     ;
extern int gsignal (int __sig) ;



/* Print a message describing the meaning of the given signal number.  */
extern void psignal (int __sig, const char *__s);

/* Print a message describing the meaning of the given signal information.  */
extern void psiginfo (const siginfo_t *__pinfo, const char *__s);




/* The `sigpause' function in X/Open defines the argument as the
   signal number.  This requires redirecting to another function
   because the default version in glibc uses an old BSD interface.

   This function is a cancellation point and therefore not marked with
   __THROW.  */






extern int __sigpause (int __sig_or_mask, int __is_sig);
/* Remove a signal from the signal mask and suspend the process.  */






/* None of the following functions should be used anymore.  They are here
   only for compatibility.  A single word (`int') is not guaranteed to be
   enough to hold a complete signal mask and therefore these functions
   simply do not work in many situations.  Use `sigprocmask' instead.  */

/* Compute mask for signal SIG.  */




/* Block signals in MASK, returning the old mask.  */
extern int sigblock (int __mask) ;

/* Set the mask of blocked signals to MASK, returning the old mask.  */
extern int sigsetmask (int __mask) ;

/* Return currently selected signal mask.  */
extern int siggetmask (void) ;
# 188 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;


/* 4.4 BSD uses the name `sig_t' for this.  */

typedef __sighandler_t sig_t;




/* Clear all signals from SET.  */
extern int sigemptyset (sigset_t *__set) ;

/* Set all signals in SET.  */
extern int sigfillset (sigset_t *__set) ;

/* Add SIGNO to SET.  */
extern int sigaddset (sigset_t *__set, int __signo) ;

/* Remove SIGNO from SET.  */
extern int sigdelset (sigset_t *__set, int __signo) ;

/* Return 1 if SIGNO is in SET, 0 if not.  */
extern int sigismember (const sigset_t *__set, int __signo)
     ;


/* Return non-empty value is SET is not empty.  */
extern int sigisemptyset (const sigset_t *__set) ;

/* Build new signal set by combining the two inputs set using logical AND.  */
extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) ;

/* Build new signal set by combining the two inputs set using logical OR.  */
extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) ;


/* Get the system-specific definitions of `struct sigaction'
   and the `SA_*' and `SIG_*'. constants.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
/* The proper definitions for Linux's sigaction.
   Copyright (C) 1993-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
/* Structure describing the action to be taken when a signal arrives.  */
struct sigaction
  {
    /* Signal handler.  */

    union
      {
 /* Used if SA_SIGINFO is not set.  */
 __sighandler_t sa_handler;
 /* Used if SA_SIGINFO is set.  */
 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;






    /* Additional set of signals to be blocked.  */
    __sigset_t sa_mask;

    /* Special flags.  */
    int sa_flags;

    /* Restore handler.  */
    void (*sa_restorer) (void);
  };

/* Bits in `sa_flags'.  */
# 72 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
/* Some aliases for the SA_ constants.  */





/* Values for the HOW argument to `sigprocmask'.  */
# 230 "/usr/include/signal.h" 2 3 4

/* Get and/or change the set of blocked signals.  */
extern int sigprocmask (int __how, const sigset_t *restrict __set,
   sigset_t *restrict __oset) ;

/* Change the set of blocked signals to SET,
   wait until a signal arrives, and restore the set of blocked signals.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int sigsuspend (const sigset_t *__set) ;

/* Get and/or set the action for signal SIG.  */
extern int sigaction (int __sig, const struct sigaction *restrict __act,
        struct sigaction *restrict __oact) ;

/* Put in SET all signals that are blocked and waiting to be delivered.  */
extern int sigpending (sigset_t *__set) ;



/* Select any of pending signals from SET or wait for any to arrive.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int sigwait (const sigset_t *restrict __set, int *restrict __sig)
     ;



/* Select any of pending signals from SET and place information in INFO.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int sigwaitinfo (const sigset_t *restrict __set,
   siginfo_t *restrict __info) ;

/* Select any of pending signals from SET and place information in INFO.
   Wait the time specified by TIMEOUT if no signal is pending.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int sigtimedwait (const sigset_t *restrict __set,
    siginfo_t *restrict __info,
    const struct timespec *restrict __timeout)
     ;
# 290 "/usr/include/signal.h" 3 4
/* Send signal SIG to the process PID.  Associate data in VAL with the
   signal.  */
extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     ;






/* Get machine-dependent `struct sigcontext' and signal subcodes.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
/* Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 26 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 2 3 4





struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 123 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{
  /* FPU environment matching the 64-bit FXSAVE layout.  */
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 302 "/usr/include/signal.h" 2 3 4

/* Restore the state saved in SCP.  */
extern int sigreturn (struct sigcontext *__scp) ;






# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 312 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 1 3 4
/* Define stack_t.  Linux version.
   Copyright (C) 1998-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 24 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 2 3 4

/* Structure describing a signal stack.  */
typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 314 "/usr/include/signal.h" 2 3 4

/* This will define `ucontext_t' and `mcontext_t'.  */
# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
/* Copyright (C) 2001-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 24 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 1 3 4
/* Define stack_t.  Linux version.
   Copyright (C) 1998-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
/* Type for general register.  */
 typedef long long int greg_t;

/* Number of general registers.  */





/* Container for all general registers.  */
typedef greg_t gregset_t[23];


/* Number of each register in the `gregset_t' array.  */
enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS, /* Actually short cs, gs, fs, __pad0.  */

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{
  /* 64-bit FXSAVE format.  */
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

/* Structure to describe FPU registers.  */
typedef struct _libc_fpstate *fpregset_t;

/* Context to describe whole processor state.  */
typedef struct
  {
    gregset_t gregs;
    /* Note that fpregs is a pointer.  */
    fpregset_t fpregs;
    unsigned long long __reserved1 [8];
} mcontext_t;

/* Userlevel context.  */
typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    unsigned long long int __ssp[4];
  } ucontext_t;
# 317 "/usr/include/signal.h" 2 3 4




/* If INTERRUPT is nonzero, make signal SIG interrupt system calls
   (causing them to fail with EINTR); if INTERRUPT is zero, make system
   calls be restarted after signal SIG.  */
extern int siginterrupt (int __sig, int __interrupt)
  ;

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
/* sigstack, sigaltstack definitions.
   Copyright (C) 1998-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
/* Minimum stack size for a signal handler.  */


/* System default stack size.  */
# 328 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigstksz.h" 1 3 4
/* Definition of MINSIGSTKSZ and SIGSTKSZ.  Linux version.
   Copyright (C) 2020-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






# 1 "/usr/include/unistd.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.10 Symbolic Constants		<unistd.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/unistd.h" 2 3 4



/* These may be used to determine what facilities are present at compile time.
   Their values can be obtained at run time from `sysconf'.  */


/* POSIX Standard approved as ISO/IEC 9945-1 as of September 2008.  */
# 49 "/usr/include/unistd.h" 3 4
/* These are not #ifdef __USE_POSIX2 because they are
   in the theoretically application-owned namespace.  */



/* The utilities on GNU systems also correspond to this version.  */
# 66 "/usr/include/unistd.h" 3 4
/* The utilities on GNU systems also correspond to this version.  */


/* This symbol was required until the 2001 edition of POSIX.  */


/* If defined, the implementation supports the
   C Language Bindings Option.  */


/* If defined, the implementation supports the
   C Language Development Utilities Option.  */


/* If defined, the implementation supports the
   Software Development Utilities Option.  */


/* If defined, the implementation supports the
   creation of locales with the localedef utility.  */


/* X/Open version number to which the library conforms.  It is selectable.  */
# 99 "/usr/include/unistd.h" 3 4
/* Commands and utilities from XPG4 are available.  */


/* We are compatible with the old published standards as well.  */




/* The X/Open Unix extensions are available.  */


/* The enhanced internationalization capabilities according to XPG4.2
   are present.  */


/* The legacy interfaces are also available.  */



/* Get values of POSIX options:

   If these symbols are defined, the corresponding features are
   always available.  If not, they may be available sometimes.
   The current values can be obtained with `sysconf'.

   _POSIX_JOB_CONTROL		Job control is supported.
   _POSIX_SAVED_IDS		Processes have a saved set-user-ID
				and a saved set-group-ID.
   _POSIX_REALTIME_SIGNALS	Real-time, queued signals are supported.
   _POSIX_PRIORITY_SCHEDULING	Priority scheduling is supported.
   _POSIX_TIMERS		POSIX.4 clocks and timers are supported.
   _POSIX_ASYNCHRONOUS_IO	Asynchronous I/O is supported.
   _POSIX_PRIORITIZED_IO	Prioritized asynchronous I/O is supported.
   _POSIX_SYNCHRONIZED_IO	Synchronizing file data is supported.
   _POSIX_FSYNC			The fsync function is present.
   _POSIX_MAPPED_FILES		Mapping of files to memory is supported.
   _POSIX_MEMLOCK		Locking of all memory is supported.
   _POSIX_MEMLOCK_RANGE		Locking of ranges of memory is supported.
   _POSIX_MEMORY_PROTECTION	Setting of memory protections is supported.
   _POSIX_MESSAGE_PASSING	POSIX.4 message queues are supported.
   _POSIX_SEMAPHORES		POSIX.4 counting semaphores are supported.
   _POSIX_SHARED_MEMORY_OBJECTS	POSIX.4 shared memory objects are supported.
   _POSIX_THREADS		POSIX.1c pthreads are supported.
   _POSIX_THREAD_ATTR_STACKADDR	Thread stack address attribute option supported.
   _POSIX_THREAD_ATTR_STACKSIZE	Thread stack size attribute option supported.
   _POSIX_THREAD_SAFE_FUNCTIONS	Thread-safe functions are supported.
   _POSIX_THREAD_PRIORITY_SCHEDULING
				POSIX.1c thread execution scheduling supported.
   _POSIX_THREAD_PRIO_INHERIT	Thread priority inheritance option supported.
   _POSIX_THREAD_PRIO_PROTECT	Thread priority protection option supported.
   _POSIX_THREAD_PROCESS_SHARED	Process-shared synchronization supported.
   _POSIX_PII			Protocol-independent interfaces are supported.
   _POSIX_PII_XTI		XTI protocol-indep. interfaces are supported.
   _POSIX_PII_SOCKET		Socket protocol-indep. interfaces are supported.
   _POSIX_PII_INTERNET		Internet family of protocols supported.
   _POSIX_PII_INTERNET_STREAM	Connection-mode Internet protocol supported.
   _POSIX_PII_INTERNET_DGRAM	Connectionless Internet protocol supported.
   _POSIX_PII_OSI		ISO/OSI family of protocols supported.
   _POSIX_PII_OSI_COTS		Connection-mode ISO/OSI service supported.
   _POSIX_PII_OSI_CLTS		Connectionless ISO/OSI service supported.
   _POSIX_POLL			Implementation supports `poll' function.
   _POSIX_SELECT		Implementation supports `select' and `pselect'.

   _XOPEN_REALTIME		X/Open realtime support is available.
   _XOPEN_REALTIME_THREADS	X/Open realtime thread support is available.
   _XOPEN_SHM			Shared memory interface according to XPG4.2.

   _XBS5_ILP32_OFF32		Implementation provides environment with 32-bit
				int, long, pointer, and off_t types.
   _XBS5_ILP32_OFFBIG		Implementation provides environment with 32-bit
				int, long, and pointer and off_t with at least
				64 bits.
   _XBS5_LP64_OFF64		Implementation provides environment with 32-bit
				int, and 64-bit long, pointer, and off_t types.
   _XBS5_LPBIG_OFFBIG		Implementation provides environment with at
				least 32 bits int and long, pointer, and off_t
				with at least 64 bits.

   If any of these symbols is defined as -1, the corresponding option is not
   true for any file.  If any is defined as other than -1, the corresponding
   option is true for all files.  If a symbol is not defined at all, the value
   for a specific file can be obtained from `pathconf' and `fpathconf'.

   _POSIX_CHOWN_RESTRICTED	Only the super user can use `chown' to change
				the owner of a file.  `chown' can only be used
				to change the group ID of a file to a group of
				which the calling process is a member.
   _POSIX_NO_TRUNC		Pathname components longer than
				NAME_MAX generate an error.
   _POSIX_VDISABLE		If defined, if the value of an element of the
				`c_cc' member of `struct termios' is
				_POSIX_VDISABLE, no character will have the
				effect associated with that element.
   _POSIX_SYNC_IO		Synchronous I/O may be performed.
   _POSIX_ASYNC_IO		Asynchronous I/O may be performed.
   _POSIX_PRIO_IO		Prioritized Asynchronous I/O may be performed.

   Support for the Large File Support interface is not generally available.
   If it is available the following constants are defined to one.
   _LFS64_LARGEFILE		Low-level I/O supports large files.
   _LFS64_STDIO			Standard I/O supports large files.
   */

# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
/* Define POSIX options for Linux.
   Copyright (C) 1996-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If
   not, see <https://www.gnu.org/licenses/>.  */




/* Job control is supported.  */


/* Processes have a saved set-user-ID and a saved set-group-ID.  */


/* Priority scheduling is not supported with the correct semantics,
   but GNU/Linux applications expect that the corresponding interfaces
   are available, even though the semantics do not meet the POSIX
   requirements.  See glibc bug 14829.  */


/* Synchronizing file data is supported.  */


/* The fsync function is present.  */


/* Mapping of files to memory is supported.  */


/* Locking of all memory is supported.  */


/* Locking of ranges of memory is supported.  */


/* Setting of memory protections is supported.  */


/* Some filesystems allow all users to change file ownership.  */


/* `c_cc' member of 'struct termios' structure can be disabled by
   using the value _POSIX_VDISABLE.  */


/* Filenames are not silently truncated.  */


/* X/Open realtime support is available.  */


/* X/Open thread realtime support is available.  */


/* XPG4.2 shared memory is supported.  */


/* Tell we have POSIX threads.  */


/* We have the reentrant functions described in POSIX.  */



/* We provide priority scheduling for threads.  */


/* We support user-defined stack sizes.  */


/* We support user-defined stacks.  */


/* We support priority inheritance.  */


/* We support priority protection, though only for non-robust
   mutexes.  */



/* We support priority inheritance for robust mutexes.  */


/* We do not support priority protection for robust mutexes.  */



/* We support POSIX.1b semaphores.  */


/* Real-time signals are supported.  */


/* We support asynchronous I/O.  */


/* Alternative name for Unix98.  */

/* Support for prioritization is also available.  */


/* The LFS support in asynchronous I/O is also available.  */


/* The rest of the LFS is also available.  */




/* POSIX shared memory objects are implemented.  */


/* CPU-time clocks support needs to be checked at runtime.  */


/* Clock support in threads must be also checked at runtime.  */


/* GNU libc provides regular expression handling.  */


/* Reader/Writer locks are available.  */


/* We have a POSIX shell.  */


/* We support the Timeouts option.  */


/* We support spinlocks.  */


/* The `spawn' function family is supported.  */


/* We have POSIX timers.  */


/* The barrier functions are available.  */


/* POSIX message queues are available.  */


/* Thread process-shared synchronization is supported.  */


/* The monotonic clock might be available.  */


/* The clock selection interfaces are available.  */


/* Advisory information interfaces are available.  */


/* IPv6 support is available.  */


/* Raw socket support is available.  */


/* We have at least one terminal.  */


/* Neither process nor thread sporadic server interfaces is available.  */



/* trace.h is not available.  */





/* Typed memory objects are not available.  */
# 203 "/usr/include/unistd.h" 2 3 4

/* Get the environment definitions from Unix98.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
/* Copyright (C) 1999-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4

/* This header should define the following symbols under the described
   situations.  A value `1' means that the model is always supported,
   `-1' means it is never supported.  Undefined means it cannot be
   statically decided.

   _POSIX_V7_ILP32_OFF32   32bit int, long, pointers, and off_t type
   _POSIX_V7_ILP32_OFFBIG  32bit int, long, and pointers and larger off_t type

   _POSIX_V7_LP64_OFF32	   64bit long and pointers and 32bit off_t type
   _POSIX_V7_LPBIG_OFFBIG  64bit long and pointers and large off_t type

   The macros _POSIX_V6_ILP32_OFF32, _POSIX_V6_ILP32_OFFBIG,
   _POSIX_V6_LP64_OFF32, _POSIX_V6_LPBIG_OFFBIG, _XBS5_ILP32_OFF32,
   _XBS5_ILP32_OFFBIG, _XBS5_LP64_OFF32, and _XBS5_LPBIG_OFFBIG were
   used in previous versions of the Unix standard and are available
   only for compatibility.
*/



/* Environments with 32-bit wide pointers are optionally provided.
   Therefore following macros aren't defined:
   # undef _POSIX_V7_ILP32_OFF32
   # undef _POSIX_V7_ILP32_OFFBIG
   # undef _POSIX_V6_ILP32_OFF32
   # undef _POSIX_V6_ILP32_OFFBIG
   # undef _XBS5_ILP32_OFF32
   # undef _XBS5_ILP32_OFFBIG
   and users need to check at runtime.  */

/* We also have no use (for now) for an environment with bigger pointers
   and offsets.  */




/* By default we have 64-bit wide `long int', pointers and `off_t'.  */
# 207 "/usr/include/unistd.h" 2 3 4


/* Standard file descriptors.  */





/* All functions that are not declared anywhere else.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 218 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 227 "/usr/include/unistd.h" 2 3 4


/* The Single Unix specification says that some more types are
   available here.  */
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;




/* Values for the second argument to access.
   These may be OR'd together.  */





/* Test for access to NAME using the real UID and real GID.  */
extern int access (const char *__name, int __type) ;


/* Test for access to NAME using the effective UID and GID
   (as normal file operations use).  */
extern int euidaccess (const char *__name, int __type)
     ;

/* An alias for `euidaccess', used by some other systems.  */
extern int eaccess (const char *__name, int __type)
     ;

/* Execute program relative to a directory file descriptor.  */
extern int execveat (int __fd, const char *__path, char *const __argv[],
                     char *const __envp[], int __flags)
    ;



/* Test for access to FILE relative to the directory FD is open on.
   If AT_EACCESS is set in FLAG, then use effective IDs like `eaccess',
   otherwise use real IDs like `access'.  */
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     ;



/* Values for the WHENCE argument to lseek.  */
# 326 "/usr/include/unistd.h" 3 4
/* Old BSD names for the same constants; just for compatibility.  */






/* Move FD's file position to OFFSET bytes from the
   beginning of the file (if WHENCE is SEEK_SET),
   the current position (if WHENCE is SEEK_CUR),
   or the end of the file (if WHENCE is SEEK_END).
   Return the new file position.  */

extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
# 350 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     ;


/* Close the file descriptor FD.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int close (int __fd);


/* Close all open file descriptors greater than or equal to LOWFD.
   Negative LOWFD is clamped to 0.  */
extern void closefrom (int __lowfd) ;


/* Read NBYTES into BUF from FD.  Return the
   number read, -1 for errors or 0 for EOF.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t read (int __fd, void *__buf, size_t __nbytes)
    ;

/* Write N bytes of BUF to FD.  Return the number written, or -1.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t write (int __fd, const void *__buf, size_t __n)
    ;



/* Read NBYTES into BUF from FD at the given position OFFSET without
   changing the file pointer.  Return the number read, -1 for errors
   or 0 for EOF.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset)
    ;

/* Write N bytes of BUF to FD at the given position OFFSET without
   changing the file pointer.  Return the number written, or -1.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset)
    ;
# 419 "/usr/include/unistd.h" 3 4
/* Read NBYTES into BUF from FD at the given position OFFSET without
   changing the file pointer.  Return the number read, -1 for errors
   or 0 for EOF.  */
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset)
    ;
/* Write N bytes of BUF to FD at the given position OFFSET without
   changing the file pointer.  Return the number written, or -1.  */
extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset)
    ;



/* Create a one-way communication channel (pipe).
   If successful, two file descriptors are stored in PIPEDES;
   bytes written on PIPEDES[1] can be read from PIPEDES[0].
   Returns 0 if successful, -1 if not.  */
extern int pipe (int __pipedes[2]) ;


/* Same as pipe but apply flags passed in FLAGS to the new file
   descriptors.  */
extern int pipe2 (int __pipedes[2], int __flags) ;


/* Schedule an alarm.  In SECONDS seconds, the process will get a SIGALRM.
   If SECONDS is zero, any currently scheduled alarm will be cancelled.
   The function returns the number of seconds remaining until the last
   alarm scheduled would have signaled, or zero if there wasn't one.
   There is no return value to indicate an error, but you can set `errno'
   to 0 and check its value after calling `alarm', and this might tell you.
   The signal may come late due to processor scheduling.  */
extern unsigned int alarm (unsigned int __seconds) ;

/* Make the process sleep for SECONDS seconds, or until a signal arrives
   and is not ignored.  The function returns the number of seconds less
   than SECONDS which it actually slept (thus zero if it slept the full time).
   If a signal handler does a `longjmp' or modifies the handling of the
   SIGALRM signal while inside `sleep' call, the handling of the SIGALRM
   signal afterwards is undefined.  There is no return value to indicate
   error, but if `sleep' returns SECONDS, it probably didn't work.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern unsigned int sleep (unsigned int __seconds);



/* Set an alarm to go off (generating a SIGALRM signal) in VALUE
   microseconds.  If INTERVAL is nonzero, when the alarm goes off, the
   timer is reset to go off every INTERVAL microseconds thereafter.
   Returns the number of microseconds remaining before the alarm.  */
extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;

/* Sleep USECONDS microseconds, or until a signal arrives that is not blocked
   or ignored.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int usleep (__useconds_t __useconds);



/* Suspend the process until a signal arrives.
   This always returns -1 and sets `errno' to EINTR.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pause (void);


/* Change the owner and group of FILE.  */
extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     ;


/* Change the owner and group of the file that FD is open on.  */
extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;


/* Change owner and group of FILE, if it is a symbolic
   link the ownership of the symbolic link is changed.  */
extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     ;




/* Change the owner and group of FILE relative to the directory FD is open
   on.  */
extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     ;


/* Change the process's working directory to PATH.  */
extern int chdir (const char *__path) ;


/* Change the process's working directory to the one FD is open on.  */
extern int fchdir (int __fd) ;


/* Get the pathname of the current working directory,
   and put it in SIZE bytes of BUF.  Returns NULL if the
   directory couldn't be determined or SIZE was too small.
   If successful, returns BUF.  In GNU, if BUF is NULL,
   an array is allocated with `malloc'; the array is SIZE
   bytes long, unless SIZE == 0, in which case it is as
   big as necessary.  */
extern char *getcwd (char *__buf, size_t __size) ;


/* Return a malloc'd string containing the current directory name.
   If the environment variable `PWD' is set, and its value is correct,
   that value is used.  */
extern char *get_current_dir_name (void) ;




/* Put the absolute pathname of the current working directory in BUF.
   If successful, return BUF.  If not, put an error message in
   BUF and return NULL.  BUF should be at least PATH_MAX bytes long.  */
extern char *getwd (char *__buf)
    
    ;



/* Duplicate FD, returning a new file descriptor on the same file.  */
extern int dup (int __fd) ;

/* Duplicate FD to FD2, closing FD2 and making it open on the same file.  */
extern int dup2 (int __fd, int __fd2) ;


/* Duplicate FD to FD2, closing FD2 and making it open on the same
   file while setting flags according to FLAGS.  */
extern int dup3 (int __fd, int __fd2, int __flags) ;


/* NULL-terminated array of "NAME=VALUE" environment variables.  */
extern char **__environ;

extern char **environ;



/* Replace the current process, executing PATH with arguments ARGV and
   environment ENVP.  ARGV and ENVP are terminated by NULL pointers.  */
extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) ;


/* Execute the file FD refers to, overlaying the running program image.
   ARGV and ENVP are passed to the new program, as for `execve'.  */
extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     ;



/* Execute PATH with arguments ARGV and environment from `environ'.  */
extern int execv (const char *__path, char *const __argv[])
     ;

/* Execute PATH with all arguments after PATH until a NULL pointer,
   and the argument after that for environment.  */
extern int execle (const char *__path, const char *__arg, ...)
     ;

/* Execute PATH with all arguments after PATH until
   a NULL pointer and environment from `environ'.  */
extern int execl (const char *__path, const char *__arg, ...)
     ;

/* Execute FILE, searching in the `PATH' environment variable if it contains
   no slashes, with arguments ARGV and environment from `environ'.  */
extern int execvp (const char *__file, char *const __argv[])
     ;

/* Execute FILE, searching in the `PATH' environment variable if
   it contains no slashes, with all arguments after FILE until a
   NULL pointer and environment from `environ'.  */
extern int execlp (const char *__file, const char *__arg, ...)
     ;


/* Execute FILE, searching in the `PATH' environment variable if it contains
   no slashes, with arguments ARGV and environment from `environ'.  */
extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     ;




/* Add INC to priority of the current process.  */
extern int nice (int __inc) ;



/* Terminate program execution with the low-order 8 bits of STATUS.  */
extern void _exit (int __status) ;


/* Get the `_PC_*' symbols for the NAME argument to `pathconf' and `fpathconf';
   the `_SC_*' symbols for the NAME argument to `sysconf';
   and the `_CS_*' symbols for the NAME argument to `confstr'.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
/* `sysconf', `pathconf', and `confstr' NAME values.  Generic version.
   Copyright (C) 1993-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Values for the NAME argument to `pathconf' and `fpathconf'.  */
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };

/* Values for the argument to `sysconf'.  */
enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,


    /* Values for the argument to `sysconf'
       corresponding to _POSIX2_* symbols.  */
    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,


    /* Values according to POSIX 1003.1c (POSIX threads).  */
    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,

    /* Leave room here, maybe we need a few more cache levels some day.  */

    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT,


    _SC_MINSIGSTKSZ,


    _SC_SIGSTKSZ

  };

/* Values for the NAME argument to `confstr'.  */
enum
  {
    _CS_PATH, /* The default search path.  */


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 631 "/usr/include/unistd.h" 2 3 4

/* Get file-specific configuration information about PATH.  */
extern long int pathconf (const char *__path, int __name)
     ;

/* Get file-specific configuration about descriptor FD.  */
extern long int fpathconf (int __fd, int __name) ;

/* Get the value of the system variable NAME.  */
extern long int sysconf (int __name) ;


/* Get the value of the string-valued system variable NAME.  */
extern size_t confstr (int __name, char *__buf, size_t __len)
    ;



/* Get the process ID of the calling process.  */
extern __pid_t getpid (void) ;

/* Get the process ID of the calling process's parent.  */
extern __pid_t getppid (void) ;

/* Get the process group ID of the calling process.  */
extern __pid_t getpgrp (void) ;

/* Get the process group ID of process PID.  */
extern __pid_t __getpgid (__pid_t __pid) ;

extern __pid_t getpgid (__pid_t __pid) ;



/* Set the process group ID of the process matching PID to PGID.
   If PID is zero, the current process's process group ID is set.
   If PGID is zero, the process ID of the process is used.  */
extern int setpgid (__pid_t __pid, __pid_t __pgid) ;


/* Both System V and BSD have `setpgrp' functions, but with different
   calling conventions.  The BSD function is the same as POSIX.1 `setpgid'
   (above).  The System V function takes no arguments and puts the calling
   process in its on group like `setpgid (0, 0)'.

   New programs should always use `setpgid' instead.

   GNU provides the POSIX.1 function.  */

/* Set the process group ID of the calling process to its own PID.
   This is exactly the same as `setpgid (0, 0)'.  */
extern int setpgrp (void) ;



/* Create a new session with the calling process as its leader.
   The process group IDs of the session and the calling process
   are set to the process ID of the calling process, which is returned.  */
extern __pid_t setsid (void) ;


/* Return the session ID of the given process.  */
extern __pid_t getsid (__pid_t __pid) ;


/* Get the real user ID of the calling process.  */
extern __uid_t getuid (void) ;

/* Get the effective user ID of the calling process.  */
extern __uid_t geteuid (void) ;

/* Get the real group ID of the calling process.  */
extern __gid_t getgid (void) ;

/* Get the effective group ID of the calling process.  */
extern __gid_t getegid (void) ;

/* If SIZE is zero, return the number of supplementary groups
   the calling process is in.  Otherwise, fill in the group IDs
   of its supplementary groups in LIST and return the number written.  */
extern int getgroups (int __size, __gid_t __list[])
    ;

/* Return nonzero iff the calling process is in group GID.  */
extern int group_member (__gid_t __gid) ;


/* Set the user ID of the calling process to UID.
   If the calling process is the super-user, set the real
   and effective user IDs, and the saved set-user-ID to UID;
   if not, the effective user ID is set to UID.  */
extern int setuid (__uid_t __uid) ;


/* Set the real user ID of the calling process to RUID,
   and the effective user ID of the calling process to EUID.  */
extern int setreuid (__uid_t __ruid, __uid_t __euid) ;



/* Set the effective user ID of the calling process to UID.  */
extern int seteuid (__uid_t __uid) ;


/* Set the group ID of the calling process to GID.
   If the calling process is the super-user, set the real
   and effective group IDs, and the saved set-group-ID to GID;
   if not, the effective group ID is set to GID.  */
extern int setgid (__gid_t __gid) ;


/* Set the real group ID of the calling process to RGID,
   and the effective group ID of the calling process to EGID.  */
extern int setregid (__gid_t __rgid, __gid_t __egid) ;



/* Set the effective group ID of the calling process to GID.  */
extern int setegid (__gid_t __gid) ;



/* Fetch the real user ID, effective user ID, and saved-set user ID,
   of the calling process.  */
extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     ;

/* Fetch the real group ID, effective group ID, and saved-set group ID,
   of the calling process.  */
extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     ;

/* Set the real user ID, effective user ID, and saved-set user ID,
   of the calling process to RUID, EUID, and SUID, respectively.  */
extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     ;

/* Set the real group ID, effective group ID, and saved-set group ID,
   of the calling process to RGID, EGID, and SGID, respectively.  */
extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     ;



/* Clone the calling process, creating an exact copy.
   Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
extern __pid_t fork (void) ;



/* Clone the calling process, but without copying the whole address space.
   The calling process is suspended until the new process exits or is
   replaced by a call to `execve'.  Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
extern __pid_t vfork (void) ;



/* This is similar to fork, however it does not run the atfork handlers
   neither reinitialize any internal locks in multithread case.
   Different than fork, _Fork is async-signal-safe.  */
extern __pid_t _Fork (void) ;



/* Return the pathname of the terminal FD is open on, or NULL on errors.
   The returned storage is good only until the next call to this function.  */
extern char *ttyname (int __fd) ;

/* Store at most BUFLEN characters of the pathname of the terminal FD is
   open on in BUF.  Return 0 on success, otherwise an error number.  */
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
    
     ;

/* Return 1 if FD is a valid descriptor associated
   with a terminal, zero if not.  */
extern int isatty (int __fd) ;


/* Return the index into the active-logins file (utmp) for
   the controlling terminal.  */
extern int ttyslot (void) ;



/* Make a link to FROM named TO.  */
extern int link (const char *__from, const char *__to)
     ;


/* Like link but relative paths in TO and FROM are interpreted relative
   to FROMFD and TOFD respectively.  */
extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     ;



/* Make a symbolic link to FROM named TO.  */
extern int symlink (const char *__from, const char *__to)
     ;

/* Read the contents of the symbolic link PATH into no more than
   LEN bytes of BUF.  The contents are not null-terminated.
   Returns the number of characters read, or -1 for errors.  */
extern ssize_t readlink (const char *restrict __path,
    char *restrict __buf, size_t __len)
    
     ;




/* Like symlink but a relative path in TO is interpreted relative to TOFD.  */
extern int symlinkat (const char *__from, int __tofd,
        const char *__to) ;

/* Like readlink but a relative PATH is interpreted relative to FD.  */
extern ssize_t readlinkat (int __fd, const char *restrict __path,
      char *restrict __buf, size_t __len)
    
     ;


/* Remove the link NAME.  */
extern int unlink (const char *__name) ;


/* Remove the link NAME relative to FD.  */
extern int unlinkat (int __fd, const char *__name, int __flag)
     ;


/* Remove the directory PATH.  */
extern int rmdir (const char *__path) ;


/* Return the foreground process group ID of FD.  */
extern __pid_t tcgetpgrp (int __fd) ;

/* Set the foreground process group ID of FD set PGRP_ID.  */
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;


/* Return the login name of the user.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *getlogin (void);

/* Return at most NAME_LEN characters of the login name of the user in NAME.
   If it cannot be determined or some other error occurred, return the error
   code.  Otherwise return 0.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getlogin_r (char *__name, size_t __name_len)
    ;



/* Set the login name returned by `getlogin'.  */
extern int setlogin (const char *__name) ;




/* Get definitions and prototypes for functions to process the
   arguments in ARGV (ARGC of them, minus the program name) for
   options given in OPTS.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
/* Declarations for getopt (POSIX compatibility shim).
   Copyright (C) 1989-2024 Free Software Foundation, Inc.
   Unlike the bulk of the getopt implementation, this file is NOT part
   of gnulib.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
/* Declarations for getopt (basic, portable features only).
   Copyright (C) 1989-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library and is also part of gnulib.
   Patches to this file should be submitted to both projects.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This header should not be used directly; include getopt.h or
   unistd.h instead.  Unlike most bits headers, it does not have
   a protective #error, because the guard macro for getopt.h in
   gnulib is not fixed.  */



/* For communication from 'getopt' to the caller.
   When 'getopt' finds an option that takes an argument,
   the argument value is returned here.
   Also, when 'ordering' is RETURN_IN_ORDER,
   each non-option ARGV-element is returned here.  */

extern char *optarg;

/* Index in ARGV of the next element to be scanned.
   This is used for communication to and from the caller
   and for communication between successive calls to 'getopt'.

   On entry to 'getopt', zero means this is the first call; initialize.

   When 'getopt' returns -1, this is the index of the first of the
   non-option elements that the caller should itself scan.

   Otherwise, 'optind' communicates from one call to the next
   how much of ARGV has been scanned so far.  */

extern int optind;

/* Callers store zero here to inhibit the error message 'getopt' prints
   for unrecognized options.  */

extern int opterr;

/* Set to an option character which was unrecognized.  */

extern int optopt;

/* Get definitions and prototypes for functions to process the
   arguments in ARGV (ARGC of them, minus the program name) for
   options given in OPTS.

   Return the option character from OPTS just read.  Return -1 when
   there are no more options.  For unrecognized options, or options
   missing arguments, 'optopt' is set to the option letter, and '?' is
   returned.

   The OPTS string is a list of characters which are recognized option
   letters, optionally followed by colons, specifying that that letter
   takes an argument, to be placed in 'optarg'.

   If a letter in OPTS is followed by two colons, its argument is
   optional.  This behavior is specific to the GNU 'getopt'.

   The argument '--' causes premature termination of argument
   scanning, explicitly telling 'getopt' that there are no more
   options.

   If OPTS begins with '-', then non-option arguments are treated as
   arguments to the option '\1'.  This behavior is specific to the GNU
   'getopt'.  If OPTS begins with '+', or POSIXLY_CORRECT is set in
   the environment, then do not permute arguments.

   For standards compliance, the 'argv' argument has the type
   char *const *, but this is inaccurate; if argument permutation is
   enabled, the argv array (not the strings it points to) must be
   writable.  */

extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       ;


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 904 "/usr/include/unistd.h" 2 3 4




/* Put the name of the current host in no more than LEN bytes of NAME.
   The result is null-terminated if LEN is large enough for the full
   name and the terminator.  */
extern int gethostname (char *__name, size_t __len)
    ;




/* Set the name of the current host to NAME, which is LEN bytes long.
   This call is restricted to the super-user.  */
extern int sethostname (const char *__name, size_t __len)
     ;

/* Set the current machine's Internet number to ID.
   This call is restricted to the super-user.  */
extern int sethostid (long int __id) ;


/* Get and set the NIS (aka YP) domain name, if any.
   Called just like `gethostname' and `sethostname'.
   The NIS domain name is usually the empty string when not using NIS.  */
extern int getdomainname (char *__name, size_t __len)
    
     ;
extern int setdomainname (const char *__name, size_t __len)
     ;

/* Revoke access permissions to all processes currently communicating
   with the control terminal, and then send a SIGHUP signal to the process
   group of the control terminal.  */
extern int vhangup (void) ;

/* Revoke the access of all descriptors currently open on FILE.  */
extern int revoke (const char *__file) ;


/* Enable statistical profiling, writing samples of the PC into at most
   SIZE bytes of SAMPLE_BUFFER; every processor clock tick while profiling
   is enabled, the system examines the user PC and increments
   SAMPLE_BUFFER[((PC - OFFSET) / 2) * SCALE / 65536].  If SCALE is zero,
   disable profiling.  Returns zero on success, -1 on error.  */
extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     ;


/* Turn accounting on if NAME is an existing file.  The system will then write
   a record for each process as it terminates, to this file.  If NAME is NULL,
   turn accounting off.  This call is restricted to the super-user.  */
extern int acct (const char *__name) ;


/* Successive calls return the shells listed in `/etc/shells'.  */
extern char *getusershell (void) ;
extern void endusershell (void) ; /* Discard cached info.  */
extern void setusershell (void) ; /* Rewind and re-read the file.  */


/* Put the program in the background, and dissociate from the controlling
   terminal.  If NOCHDIR is zero, do `chdir ("/")'.  If NOCLOSE is zero,
   redirects stdin, stdout, and stderr to /dev/null.  */
extern int daemon (int __nochdir, int __noclose) ;




/* Make PATH be the root directory (the starting point for absolute paths).
   This call is restricted to the super-user.  */
extern int chroot (const char *__path) ;

/* Prompt with PROMPT and read a string from the terminal without echoing.
   Uses /dev/tty if possible; otherwise stderr and stdin.  */
extern char *getpass (const char *__prompt) ;



/* Make all changes done to FD actually appear on disk.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int fsync (int __fd);



/* Make all changes done to all files on the file system associated
   with FD actually appear on disk.  */
extern int syncfs (int __fd) ;





/* Return identifier for the current host.  */
extern long int gethostid (void);

/* Make all changes done to all files actually appear on disk.  */
extern void sync (void) ;



/* Return the number of bytes in a page.  This is the system's page size,
   which is not necessarily the same as the hardware page size.  */
extern int getpagesize (void) ;


/* Return the maximum number of file descriptors
   the current process could possibly have.  */
extern int getdtablesize (void) ;







/* Truncate FILE to LENGTH bytes.  */

extern int truncate (const char *__file, __off_t __length)
     ;
# 1038 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     ;







/* Truncate the file FD is open on to LENGTH bytes.  */

extern int ftruncate (int __fd, __off_t __length) ;
# 1059 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) ;
# 1068 "/usr/include/unistd.h" 3 4
/* Set the end of accessible data space (aka "the break") to ADDR.
   Returns zero on success and -1 for errors (with errno set).  */
extern int brk (void *__addr) ;

/* Increase or decrease the end of accessible data space by DELTA bytes.
   If successful, returns the address the previous end of data space
   (i.e. the beginning of the new space, if DELTA > 0);
   returns (void *) -1 for errors (with errno set).  */
extern void *sbrk (intptr_t __delta) ;




/* Invoke `system call' number SYSNO, passing it the remaining arguments.
   This is completely system-dependent, and not often useful.

   In Unix, `syscall' sets `errno' for all errors and most calls return -1
   for errors; in many systems you cannot pass arguments or get return
   values for all system calls (`pipe', `fork', and `getppid' typically
   among them).

   In Mach, all system calls take normal arguments and always return an
   error code (zero for success).  */
extern long int syscall (long int __sysno, ...) ;





/* NOTE: These declarations also appear in <fcntl.h>; be sure to keep both
   files consistent.  Some systems have them there and some here, and some
   software depends on the macros being defined without including both.  */

/* `lockf' is a simpler interface to the locking facilities of `fcntl'.
   LEN is always relative to the current file position.
   The CMD argument is one of the following.

   This function is a cancellation point and therefore not marked with
   __THROW.  */







extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1124 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;






/* Evaluate EXPRESSION, and repeat as long as it returns -1 with `errno'
   set to EINTR.  */
# 1141 "/usr/include/unistd.h" 3 4
/* Copy LENGTH bytes from INFD to OUTFD.  */
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);



/* Synchronize at least the data part of a file with the underlying
   media.  */
extern int fdatasync (int __fildes);



/* One-way hash PHRASE, returning a string suitable for storage in the
   user database.  SALT selects the one-way function to use, and
   ensures that no two users' hashes are the same, even if they use
   the same passphrase.  The return value points to static storage
   which will be overwritten by the next call to crypt.

   This declaration is deprecated; applications should include
   <crypt.h> instead.  */
extern char *crypt (const char *__key, const char *__salt)
     ;



/* Swab pairs bytes in the first N bytes of the area pointed to by
   FROM and copy the result to TO.  The value of TO must not be in the
   range [FROM - N + 1, FROM - 1].  If N is odd the first byte in FROM
   is without partner.  */
extern void swab (const void *restrict __from, void *restrict __to,
    ssize_t __n)
   
    ;



/* Prior to Issue 6, the Single Unix Specification required these
   prototypes to appear in this header.  They are also found in
   <stdio.h>.  */
# 1190 "/usr/include/unistd.h" 3 4
/* Unix98 requires this function to be declared here.  In other
   standards it is in <pthread.h>.  */







/* Write LENGTH bytes of randomness starting at BUFFER.  Return 0 on
   success or -1 on error.  */
int getentropy (void *__buffer, size_t __length)
    ;



/* Close all file descriptors in the range FD up to MAX_FD.  The flag FLAGS
   are define by the CLOSE_RANGE prefix.  This function behaves like close
   on the range and gaps where the file descriptor is invalid or errors
   encountered while closing file descriptors are ignored.   Returns 0 on
   successor or -1 for failure (and sets errno accordingly).  */
extern int close_range (unsigned int __fd, unsigned int __max_fd,
   int __flags) ;


/* Define some macros helping to catch buffer overflows.  */




/* System-specific extensions.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 1 3 4
/* System-specific extensions of <unistd.h>, Linux version.
   Copyright (C) 2019-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







/* Return the kernel thread ID (TID) of the current thread.  The
   returned value is not subject to caching.  Most Linux system calls
   accept a TID in place of a PID.  Using the TID to change properties
   of a thread that has been created using pthread_create can lead to
   undefined behavior (comparable to manipulating file descriptors
   directly that have not been created explicitly).  Note that a TID
   uniquely identifies a thread only while this thread is running; a
   TID can be reused once a thread has exited, even if the thread is
   not detached and has not been joined.  */
extern __pid_t gettid (void) ;



# 1 "/usr/include/linux/close_range.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



/* Unshare the file descriptor table before closing file descriptors. */


/* Set the FD_CLOEXEC bit instead of closing the file descriptor. */
# 39 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 2 3 4


/* Unshare the file descriptor table before closing file descriptors.  */



/* Set the FD_CLOEXEC bit instead of closing the file descriptor.  */
# 1222 "/usr/include/unistd.h" 2 3 4


# 25 "/usr/include/x86_64-linux-gnu/bits/sigstksz.h" 2 3 4

/* Default stack size for a signal handler: sysconf (SC_SIGSTKSZ).  */



/* Minimum stack size for a signal handler: SIGSTKSZ.  */
# 329 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 1 3 4
/* ss_flags values for stack_t.  Linux version.
   Copyright (C) 1998-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 3 4
/* Possible values for `ss_flags'.  */
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 330 "/usr/include/signal.h" 2 3 4

/* Alternate signal handler stack interface.
   This interface should always be preferred over `sigstack'.  */
extern int sigaltstack (const stack_t *restrict __ss,
   stack_t *restrict __oss) ;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 1 3 4
/* Define struct sigstack.
   Copyright (C) 1998-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Structure describing a signal stack (obsolete).  */
struct sigstack
  {
    void *ss_sp; /* Signal stack pointer.  */
    int ss_onstack; /* Nonzero if executing on this stack.  */
  };
# 340 "/usr/include/signal.h" 2 3 4




/* Run signals handlers on the stack specified by SS (if not NULL).
   If OSS is not NULL, it is filled in with the old signal stack status.
   This interface is obsolete and on many platform not implemented.  */
extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     ;



/* Simplified interface for signal management.  */

/* Add SIG to the calling process' signal mask.  */
extern int sighold (int __sig)
  ;

/* Remove SIG from the calling process' signal mask.  */
extern int sigrelse (int __sig)
  ;

/* Set the disposition of SIG to SIG_IGN.  */
extern int sigignore (int __sig)
  ;

/* Set the disposition of SIG.  */
extern __sighandler_t sigset (int __sig, __sighandler_t __disp)
 
                                                        ;



/* Some of the functions for handling signals in threaded programs must
   be defined here.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
/* Declaration of common pthread types for all architectures.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 376 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
/* Signal handling function for threaded programs.
   Copyright (C) 1998-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If
   not, see <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
/* Functions for handling signals. */


/* Modify the signal mask for the calling thread.  The arguments have
   the same meaning as for sigprocmask(2). */
extern int pthread_sigmask (int __how,
       const __sigset_t *restrict __newmask,
       __sigset_t *restrict __oldmask);

/* Send signal SIGNO to the given thread. */
extern int pthread_kill (pthread_t __threadid, int __signo) ;


/* Queue signal and data to a thread.  */
extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) ;
# 377 "/usr/include/signal.h" 2 3 4


/* The following functions are used internally in the C library and in
   other code which need deep insights.  */

/* Return number of available real-time signal with highest priority.  */
extern int __libc_current_sigrtmin (void) ;
/* Return number of available real-time signal with lowest priority.  */
extern int __libc_current_sigrtmax (void) ;




/* System-specific extensions.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/signal_ext.h" 1 3 4
/* System-specific extensions of <signal.h>, Linux version.
   Copyright (C) 2019-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







/* Send SIGNAL to the thread TID in the thread group (process)
   identified by TGID.  This function behaves like kill, but also
   fails with ESRCH if the specified TID does not belong to the
   specified thread group.  */
extern int tgkill (__pid_t __tgid, __pid_t __tid, int __signal);
# 392 "/usr/include/signal.h" 2 3 4


# 37 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
/* These macros could also be defined in <stdlib.h>.  */
# 72 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
/* The following values are used by the `waitid' function.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/types/idtype_t.h" 1 3 4



/* The following values are used by the `waitid' function.  */
typedef enum
{
  P_ALL, /* Wait for any child.  */
  P_PID, /* Wait for specified process.  */
  P_PGID, /* Wait for members of process group.  */
  P_PIDFD, /* Wait for the child referred by the PID file
			   descriptor.  */
} idtype_t;
# 75 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4



/* Wait for a child to die.  When one does, put its status in *STAT_LOC
   and return its process ID.  For errors, return (pid_t) -1.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern __pid_t wait (int *__stat_loc);


/* Special values for the PID argument to `waitpid' and `wait4'.  */




/* Wait for a child matching PID to die.
   If PID is greater than 0, match any process whose process ID is PID.
   If PID is (pid_t) -1, match any process.
   If PID is (pid_t) 0, match any process with the
   same process group as the current process.
   If PID is less than -1, match any process whose
   process group is the absolute value of PID.
   If the WNOHANG bit is set in OPTIONS, and that child
   is not already dead, return (pid_t) 0.  If successful,
   return PID and store the dead child's status in STAT_LOC.
   Return (pid_t) -1 for errors.  If the WUNTRACED bit is
   set in OPTIONS, return status for stopped children; otherwise don't.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 116 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
/* Wait for a childing matching IDTYPE and ID to change the status and
   place appropriate information in *INFOP.
   If IDTYPE is P_PID, match any process whose process ID is ID.
   If IDTYPE is P_PGID, match any process whose process group is ID.
   If IDTYPE is P_ALL, match any process.
   If the WNOHANG bit is set in OPTIONS, and that child
   is not already dead, clear *INFOP and return 0.  If successful, store
   exit code and status in *INFOP.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);




/* This being here makes the prototypes valid whether or not
   we have already included <sys/resource.h> to define `struct rusage'.  */
struct rusage;

/* Wait for a child to exit.  When one does, put its status in *STAT_LOC and
   return its process ID.  For errors return (pid_t) -1.  If USAGE is not
   nil, store information about the child's resource usage there.  If the
   WUNTRACED bit is set in OPTIONS, return status for stopped children;
   otherwise don't.  */

extern __pid_t wait3 (int *__stat_loc, int __options,
        struct rusage * __usage) ;
# 158 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
/* PID is like waitpid.  Other args are like wait3.  */
extern __pid_t wait4 (__pid_t __pid, int *__stat_loc, int __options,
        struct rusage *__usage) ;
# 173 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4

# 7 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/user.h" 1 3 4
/* Copyright (C) 2001-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* The whole purpose of this file is for GDB and GDB only.  Don't read
   too much into it.  Don't use it for anything other than GDB unless
   you know what you are doing.  */



struct user_fpregs_struct
{
  unsigned short int cwd;
  unsigned short int swd;
  unsigned short int ftw;
  unsigned short int fop;
  unsigned long long int rip;
  unsigned long long int rdp;
  unsigned int mxcsr;
  unsigned int mxcr_mask;
  unsigned int st_space[32]; /* 8*16 bytes for each FP-reg = 128 bytes */
  unsigned int xmm_space[64]; /* 16*16 bytes for each XMM-reg = 256 bytes */
  unsigned int padding[24];
};

struct user_regs_struct
{
  unsigned long long int r15;
  unsigned long long int r14;
  unsigned long long int r13;
  unsigned long long int r12;
  unsigned long long int rbp;
  unsigned long long int rbx;
  unsigned long long int r11;
  unsigned long long int r10;
  unsigned long long int r9;
  unsigned long long int r8;
  unsigned long long int rax;
  unsigned long long int rcx;
  unsigned long long int rdx;
  unsigned long long int rsi;
  unsigned long long int rdi;
  unsigned long long int orig_rax;
  unsigned long long int rip;
  unsigned long long int cs;
  unsigned long long int eflags;
  unsigned long long int rsp;
  unsigned long long int ss;
  unsigned long long int fs_base;
  unsigned long long int gs_base;
  unsigned long long int ds;
  unsigned long long int es;
  unsigned long long int fs;
  unsigned long long int gs;
};

struct user
{
  struct user_regs_struct regs;
  int u_fpvalid;
  struct user_fpregs_struct i387;
  unsigned long long int u_tsize;
  unsigned long long int u_dsize;
  unsigned long long int u_ssize;
  unsigned long long int start_code;
  unsigned long long int start_stack;
  long long int signal;
  int reserved;
  union
    {
      struct user_regs_struct* u_ar0;
      unsigned long long int __u_ar0_word;
    };
  union
    {
      struct user_fpregs_struct* u_fpstate;
      unsigned long long int __u_fpstate_word;
    };
  unsigned long long int magic;
  char u_comm [32];
  unsigned long long int u_debugreg [8];
};
# 8 "main.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.10 Symbolic Constants		<unistd.h>
 */
# 9 "main.c" 2
# 1 "/usr/include/errno.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.5 Errors	<errno.h>
 */
# 10 "main.c" 2
# 1 "/usr/include/libdwarf/libdwarf.h" 1 3 4
/*
  Copyright (C) 2000-2010 Silicon Graphics, Inc.  All Rights Reserved.
  Portions Copyright 2007-2010 Sun Microsystems, Inc. All rights reserved.
  Portions Copyright 2008-2018 David Anderson. All rights reserved.
  Portions Copyright 2008-2010 Arxan Technologies, Inc. All rights reserved.
  Portions Copyright 2010-2012 SN Systems Ltd. All rights reserved.

  This program is free software; you can redistribute it
  and/or modify it under the terms of version 2.1 of the
  GNU Lesser General Public License as published by the Free
  Software Foundation.

  This program is distributed in the hope that it would be
  useful, but WITHOUT ANY WARRANTY; without even the implied
  warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  Further, this software is distributed without any warranty
  that it is free of the rightful claim of any third person
  regarding infringement or the like.  Any license provided
  herein, whether implied or otherwise, applies only to this
  software file.  Patent licenses, if any, provided herein
  do not apply to combinations of this program with other
  software, or any other product whatsoever.

  You should have received a copy of the GNU Lesser General
  Public License along with this program; if not, write the
  Free Software Foundation, Inc., 51 Franklin Street - Fifth
  Floor, Boston MA 02110-1301, USA.

*/







/*
    libdwarf.h
    $Revision: #9 $ $Date: 2008/01/17 $

    For libdwarf producers and consumers

    The interface is defined as having 8-byte signed and unsigned
    values so it can handle 64-or-32bit target on 64-or-32bit host.
    Dwarf_Ptr is the native size: it represents pointers on
    the host machine (not the target!).

    This contains declarations for types and all producer
    and consumer functions.

    Function declarations are written on a single line each here
    so one can use grep  to each declaration in its entirety.
    The declarations are a little harder to read this way, but...

    The seeming duplication of the Elf typedef allows
    both verification we have the right struct name (when
    libelf.h included before this) and
    creation of a local handle so we have the struct pointer
    here (if libelf.h is not included before this file).

*/

typedef struct Elf Elf;
typedef struct Elf* dwarf_elf_handle;

/* To enable printing with printf regardless of the
   actual underlying data type, we define the DW_PR_xxx macros.
   To ensure uses of DW_PR_DUx or DW_PR_DSx look the way you want
   ensure the right DW_PR_XZEROS define is uncommented.
*/
/*#define DW_PR_XZEROS "" */


typedef unsigned long long Dwarf_Unsigned;
typedef signed long long Dwarf_Signed;
typedef unsigned long long Dwarf_Off;
typedef unsigned long long Dwarf_Addr;
    /*  Dwarf_Bool as int is wasteful, but for compatibility
        it must stay as int, not unsigned char. */
typedef int Dwarf_Bool; /* boolean type */
typedef unsigned short Dwarf_Half; /* 2 byte unsigned value */
typedef unsigned char Dwarf_Small; /* 1 byte unsigned value */
/*  If sizeof(Dwarf_Half) is greater than 2
    we believe libdwarf still works properly. */
# 100 "/usr/include/libdwarf/libdwarf.h" 3 4
typedef void* Dwarf_Ptr; /* host machine pointer */

/*  DWARF5: a container for a DW_FORM_data16 data item.
    We have no integer types suitable so this special
    struct is used instead.  It is up to consumers/producers
    to deal with the contents.
    New October 18, 2017 .  */
typedef struct Dwarf_Form_Data16_s {
    unsigned char fd_data[16];
} Dwarf_Form_Data16;



/*  Used for signatures where ever they appear.
    It is not a string, it
    is 8 bytes of a signature one would use to find
    a type unit. See dwarf_formsig8()

    Sometimes it is used in calculations as
    Dwarf_Unsigned, but that is done inside libdwarf
    and the endianness question makes it a bit sketchy.  */
struct Dwarf_Sig8_s {
    char signature[8];
};
typedef struct Dwarf_Sig8_s Dwarf_Sig8;

/* Contains info on an uninterpreted block of data
   Used with certain location information functions,
   a frame expression function, and
   also used with DW_FORM_block<> functions.
*/
typedef struct {
    Dwarf_Unsigned bl_len; /* length of block bl_data points at */
    Dwarf_Ptr bl_data; /* uninterpreted data */

    /*  See libdwarf.h DW_LKIND*  */
    Dwarf_Small bl_from_loclist;

    /* Section (not CU) offset which 'data' comes from. */
    Dwarf_Unsigned bl_section_offset;
} Dwarf_Block;


/*  NEW October 2015.  */
/*  This provides access to Dwarf_Locdesc_c, a single
    location description */
struct Dwarf_Locdesc_c_s;
typedef struct Dwarf_Locdesc_c_s * Dwarf_Locdesc_c;

/*  NEW October 2015.  */
/*  This provides access to Dwarf_Locdesc_c, a single
    location list entry (or for a locexpr, the fake
    Loc_Head for the locexpr) */
struct Dwarf_Loc_Head_c_s;
typedef struct Dwarf_Loc_Head_c_s * Dwarf_Loc_Head_c;


/*  NEW July 2020.  */
/*  This provides access to data from sections
    .debug_gnu_pubtypes or .debug_gnu_pubnames.
    These are not standard DWARF, and can appear
    with gcc -gdwarf-5
    */
struct Dwarf_Gnu_Index_Head_s;
typedef struct Dwarf_Gnu_Index_Head_s * Dwarf_Gnu_Index_Head;


/* NEW November 2015. For DWARF5 .debug_macro section */
struct Dwarf_Macro_Context_s;
typedef struct Dwarf_Macro_Context_s * Dwarf_Loc_Macro_Context;

/*  NEW September 2016. Allows easy access to DW_AT_discr_list
    array of discriminant values. Input in blockpointer
    is a block with a list of uleb or sleb numbers
    (all one or the other, lebunsignedflag instructs
    how to read the leb values properly) */
typedef struct Dwarf_Dsc_Head_s * Dwarf_Dsc_Head;

/*  Location record. Records up to 2 operand values.
    Not usable with DWARF5 or DWARF4 with location
    operator  extensions. */
typedef struct {
    Dwarf_Small lr_atom; /* location operation */
    Dwarf_Unsigned lr_number; /* operand */
    /* for OP_BREGx  and DW_OP_GNU_const_type*/
    Dwarf_Unsigned lr_number2;
    Dwarf_Unsigned lr_offset; /* offset in locexpr for OP_BRA etc */
} Dwarf_Loc;


/* Location description. DWARF 2,3,4.
   When this is from a split-dwarf loclist (.debug_loc.dwo)
   and no tied object is present
   then ld_lowpc and ld_highpc are actually indices in
   the .debug_addr section of the tied object).
   If there is a tied object then these fields are actuall
   addresses and DW_AT_addr_base in the skeleton CU DIE applies to
   that .debug_addr.

   Location record. Records up to 2 operand values.
   Not usable with DWARF5 or DWARF4 with extensions.

   If from DWARF2,3,4 non-split dwarf then things operate as
   in DWARF2.
   See dwarf_get_loclist_b() and the other related
   new functions that
   avoid using public structures Dwarf_Loc and Dwarf_Locdesc.
*/
typedef struct {
    /*  Beginning of active range. This is actually an offset
        of an applicable base address, not a pc value.  */
    Dwarf_Addr ld_lopc;

    /*  End of active range. This is actually an offset
        of an applicable base address, not a pc value.  */
    Dwarf_Addr ld_hipc;

    Dwarf_Half ld_cents; /* count of location records */
    Dwarf_Loc* ld_s; /* pointer to list of same */

    /*  non-0 if loclist, 1 if non-split (dwarf 2,3,4) */
    Dwarf_Small ld_from_loclist;

    Dwarf_Unsigned ld_section_offset; /* Section (not CU) offset
        where loc-expr begins*/
} Dwarf_Locdesc;

/*  First appears in DWARF3, and only ranges entries exist.
    The dwr_addr1/addr2 data is either an offset (DW_RANGES_ENTRY)
    or an address (dwr_addr2 in DW_RANGES_ADDRESS_SELECTION) or
    both are zero (DW_RANGES_END).
    For DWARF5 each table starts with a header
    followed by range list entries defined
    as here.
*/
enum Dwarf_Ranges_Entry_Type { DW_RANGES_ENTRY,
    DW_RANGES_ADDRESS_SELECTION,
    DW_RANGES_END
};
typedef struct {
    Dwarf_Addr dwr_addr1;
    Dwarf_Addr dwr_addr2;
    enum Dwarf_Ranges_Entry_Type dwr_type;
} Dwarf_Ranges;

/* Frame description instructions expanded.
*/
typedef struct {
    Dwarf_Small fp_base_op;
    Dwarf_Small fp_extended_op;
    Dwarf_Half fp_register;

    /*  Value may be signed, depends on op.
        Any applicable data_alignment_factor has
        not been applied, this is the  raw offset. */
    Dwarf_Unsigned fp_offset;
    Dwarf_Off fp_instr_offset;
} Dwarf_Frame_Op; /* DWARF2 */

/*  ***IMPORTANT NOTE, TARGET DEPENDENCY ****
    DW_REG_TABLE_SIZE must be at least as large as
    the number of registers
    (DW_FRAME_LAST_REG_NUM) as defined in dwarf.h
    Preferably identical to DW_FRAME_LAST_REG_NUM.
    Ensure [0-DW_REG_TABLE_SIZE] does not overlap
    DW_FRAME_UNDEFINED_VAL or DW_FRAME_SAME_VAL.
    Also ensure DW_FRAME_REG_INITIAL_VALUE is set to what
    is appropriate to your cpu.
    For various CPUs  DW_FRAME_UNDEFINED_VAL is correct
    as the value for DW_FRAME_REG_INITIAL_VALUE.

    For consumer apps, this can be set dynamically: see
    dwarf_set_frame_rule_table_size(); */




/* For MIPS, DW_FRAME_SAME_VAL is the correct default value
   for a frame register value. For other CPUS another value
   may be better, such as DW_FRAME_UNDEFINED_VAL.
   See dwarf_set_frame_rule_table_size
*/




/* Taken as meaning 'undefined value', this is not
   a column or register number.
   Only present at libdwarf runtime in the consumer
   interfaces. Never on disk.
   DW_FRAME_* Values present on disk are in dwarf.h
   Ensure this is > DW_REG_TABLE_SIZE (the reg table
   size is changeable at runtime with the *reg3() interfaces,
   and this value must be greater than the reg table size).
*/


/* Taken as meaning 'same value' as caller had, not a column
   or register number.
   Only present at libdwarf runtime in the consumer
   interfaces. Never on disk.
   DW_FRAME_* Values present on disk are in dwarf.h
   Ensure this is > DW_REG_TABLE_SIZE (the reg table
   size is changeable at runtime with the *reg3() interfaces,
   and this value must be greater than the reg table size).
*/


/* For DWARF3 consumer interfaces, make the CFA a column with no
   real table number.  This is what should have been done
   for the DWARF2 interfaces.  This actually works for
   both DWARF2 and DWARF3, but see the libdwarf documentation
   on Dwarf_Regtable3 and  dwarf_get_fde_info_for_reg3()
   and  dwarf_get_fde_info_for_all_regs3()
   Do NOT use this with the older dwarf_get_fde_info_for_reg()
   or dwarf_get_fde_info_for_all_regs() consumer interfaces.
   Must be higher than any register count for *any* ABI
   (ensures maximum applicability with minimum effort).
   Ensure this is > DW_REG_TABLE_SIZE (the reg table
   size is changeable at runtime with the *reg3() interfaces,
   and this value must be greater than the reg table size).
   Only present at libdwarf runtime in the consumer
   interfaces. Never on disk.
*/


/* The following are all needed to evaluate DWARF3 register rules.
*/





typedef struct Dwarf_Regtable_Entry_s {
    /*  For each index i (naming a hardware register
        with dwarf number i) the following is true and defines
        the value of that register:

        If dw_regnum is Register DW_FRAME_UNDEFINED_VAL
            it is not DWARF register number but
            a place holder indicating the register has
            no defined value.
        If dw_regnum is Register DW_FRAME_SAME_VAL
            it  is not DWARF register number but
            a place holder indicating the register has the same
            value in the previous frame.

            DW_FRAME_UNDEFINED_VAL, DW_FRAME_SAME_VAL are
            only present at libdwarf runtime. Never on disk.
            DW_FRAME_* Values present on disk are in dwarf.h

        Otherwise: the register number is a DWARF register number
            (see ABI documents for how this translates to hardware/
            software register numbers in the machine hardware)
            and the following applies:

            if dw_value_type == DW_EXPR_OFFSET (the
                only case for dwarf2):
                If dw_offset_relevant is non-zero, then
                    the value is stored at at the address CFA+N where
                    N is a signed offset.
                    Rule: Offset(N)
                If dw_offset_relevant is zero, then the
                    value of the register
                    is the value of (DWARF) register
                    number dw_regnum.
                    Rule: register(F)
            Other values of dw_value_type are an error.
    */
    Dwarf_Small dw_offset_relevant;

    /* For DWARF2, always 0 */
    Dwarf_Small dw_value_type;

    Dwarf_Half dw_regnum;

    /*  The data type here should  the larger of Dwarf_Addr
        and Dwarf_Unsigned and Dwarf_Signed. */
    Dwarf_Addr dw_offset;
} Dwarf_Regtable_Entry;

typedef struct Dwarf_Regtable_s {
    struct Dwarf_Regtable_Entry_s rules[66];
} Dwarf_Regtable;

/* opaque type. Functional interface shown later. */
struct Dwarf_Reg_value3_s;
typedef struct Dwarf_Reg_value3_s Dwarf_Reg_Value3;

typedef struct Dwarf_Regtable_Entry3_s {
/*  For each index i (naming a hardware register with dwarf number
    i) the following is true and defines the value of that register:

        If dw_regnum is Register DW_FRAME_UNDEFINED_VAL
            it is not DWARF register number but
            a place holder indicating the register
            has no defined value.
        If dw_regnum is Register DW_FRAME_SAME_VAL
            it  is not DWARF register number but
            a place holder indicating the register has the same
            value in the previous frame.

            DW_FRAME_UNDEFINED_VAL, DW_FRAME_SAME_VAL and
            DW_FRAME_CFA_COL3 are only present at libdwarf runtime.
            Never on disk.
            DW_FRAME_* Values present on disk are in dwarf.h
            Because DW_FRAME_SAME_VAL and DW_FRAME_UNDEFINED_VAL
            and DW_FRAME_CFA_COL3 are definable at runtime
            consider the names symbolic in this comment,
            not absolute.

        Otherwise: the register number is a DWARF register number
            (see ABI documents for how this translates to hardware/
            software register numbers in the machine hardware)
            and the following applies:

        In a cfa-defining entry (rt3_cfa_rule) the regnum is the
        CFA 'register number'. Which is some 'normal' register,
        not DW_FRAME_CFA_COL3, nor DW_FRAME_SAME_VAL, nor
        DW_FRAME_UNDEFINED_VAL.

        If dw_value_type == DW_EXPR_OFFSET (the only
        possible case for dwarf2):
            If dw_offset_relevant is non-zero, then
                the value is stored at at the address
                CFA+N where N is a signed offset.
                dw_regnum is the cfa register rule which means
                one ignores dw_regnum and uses the CFA appropriately.
                So dw_offset_or_block_len is a signed value, really,
                and must be printed/evaluated as such.
                Rule: Offset(N)
            If dw_offset_relevant is zero, then the
                value of the register
                is the value of (DWARF) register number dw_regnum.
                Rule: register(R)
        If dw_value_type  == DW_EXPR_VAL_OFFSET
            the  value of this register is CFA +N where
            N is a signed offset.
            dw_regnum is the cfa register rule which means
            one ignores dw_regnum and uses the CFA appropriately.
            Rule: val_offset(N)
        If dw_value_type  == DW_EXPR_EXPRESSION
            The value of the register is the value at the address
            computed by evaluating the DWARF expression E.
            Rule: expression(E)
            The expression E byte stream is pointed to by
            dw_block_ptr.
            The expression length in bytes is given by
            dw_offset_or_block_len.
        If dw_value_type  == DW_EXPR_VAL_EXPRESSION
            The value of the register is the value
            computed by evaluating the DWARF expression E.
            Rule: val_expression(E)
            The expression E byte stream is pointed to
            by dw_block_ptr.
            The expression length in bytes is given by
            dw_offset_or_block_len.
        Other values of dw_value_type are an error.
*/
    Dwarf_Small dw_offset_relevant;
    Dwarf_Small dw_value_type;
    Dwarf_Half dw_regnum;
    Dwarf_Unsigned dw_offset_or_block_len;
    Dwarf_Ptr dw_block_ptr;

}Dwarf_Regtable_Entry3;

/*  For the DWARF3 version, moved the DW_FRAME_CFA_COL
    out of the array and into its own struct.
    Having it part of the array is not very easy to work
    with from a portability point of view: changing
    the number for every architecture is a pain (if one fails
    to set it correctly a register rule gets clobbered when
    setting CFA).  With MIPS it just happened to be easy to use
    DW_FRAME_CFA_COL (it was wrong conceptually but it was easy...).

    rt3_rules and rt3_reg_table_size must be filled in before
    calling libdwarf.  Filled in with a pointer to an array
    (pointer and array  set up by the calling application)
    of rt3_reg_table_size Dwarf_Regtable_Entry3_s structs.
    libdwarf does not allocate or deallocate space for the
    rules, you must do so.   libdwarf will initialize the
    contents rules array, you do not need to do so (though
    if you choose to initialize the array somehow that is ok:
    libdwarf will overwrite your initializations with its own).

*/
typedef struct Dwarf_Regtable3_s {
    struct Dwarf_Regtable_Entry3_s rt3_cfa_rule;

    Dwarf_Half rt3_reg_table_size;
    struct Dwarf_Regtable_Entry3_s * rt3_rules;
} Dwarf_Regtable3;


/*  Use for DW_EPXR_STANDARD., DW_EXPR_VAL_OFFSET.
    Returns DW_DLV_OK if the value is available.
    If DW_DLV_OK returns the regnum and offset thru the pointers
    (which the consumer must use appropriately).
*/
int dwarf_frame_get_reg_register(
    struct Dwarf_Regtable_Entry3_s *reg_in,
    Dwarf_Small *offset_relevant,
    Dwarf_Half *regnum_out,
    Dwarf_Signed *offset_out);

/*  Use for DW_EXPR_EXPRESSION, DW_EXPR_VAL_EXPRESSION.
    Returns DW_DLV_OK if the value is available.
    The caller must pass in the address of a valid
    Dwarf_Block (the caller need not initialize it).
*/
int dwarf_frame_get_reg_expression(
    struct Dwarf_Regtable_Entry3_s *reg_in,
    Dwarf_Block *block_out);


/*  For DW_DLC_SYMBOLIC_RELOCATIONS output to caller
    v2, adding drd_length: some relocations are 4 and
    some 8 bytes (pointers are 8, section offsets 4) in
    some dwarf environments. (MIPS relocations are all one
    size in any given ABI.) Changing drd_type to an unsigned char
    to keep struct size down.
*/
enum Dwarf_Rel_Type {
    dwarf_drt_none, /* Should not get to caller */
    dwarf_drt_data_reloc, /* Simple normal relocation. */
    dwarf_drt_segment_rel, /* Special reloc, exceptions. */
    /* dwarf_drt_first_of_length_pair  and drt_second
        are for for the  .word end - begin case. */
    dwarf_drt_first_of_length_pair,
    dwarf_drt_second_of_length_pair
};

typedef struct Dwarf_P_Marker_s * Dwarf_P_Marker;
struct Dwarf_P_Marker_s {
    Dwarf_Unsigned ma_marker;
    Dwarf_Unsigned ma_offset;
};

typedef struct Dwarf_Relocation_Data_s * Dwarf_Relocation_Data;
struct Dwarf_Relocation_Data_s {
    unsigned char drd_type; /* Cast to/from Dwarf_Rel_Type
        to keep size small in struct. */
    unsigned char drd_length; /* Length in bytes of data being
        relocated. 4 for 32bit data,
        8 for 64bit data. */
    Dwarf_Unsigned drd_offset; /* Where the data to reloc is. */
    Dwarf_Unsigned drd_symbol_index;
};

typedef struct Dwarf_P_String_Attr_s * Dwarf_P_String_Attr;
struct Dwarf_P_String_Attr_s {
    /* Offset of string attribute data */
    Dwarf_Unsigned sa_offset;
    Dwarf_Unsigned sa_nbytes;
};


/* Opaque types for Consumer Library. */
typedef struct Dwarf_Debug_s* Dwarf_Debug;
typedef struct Dwarf_Die_s* Dwarf_Die;
typedef struct Dwarf_Line_s* Dwarf_Line;
typedef struct Dwarf_Global_s* Dwarf_Global;
typedef struct Dwarf_Func_s* Dwarf_Func;
typedef struct Dwarf_Type_s* Dwarf_Type;
typedef struct Dwarf_Var_s* Dwarf_Var;
typedef struct Dwarf_Weak_s* Dwarf_Weak;
typedef struct Dwarf_Error_s* Dwarf_Error;
typedef struct Dwarf_Attribute_s* Dwarf_Attribute;
typedef struct Dwarf_Abbrev_s* Dwarf_Abbrev;
typedef struct Dwarf_Fde_s* Dwarf_Fde;
typedef struct Dwarf_Cie_s* Dwarf_Cie;
typedef struct Dwarf_Arange_s* Dwarf_Arange;
typedef struct Dwarf_Gdbindex_s* Dwarf_Gdbindex;
struct Dwarf_Xu_Index_Header_s;
typedef struct Dwarf_Xu_Index_Header_s *Dwarf_Xu_Index_Header;
struct Dwarf_Line_Context_s;
typedef struct Dwarf_Line_Context_s *Dwarf_Line_Context;
struct Dwarf_Macro_Context_s;
typedef struct Dwarf_Macro_Context_s *Dwarf_Macro_Context;
struct Dwarf_Dnames_Head_s;
typedef struct Dwarf_Dnames_Head_s *Dwarf_Dnames_Head;


/* Opaque types for Producer Library. */
typedef struct Dwarf_P_Debug_s* Dwarf_P_Debug;
typedef struct Dwarf_P_Die_s* Dwarf_P_Die;
typedef struct Dwarf_P_Attribute_s* Dwarf_P_Attribute;
typedef struct Dwarf_P_Fde_s* Dwarf_P_Fde;
typedef struct Dwarf_P_Expr_s* Dwarf_P_Expr;
typedef Dwarf_Unsigned Dwarf_Tag;


/* error handler function
*/
typedef void (*Dwarf_Handler)(Dwarf_Error /*error*/,
    Dwarf_Ptr /*errarg*/);


/* Begin libdwarf Object File Interface declarations.

As of February 2008 there are multiple dwarf_reader object access
initialization methods available:
The traditional dwarf_elf_init() and dwarf_init()  and
    dwarf_finish() which assume libelf and POSIX file access.
An object-file and library agnostic dwarf_object_init()
and dwarf_object_finish()
    which allow the coder to provide object access routines
    abstracting away the elf interface.
    So there is no dependence in the
    reader code on the object format and no dependence on libelf.
    See the code in dwarf_elf_access.c  and dwarf_original_elf_init.c
    to see an example of initializing the structures mentioned below.

Projects using dwarf_elf_init() or dwarf_init() can ignore
the Dwarf_Obj_Access* structures entirely as all these details
are completed for you.

As of March 2017 additional
functions dwarf_elf_init_b
and dwarf_init_b
and dwarf_object_init_b
add a groupnumber argument so DWARF5
split-dwarf sections can be accessed.
*/

typedef struct Dwarf_Obj_Access_Interface_s
    Dwarf_Obj_Access_Interface;
typedef struct Dwarf_Obj_Access_Methods_s Dwarf_Obj_Access_Methods;
typedef struct Dwarf_Obj_Access_Section_s Dwarf_Obj_Access_Section;


/*  Used in the get_section interface function
    in Dwarf_Obj_Access_Section_s.  Since libdwarf
    depends on standard DWARF section names an object
    format that has no such names (but has some
    method of setting up 'sections equivalents')
    must arrange to return standard DWARF section
    names in the 'name' field.  libdwarf does
    not free the strings in 'name'. */
struct Dwarf_Obj_Access_Section_s {
    /*  addr is the virtual address of the first byte of
        the section data.  Usually zero when the address
        makes no sense for a given section. */
    Dwarf_Addr addr;

    /* Section type. */
    Dwarf_Unsigned type;

    /* Size in bytes of the section. */
    Dwarf_Unsigned size;

    /*  Having an accurate section name makes
        debugging of libdwarf easier.
        and is essential to find the .debug_ sections.  */
    const char* name;
    /*  Set link to zero if it is meaningless.  If non-zero
        it should be a link to a rela section or from symtab
        to strtab.  In Elf it is sh_link. */
    Dwarf_Unsigned link;

    /*  The section header index of the section to which the
        relocation applies. In Elf it is sh_info. */
    Dwarf_Unsigned info;

    /*  Elf sections that are tables have a non-zero entrysize so
        the count of entries can be calculated even without
        the right structure definition. If your object format
        does not have this data leave this zero. */
    Dwarf_Unsigned entrysize;
};

/*  Returned by the get_endianness function in
    Dwarf_Obj_Access_Methods_s. */
typedef enum {
    DW_OBJECT_MSB,
    DW_OBJECT_LSB
} Dwarf_Endianness;

/*  The functions we need to access object data
    from libdwarf are declared here.

    In these function pointer declarations
    'void *obj' is intended to be a pointer (the object field in
    Dwarf_Obj_Access_Interface_s)
    that hides the library-specific and object-specific
    data that makes
    it possible to handle multiple object formats
    and multiple libraries.
    It's not required that one handles multiple such
    in a single libdwarf
    archive/shared-library (but not ruled out either).
    See  dwarf_elf_object_access_internals_t and dwarf_elf_access.c
    for an example.
*/
struct Dwarf_Obj_Access_Methods_s {
    /*
        get_section_info

        Get address, size, and name info about a section.

        Parameters
        section_index - Zero-based index.
        return_section - Pointer to a structure in which
            section info will be placed.   Caller must
            provide a valid pointer to a
            structure area.  The structure's contents
            will be overwritten
            by the call to get_section_info.
        error - A pointer to an integer in which an error
            code may be stored.

        Return
        DW_DLV_OK - Everything ok.
        DW_DLV_ERROR - Error occurred. Use 'error' to determine the
            libdwarf defined error.
        DW_DLV_NO_ENTRY - No such section.  */
    int (*get_section_info)(void* obj, Dwarf_Half section_index,
        Dwarf_Obj_Access_Section* return_section, int* error);
    /*
        get_byte_order

        Get whether the object file represented by
        this interface is big-endian
        (DW_OBJECT_MSB) or little endian (DW_OBJECT_LSB).

        Parameters
        obj - Equivalent to 'this' in OO languages.

        Return
        Endianness of object. Cannot fail.  */
    Dwarf_Endianness (*get_byte_order)(void* obj);
    /*
        get_length_size

        Get the size of a length field in the underlying object file.
        libdwarf currently supports * 4 and 8 byte sizes, but may
        support larger in the future.
        Perhaps the return type should be an enumeration?

        Parameters
        obj - Equivalent to 'this' in OO languages.

        Return
        Size of length. Cannot fail.  */
    Dwarf_Small (*get_length_size)(void* obj);
    /*
        get_pointer_size

        Get the size of a pointer field in the underlying object file.
        libdwarf currently supports  4 and 8 byte sizes.
        Perhaps the return type should be an enumeration?

        Return
        Size of pointer. Cannot fail.  */
    Dwarf_Small (*get_pointer_size)(void* obj);
    /*
        get_section_count

        Get the number of sections in the object file.

        Parameters

        Return
        Number of sections */
    Dwarf_Unsigned (*get_section_count)(void* obj);
    /*
        load_section

        Get a pointer to an array of bytes that
        represent the section.

        Parameters
        section_index - Zero-based index.
        return_data - The address of a pointer to
            which the section data block
            will be assigned.
        error - Pointer to an integer for returning
            libdwarf-defined error numbers.

        Return
        DW_DLV_OK - No error.
        DW_DLV_ERROR - Error. Use 'error' to indicate
            a libdwarf-defined error number.
        DW_DLV_NO_ENTRY - No such section.  */
    int (*load_section)(void* obj, Dwarf_Half section_index,
        Dwarf_Small** return_data, int* error);

    /**
        relocate_a_section
        If relocations are not supported leave this pointer NULL.

        Get a pointer to an array of bytes that represent
        the section.

        Parameters
        section_index - Zero-based index of the
            section to be relocated.
        error - Pointer to an integer for returning libdwarf-defined
            error numbers.

        Return
        DW_DLV_OK - No error.
        DW_DLV_ERROR - Error. Use 'error' to indicate
            a libdwarf-defined
            error number.
        DW_DLV_NO_ENTRY - No such section.  */
    int (*relocate_a_section)(void* obj, Dwarf_Half section_index,
        Dwarf_Debug dbg,
        int* error);

};



/*  These structures are allocated and deallocated by your code
    when you are using the libdwarf Object File Interface
    [dwarf_object_init and dwarf_object_finish)] directly.
    dwarf_object_finish) does not free
    struct Dwarf_Obj_Access_Interface_s or its content.
    (libdwarf does record a pointer to this struct: you must
    ensure that pointer remains valid for as long as
    a libdwarf instance is open (meaning
    after dwarf_init) and before dwarf_finish)).

    If you are reading Elf objects and libelf use dwarf_init()
    or dwarf_elf_init() which take care of these details.
*/
struct Dwarf_Obj_Access_Interface_s {
    /*  object is a void* as it hides the data the
        object access routines
        need (which varies by library in use and object format).
    */
    void* object;
    const Dwarf_Obj_Access_Methods * methods;
};

/* End libdwarf Object File Interface */

/*
    Dwarf_dealloc() alloc_type arguments.
    Argument points to:
*/
# 866 "/usr/include/libdwarf/libdwarf.h" 3 4
/* Dwarf_Frame Block (not used) */
# 875 "/usr/include/libdwarf/libdwarf.h" 3 4
/* 0x1e (30) to 0x34 (52) reserved for internal to libdwarf types. */
/* .debug_gnu_typenames/pubnames, 2020 */
# 886 "/usr/include/libdwarf/libdwarf.h" 3 4
/*  0x3d (61) is for libdwarf internal use.               */



/* struct Dwarf_Str_Offsets_Table_s */


/* The augmenter string for CIE */


/*  dwarf_init() 'access' argument values.
    Used for reading/consuming DWARF, not
    relevant to the producer portion of libdwarf.
    None of the following three arguments do anything.
    The following short set is useless.
    Only DW_DLC_READ has a documented effect but...
    it is useless and irrelevant as it means
    'do the default'.
    In the 1990's there was an option DW_DLC_MMAP
    (deleted from libdwarf.h many years ago).
    The old option libdwarf told IRIX libelf to mmap
    the object file.
*/




/*  ===== the following DW_DLC options are for producing DWARF,
    not used for reading/consuming DWARF. */
/* dwarf_producer_init* access flag modifiers
   No longer depends on compile-time settings for
   how to produce 64bit offset. See DW_DLC_IRIX_OFFSET64.
   Historic  versions. One of
   If DW_DLC_POINTER64 is not set DW_DLC_POINTER32 is assumed.
   If DW_DLC_OFFSET64 or DW_DLC_IRIX_OFFSET64 is not
   set 32bit offset DWARF is assumed.
   Non-MIPS Non IA64 should use DW_DLC_SYMBOLIC_RELOCATIONS
   and handle the relocation creation for the target
   itself using the symbolic relocations to do so.
   See the Dwarf_Rel_Type enum relocation indicators.
*/

/*  64-bit address-size target */



/*  32-bit address-size target */




/*  32-bit offset-size ELF object (ELFCLASS32) */

/*  DW_DLC_OFFSET32 is the default, the bit is not checked. */


/*  64-bit offset-size DWARF offsets  */



/*  64-bit offset-size ELF object (ELFCLASS64)  */


/*  Special for IRIX only. For producing DWARF with
    Elf 64bit offset headers and non-standard IRIX
    64bit offset DWARF .debug_info etc compilation unit headers. */


/*  Old style Elf binary relocation (.rel) records. The default.
    For producing DWARF */

/*  Usable with assembly output because it is up to the producer to
    deal with locations in whatever manner the calling producer
    code wishes.  For example, when the libdwarf caller wishes
    to produce relocations differently than the binary
    relocation bits that libdwarf Stream Relocations generate.
    */




/* ===== END DW_DLC options LIBDWARF */


/* dwarf_pcline function, slide arguments
*/




/* libdwarf error numbers
*/
# 1001 "/usr/include/libdwarf/libdwarf.h" 3 4
                    /* It is not an allowed size (64 or 32) */
    /* Error codes defined by the current Libdwarf Implementation. */
# 1253 "/usr/include/libdwarf/libdwarf.h" 3 4
/* ..._FAILSAFE_ERRVAL is an aid when out of memory. */
# 1465 "/usr/include/libdwarf/libdwarf.h" 3 4
    /* LAST MUST EQUAL LAST ERROR NUMBER */




    /*  Taken as meaning 'undefined value', this is not
        a column or register number.
        Only present at libdwarf runtime. Never on disk.
        DW_FRAME_* Values present on disk are in dwarf.h
    */


    /*  Taken as meaning 'same value' as caller had, not a column
        or register number
        Only present at libdwarf runtime. Never on disk.
        DW_FRAME_* Values present on disk are in dwarf.h
    */




/* error return values
*/

    /* for functions returning target address */


    /* for functions returning count */


    /* for functions returning offset */

/* standard return values for functions */




/*  Special values for offset_into_exception_table field
    of dwarf fde's. */
/*  The following value indicates that there is no
    Exception table offset
    associated with a dwarf frame. */

/*  The following value indicates that the producer
    was unable to analyse the
    source file to generate Exception tables for this function. */


/* The dwarf specification separates FORMs into
different classes.  To do the separation properly
requires 4 pieces of data as of DWARF4 (thus the
function arguments listed here).
The DWARF4 specification class definition suffices to
describe all DWARF versions.
See section 7.5.4, Attribute Encodings.
A return of DW_FORM_CLASS_UNKNOWN means we
could not properly figure
out what form-class it is.

    DW_FORM_CLASS_FRAMEPTR is MIPS/IRIX only, and refers
    to the DW_AT_MIPS_fde attribute (a reference to the
    .debug_frame section).

    DWARF5:
    DW_FORM_CLASS_LOCLISTSPTR  is like DW_FORM_CLASS_LOCLIST
    except that LOCLISTSPTR is aways a section offset,
    never an index, and LOCLISTSPTR is only referenced
    by DW_AT_loclists_base.
    Note DW_FORM_CLASS_LOCLISTSPTR spelling to distinguish
    from DW_FORM_CLASS_LOCLISTPTR.

    DWARF5:
    DW_FORM_CLASS_RNGLISTSPTR  is like DW_FORM_CLASS_RNGLIST
    except that RNGLISTSPTR is aways a section offset,
    never an index. DW_FORM_CLASS_RNGLISTSPTR is only
    referenced by DW_AT_rnglists_base.
*/
enum Dwarf_Form_Class {
    DW_FORM_CLASS_UNKNOWN = 0,
    DW_FORM_CLASS_ADDRESS = 1,
    DW_FORM_CLASS_BLOCK = 2,
    DW_FORM_CLASS_CONSTANT =3,
    DW_FORM_CLASS_EXPRLOC = 4,
    DW_FORM_CLASS_FLAG = 5,
    DW_FORM_CLASS_LINEPTR = 6,
    DW_FORM_CLASS_LOCLISTPTR=7, /* DWARF2,3,4 only */
    DW_FORM_CLASS_MACPTR = 8, /* DWARF2,3,4 only */
    DW_FORM_CLASS_RANGELISTPTR=9, /* DWARF2,3,4 only */
    DW_FORM_CLASS_REFERENCE=10,
    DW_FORM_CLASS_STRING = 11,
    DW_FORM_CLASS_FRAMEPTR= 12, /* MIPS/IRIX DWARF2 only */
    DW_FORM_CLASS_MACROPTR= 13, /* DWARF5 */
    DW_FORM_CLASS_ADDRPTR = 14, /* DWARF5 */
    DW_FORM_CLASS_LOCLIST = 15, /* DWARF5 */
    DW_FORM_CLASS_LOCLISTSPTR=16, /* DWARF5 */
    DW_FORM_CLASS_RNGLIST =17, /* DWARF5 */
    DW_FORM_CLASS_RNGLISTSPTR=18, /* DWARF5 */
    DW_FORM_CLASS_STROFFSETSPTR=19 /* DWARF5 */
};

/*  These support opening DWARF5 split dwarf objects and
    Elf SHT_GROUP blocks of DWARF sections. */




/*==================================================================*/
/*  Dwarf consumer interface initialization and
    termination operations */

/*  Initialization based on path. This is new October 2018.
    The path actually used is copied to true_path_out
    and in the case of MacOS dSYM may not match path.
    If true_path_buffer len is zero or true_path_out_buffer
    is zero  then the Special MacOS processing will not
    occur, nor will the GNU_debuglink processing occur.
    In case GNU debuglink data was followed or MacOS
    dSYM applies the true_path_out
    will not match path.
    So consider the value put in true_path_out the
    actual file name. reserved1,2,3 should all be passed
    as zero. */
int dwarf_init_path(const char * /*path*/,
    char * /*true_path_out_buffer*/,
    unsigned int /*true_path_bufferlen*/,
    Dwarf_Unsigned /*access*/,
    unsigned int /*groupnumber*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    Dwarf_Debug* /*dbg*/,
    const char * /* reserved1 */,
    Dwarf_Unsigned /* reserved2 */,
    Dwarf_Unsigned * /* reserved3 */,
    Dwarf_Error* /*error*/);

/*  New October 2020. Following GNU debuglink to the
    true-path with DWARF if there is
    appropriate debuglink data available.
    The path actually used is copied to true_path_out
    and in the case of MacOS dSYM may not match path.
    In case GNU debuglink data was followed the true_path_out
    will not match path.
    If debuglink missing from the Elf executable
    or shared-object (ie, it is a normal
    object!) or unusable by libdwarf or
    true_path_buffer len is zero or true_path_out_buffer
    is zero the
    accepts the path given as the object to report on.
    Passing dl_path_array and dl_path_array size zero
    suffices unless one has unusual locations for debuglink
    objects.
    If true_path_buffer len is zero or true_path_out_buffer
    is zero  then the Special MacOS processing will not
    occur either.
    */
int dwarf_init_path_dl(const char * /*path*/,
    char * /*true_path_out_buffer*/,
    unsigned int /*true_path_bufferlen*/,
    Dwarf_Unsigned /*access*/,
    unsigned int /*groupnumber*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    Dwarf_Debug* /*dbg*/,
    char ** /* dl_path array */,
    unsigned int /* dl_path array size */,
    unsigned char * /* path_source */,
    const char * /* reserved1 */,
    Dwarf_Unsigned /* reserved2 */,
    Dwarf_Unsigned * /* reserved3 */,
    Dwarf_Error* /*error*/);

/*  Initialization based on Unix(etc) open fd */
/*  New March 2017 */
int dwarf_init_b(int /*fd*/,
    Dwarf_Unsigned /*access*/,
    unsigned int /*groupnumber*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    Dwarf_Debug* /*dbg*/,
    Dwarf_Error* /*error*/);

int dwarf_init(int /*fd*/,
    Dwarf_Unsigned /*access*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    Dwarf_Debug* /*dbg*/,
    Dwarf_Error* /*error*/);

/*  The dwarf_elf_init* functions continue to be supported,
    but should be considered deprecated as they can ONLY
    be used on Elf files. */
/*  Initialization based on libelf/sgi-fastlibelf open pointer. */
/*  New March 2017 */
int dwarf_elf_init_b(dwarf_elf_handle /*elf*/,
    Dwarf_Unsigned /*access*/,
    unsigned int /*group_number*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    Dwarf_Debug* /*dbg*/,
    Dwarf_Error* /*error*/);
int dwarf_elf_init(dwarf_elf_handle /*elf*/,
    Dwarf_Unsigned /*access*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    Dwarf_Debug* /*dbg*/,
    Dwarf_Error* /*error*/);

/*  New September 2019.
    When using dwarf_elf_init[_b]() we still want the file path
    in the record. So we add it after the init phase.
    Path is needed for buildid and debuglink to fully work.
*/
int dwarf_add_file_path(Dwarf_Debug /*dbg*/,
    const char * /*file_name*/,
    Dwarf_Error* /*error*/);

/* Undocumented function for memory allocator. */
void dwarf_print_memory_stats(Dwarf_Debug /*dbg*/);

int dwarf_get_elf(Dwarf_Debug /*dbg*/,
    dwarf_elf_handle* /*return_elfptr*/,
    Dwarf_Error* /*error*/);

int dwarf_finish(Dwarf_Debug /*dbg*/, Dwarf_Error* /*error*/);


/*  NEW March 2017. */
int dwarf_object_init_b(Dwarf_Obj_Access_Interface* /*obj*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    unsigned int /*groupnumber*/,
    Dwarf_Debug* /*dbg*/,
    Dwarf_Error* /*error*/);

int dwarf_object_init(Dwarf_Obj_Access_Interface* /*obj*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    Dwarf_Debug* /*dbg*/,
    Dwarf_Error* /*error*/);

int dwarf_set_tied_dbg(Dwarf_Debug /*basedbg*/,
    Dwarf_Debug /*tied_dbg*/,
    Dwarf_Error* /*error*/);

/*  Likely not very useful.? */
int dwarf_get_tied_dbg(Dwarf_Debug /*dbg*/,
    Dwarf_Debug * /*tieddbg_out*/,
    Dwarf_Error * /*error*/);

int dwarf_object_finish(Dwarf_Debug /*dbg*/,
    Dwarf_Error* /*error*/);

/*  Returns the version string. Example: "20190922"
    which is in ISO date format. */
const char * dwarf_package_version(void);

/*  Section name access.  Because sections might
    now end with .dwo or be .zdebug  or might not.
*/
int dwarf_get_die_section_name(Dwarf_Debug /*dbg*/,
    Dwarf_Bool /*is_info*/,
    const char ** /*sec_name*/,
    Dwarf_Error * /*error*/);

int dwarf_get_die_section_name_b(Dwarf_Die /*die*/,
    const char ** /*sec_name*/,
    Dwarf_Error * /*error*/);

int dwarf_get_real_section_name(Dwarf_Debug /*dbg*/,
    const char * /*std_section_name*/,
    const char ** /*actual_sec_name_out*/,
    Dwarf_Small * /*marked_compressed*/, /* .zdebug... */
    Dwarf_Small * /*marked_zlib_compressed */, /* ZLIB string */
    Dwarf_Small * /*marked_shf_compressed*/, /* SHF_COMPRESSED */
    Dwarf_Unsigned * /*compressed_length*/,
    Dwarf_Unsigned * /*uncompressed_length*/,
    Dwarf_Error * /*error*/);



/*  dwarf_next_cu_header_d traverses debug_types CU headers.
    New in May, 2015.
    */
int dwarf_next_cu_header_d(Dwarf_Debug /*dbg*/,
    Dwarf_Bool /*is_info*/,
    Dwarf_Unsigned* /*cu_header_length*/,
    Dwarf_Half* /*version_stamp*/,
    Dwarf_Off* /*abbrev_offset*/,
    Dwarf_Half* /*address_size*/,
    Dwarf_Half* /*length_size*/,
    Dwarf_Half* /*extension_size*/,
    Dwarf_Sig8* /*type signature*/,
    Dwarf_Unsigned* /*typeoffset*/,
    Dwarf_Unsigned* /*next_cu_header_offset*/,
    Dwarf_Half * /*header_cu_type*/,
    Dwarf_Error* /*error*/);

/*  Die traversal operations.
    dwarf_next_cu_header_b traverses debug_info CU headers.
    Obsolete but supported.
    */
int dwarf_next_cu_header_b(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned* /*cu_header_length*/,
    Dwarf_Half* /*version_stamp*/,
    Dwarf_Off* /*abbrev_offset*/,
    Dwarf_Half* /*address_size*/,
    Dwarf_Half* /*length_size*/,
    Dwarf_Half* /*extension_size*/,
    Dwarf_Unsigned* /*next_cu_header_offset*/,
    Dwarf_Error* /*error*/);

/*  dwarf_next_cu_header_types traverses debug_types CU headers.
    New in October, 2011. Obsolete but supported May 2015.
    */
int dwarf_next_cu_header_c(Dwarf_Debug /*dbg*/,
    Dwarf_Bool /*is_info*/,
    Dwarf_Unsigned* /*cu_header_length*/,
    Dwarf_Half* /*version_stamp*/,
    Dwarf_Off* /*abbrev_offset*/,
    Dwarf_Half* /*address_size*/,
    Dwarf_Half* /*length_size*/,
    Dwarf_Half* /*extension_size*/,
    Dwarf_Sig8* /*type signature*/,
    Dwarf_Unsigned* /*typeoffset*/,
    Dwarf_Unsigned* /*next_cu_header_offset*/,
    Dwarf_Error* /*error*/);
/* The following is obsolete, though supported. November 2009. */
int dwarf_next_cu_header(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned* /*cu_header_length*/,
    Dwarf_Half* /*version_stamp*/,
    Dwarf_Off* /*abbrev_offset*/,
    Dwarf_Half* /*address_size*/,
    Dwarf_Unsigned* /*next_cu_header_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_siblingof(Dwarf_Debug /*dbg*/,
    Dwarf_Die /*die*/,
    Dwarf_Die* /*return_siblingdie*/,
    Dwarf_Error* /*error*/);
/* dwarf_siblingof_b new October 2011. */
int dwarf_siblingof_b(Dwarf_Debug /*dbg*/,
    Dwarf_Die /*die*/,
    Dwarf_Bool /*is_info*/,
    Dwarf_Die* /*return_siblingdie*/,
    Dwarf_Error* /*error*/);

/* New 27 April 2015. */
int dwarf_die_from_hash_signature(Dwarf_Debug /*dbg*/,
    Dwarf_Sig8 * /*hash_sig*/,
    const char * /*sig_type: "tu" or "cu"*/,
    Dwarf_Die* /*returned_CU_die */,
    Dwarf_Error* /*error*/);

int dwarf_child(Dwarf_Die /*die*/,
    Dwarf_Die* /*return_childdie*/,
    Dwarf_Error* /*error*/);

/*  Finding die given global (not CU-relative) offset.
    Applies only to debug_info. */
int dwarf_offdie(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*offset*/,
    Dwarf_Die* /*return_die*/,
    Dwarf_Error* /*error*/);

/*  dwarf_offdie_b new October 2011 */
/*  Finding die given global (not CU-relative) offset.
    Applies to debug_info (is_info true) or debug_types
    (is_info false). */
int dwarf_offdie_b(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*offset*/,
    Dwarf_Bool /*is_info*/,
    Dwarf_Die* /*return_die*/,
    Dwarf_Error* /*error*/);

/*  New 4 February 2021. returns DIE and
    is_info flag if it finds the referenced
    DW_UT_split_type or DW_UT_type CU. */
int dwarf_find_die_given_sig8(Dwarf_Debug /*dbg*/,
    Dwarf_Sig8 * /*ref*/,
    Dwarf_Die * /*die_out*/,
    Dwarf_Bool * /*is_info*/,
    Dwarf_Error * /*error*/);

/*  Returns the is_info flag.
    Needed so client software knows
    if a DIE is in debug_info or debug_types.
    New October 2011. */
Dwarf_Bool dwarf_get_die_infotypes_flag(Dwarf_Die /*die*/);

/*  New December 2020.  Any Dwarf_Die will work.
    The values returned are about the CU itself, not a DIE. */
int dwarf_cu_header_basics(Dwarf_Die die,
    Dwarf_Half * /*version*/,
    Dwarf_Bool * /*is_info*/,
    Dwarf_Bool * /*is_dwo*/,
    Dwarf_Half * /*offset_size*/,
    Dwarf_Half * /*address_size*/,
    Dwarf_Half * /*extension_size*/,
    Dwarf_Sig8 ** /*signature*/,
    Dwarf_Off * /*offset_of_length*/,
    Dwarf_Unsigned * /*total_byte_length*/,
    Dwarf_Error * /*error*/);

/*  New March 2016.
    So we can associate a DIE's abbreviations with the contents
    the abbreviations section. */
int dwarf_die_abbrev_global_offset(Dwarf_Die /*die*/,
    Dwarf_Off * /*abbrev_offset*/,
    Dwarf_Unsigned * /*abbrev_count*/,
    Dwarf_Error* /*error*/);

/*  operations on DIEs */
int dwarf_tag(Dwarf_Die /*die*/,
    Dwarf_Half* /*return_tag*/,
    Dwarf_Error* /*error*/);

/*  dwarf_dieoffset returns the global debug_info
    section offset, not the CU relative offset. */
int dwarf_dieoffset(Dwarf_Die /*die*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

/*  NEW October 2015. DWARF5.
    The DIE here can be any DIE in the relevant CU.
    index is an index into .debug_addr.
    This will look first for .debug_addr
    in the dbg object DIE
    and if not there (because the dbg object is
    a dwo or dwp split dwarf object)
    will look in the tied object if tied is available. */
int dwarf_debug_addr_index_to_addr(Dwarf_Die /*die*/,
    Dwarf_Unsigned /*index*/,
    Dwarf_Addr * /*return_addr*/,
    Dwarf_Error * /*error*/);
/*  Reading a CU DIE with DW_AT_low_pc an indexed value
    can be problematic as that interacts with DW_AT_addr_base
    in that DIE. Here is a test readers may find useful */
Dwarf_Bool dwarf_addr_form_is_indexed(int form);


/*  dwarf_CU_dieoffset_given_die returns
    the global debug_info section offset of the CU die
    that is the CU containing the given_die
    (the passed in DIE can be any DIE).
    This information makes it possible for a consumer to
    find and print CU context information for any die.
    See also dwarf_get_cu_die_offset_given_cu_header_offset. */
int dwarf_CU_dieoffset_given_die(Dwarf_Die /*given_die*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

/*  dwarf_die_CU_offset returns the CU relative offset
    not the global debug_info section offset, given
    any DIE in the CU.  See also dwarf_CU_dieoffset_given_die.
    */
int dwarf_die_CU_offset(Dwarf_Die /*die*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_die_CU_offset_range(Dwarf_Die /*die*/,
    Dwarf_Off* /*return_CU_header_offset*/,
    Dwarf_Off* /*return_CU_length_bytes*/,
    Dwarf_Error* /*error*/);

int dwarf_attr (Dwarf_Die /*die*/,
    Dwarf_Half /*attr*/,
    Dwarf_Attribute * /*returned_attr*/,
    Dwarf_Error* /*error*/);

int dwarf_die_text(Dwarf_Die /*die*/,
    Dwarf_Half /*attr*/,
    char ** /*ret_name*/,
    Dwarf_Error * /*error*/);

int dwarf_diename(Dwarf_Die /*die*/,
    char ** /*diename*/,
    Dwarf_Error* /*error*/);

/* Returns the  abbrev code of the die. Cannot fail. */
int dwarf_die_abbrev_code(Dwarf_Die /*die */);

/*  Returns a flag through ab_has_child. Non-zero if
    the DIE has children, zero if it does not.   */
int dwarf_die_abbrev_children_flag(Dwarf_Die /*die*/,
    Dwarf_Half * /*ab_has_child*/);

/*  Validate the sibling DIE. This only makes sense to call
    if the sibling's DIEs have been travsersed and
    dwarf_child called on each,
    so that the last DIE dwarf_child saw was the last.
    Essentially ensuring that (after such traversal) that we
    are in the same place a sibling attribute would identify.
    In case we return DW_DLV_ERROR, the global offset of the last
    DIE traversed by dwarf_child is returned through *offset */
int dwarf_validate_die_sibling(Dwarf_Die /*sibling*/,
    Dwarf_Off* /*offset*/);

/* convenience functions, alternative to using dwarf_attrlist */
int dwarf_hasattr(Dwarf_Die /*die*/,
    Dwarf_Half /*attr*/,
    Dwarf_Bool * /*returned_bool*/,
    Dwarf_Error* /*error*/);

/* Returns the children offsets for the given offset */
int dwarf_offset_list(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*offset*/,
    Dwarf_Bool /*is_info*/,
    Dwarf_Off ** /*offbuf*/,
    Dwarf_Unsigned * /*offcnt*/,
    Dwarf_Error * /*error*/);

/*  BEGIN: debug_gnu_pubnames/typenames access,
    calling these  Gnu_Index as a general reference.  */

int dwarf_get_gnu_index_head(Dwarf_Debug /*dbg*/,
    /*  The following arg false to select gnu_pubtypes */
    Dwarf_Bool /*for_gdb_pubnames*/ ,
    Dwarf_Gnu_Index_Head * /*index_head_out*/,
    Dwarf_Unsigned * /*index_block_count_out*/,
    Dwarf_Error * /*error*/);
/*  Frees all resources used for the indexes. */
void dwarf_gnu_index_dealloc(Dwarf_Gnu_Index_Head /*head*/);

int dwarf_get_gnu_index_block(Dwarf_Gnu_Index_Head /*head*/,
    Dwarf_Unsigned /*number*/,
    Dwarf_Unsigned * /*block_length */,
    Dwarf_Half * /*version */,
    Dwarf_Unsigned * /*offset_into_debug_info*/,
    Dwarf_Unsigned * /*size_of_debug_info_area*/,
    Dwarf_Unsigned * /*count_of_index_entries*/,
    Dwarf_Error * /*error*/);

int dwarf_get_gnu_index_block_entry(Dwarf_Gnu_Index_Head /*head*/,
    Dwarf_Unsigned /*blocknumber*/,
    Dwarf_Unsigned /*entrynumber*/,
    Dwarf_Unsigned * /*offset_in_debug_info*/,
    const char ** /*name_string*/,
    unsigned char * /*flagbyte*/,
    unsigned char * /*staticorglobal*/,
    unsigned char * /*typeofentry*/,
    Dwarf_Error * /*error*/);
/* END: debug_gnu_pubnames/typenames access, */

/*  BEGIN: loclist_c interfaces
    NEW October 2015.
    This works for any attribute that identifies
    a loclist or a locexpr. When the attribute is a locexpr
    a single loclist (created by libdwarf)
    is attached to loclist_head. */
int dwarf_get_loclist_c (Dwarf_Attribute /*attr*/,
    Dwarf_Loc_Head_c * /*loclist_head*/,
    Dwarf_Unsigned * /*locCount*/,
    Dwarf_Error * /*error*/);







/* DWARF2 kind is 2. DWARF3/4 kind is 3, DWARF5 kind is 5 */
int
dwarf_get_loclist_head_kind(Dwarf_Loc_Head_c /*ll_header*/,
    unsigned int * /*lkind*/,
    Dwarf_Error * /*error*/);

int dwarf_get_locdesc_entry_d(Dwarf_Loc_Head_c /*loclist_head*/,
    Dwarf_Unsigned /*index*/,
    /* identifies type of locdesc entry*/
    Dwarf_Small * /*lle_value_out*/,
    Dwarf_Unsigned * /*rawlowpc*/,
    Dwarf_Unsigned * /*rawhipc*/,
    Dwarf_Bool * /*debug_addr_unavailable*/,
    Dwarf_Addr * /*lowpc_out*/,
    Dwarf_Addr * /*hipc_out*/,
    Dwarf_Unsigned * /*loclist_count_out*/,
    Dwarf_Locdesc_c * /*locentry_out*/,
    Dwarf_Small * /*loclist_source_out*/, /* 0,1, or 2 */
    Dwarf_Unsigned * /*expression_offset_out*/,
    Dwarf_Unsigned * /*locdesc_offset_out*/,
    Dwarf_Error * /*error*/);

int dwarf_get_locdesc_entry_c(Dwarf_Loc_Head_c /*loclist_head*/,
    Dwarf_Unsigned /*index*/,
    /* identifies type of locdesc entry*/
    Dwarf_Small * /*lle_value_out*/,
    Dwarf_Addr * /*lowpc_out*/,
    Dwarf_Addr * /*hipc_out*/,
    Dwarf_Unsigned * /*loclist_count_out*/,
    Dwarf_Locdesc_c * /*locentry_out*/,
    Dwarf_Small * /*loclist_source_out*/, /* 0,1, or 2 */
    Dwarf_Unsigned * /*expression_offset_out*/,
    Dwarf_Unsigned * /*locdesc_offset_out*/,
    Dwarf_Error * /*error*/);

/* New June 2020 for DWARF5 (and all earlier). */
int
dwarf_get_location_op_value_d(Dwarf_Locdesc_c /*locdesc*/,
    Dwarf_Unsigned /*index*/,
    Dwarf_Small * /*atom_out*/,
    Dwarf_Unsigned * /*operand1*/,
    Dwarf_Unsigned * /*operand2*/,
    Dwarf_Unsigned * /*operand3*/,
    Dwarf_Unsigned * /*rawop1*/,
    Dwarf_Unsigned * /*rawop2*/,
    Dwarf_Unsigned * /*rawop3*/,
    Dwarf_Unsigned * /*offset_for_branch*/,
    Dwarf_Error* /*error*/);

int dwarf_get_location_op_value_c(Dwarf_Locdesc_c /*locdesc*/,
    Dwarf_Unsigned /*index*/,
    Dwarf_Small * /*atom_out*/,
    Dwarf_Unsigned * /*operand1*/,
    Dwarf_Unsigned * /*operand2*/,
    Dwarf_Unsigned * /*operand3*/,
    Dwarf_Unsigned * /*offset_for_branch*/,
    Dwarf_Error* /*error*/);

int dwarf_loclist_from_expr_c(Dwarf_Debug /*dbg*/,
    Dwarf_Ptr /*expression_in*/,
    Dwarf_Unsigned /*expression_length*/,
    Dwarf_Half /*address_size*/,
    Dwarf_Half /*offset_size*/,
    Dwarf_Small /*dwarf_version*/,
    Dwarf_Loc_Head_c* /*loc_head*/,
    Dwarf_Unsigned * /*listlen*/,
    Dwarf_Error * /*error*/);

/* This frees all memory allocated by the applicable
    dwarf_get_loclist_c */
void dwarf_loc_head_c_dealloc(Dwarf_Loc_Head_c /*loclist_head*/);

/* END: loclist_c interfaces */


/*  As of 2015 the preferred interface
    is dwarf_get_loclist_c
    and only dwarf_get_loclist_c will work
    for DWARF5 (and also all earlier versions).  */
int dwarf_loclist_n(Dwarf_Attribute /*attr*/,
    Dwarf_Locdesc*** /*llbuf*/,
    Dwarf_Signed * /*locCount*/,
    Dwarf_Error* /*error*/);

/*  The original interfaces.  Please do not use this. */
int dwarf_loclist(Dwarf_Attribute /*attr*/, /* inflexible! */
    Dwarf_Locdesc** /*llbuf*/,
    Dwarf_Signed * /*locCount*/,
    Dwarf_Error* /*error*/);

/*  Extracts a dwarf expression from an expression byte stream.
    Useful to get expressions from DW_CFA_def_cfa_expression
    DW_CFA_expression DW_CFA_val_expression expression bytes.
    27 April 2009: dwarf_loclist_from_expr interface with
    no addr_size is obsolete but supported,
    use dwarf_loclist_from_expr_a instead.  */
int dwarf_loclist_from_expr(Dwarf_Debug /*dbg*/,
    Dwarf_Ptr /* expression_in*/,
    Dwarf_Unsigned /* expression_length*/,
    Dwarf_Locdesc ** /* llbuf*/,
    Dwarf_Signed * /*listlen*/,
    Dwarf_Error * /* error*/ );

/*  dwarf_loclist_from_expr_a new 27 Apr 2009:
    added addr_size argument. */
int dwarf_loclist_from_expr_a(Dwarf_Debug /*dbg*/,
    Dwarf_Ptr /*expression_in*/,
    Dwarf_Unsigned /*expression_length*/,
    Dwarf_Half /*addr_size*/,
    Dwarf_Locdesc ** /*llbuf*/,
    Dwarf_Signed * /*listlen*/,
    Dwarf_Error * /*error*/);

/*  dwarf_loclist_from_expr_b new 13 Nov 2012:
    added dwarf_version (DWARF version number
    of the applicable compilation unit)
    and offset_size arguments. Added for
    DW_OP_GNU_implicit_pointer. */
int dwarf_loclist_from_expr_b(Dwarf_Debug /*dbg*/,
    Dwarf_Ptr /*expression_in*/ ,
    Dwarf_Unsigned /*expression_length*/ ,
    Dwarf_Half /*addr_size*/ ,
    Dwarf_Half /*offset_size*/ ,
    Dwarf_Small /*dwarf_version*/ ,
    Dwarf_Locdesc ** /*llbuf*/ ,
    Dwarf_Signed * /*listlen*/ ,
    Dwarf_Error * /*error*/ );

int dwarf_lowpc(Dwarf_Die /*die*/,
    Dwarf_Addr * /*returned_addr*/,
    Dwarf_Error* /*error*/);

/*  When the highpc attribute is of class  'constant'
    it is not an address, it is an offset from the
    base address (such as lowpc) of the function.
    This is therefore a required interface for DWARF4
    style DW_AT_highpc.  */
int dwarf_highpc_b(Dwarf_Die /*die*/,
    Dwarf_Addr * /*return_value*/,
    Dwarf_Half * /*return_form*/,
    enum Dwarf_Form_Class * /*return_class*/,
    Dwarf_Error * /*error*/);

/*  This works for DWARF2 and DWARF3 styles of DW_AT_highpc,
    but not for the DWARF4 class constant forms.
    If the FORM is of class constant this returns an error */
int dwarf_highpc(Dwarf_Die /*die*/,
    Dwarf_Addr * /*returned_addr*/,
    Dwarf_Error* /*error*/);

/*  New January 2016. */
int dwarf_dietype_offset(Dwarf_Die /*die*/,
    Dwarf_Off * /*return_off*/,
    Dwarf_Error * /*error*/);

int dwarf_bytesize(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /*returned_size*/,
    Dwarf_Error* /*error*/);

int dwarf_bitsize(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /*returned_size*/,
    Dwarf_Error* /*error*/);

int dwarf_bitoffset(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /*returned_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_srclang(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /*returned_lang*/,
    Dwarf_Error* /*error*/);

int dwarf_arrayorder(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /*returned_order*/,
    Dwarf_Error* /*error*/);

/* end of convenience function list */

/* this is the main interface to attributes of a DIE */
int dwarf_attrlist(Dwarf_Die /*die*/,
    Dwarf_Attribute** /*attrbuf*/,
    Dwarf_Signed * /*attrcount*/,
    Dwarf_Error* /*error*/);

/* query operations for attributes */
int dwarf_hasform(Dwarf_Attribute /*attr*/,
    Dwarf_Half /*form*/,
    Dwarf_Bool * /*returned_bool*/,
    Dwarf_Error* /*error*/);

int dwarf_whatform(Dwarf_Attribute /*attr*/,
    Dwarf_Half * /*returned_final_form*/,
    Dwarf_Error* /*error*/);

int dwarf_whatform_direct(Dwarf_Attribute /*attr*/,
    Dwarf_Half * /*returned_initial_form*/,
    Dwarf_Error* /*error*/);
int dwarf_whatattr(Dwarf_Attribute /*attr*/,
    Dwarf_Half * /*returned_attr_num*/,
    Dwarf_Error* /*error*/);

/*
    The following are concerned with the Primary Interface: getting
    the actual data values. One function per 'kind' of FORM.
*/
/*  dwarf_formref returns, thru return_offset, a CU-relative offset
    and does not allow DW_FORM_ref_addr*/
int dwarf_formref(Dwarf_Attribute /*attr*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);
/*  dwarf_global_formref returns, thru return_offset,
    a debug_info-relative offset and does allow all reference forms*/
int dwarf_global_formref(Dwarf_Attribute /*attr*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

/*  dwarf_formsig8 returns in the caller-provided 8 byte area
    the 8 bytes of a DW_FORM_ref_sig8.  Not a string.  */
int dwarf_formsig8(Dwarf_Attribute /*attr*/,
    Dwarf_Sig8 * /*returned sig bytes*/,
    Dwarf_Error* /*error*/);
/*  dwarf_formsig8_const returns in the caller-provided 8 byte area
    the 8 bytes of a form const (DW_FORM_data8).  Not a string.  */
int dwarf_formsig8_const(Dwarf_Attribute /*attr*/,
    Dwarf_Sig8 * /*returned sig bytes*/,
    Dwarf_Error* /*error*/);

int dwarf_formaddr(Dwarf_Attribute /*attr*/,
    Dwarf_Addr * /*returned_addr*/,
    Dwarf_Error* /*error*/);

/*  Part of DebugFission.  So a consumer can get the index when
    the object with the actual .debug_addr section is
    elsewhere. And so a print application can
    print the index.  New May 2014*/
int dwarf_get_debug_addr_index(Dwarf_Attribute /*attr*/,
    Dwarf_Unsigned * /*return_index*/,
    Dwarf_Error * /*error*/);

int dwarf_formflag(Dwarf_Attribute /*attr*/,
    Dwarf_Bool * /*returned_bool*/,
    Dwarf_Error* /*error*/);

int dwarf_formdata16(Dwarf_Attribute /*attr*/,
    Dwarf_Form_Data16 * /*returned_val*/,
    Dwarf_Error* /*error*/);

int dwarf_formudata(Dwarf_Attribute /*attr*/,
    Dwarf_Unsigned * /*returned_val*/,
    Dwarf_Error* /*error*/);

int dwarf_formsdata(Dwarf_Attribute /*attr*/,
    Dwarf_Signed * /*returned_val*/,
    Dwarf_Error* /*error*/);

int dwarf_formblock(Dwarf_Attribute /*attr*/,
    Dwarf_Block ** /*returned_block*/,
    Dwarf_Error* /*error*/);

int dwarf_formstring(Dwarf_Attribute /*attr*/,
    char ** /*returned_string*/,
    Dwarf_Error* /*error*/);

/*  DebugFission.  So a DWARF print application can
    get the string index (DW_FORM_strx) and print it.
    A convenience function.
    New May 2014. */
int dwarf_get_debug_str_index(Dwarf_Attribute /*attr*/,
    Dwarf_Unsigned * /*return_index*/,
    Dwarf_Error * /*error*/);


int dwarf_formexprloc(Dwarf_Attribute /*attr*/,
    Dwarf_Unsigned * /*return_exprlen*/,
    Dwarf_Ptr * /*block_ptr*/,
    Dwarf_Error * /*error*/);


/* end attribute query operations. */

/* Start line number operations */
/* dwarf_srclines  is the original interface from 1993. */
int dwarf_srclines(Dwarf_Die /*die*/,
    Dwarf_Line** /*linebuf*/,
    Dwarf_Signed * /*linecount*/,
    Dwarf_Error* /*error*/);


/*  If we have two-level line tables, this will return the
    logicals table in linebuf and the actuals table in
    linebuf_actuals. For old-style (one-level) tables, it
    will return the single table through linebuf, and the
    value returned through linecount_actuals will be 0.
    The actual version number is returned through version.
    For two-level line tables, the version returned will
    be 0xf006. This interface can return data from two-level
    line tables, which are experimental.
    Most users will not wish to use dwarf_srclines_two_level */
int dwarf_srclines_two_level(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /*version*/,
    Dwarf_Line** /*linebuf*/,
    Dwarf_Signed * /*linecount*/,
    Dwarf_Line** /*linebuf_actuals*/,
    Dwarf_Signed * /*linecount_actuals*/,
    Dwarf_Error* /*error*/);

/*  dwarf_srclines_dealloc, created July 2005, is the
    appropriate method for deallocating what dwarf_srclines
    and dwarf_srclines_two_level return.
    More complete free than using dwarf_dealloc directly.

    When dwarf_srclines_two_level returns two line tables
    user code should call dwarf_srclines_dealloc
    once on each linebuf returned by dwarf_srclines_two_level
    first on linebuf_actuals and then on linebuf{_logicals}.   */

void dwarf_srclines_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Line* /*linebuf*/,
    Dwarf_Signed /*count */);


/*  New October 2015, must be used to deallocating
    what is allocated by dwarf_srclines_b and
    dwarf_srclines_from_linecontext  use.
    Works for DWARF2,3,4,5 and for experimental line tables.
    New work should use the new Dwarf_Line_Context
    interface.
    This interface only reads the line table header, so
    it takes relatively little time.
    *is_single_table will be set non-zero for all
        standard dwarf line sections.
    *is_single_table will be set zero for
        line sections with the two_level line table
        extension (which will have *version_out 0xf006).  */
int dwarf_srclines_b(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /* version_out*/,
    Dwarf_Small * /* table_count */,
    Dwarf_Line_Context * /* linecontext*/,
    Dwarf_Error * /* error*/);

/*  Functions passing in a Dwarf_Line_Context  are only
    available if dwarf_srclines_b() was used to access
    line table information.  */
/*  New October 2015.  Returns line details.
    Works for DWARF2,3,4,5.  If linecount
    returned is zero this is a line table with no lines.*/
int dwarf_srclines_from_linecontext(
    Dwarf_Line_Context /*line_context*/,
    Dwarf_Line ** /*linebuf*/,
    Dwarf_Signed * /*linecount*/,
    Dwarf_Error * /* error*/);

/*  New October 2015.  Returns line details.
    Works for DWARF2,3,4,5 and for experimental
    two-level line tables. A single level table will
    have *linebuf_actuals and *linecount_actuals set
    to 0. */
int dwarf_srclines_two_level_from_linecontext(
    Dwarf_Line_Context /*line_context*/,
    Dwarf_Line ** /*linebuf */,
    Dwarf_Signed * /*linecount*/,
    Dwarf_Line ** /*linebuf_actuals*/,
    Dwarf_Signed * /*linecount_actuals*/,
    Dwarf_Error * /* error*/);

/*  dwarf_srclines_dealloc_b(), created October 2015, is the
    appropriate method for deallocating everything
    and dwarf_srclines_from_linecontext(),
    dwarf_srclines_twolevel_from_linecontext(),
    and dwarf_srclines_b()  allocate.  */
void dwarf_srclines_dealloc_b(Dwarf_Line_Context /*line_context*/);

/*  New October 2015.
    The offset is in the relevent .debug_line or .debug_line.dwo
    section (and in a split dwarf package file includes)
    the base line table offset). */
int dwarf_srclines_table_offset(Dwarf_Line_Context /*line_context*/,
    Dwarf_Unsigned * /*offset*/,
    Dwarf_Error * /* error*/);

/*  New October 2015. */
/*  Compilation Directory name for the current CU.
    section (and in a split dwarf package file includes)
    the base line table offset).  Do not free() the string,
    it is in a dwarf section. */
int dwarf_srclines_comp_dir(Dwarf_Line_Context /*line_context*/,
    const char ** /*compilation_directory*/,
    Dwarf_Error * /*error*/);

/*  New October 2015.  Part of the two-level line table extension. */
/*  Count is the real count of suprogram array entries. */
int dwarf_srclines_subprog_count(Dwarf_Line_Context /*line_context*/,
    Dwarf_Signed * /*count*/,
    Dwarf_Error * /*error*/);

/*  New October 2015. */
/*  Index starts with 1, last is 'count' */
int dwarf_srclines_subprog_data(Dwarf_Line_Context /*line_context*/,
    Dwarf_Signed /*index*/,
    const char ** /*name*/,
    Dwarf_Unsigned * /*decl_file*/,
    Dwarf_Unsigned * /*decl_line*/,
    Dwarf_Error * /*error*/);

/*  New October 2015. */
/*  Count is the real count of files array entries.
    This remains supported though it is pretty useless for
    DWARF5.  To process DWARF5 as well
    as DWARF 2,3,4 (in a uniform fashion)
    use dwarf_srclines_files_indexes() instead.
*/
int dwarf_srclines_files_count(Dwarf_Line_Context /*line_context*/,
    Dwarf_Signed * /*count*/,
    Dwarf_Error * /*error*/);

/*  New March 2018. */
/*  Count is the real count of files array entries.
    Since DWARF 2,3,4 are zero origin indexes and
    DWARF5 and later are one origin, this function
    replaces dwarf_srclines_files_count(). */
int dwarf_srclines_files_indexes(Dwarf_Line_Context /*line_context*/,
    Dwarf_Signed * /*baseindex*/,
    Dwarf_Signed * /*count*/,
    Dwarf_Signed * /*endindex*/,
    Dwarf_Error * /*error*/);


/*  New March 2018. Same as dwarf_srclines_files_data,
    but adds the md5ptr field so cases where DW_LNCT_MD5
    is present can return pointer to the MD5 value.
    With DWARF 5 index starts with 0.
    See dwarf_srclines_files_indexes() which makes
    indexing through the files easy. */
int dwarf_srclines_files_data_b(Dwarf_Line_Context line_context,
    Dwarf_Signed index_in,
    const char ** name,
    Dwarf_Unsigned * directory_index,
    Dwarf_Unsigned * last_mod_time,
    Dwarf_Unsigned * file_length,
    Dwarf_Form_Data16 ** md5ptr,
    Dwarf_Error * error);

/*  New October 2015. */
/*  Unlike dwarf_srcfiles() this returns the raw file table
    strings without the directory being prefixed.
    Index starts with 1, last is 'count' */
int dwarf_srclines_files_data(Dwarf_Line_Context /*line_context*/,
    Dwarf_Signed /*index*/,
    const char ** /*name*/,
    Dwarf_Unsigned * /*directory_index*/,
    Dwarf_Unsigned * /*last_mod_time*/,
    Dwarf_Unsigned * /*file_length*/,
    Dwarf_Error * /* error*/);

/*  New October 2015. */
/*  Count is the real count of include array entries. */
int dwarf_srclines_include_dir_count(
    Dwarf_Line_Context /*line_context*/,
    Dwarf_Signed * /*count*/,
    Dwarf_Error * /* error*/);

/*  New October 2015. */
/*  Index starts with 1, last is 'count' */
int dwarf_srclines_include_dir_data(
    Dwarf_Line_Context /*line_context*/,
    Dwarf_Signed /*index*/,
    const char ** /*name*/,
    Dwarf_Error * /* error*/);

/*  New October 2015. */
/*  The DWARF version number of this compile-unit
    in the .debug_lines section and the number of
    actual tables:0 (header with no lines),
    1 (standard table), or 2 (experimental). */
int dwarf_srclines_version(Dwarf_Line_Context /*line_context*/,
    Dwarf_Unsigned * /*version*/,
    Dwarf_Small * /*table_count*/,
    Dwarf_Error * /*error*/);


int dwarf_get_line_section_name_from_die(Dwarf_Die /*die*/,
    const char ** /*section_name_out*/,
    Dwarf_Error * /*error*/);


/*  While 'filecount' is signed, the value
    returned through the pointer is never negative.
    Original libdwarf from 199x.  */
int dwarf_srcfiles(Dwarf_Die /*die*/,
    char*** /*srcfiles*/,
    Dwarf_Signed * /*filecount*/,
    Dwarf_Error* /*error*/);

int dwarf_linebeginstatement(Dwarf_Line /*line*/,
    Dwarf_Bool * /*returned_bool*/,
    Dwarf_Error* /*error*/);

int dwarf_lineendsequence(Dwarf_Line /*line*/,
    Dwarf_Bool * /*returned_bool*/,
    Dwarf_Error* /*error*/);

int dwarf_lineno(Dwarf_Line /*line*/,
    Dwarf_Unsigned * /*returned_lineno*/,
    Dwarf_Error* /*error*/);

int dwarf_line_srcfileno(Dwarf_Line /*line*/,
    Dwarf_Unsigned * /*ret_fileno*/,
    Dwarf_Error * /*error*/);

/* Is the line address from DW_LNS_set_address? */
int dwarf_line_is_addr_set(Dwarf_Line /*line*/,
    Dwarf_Bool * /*is_addr_set*/,
    Dwarf_Error * /*error*/);

int dwarf_lineaddr(Dwarf_Line /*line*/,
    Dwarf_Addr * /*returned_addr*/,
    Dwarf_Error* /*error*/);

/* dwarf_lineoff is OBSOLETE as of December 2011. Do not use. */
int dwarf_lineoff(Dwarf_Line /*line*/,
    Dwarf_Signed * /*returned_lineoffset*/,
    Dwarf_Error* /*error*/);

/*  dwarf_lineoff_b correctly returns an unsigned column number
    through the pointer returned_lineoffset.
    dwarf_lineoff_b() is new in December 2011.  */
int dwarf_lineoff_b(Dwarf_Line /*line*/,
    Dwarf_Unsigned * /*returned_lineoffset*/,
    Dwarf_Error* /*error*/);

int dwarf_linesrc(Dwarf_Line /*line*/,
    char ** /*returned_name*/,
    Dwarf_Error* /*error*/);

int dwarf_lineblock(Dwarf_Line /*line*/,
    Dwarf_Bool * /*returned_bool*/,
    Dwarf_Error* /*error*/);

/*  We gather these into one call as it's likely one
    will want all or none of them.  */
int dwarf_prologue_end_etc(Dwarf_Line /* line */,
    Dwarf_Bool * /*prologue_end*/,
    Dwarf_Bool * /*eplogue_begin*/,
    Dwarf_Unsigned * /* isa */,
    Dwarf_Unsigned * /* discriminator */,
    Dwarf_Error * /*error*/);
/* End line table operations */

/*  Two-level line tables:
    When reading from an actuals table, dwarf_line_logical()
    returns the logical row number for the line. */
int dwarf_linelogical(Dwarf_Line /*line*/,
    Dwarf_Unsigned * /*returned_logical*/,
    Dwarf_Error* /*error*/);

/*  Two-level line tables:
    When reading from a logicals table, dwarf_linecontext()
    returns the logical row number corresponding the the
    calling context for an inlined call. */
int dwarf_linecontext(Dwarf_Line /*line*/,
    Dwarf_Unsigned * /*returned_context*/,
    Dwarf_Error* /*error*/);

/*  Two-level line tables:
    When reading from a logicals table, dwarf_linesubprogno()
    returns the index in the subprograms table of the inlined
    subprogram. */
int dwarf_line_subprogno(Dwarf_Line /*line*/,
    Dwarf_Unsigned * /*ret_subprogno*/,
    Dwarf_Error * /*error*/);

/*  Two-level line tables:
    When reading from a logicals table, dwarf_linesubprog()
    returns the name of the inlined subprogram, its declaration
    filename, and its declaration line number, if available. */
int dwarf_line_subprog(Dwarf_Line /*line*/,
    char ** /*returned_subprog_name*/,
    char ** /*returned_filename*/,
    Dwarf_Unsigned * /*returned_lineno*/,
    Dwarf_Error * /*error*/);
/* End of line table interfaces. */

/* .debug_names names table interfaces. DWARF5 */
/*  New April 2017 */
int dwarf_debugnames_header(Dwarf_Debug /*dbg*/,
    Dwarf_Dnames_Head * /*dn_out*/,

    /* *dn_count_out returns the number of name indexes
        in the .debug_names section */
    Dwarf_Unsigned * /*dn_index_count_out*/,
    Dwarf_Error * /*error*/);

/*  Since there may be multiple name indexes in a .debug_names
    section we use index_number starting at 0 through
    dn_index_count_out-1. */
int dwarf_debugnames_sizes(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,

    Dwarf_Unsigned * /*section_offset*/,
    Dwarf_Unsigned * /*version*/,
    Dwarf_Unsigned * /*offset_size*/, /* 4 or 8 */

    /* The counts are entry counts, not byte sizes. */
    Dwarf_Unsigned * /*comp_unit_count*/,
    Dwarf_Unsigned * /*local_type_unit_count*/,
    Dwarf_Unsigned * /*foreign_type_unit_count*/,
    Dwarf_Unsigned * /*bucket_count*/,
    Dwarf_Unsigned * /*name_count*/,

    /* The following are counted in bytes */
    Dwarf_Unsigned * /*indextable_overall_length*/,
    Dwarf_Unsigned * /*abbrev_table_size*/,
    Dwarf_Unsigned * /*entry_pool_size*/,
    Dwarf_Unsigned * /*augmentation_string_size*/,

    Dwarf_Error * /*error*/);

int dwarf_debugnames_cu_entry(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*offset_number*/,
    Dwarf_Unsigned * /*offset_count*/,
    Dwarf_Unsigned * /*offset*/,
    Dwarf_Error * /*error*/);
int dwarf_debugnames_local_tu_entry(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*offset_number*/,
    Dwarf_Unsigned * /*offset_count*/,
    Dwarf_Unsigned * /*offset*/,
    Dwarf_Error * /*error*/);
int dwarf_debugnames_foreign_tu_entry(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*sig_number*/,
    Dwarf_Unsigned * /*sig_mininum*/,
    Dwarf_Unsigned * /*sig_count*/,
    Dwarf_Sig8 * /*signature*/,
    Dwarf_Error * /*error*/);
int dwarf_debugnames_bucket(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*bucket_number*/,
    Dwarf_Unsigned * /*bucket_count*/,
    Dwarf_Unsigned * /*index_of_name_entry*/,
    Dwarf_Error * /*error*/);

int dwarf_debugnames_name(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*name_entry*/,
    Dwarf_Unsigned * /*names_count*/,
    Dwarf_Sig8 * /*signature*/,
    Dwarf_Unsigned * /*offset_to_debug_str*/,
    Dwarf_Unsigned * /*offset_in_entrypool*/,
    Dwarf_Error * /*error*/);

int dwarf_debugnames_abbrev_by_index(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*abbrev_entry*/,
    Dwarf_Unsigned * /*abbrev_code*/,
    Dwarf_Unsigned * /*tag*/,

    /*  The number of valid abbrev_entry values:
        0 to number_of_abbrev-1 */
    Dwarf_Unsigned * /*number_of_abbrev*/,

    /*  The number of attr/form pairs, not counting
        the trailing 0,0 pair. */
    Dwarf_Unsigned * /*number_of_attr_form_entries*/,
    Dwarf_Error * /*error*/);

int dwarf_debugnames_abbrev_by_code(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*abbrev_code*/,
    Dwarf_Unsigned * /*tag*/,

    /*  The number of this code/tag as an array index. */
    Dwarf_Unsigned * /*index_of_abbrev*/,

    /*  The number of attr/form pairs, not counting the trailing
        0,0 pair. */
    Dwarf_Unsigned * /*number_of_attr_form_entries*/,
    Dwarf_Error * /*error*/);

int dwarf_debugnames_abbrev_form_by_index(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*abbrev_entry_index*/,
    Dwarf_Unsigned /*abbrev_form_index*/,
    Dwarf_Unsigned * /*name_index_attr*/,
    Dwarf_Unsigned * /*form*/,
    Dwarf_Unsigned * /*number_of_attr_form_entries*/,
    Dwarf_Error * /*error*/);


/*  This, combined with dwarf_debugnames_entrypool_values(),
    lets one examine as much or as little of an entrypool
    as one wants to by alternately calling these two
    functions. */
int dwarf_debugnames_entrypool(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*offset_in_entrypool*/,
    Dwarf_Unsigned * /*abbrev_code*/,
    Dwarf_Unsigned * /*tag*/,
    Dwarf_Unsigned * /*value_count*/,
    Dwarf_Unsigned * /*index_of_abbrev*/,
    Dwarf_Unsigned * /*offset_of_initial_value*/,
    Dwarf_Error * /*error*/);

/*  Caller, knowing array size needed, passes in arrays
    it allocates of for idx, form, offset-size-values,
    and signature values.  Caller must examine idx-number
    and form to decide, for each array element, whether
    the offset or the signature contains the value.
    So this returns all the values for the abbrev code.
    And points via offset_of_next to the next abbrev code.
    */
int dwarf_debugnames_entrypool_values(Dwarf_Dnames_Head /*dn*/,
    Dwarf_Unsigned /*index_number*/,
    Dwarf_Unsigned /*index_of_abbrev*/,
    Dwarf_Unsigned /*offset_in_entrypool_of_values*/,
    Dwarf_Unsigned * /*array_dw_idx_number*/,
    Dwarf_Unsigned * /*array_form*/,
    Dwarf_Unsigned * /*array_of_offsets*/,
    Dwarf_Sig8 * /*array_of_signatures*/,

    /*  offset of the next entrypool entry. */
    Dwarf_Unsigned * /*offset_of_next_entrypool*/,
    Dwarf_Error * /*error*/);

/*  FIXME: add interfaces for string search given hash and
    string */



/* end of .debug_names interfaces. */

/*  New October 2019.  Access to the GNU section named
    .gnu_debuglink  and/or the section .note.gnu.build-id.
    See
    https://sourceware.org/gdb/onlinedocs/gdb/
        Separate-Debug-Files.html

    If no debuglink then name_returned,crc_returned and
    debuglink_path_returned will get set 0 through the pointers.

    If no .note.gnu.build-id then  buildid_length_returned,
    and buildid_returned will be set 0 through the pointers.

    Caller frees space returned by debuglink_fullpath_returned.

    See libdwarf2.1.mm revision 3.13 or later for
    additional important details.
*/

int dwarf_gnu_debuglink(Dwarf_Debug /*dbg*/,
    char ** /*debuglink_path_returned */,
    unsigned char ** /*crc_returned from the debuglink section*/,
    char ** /*debuglink_fullpath_returned free this*/,
    unsigned int * /*debuglink_path_count_returned */,
    unsigned int * /*buildid_type_returned */,
    char ** /*buildid_owner_name_returned*/,
    unsigned char ** /*buildid_returned*/,
    unsigned int * /*buildid_length_returned*/,
    char *** /*paths_returned*/,
    unsigned int * /*paths_length_returned*/,
    Dwarf_Error* /*error*/);

/*  Only useful inside dwarfexample/dwdebuglink.c
    so we can show all that is going on.
*/
int dwarf_add_debuglink_global_path(Dwarf_Debug /*dbg*/,
    const char *pathname,
    Dwarf_Error* /*error*/);

/*  crc32 used for debuglink crc calculation.
    Caller passes pointer to array of 4 unsigned char
    provided by the caller and if this returns
    DW_DLV_OK that is filled in. */
int dwarf_crc32 (Dwarf_Debug /*dbg*/,unsigned char * /*crcbuf*/,
    Dwarf_Error * /*error*/);

/*  Public interface to the real crc calculation
    just in case some find it useful. */
unsigned int dwarf_basic_crc32 (const unsigned char * /*buf*/,
    unsigned long /*len*/, unsigned int /*init*/);

/*  global name space operations (.debug_pubnames access)
    The pubnames and similar sections are rarely used. Few compilers
    emit them. They are DWARF 2,3,4 only., not DWARF 5.  */

/*  New March 2019. Special for dwarfdump.
    Sets a flag in the dbg. Always returns DW_DLV_OK
    and (as of March 2020) never touches error */
int dwarf_return_empty_pubnames(Dwarf_Debug /*dbg*/,
    int /* flag */,
    Dwarf_Error* /*error*/);

int dwarf_get_globals(Dwarf_Debug /*dbg*/,
    Dwarf_Global** /*globals*/,
    Dwarf_Signed * /*number_of_globals*/,
    Dwarf_Error* /*error*/);
void dwarf_globals_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Global* /*globals*/,
    Dwarf_Signed /*number_of_globals*/);

int dwarf_globname(Dwarf_Global /*glob*/,
    char ** /*returned_name*/,
    Dwarf_Error* /*error*/);

int dwarf_global_die_offset(Dwarf_Global /*global*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error * /*error*/);

/*  This returns the CU die global offset if one knows the
    CU header global offset.
    See also dwarf_CU_dieoffset_given_die(). */
int dwarf_get_cu_die_offset_given_cu_header_offset(
    Dwarf_Debug /*dbg*/,
    Dwarf_Off /*in_cu_header_offset*/,
    Dwarf_Off * /*out_cu_die_offset*/,
    Dwarf_Error * /*err*/);

/*  The _b form is new October 2011. */
int dwarf_get_cu_die_offset_given_cu_header_offset_b(
    Dwarf_Debug /*dbg*/,
    Dwarf_Off /*in_cu_header_offset*/,
    Dwarf_Bool /*is_info. True means look in debug_Info,
        false use debug_types.*/,
    Dwarf_Off * /*out_cu_die_offset*/,
    Dwarf_Error * /*err*/);





int dwarf_global_cu_offset(Dwarf_Global /*global*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_global_name_offsets(Dwarf_Global /*global*/,
    char ** /*returned_name*/,
    Dwarf_Off* /*die_offset*/,
    Dwarf_Off* /*cu_offset*/,
    Dwarf_Error* /*error*/);

/*  New February 2019. For more complete dwarfdump printing.
    For each CU represented in .debug_pubnames, etc,
    there is a .debug_pubnames header.  For any given
    Dwarf_Global this returns the content of the applicable
    header. */
int dwarf_get_globals_header(Dwarf_Global /*global*/,
    Dwarf_Off * /*offset_pub_header*/,
    Dwarf_Unsigned * /*length_size*/,
    Dwarf_Unsigned * /*length_pub*/,
    Dwarf_Unsigned * /*version*/,
    Dwarf_Unsigned * /*header_info_offset*/,
    Dwarf_Unsigned * /*info_length*/,
    Dwarf_Error* /*error*/);

/* Static function name operations.  */
int dwarf_get_funcs(Dwarf_Debug /*dbg*/,
    Dwarf_Func** /*funcs*/,
    Dwarf_Signed * /*number_of_funcs*/,
    Dwarf_Error* /*error*/);
void dwarf_funcs_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Func* /*funcs*/,
    Dwarf_Signed /*number_of_funcs*/);

int dwarf_funcname(Dwarf_Func /*func*/,
    char ** /*returned_name*/,
    Dwarf_Error* /*error*/);

int dwarf_func_die_offset(Dwarf_Func /*func*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_func_cu_offset(Dwarf_Func /*func*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_func_name_offsets(Dwarf_Func /*func*/,
    char ** /*returned_name*/,
    Dwarf_Off* /*die_offset*/,
    Dwarf_Off* /*cu_offset*/,
    Dwarf_Error* /*error*/);

/*  jUser-defined type name operations,
    SGI IRIX .debug_typenames section.

    Same content as DWARF3 .debug_pubtypes, but
    defined years before .debug_pubtypes was defined.
    SGI IRIX only. */
int dwarf_get_types(Dwarf_Debug /*dbg*/,
    Dwarf_Type** /*types*/,
    Dwarf_Signed * /*number_of_types*/,
    Dwarf_Error* /*error*/);
void dwarf_types_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Type* /*types*/,
    Dwarf_Signed /*number_of_types*/);


int dwarf_typename(Dwarf_Type /*type*/,
    char ** /*returned_name*/,
    Dwarf_Error* /*error*/);

int dwarf_type_die_offset(Dwarf_Type /*type*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_type_cu_offset(Dwarf_Type /*type*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_type_name_offsets(Dwarf_Type /*type*/,
    char ** /*returned_name*/,
    Dwarf_Off* /*die_offset*/,
    Dwarf_Off* /*cu_offset*/,
    Dwarf_Error* /*error*/);

/* User-defined type name operations, DWARF3  .debug_pubtypes section.
*/
int dwarf_get_pubtypes(Dwarf_Debug /*dbg*/,
    Dwarf_Type** /*types*/,
    Dwarf_Signed * /*number_of_types*/,
    Dwarf_Error* /*error*/);
void dwarf_pubtypes_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Type* /*pubtypes*/,
    Dwarf_Signed /*number_of_pubtypes*/);


int dwarf_pubtypename(Dwarf_Type /*type*/,
    char ** /*returned_name*/,
    Dwarf_Error* /*error*/);

int dwarf_pubtype_type_die_offset(Dwarf_Type /*type*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_pubtype_cu_offset(Dwarf_Type /*type*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_pubtype_name_offsets(Dwarf_Type /*type*/,
    char ** /*returned_name*/,
    Dwarf_Off* /*die_offset*/,
    Dwarf_Off* /*cu_offset*/,
    Dwarf_Error* /*error*/);

/* File-scope static variable name operations.  */
int dwarf_get_vars(Dwarf_Debug /*dbg*/,
    Dwarf_Var** /*vars*/,
    Dwarf_Signed * /*number_of_vars*/,
    Dwarf_Error* /*error*/);
void dwarf_vars_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Var* /*vars*/,
    Dwarf_Signed /*number_of_vars*/);


int dwarf_varname(Dwarf_Var /*var*/,
    char ** /*returned_name*/,
    Dwarf_Error* /*error*/);

int dwarf_var_die_offset(Dwarf_Var /*var*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_var_cu_offset(Dwarf_Var /*var*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_var_name_offsets(Dwarf_Var /*var*/,
    char ** /*returned_name*/,
    Dwarf_Off* /*die_offset*/,
    Dwarf_Off* /*cu_offset*/,
    Dwarf_Error* /*error*/);

/* weak name operations.  */
int dwarf_get_weaks(Dwarf_Debug /*dbg*/,
    Dwarf_Weak** /*weaks*/,
    Dwarf_Signed * /*number_of_weaks*/,
    Dwarf_Error* /*error*/);
void dwarf_weaks_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Weak* /*weaks*/,
    Dwarf_Signed /*number_of_weaks*/);


int dwarf_weakname(Dwarf_Weak /*weak*/,
    char ** /*returned_name*/,
    Dwarf_Error* /*error*/);

int dwarf_weak_die_offset(Dwarf_Weak /*weak*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_weak_cu_offset(Dwarf_Weak /*weak*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_weak_name_offsets(Dwarf_Weak /*weak*/,
    char ** /*returned_name*/,
    Dwarf_Off* /*die_offset*/,
    Dwarf_Off* /*cu_offset*/,
    Dwarf_Error* /*error*/);

/*  location list section operation.  (.debug_loc access)
    DO NOT USE, it cannot deal with
    recent dwarf or CUs with different
    address sizes.  Use dwarf_get_locdesc_entry_c() instead.
*/
int dwarf_get_loclist_entry(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*offset*/,
    Dwarf_Addr* /*hipc*/,
    Dwarf_Addr* /*lopc*/,
    Dwarf_Ptr* /*data*/,
    Dwarf_Unsigned* /*entry_len*/,
    Dwarf_Unsigned* /*next_entry*/,
    Dwarf_Error* /*error*/);

/* abbreviation section operations */
int dwarf_get_abbrev(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*offset*/,
    Dwarf_Abbrev * /*returned_abbrev*/,
    Dwarf_Unsigned* /*length*/,
    Dwarf_Unsigned* /*attr_count*/,
    Dwarf_Error* /*error*/);

int dwarf_get_abbrev_tag(Dwarf_Abbrev /*abbrev*/,
    Dwarf_Half* /*return_tag_number*/,
    Dwarf_Error* /*error*/);
int dwarf_get_abbrev_code(Dwarf_Abbrev /*abbrev*/,
    Dwarf_Unsigned* /*return_code_number*/,
    Dwarf_Error* /*error*/);

/* See comments in dwarf_abbrev.c. Not an entirely safe function. */
int dwarf_get_abbrev_count(Dwarf_Debug /*dbg*/);

int dwarf_get_abbrev_children_flag(Dwarf_Abbrev /*abbrev*/,
    Dwarf_Signed* /*return_flag*/,
    Dwarf_Error* /*error*/);

/*  New August 2019.
    Most uses will call with filter_outliers non-zero.
    In that case impossible values return DW_DLV_ERROR.
    Those doing extra things (like dwarfdump) will
    call with filter_outliers zero to get the raw data
    (effectively); */
int dwarf_get_abbrev_entry_b(Dwarf_Abbrev /*abbrev*/,
    Dwarf_Unsigned /*indx*/,
    Dwarf_Bool /*filter_outliers*/,
    Dwarf_Unsigned * /*returned_attr_num*/,
    Dwarf_Unsigned * /*returned_form*/,
    Dwarf_Signed * /*returned_implicit_const*/,
    Dwarf_Off * /*offset*/,
    Dwarf_Error * /*error*/);

/*  Obsolete because it cannot return the
    DW_FORM_implicit_const value. */
int dwarf_get_abbrev_entry(Dwarf_Abbrev /*abbrev*/,
    Dwarf_Signed /*index*/,
    Dwarf_Half * /*returned_attr_num*/,
    Dwarf_Signed* /*form*/,
    Dwarf_Off* /*offset*/,
    Dwarf_Error* /*error*/);

int dwarf_get_string_section_name(Dwarf_Debug /*dbg*/,
    const char ** /*section_name_out*/,
    Dwarf_Error * /*error*/);

/* consumer string section operation */
int dwarf_get_str(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*offset*/,
    char** /*string*/,
    Dwarf_Signed * /*strlen_of_string*/,
    Dwarf_Error* /*error*/);

/* New November 2015 */
int dwarf_get_frame_section_name(Dwarf_Debug /*dbg*/,
    const char ** /*section_name_out*/,
    Dwarf_Error * /*error*/);

/* New November 2015 */
int dwarf_get_frame_section_name_eh_gnu(Dwarf_Debug /*dbg*/,
    const char ** /*section_name_out*/,
    Dwarf_Error * /*error*/);

/*  Consumer op on  gnu .eh_frame info */
int dwarf_get_fde_list_eh(
    Dwarf_Debug /*dbg*/,
    Dwarf_Cie** /*cie_data*/,
    Dwarf_Signed* /*cie_element_count*/,
    Dwarf_Fde** /*fde_data*/,
    Dwarf_Signed* /*fde_element_count*/,
    Dwarf_Error* /*error*/);


/*  consumer operations on frame info: .debug_frame */
int dwarf_get_fde_list(Dwarf_Debug /*dbg*/,
    Dwarf_Cie** /*cie_data*/,
    Dwarf_Signed* /*cie_element_count*/,
    Dwarf_Fde** /*fde_data*/,
    Dwarf_Signed* /*fde_element_count*/,
    Dwarf_Error* /*error*/);

/*  Release storage gotten by dwarf_get_fde_list_eh() or
    dwarf_get_fde_list() */
void dwarf_fde_cie_list_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Cie * /*cie_data*/,
    Dwarf_Signed /*cie_element_count*/,
    Dwarf_Fde * /*fde_data*/,
    Dwarf_Signed /*fde_element_count*/);



int dwarf_get_fde_range(Dwarf_Fde /*fde*/,
    Dwarf_Addr* /*low_pc*/,
    Dwarf_Unsigned* /*func_length*/,
    Dwarf_Ptr* /*fde_bytes*/,
    Dwarf_Unsigned* /*fde_byte_length*/,
    Dwarf_Off* /*cie_offset*/,
    Dwarf_Signed* /*cie_index*/,
    Dwarf_Off* /*fde_offset*/,
    Dwarf_Error* /*error*/);

/*  Useful for IRIX only:  see dwarf_get_cie_augmentation_data()
    dwarf_get_fde_augmentation_data() for GNU .eh_frame. */
int dwarf_get_fde_exception_info(Dwarf_Fde /*fde*/,
    Dwarf_Signed* /* offset_into_exception_tables */,
    Dwarf_Error* /*error*/);


int dwarf_get_cie_of_fde(Dwarf_Fde /*fde*/,
    Dwarf_Cie * /*cie_returned*/,
    Dwarf_Error* /*error*/);

int dwarf_get_cie_info_b(Dwarf_Cie /*cie*/,
    Dwarf_Unsigned * /*bytes_in_cie*/,
    Dwarf_Small* /*version*/,
    char ** /*augmenter*/,
    Dwarf_Unsigned* /*code_alignment_factor*/,
    Dwarf_Signed* /*data_alignment_factor*/,
    Dwarf_Half* /*return_address_register_rule*/,
    Dwarf_Ptr* /*initial_instructions*/,
    Dwarf_Unsigned* /*initial_instructions_length*/,
    Dwarf_Half* /*offset_size*/,
    Dwarf_Error* /*error*/);
int dwarf_get_cie_info(Dwarf_Cie /*cie*/,
    Dwarf_Unsigned * /*bytes_in_cie*/,
    Dwarf_Small* /*version*/,
    char ** /*augmenter*/,
    Dwarf_Unsigned* /*code_alignment_factor*/,
    Dwarf_Signed* /*data_alignment_factor*/,
    Dwarf_Half* /*return_address_register_rule*/,
    Dwarf_Ptr* /*initial_instructions*/,
    Dwarf_Unsigned* /*initial_instructions_length*/,
    Dwarf_Error* /*error*/);

/* dwarf_get_cie_index new September 2009. */
int dwarf_get_cie_index(
    Dwarf_Cie /*cie*/,
    Dwarf_Signed* /*index*/,
    Dwarf_Error* /*error*/ );


int dwarf_get_fde_instr_bytes(Dwarf_Fde /*fde*/,
    Dwarf_Ptr * /*outinstrs*/, Dwarf_Unsigned * /*outlen*/,
    Dwarf_Error * /*error*/);

int dwarf_get_fde_info_for_all_regs(Dwarf_Fde /*fde*/,
    Dwarf_Addr /*pc_requested*/,
    Dwarf_Regtable* /*reg_table*/,
    Dwarf_Addr* /*row_pc*/,
    Dwarf_Error* /*error*/);

int dwarf_get_fde_info_for_all_regs3(Dwarf_Fde /*fde*/,
    Dwarf_Addr /*pc_requested*/,
    Dwarf_Regtable3* /*reg_table*/,
    Dwarf_Addr* /*row_pc*/,
    Dwarf_Error* /*error*/);

/*  In this older interface DW_FRAME_CFA_COL is a meaningful
    column (which does not work well with DWARF3 or
    non-MIPS architectures). */
int dwarf_get_fde_info_for_reg(Dwarf_Fde /*fde*/,
    Dwarf_Half /*table_column*/,
    Dwarf_Addr /*pc_requested*/,
    Dwarf_Signed* /*offset_relevant*/,
    Dwarf_Signed* /*register*/,
    Dwarf_Signed* /*offset*/,
    Dwarf_Addr* /*row_pc*/,
    Dwarf_Error* /*error*/);

/*  See discussion of dw_value_type, libdwarf.h.
    Use of DW_FRAME_CFA_COL is not meaningful in this interface.
    See dwarf_get_fde_info_for_cfa_reg3().  */
/*  dwarf_get_fde_info_for_reg3 is useful on a single column, but
    it is inefficient to iterate across all table_columns using this
    function.  Instead call dwarf_get_fde_info_for_all_regs3()
    and index into the table it fills in. */
int dwarf_get_fde_info_for_reg3(Dwarf_Fde /*fde*/,
    Dwarf_Half /*table_column*/,
    Dwarf_Addr /*pc_requested*/,
    Dwarf_Small * /*value_type*/,
    Dwarf_Signed * /*offset_relevant*/,
    Dwarf_Signed * /*register*/,
    Dwarf_Signed * /*offset_or_block_len*/,
    Dwarf_Ptr * /*block_ptr */,
    Dwarf_Addr * /*row_pc_out*/,
    Dwarf_Error * /*error*/);

int dwarf_get_fde_info_for_reg3_b(Dwarf_Fde /*fde*/,
    Dwarf_Half /*table_column*/,
    Dwarf_Addr /*pc_requested*/,
    Dwarf_Small * /*value_type*/,
    Dwarf_Signed * /*offset_relevant*/,
    Dwarf_Signed * /*register*/,
    Dwarf_Signed * /*offset_or_block_len*/,
    Dwarf_Ptr * /*block_ptr */,
    Dwarf_Addr * /*row_pc_out*/,
    Dwarf_Bool * /* has_more_rows */,
    Dwarf_Addr * /* subsequent_pc */,
    Dwarf_Error * /*error*/);

/*  Use this or the next function to get the cfa.
    New function, June 11, 2016*/
int dwarf_get_fde_info_for_cfa_reg3_b(Dwarf_Fde /*fde*/,
    Dwarf_Addr /*pc_requested*/,
    Dwarf_Small * /*value_type*/,
    Dwarf_Signed * /*offset_relevant*/,
    Dwarf_Signed* /*register*/,
    Dwarf_Signed* /*offset_or_block_len*/,
    Dwarf_Ptr * /*block_ptr */,
    Dwarf_Addr* /*row_pc_out*/,
    Dwarf_Bool * /* has_more_rows */,
    Dwarf_Addr * /* subsequent_pc */,
    Dwarf_Error* /*error*/);
/*  Use this to get the cfa. Or the above function. */
int dwarf_get_fde_info_for_cfa_reg3(Dwarf_Fde /*fde*/,
    Dwarf_Addr /*pc_requested*/,
    Dwarf_Small * /*value_type*/,
    Dwarf_Signed * /*offset_relevant*/,
    Dwarf_Signed* /*register*/,
    Dwarf_Signed* /*offset_or_block_len*/,
    Dwarf_Ptr * /*block_ptr */,
    Dwarf_Addr* /*row_pc_out*/,
    Dwarf_Error* /*error*/);

int dwarf_get_fde_for_die(Dwarf_Debug /*dbg*/,
    Dwarf_Die /*subr_die */,
    Dwarf_Fde * /*returned_fde*/,
    Dwarf_Error* /*error*/);

int dwarf_get_fde_n(Dwarf_Fde* /*fde_data*/,
    Dwarf_Unsigned /*fde_index*/,
    Dwarf_Fde * /*returned_fde*/,
    Dwarf_Error* /*error*/);

int dwarf_get_fde_at_pc(Dwarf_Fde* /*fde_data*/,
    Dwarf_Addr /*pc_of_interest*/,
    Dwarf_Fde * /*returned_fde*/,
    Dwarf_Addr* /*lopc*/,
    Dwarf_Addr* /*hipc*/,
    Dwarf_Error* /*error*/);

/*  GNU .eh_frame augmentation information, raw form, see
    Linux Standard Base Core Specification version 3.0 . */
int dwarf_get_cie_augmentation_data(Dwarf_Cie /* cie*/,
    Dwarf_Small ** /* augdata */,
    Dwarf_Unsigned * /* augdata_len */,
    Dwarf_Error* /*error*/);
/*  GNU .eh_frame augmentation information, raw form, see
    Linux Standard Base Core Specification version 3.0 . */
int dwarf_get_fde_augmentation_data(Dwarf_Fde /* fde*/,
    Dwarf_Small ** /* augdata */,
    Dwarf_Unsigned * /* augdata_len */,
    Dwarf_Error* /*error*/);

int dwarf_expand_frame_instructions(Dwarf_Cie /*cie*/,
    Dwarf_Ptr /*instruction*/,
    Dwarf_Unsigned /*i_length*/,
    Dwarf_Frame_Op** /*returned_op_list*/,
    Dwarf_Signed* /*op_count*/,
    Dwarf_Error* /*error*/);

/*  Operations on .debug_aranges. */
int dwarf_get_aranges(Dwarf_Debug /*dbg*/,
    Dwarf_Arange** /*aranges*/,
    Dwarf_Signed * /*arange_count*/,
    Dwarf_Error* /*error*/);

int dwarf_get_ranges_section_name(Dwarf_Debug /*dbg*/,
    const char ** /*section_name_out*/,
    Dwarf_Error * /*error*/);

int dwarf_get_aranges_section_name(Dwarf_Debug /*dbg*/,
    const char ** /*section_name_out*/,
    Dwarf_Error * /*error*/);



int dwarf_get_arange(
    Dwarf_Arange* /*aranges*/,
    Dwarf_Unsigned /*arange_count*/,
    Dwarf_Addr /*address*/,
    Dwarf_Arange * /*returned_arange*/,
    Dwarf_Error* /*error*/);

int dwarf_get_cu_die_offset(
    Dwarf_Arange /*arange*/,
    Dwarf_Off* /*return_offset*/,
    Dwarf_Error* /*error*/);

int dwarf_get_arange_cu_header_offset(
    Dwarf_Arange /*arange*/,
    Dwarf_Off* /*return_cu_header_offset*/,
    Dwarf_Error* /*error*/);




/*  DWARF2,3 interface. No longer really adequate (it was never
    right for segmented address spaces, please switch
    to using dwarf_get_arange_info_b instead.
    There is no effective difference between these
    functions  if the address space
    of the target is not segmented.  */
int dwarf_get_arange_info(
    Dwarf_Arange /*arange*/,
    Dwarf_Addr* /*start*/,
    Dwarf_Unsigned* /*length*/,
    Dwarf_Off* /*cu_die_offset*/,
    Dwarf_Error* /*error*/ );

/*  New for DWARF4, entries may have segment information.
    *segment is only meaningful if *segment_entry_size is non-zero. */
int dwarf_get_arange_info_b(
    Dwarf_Arange /*arange*/,
    Dwarf_Unsigned* /*segment*/,
    Dwarf_Unsigned* /*segment_entry_size*/,
    Dwarf_Addr * /*start*/,
    Dwarf_Unsigned* /*length*/,
    Dwarf_Off * /*cu_die_offset*/,
    Dwarf_Error * /*error*/ );

/*  BEGIN: DWARF5 .debug_macro  interfaces
    NEW November 2015.  */
int dwarf_get_macro_context(Dwarf_Die /*die*/,
    Dwarf_Unsigned * /*version_out*/,
    Dwarf_Macro_Context * /*macro_context*/,
    Dwarf_Unsigned * /*macro_unit_offset_out*/,
    Dwarf_Unsigned * /*macro_ops_count_out*/,
    Dwarf_Unsigned * /*macro_ops_data_length_out*/,
    Dwarf_Error * /*error*/);

/*  Just like dwarf_get_macro_context, but instead of using
    DW_AT_macros or DW_AT_GNU_macros to get the offset we just
    take the offset given. */
int dwarf_get_macro_context_by_offset(Dwarf_Die /*die*/,
    Dwarf_Unsigned /*offset*/,
    Dwarf_Unsigned * /*version_out*/,
    Dwarf_Macro_Context * /*macro_context*/,
    Dwarf_Unsigned * /*macro_ops_count_out*/,
    Dwarf_Unsigned * /*macro_ops_data_length*/,
    Dwarf_Error * /*error*/);


/*  New December 2020. Sometimes its necessary to know
    a context total length including macro 5 header */
int dwarf_macro_context_total_length(Dwarf_Macro_Context /*head*/,
    Dwarf_Unsigned * /*mac_total_len*/,
    Dwarf_Error * /*error*/);

void dwarf_dealloc_macro_context(Dwarf_Macro_Context /*mc*/);
int dwarf_get_macro_section_name(Dwarf_Debug /*dbg*/,
    const char ** /*sec_name_out*/,
    Dwarf_Error * /*err*/);

int dwarf_macro_context_head(Dwarf_Macro_Context /*head*/,
    Dwarf_Half * /*version*/,
    Dwarf_Unsigned * /*mac_offset*/,
    Dwarf_Unsigned * /*mac_len*/,
    Dwarf_Unsigned * /*mac_header_len*/,
    unsigned int * /*flags*/,
    Dwarf_Bool * /*has_line_offset*/,
    Dwarf_Unsigned * /*line_offset*/,
    Dwarf_Bool * /*has_offset_size_64*/,
    Dwarf_Bool * /*has_operands_table*/,
    Dwarf_Half * /*opcode_count*/,
    Dwarf_Error * /*error*/);

/*  Returns data from the operands table
    in the macro unit header. The last op has
    0 as opcode_number,operand_count and operand_array */
int dwarf_macro_operands_table(Dwarf_Macro_Context /*head*/,
    Dwarf_Half /*index*/, /* 0 to opcode_count -1 */
    Dwarf_Half * /*opcode_number*/,
    Dwarf_Half * /*operand_count*/,
    const Dwarf_Small ** /*operand_array*/,
    Dwarf_Error * /*error*/);

/*  Access to the macro operations, 0 to macro_ops_count_out-1
    Where the last of these will have macro_operator 0 (which appears
    in the ops data and means end-of-ops).
    op_start_section_offset is the section offset of
    the macro operator (which is a single unsigned byte,
    and is followed by the macro operand data). */
int dwarf_get_macro_op(Dwarf_Macro_Context /*macro_context*/,
    Dwarf_Unsigned /*op_number*/,
    Dwarf_Unsigned * /*op_start_section_offset*/,
    Dwarf_Half * /*macro_operator*/,
    Dwarf_Half * /*forms_count*/,
    const Dwarf_Small ** /*formcode_array*/,
    Dwarf_Error * /*error*/);

int dwarf_get_macro_defundef(Dwarf_Macro_Context /*macro_context*/,
    Dwarf_Unsigned /*op_number*/,
    Dwarf_Unsigned * /*line_number*/,
    Dwarf_Unsigned * /*index*/,
    Dwarf_Unsigned * /*offset*/,
    Dwarf_Half * /*forms_count*/,
    const char ** /*macro_string*/,
    Dwarf_Error * /*error*/);
int dwarf_get_macro_startend_file(
    Dwarf_Macro_Context /*macro_context*/,
    Dwarf_Unsigned /*op_number*/,
    Dwarf_Unsigned * /*line_number*/,
    Dwarf_Unsigned * /*name_index_to_line_tab*/,
    const char ** /*src_file_name*/,
    Dwarf_Error * /*error*/);
int dwarf_get_macro_import(Dwarf_Macro_Context /*macro_context*/,
    Dwarf_Unsigned /*op_number*/,
    Dwarf_Unsigned * /*target_offset*/,
    Dwarf_Error * /*error*/);

/*  END: DWARF5 .debug_macro interfaces. */

/* consumer .debug_macinfo information interface.
*/
struct Dwarf_Macro_Details_s {
    Dwarf_Off dmd_offset; /* offset, in the section,
        of this macro info */
    Dwarf_Small dmd_type; /* the type, DW_MACINFO_define etc*/
    Dwarf_Signed dmd_lineno; /* the source line number where
        applicable and vend_def number if
        vendor_extension op */

    Dwarf_Signed dmd_fileindex;/* the source file index:
        applies to define undef start_file */
    char * dmd_macro; /* macro name (with value for defineop)
        string from vendor ext */
};

/*  dwarf_print_lines is for use by dwarfdump: it prints
    line info to stdout.
    The _dwarf name is obsolete. Use dwarf_ instead.
    Added extra argnument 2/2009 for better checking.
*/
int _dwarf_print_lines(Dwarf_Die /*cu_die*/,Dwarf_Error * /*error*/);
int dwarf_print_lines(Dwarf_Die /*cu_die*/,Dwarf_Error * /*error*/,
    int * /*error_count_out */);

/*  As of August 2013, dwarf_print_lines() no longer uses printf.
    Instead it calls back to the application using a function
    pointer once per line-to-print.  The lines passed back
    already have any needed
    newlines.    The following struct is used to initialize
    the callback mechanism.

    Failing to call the dwarf_register_printf_callback()
    function will prevent the lines from being passed back
    but such omission is not an error.
    See libdwarf2.1.mm for further documentation.

    The return value is the previous set of callback values.
*/

typedef void (* dwarf_printf_callback_function_type)
    (void * /*user_pointer*/, const char * /*linecontent*/);

struct Dwarf_Printf_Callback_Info_s {
    void * dp_user_pointer;
    dwarf_printf_callback_function_type dp_fptr;
    char * dp_buffer;
    unsigned int dp_buffer_len;
    int dp_buffer_user_provided;
    void * dp_reserved;
};

/*  If called with a NULL newvalues pointer, it simply returns
    the current set of values for this Dwarf_Debug. */
struct Dwarf_Printf_Callback_Info_s
dwarf_register_printf_callback(Dwarf_Debug /*dbg*/,
    struct Dwarf_Printf_Callback_Info_s * /*newvalues*/);


/*  dwarf_check_lineheader lets dwarfdump get detailed messages
    about some compiler errors we detect.
    We return the count of detected errors through the
    pointer.

    Use dwarf_check_lineheader_b() (new 14 April 2020)
    in place of dwarf_check_lineheader().
*/
int dwarf_check_lineheader_b(Dwarf_Die /*cu_die*/,
    int * /*errcount_out*/,
    Dwarf_Error * /*error*/);
void dwarf_check_lineheader(Dwarf_Die /*cu_die*/,
    int * /*errcount_out*/);

/*  dwarf_ld_sort_lines helps SGI IRIX ld
    rearrange lines in .debug_line in a .o created with a text
    section per function.
        -OPT:procedure_reorder=ON
    where ld-cord (cord(1)ing by ld,
    not by cord(1)) may have changed the function order.
    The _dwarf name is obsolete. Use dwarf_ instead.
*/
int _dwarf_ld_sort_lines(
    void * /*orig_buffer*/,
    unsigned long /* buffer_len*/,
    int /*is_64_bit*/,
    int * /*any_change*/,
    int * /*err_code*/);
int dwarf_ld_sort_lines(
    void * /*orig_buffer*/,
    unsigned long /*buffer_len*/,
    int /*is_64_bit*/,
    int * /*any_change*/,
    int * /*err_code*/);

/* Used by dwarfdump -v to print fde offsets from debugging
   info.
   The _dwarf name is obsolete. Use dwarf_ instead.
*/
int _dwarf_fde_section_offset(Dwarf_Debug /*dbg*/,
    Dwarf_Fde /*in_fde*/,
    Dwarf_Off * /*fde_off*/,
    Dwarf_Off * /*cie_off*/,
    Dwarf_Error * /*err*/);

int dwarf_fde_section_offset(Dwarf_Debug /*dbg*/,
    Dwarf_Fde /*in_fde*/,
    Dwarf_Off * /*fde_off*/,
    Dwarf_Off * /*cie_off*/,
    Dwarf_Error * /*err*/);

/* Used by dwarfdump -v to print cie offsets from debugging
   info.
   The _dwarf name is obsolete. Use dwarf_ instead.
*/
int dwarf_cie_section_offset(Dwarf_Debug /*dbg*/,
    Dwarf_Cie /*in_cie*/,
    Dwarf_Off * /*cie_off */,
    Dwarf_Error * /*err*/);
int _dwarf_cie_section_offset(Dwarf_Debug /*dbg*/,
    Dwarf_Cie /*in_cie*/,
    Dwarf_Off * /*cie_off*/,
    Dwarf_Error * /*err*/);

typedef struct Dwarf_Macro_Details_s Dwarf_Macro_Details;

char *dwarf_find_macro_value_start(char * /*macro_string*/);

int dwarf_get_macro_details(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*macro_offset*/,
    Dwarf_Unsigned /*maximum_count*/,
    Dwarf_Signed * /*entry_count*/,
    Dwarf_Macro_Details ** /*details*/,
    Dwarf_Error * /*err*/);


/*  dwarf_get_offset_size() New October 2015 */
int dwarf_get_offset_size(Dwarf_Debug /*dbg*/,
    Dwarf_Half * /*offset_size*/,
    Dwarf_Error * /*error*/);
int dwarf_get_address_size(Dwarf_Debug /*dbg*/,
    Dwarf_Half * /*addr_size*/,
    Dwarf_Error * /*error*/);
int dwarf_get_die_address_size(Dwarf_Die /*die*/,
    Dwarf_Half * /*addr_size*/,
    Dwarf_Error * /*error*/);

enum Dwarf_Form_Class dwarf_get_form_class(
    Dwarf_Half /* dwversion */,
    Dwarf_Half /* attrnum */,
    Dwarf_Half /*offset_size */,
    Dwarf_Half /*form*/);


/*   BEGIN gdbindex operations interfaces. */
/*  .gdb_index section operations.
    A GDB extension. Completely different than
    .debug_gnu_pubnames or .debug_gnu_pubtypes sections.
    The section is in some executables and if present
    is used to quickly map an address or name to
    a skeleton CU or TU.  If present then there are
    .dwo or .dwp files somewhere to make detailed
    debugging possible (up to user code to
    find it/them and deal with them).

    Version 8 built by gdb, so type entries are ok as is.
    Version 7 built by the 'gold' linker and type index
    entries for a CU must be derived othewise, the
    type index is not correct... ? FIXME
    */

/*  Creates a Dwarf_Gdbindex, returning it and
    its values through the pointers. */
int dwarf_gdbindex_header(Dwarf_Debug /*dbg*/,
    Dwarf_Gdbindex * /*gdbindexptr*/,
    Dwarf_Unsigned * /*version*/,
    Dwarf_Unsigned * /*cu_list_offset*/,
    Dwarf_Unsigned * /*types_cu_list_offset*/,
    Dwarf_Unsigned * /*address_area_offset*/,
    Dwarf_Unsigned * /*symbol_table_offset*/,
    Dwarf_Unsigned * /*constant_pool_offset*/,
    Dwarf_Unsigned * /*section_size*/,
    Dwarf_Unsigned * /*unused_reserved*/,
    const char ** /*section_name*/,
    Dwarf_Error * /*error*/);

int dwarf_gdbindex_culist_array(Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned * /*list_length*/,
    Dwarf_Error * /*error*/);

/*  entryindex: 0 to list_length-1 */
int dwarf_gdbindex_culist_entry(Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned /*entryindex*/,
    Dwarf_Unsigned * /*cu_offset*/,
    Dwarf_Unsigned * /*cu_length*/,
    Dwarf_Error * /*error*/);

int dwarf_gdbindex_types_culist_array(Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned * /*types_list_length*/,
    Dwarf_Error * /*error*/);

/*  entryindex: 0 to types_list_length -1 */
int dwarf_gdbindex_types_culist_entry(
    Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned /*entryindex*/,
    Dwarf_Unsigned * /*cu_offset*/,
    Dwarf_Unsigned * /*tu_offset*/,
    Dwarf_Unsigned * /*type_signature*/,
    Dwarf_Error * /*error*/);

int dwarf_gdbindex_addressarea(Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned * /*addressarea_list_length*/,
    Dwarf_Error * /*error*/);

/*    entryindex: 0 to addressarea_list_length-1 */
int dwarf_gdbindex_addressarea_entry(
    Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned /*entryindex*/,
    Dwarf_Unsigned * /*low_adddress*/,
    Dwarf_Unsigned * /*high_address*/,
    Dwarf_Unsigned * /*cu_index*/,
    Dwarf_Error * /*error*/);

int dwarf_gdbindex_symboltable_array(Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned * /*symtab_list_length*/,
    Dwarf_Error * /*error*/);

/*  entryindex: 0 to symtab_list_length-1 */
int dwarf_gdbindex_symboltable_entry(
    Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned /*entryindex*/,
    Dwarf_Unsigned * /*string_offset*/,
    Dwarf_Unsigned * /*cu_vector_offset*/,
    Dwarf_Error * /*error*/);

int dwarf_gdbindex_cuvector_length(Dwarf_Gdbindex /*gdbindex*/,
    Dwarf_Unsigned /*cuvector_offset*/,
    Dwarf_Unsigned * /*innercount*/,
    Dwarf_Error * /*error*/);


int dwarf_gdbindex_cuvector_inner_attributes(
    Dwarf_Gdbindex /*gdbindex*/,
    Dwarf_Unsigned /*cuvector_offset*/,
    Dwarf_Unsigned /*innerindex*/,
    /* The attr_value is a field of bits. For expanded version
        use  dwarf_gdbindex_cuvector_expand_value() */
    Dwarf_Unsigned * /*attr_value*/,
    Dwarf_Error * /*error*/);

int dwarf_gdbindex_cuvector_instance_expand_value(
    Dwarf_Gdbindex /*gdbindex*/,
    Dwarf_Unsigned /*value*/,
    Dwarf_Unsigned * /*cu_index*/,
    Dwarf_Unsigned * /*reserved1*/,
    Dwarf_Unsigned * /*symbol_kind*/,
    Dwarf_Unsigned * /*is_static*/,
    Dwarf_Error * /*error*/);


/*  The strings in the pool follow (in memory) the cu index
    set and are NUL terminated. */

int dwarf_gdbindex_string_by_offset(Dwarf_Gdbindex /*gdbindexptr*/,
    Dwarf_Unsigned /*stringoffset*/,
    const char ** /*string_ptr*/,
    Dwarf_Error * /*error*/);

void dwarf_gdbindex_free(Dwarf_Gdbindex /*gdbindexptr*/);

/*  END gdbindex/debugfission operations. */

/*  START debugfission dwp .debug_cu_index
    and .debug_tu_index operations. */

int dwarf_get_xu_index_header(Dwarf_Debug /*dbg*/,
    const char * section_type, /* "tu" or "cu" */
    Dwarf_Xu_Index_Header * /*xuhdr*/,
    Dwarf_Unsigned * /*version_number*/,
    Dwarf_Unsigned * /*offsets_count L*/,
    Dwarf_Unsigned * /*units_count N*/,
    Dwarf_Unsigned * /*hash_slots_count M*/,
    const char ** /*sect_name*/,
    Dwarf_Error * /*err*/);

int dwarf_get_xu_index_section_type(Dwarf_Xu_Index_Header /*xuhdr*/,
    /*  the function returns a pointer to
        the immutable string "tu" or "cu" via this arg.
        Do not free.  */
    const char ** /*typename*/,
    /*  the function returns a pointer to
        the immutable section name. Do not free.
        .debug_cu_index or .debug_tu_index */
    const char ** /*sectionname*/,
    Dwarf_Error * /*err*/);

/*  Index values 0 to M-1 are valid. */
int dwarf_get_xu_hash_entry(Dwarf_Xu_Index_Header /*xuhdr*/,
    Dwarf_Unsigned /*index*/,

    /*  Returns the hash value. 64  bits.  */
    Dwarf_Sig8 * /*hash_value*/,

    /* returns the index into rows of offset/size tables. */
    Dwarf_Unsigned * /*index_to_sections*/,
    Dwarf_Error * /*err*/);

/*  Columns 0 to L-1,  valid. */
int dwarf_get_xu_section_names(Dwarf_Xu_Index_Header /*xuhdr*/,
    /* Row index defined to be row zero. */
    Dwarf_Unsigned /*column_index*/,
    Dwarf_Unsigned* /*DW_SECT_ number*/,
    const char ** /*DW_SECT_ name*/,
    Dwarf_Error * /*err*/);

    /* Rows 1 to N col 0 to L-1  are valid */
int dwarf_get_xu_section_offset(Dwarf_Xu_Index_Header /*xuhdr*/,
    Dwarf_Unsigned /*row_index*/,
    Dwarf_Unsigned /*column_index*/,
    Dwarf_Unsigned* /*sec_offset*/,
    Dwarf_Unsigned* /*sec_size*/,
    Dwarf_Error * /*err*/);

void dwarf_xu_header_free(Dwarf_Xu_Index_Header /*xuhdr*/);

/*  Defined larger than necessary. This struct, being visible,
    will be difficult to change: binary compatibility. */


/*  User must allocate this struct, zero it,
    and pass a pointer to it
    into dwarf_get_debugfission_for_cu .  */
struct Dwarf_Debug_Fission_Per_CU_s {
    /*  Do not free the string. It contains "cu" or "tu". */
    /*  If this is not set (ie, not a CU/TU in  DWP Package File)
        then pcu_type will be NULL.  */
    const char * pcu_type;
    /*  pcu_index is the index (range 1 to N )
        into the tu/cu table of offsets and the table
        of sizes.  1 to N as the zero index is reserved
        for special purposes.  Not a value one
        actually needs. */
    Dwarf_Unsigned pcu_index;
    Dwarf_Sig8 pcu_hash; /* 8 byte  */
    /*  [0] has offset and size 0.
        [1]-[8] are DW_SECT_* indexes and the
        values are  the offset and size
        of the respective section contribution
        of a single .dwo object. When pcu_size[n] is
        zero the corresponding section is not present. */
    Dwarf_Unsigned pcu_offset[12];
    Dwarf_Unsigned pcu_size[12];
    Dwarf_Unsigned unused1;
    Dwarf_Unsigned unused2;
};
typedef struct Dwarf_Debug_Fission_Per_CU_s
    Dwarf_Debug_Fission_Per_CU;
/*  For any Dwarf_Die in a compilation unit, return
    the debug fission table data through
    percu_out.   Usually applications
    will pass in the CU die.
    Calling code should zero all of the
    struct Dwarf_Debug_Fission_Per_CU_s before calling this.
    If there is no debugfission data this returns
    DW_DLV_NO_ENTRY (only .dwp objects have debugfission data).  */
int dwarf_get_debugfission_for_die(Dwarf_Die /* die */,
    Dwarf_Debug_Fission_Per_CU * /* percu_out */,
    Dwarf_Error * /* err */);

/*  Given a key (hash signature)  from a .o,
    find the per-cu information
    for the CU with that key. */
int dwarf_get_debugfission_for_key(Dwarf_Debug /*dbg*/,
    Dwarf_Sig8 * /*key, hash signature */,
    const char * key_type /*"cu" or "tu" */,
    Dwarf_Debug_Fission_Per_CU * /*percu_out */,
    Dwarf_Error * /*err */);

/*  END debugfission dwp .debug_cu_index
    and .debug_tu_index operations. */


/*  Utility operations */
Dwarf_Unsigned dwarf_errno(Dwarf_Error /*error*/);
char* dwarf_errmsg(Dwarf_Error /*error*/);
char* dwarf_errmsg_by_number(Dwarf_Unsigned /* errornum */);
void dwarf_error_creation(Dwarf_Debug /*dbg*/ ,
    Dwarf_Error * /*error*/, char * /*errmsg*/);


/*  stringcheck zero is default and means do all
    string length validity checks.
    Call with parameter value 1 to turn off many such checks (and
    increase performance).
    Call with zero for safest running.
    Actual value saved and returned is only 8 bits! Upper bits
    ignored by libdwarf (and zero on return).
    Returns previous value.  */
int dwarf_set_stringcheck(int /*stringcheck*/);

/*  'apply' defaults to 1 and means do all
    'rela' relocations on reading in a dwarf object section with
    such relocations.
    Call with parameter value 0 to turn off application of
    such relocations.
    Since the static linker leaves 'bogus' data in object sections
    with a 'rela' relocation section such data cannot be read
    sensibly without processing the relocations.  Such relocations
    do not exist in executables and shared objects (.so), the
    relocations only exist in plain .o relocatable object files.
    Actual value saved and returned is only 8 bits! Upper bits
    ignored by libdwarf (and zero on return).
    Returns previous value.  */
int dwarf_set_reloc_application(int /*apply*/);

/* Never Implemented */
Dwarf_Handler dwarf_seterrhand(Dwarf_Debug /*dbg*/,
    Dwarf_Handler /*errhand*/);

/* Unimplemented */
Dwarf_Ptr dwarf_seterrarg(Dwarf_Debug /*dbg*/, Dwarf_Ptr /*errarg*/);

void dwarf_dealloc(Dwarf_Debug /*dbg*/, void* /*space*/,
    Dwarf_Unsigned /*type*/);
/*  These convenience functions allow type checking at the call,
    whereas dwarf_dealloc itself uses void * so ...
    easy to misuse. */
void dwarf_dealloc_error(Dwarf_Debug /*dbg*/, Dwarf_Error /*err*/);
void dwarf_dealloc_die( Dwarf_Die /*die*/);
void dwarf_dealloc_attribute(Dwarf_Attribute /*attr*/);


/* DWARF Producer Interface */

/*  New form June, 2011. Adds user_data argument. */
typedef int (*Dwarf_Callback_Func)(
    const char* /*name*/,
    int /*size*/,
    Dwarf_Unsigned /*type*/,
    Dwarf_Unsigned /*flags*/,
    Dwarf_Unsigned /*link*/,
    Dwarf_Unsigned /*info*/,
    Dwarf_Unsigned* /*sect_name_index*/,
    void * /*user_data*/,
    int* /*error*/);

/*  Returns DW_DLV_OK or DW_DLV_ERROR and
    if DW_DLV_OK returns the Dwarf_P_Debug
    pointer through the dbg_returned argument. */
int dwarf_producer_init(
    Dwarf_Unsigned /*flags*/,
    Dwarf_Callback_Func /*func*/,
    Dwarf_Handler /*errhand*/,
    Dwarf_Ptr /*errarg*/,
    void * /*user_data*/,
    const char *isa_name, /* See isa/abi names in pro_init.c */
    const char *dwarf_version, /* V2 V3 V4 or V5. */
    const char *extra, /* Extra input strings, comma separated. */
    Dwarf_P_Debug *, /* dbg_returned */
    Dwarf_Error * /*error*/);

/*  Returns DW_DLV_OK or DW_DLV_ERROR.
    The desired form must be DW_FORM_string (the default)
    or DW_FORM_strp.  */
int dwarf_pro_set_default_string_form(Dwarf_P_Debug /*dbg*/,
    int /*desired_form*/,
    Dwarf_Error* /*error*/);

/*  the old interface. Still supported. */
Dwarf_Signed dwarf_transform_to_disk_form(Dwarf_P_Debug /*dbg*/,
    Dwarf_Error* /*error*/);
/*  New September 2016. The preferred interface. */
int dwarf_transform_to_disk_form_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_Signed * /*nbufs_out*/,
    Dwarf_Error* /*error*/);

/* New September 2016. Preferred. */
int dwarf_get_section_bytes_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_Signed /*dwarf_section*/,
    Dwarf_Signed* /*elf_section_index*/,
    Dwarf_Unsigned* /*length*/,
    Dwarf_Ptr * /*section_bytes*/,
    Dwarf_Error* /*error*/);

/* Original function.  Checking for error is difficult. */
Dwarf_Ptr dwarf_get_section_bytes(Dwarf_P_Debug /*dbg*/,
    Dwarf_Signed /*dwarf_section*/,
    Dwarf_Signed* /*elf_section_index*/,
    Dwarf_Unsigned* /*length*/,
    Dwarf_Error* /*error*/);

int dwarf_get_relocation_info_count(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned * /*count_of_relocation_sections*/,
    int * /*drd_buffer_version*/,
    Dwarf_Error* /*error*/);

int dwarf_get_relocation_info(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_Signed * /*elf_section_index*/,
    Dwarf_Signed * /*elf_section_index_link*/,
    Dwarf_Unsigned * /*relocation_buffer_count*/,
    Dwarf_Relocation_Data * /*reldata_buffer*/,
    Dwarf_Error* /*error*/);

/* v1:  no drd_length field, enum explicit */
/* v2:  has the drd_length field, enum value in uchar member */


/* Markers are not written  to DWARF2/3/4, they are user
   defined and may be used for any purpose.
*/
Dwarf_Signed dwarf_get_die_markers(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Marker * /*marker_list*/,
    Dwarf_Unsigned * /*marker_count*/,
    Dwarf_Error * /*error*/);

/* Preferred version December 2018. */
int dwarf_get_die_markers_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Marker * /*marker_list*/,
    Dwarf_Unsigned * /*marker_count*/,
    Dwarf_Error * /*error*/);

int dwarf_get_string_attributes_count(Dwarf_P_Debug,
    Dwarf_Unsigned *,
    int *,
    Dwarf_Error *);

int dwarf_get_string_attributes_info(Dwarf_P_Debug,
    Dwarf_Signed *,
    Dwarf_Unsigned *,
    Dwarf_P_String_Attr *,
    Dwarf_Error *);

void dwarf_reset_section_bytes(Dwarf_P_Debug /*dbg*/);

Dwarf_Unsigned dwarf_producer_finish(Dwarf_P_Debug /*dbg*/,
    Dwarf_Error* /*error*/);

/*  Returns DW_DLV_OK or DW_DLV_ERROR */
int dwarf_producer_finish_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_Error* /*error*/);

/* New July 2020 for testing DWARF5 */
int dwarf_add_debug_sup(Dwarf_P_Debug /*dbg*/,
    Dwarf_Half /*version*/,
    Dwarf_Small /*is_supplementary*/,
    char * /*filename*/,
    Dwarf_Unsigned /*checksum_len*/,
    Dwarf_Small * /*checksum*/,
    Dwarf_Error * /*error*/);

/* Producer attribute addition functions. */
Dwarf_P_Attribute dwarf_add_AT_targ_address(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*pc_value*/,
    Dwarf_Signed /*sym_index*/,
    Dwarf_Error* /*error*/);
Dwarf_P_Attribute dwarf_add_AT_targ_address_b(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*pc_value*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_targ_address_c(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*pc_value*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_block_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Small* /*block_data*/,
    Dwarf_Unsigned /*block_len*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_block(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Small* /*block_data*/,
    Dwarf_Unsigned /*block_len*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_ref_address(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*pc_value*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_ref_address_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*pc_value*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_unsigned_const(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*value*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_unsigned_const_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*value*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_signed_const(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Signed /*value*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_signed_const_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Signed /*value*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_reference(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_P_Die /*otherdie*/,
    Dwarf_Error* /*error*/);

/*  dwarf_add_AT_reference_b allows otherdie to be NULL with
    the assumption the caller will then later call
    dwarf_fixup_AT_reference_die() with a non-null target die.
    New 22 October, 2013
*/
Dwarf_P_Attribute dwarf_add_AT_reference_b(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_P_Die /*otherdie*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_reference_c(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_P_Die /*otherdie*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

/* The following is for out-of-order cu-local
   references.  Allowing nominating the target Dwarf_P_Die
   after calling dwarf_add_AT_reference with a NULL otherdie
   after a single pass thru the DIE generation. Needed
   for forward-references.
   New 22 October, 2013.
*/
int dwarf_fixup_AT_reference_die(Dwarf_P_Debug /*dbg*/,
    Dwarf_Half /* attrnum */,
    Dwarf_P_Die /* sourcedie*/,
    Dwarf_P_Die /* targetdie*/,
    Dwarf_Error * /*error*/);

Dwarf_P_Attribute dwarf_add_AT_dataref(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*pcvalue*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_dataref_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Unsigned /*pcvalue*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_const_value_string(
    Dwarf_P_Die /*ownerdie*/,
    char* /*string_value*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_const_value_string_a(
    Dwarf_P_Die /*ownerdie*/,
    char* /*string_value*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_location_expr(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_P_Expr /*loc_expr*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_location_expr_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_P_Expr /*loc_expr*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_string(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    char* /*string*/,
    Dwarf_Error* /*error*/);

/*  Preferred as of December 2018. */
int dwarf_add_AT_string_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    char* /*string*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_flag(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Small /*flag*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_flag_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attr*/,
    Dwarf_Small /*flag*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_producer(Dwarf_P_Die /*ownerdie*/,
    char* /*producer_string*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_producer_a(Dwarf_P_Die /*ownerdie*/,
    char* /*producer_string*/,
    Dwarf_P_Attribute * /*attr_out*/,
    Dwarf_Error* /*error*/);

/*  October 2017 for DW_FORM_data16. Usable with any attribute,
    though it should only be in limited use. DWARF5 only.
    Returns DW_DLV_OK on success, DW_DLV_ERROR on failure.
    Returns the new attribute pointer through *return_attr. */
int dwarf_add_AT_data16(Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attrnum*/,
    Dwarf_Form_Data16 * /* pointstovalue */,
    Dwarf_P_Attribute * /* return_attr */,
    Dwarf_Error * /*error*/);

/*  November 2018. DW_AT_implicit const generation. */
int dwarf_add_AT_implicit_const(Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attrnum*/,
    Dwarf_Signed /*signed_value*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error * /*error*/);

/* August 2013 sleb creator. For any attribute. */
Dwarf_P_Attribute dwarf_add_AT_any_value_sleb(
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attrnum*/,
    Dwarf_Signed /*signed_value*/,
    Dwarf_Error * /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_any_value_sleb_a(Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attrnum*/,
    Dwarf_Signed /*signed_value*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error * /*error*/);

/* Original sleb creator. Only for DW_AT_const_value. */
Dwarf_P_Attribute dwarf_add_AT_const_value_signedint(
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Signed /*signed_value*/,
    Dwarf_Error* /*error*/);

/*  Preferred as of December 2018. */
int dwarf_add_AT_const_value_signedint_a(Dwarf_P_Die /*ownerdie*/,
    Dwarf_Signed /*signed_value*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error* /*error*/);

/* August 2013 uleb creator. For any attribute. */
Dwarf_P_Attribute dwarf_add_AT_any_value_uleb(
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attrnum*/,
    Dwarf_Unsigned /*signed_value*/,
    Dwarf_Error * /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_any_value_uleb_a(Dwarf_P_Die /*ownerdie*/,
    Dwarf_Half /*attrnum*/,
    Dwarf_Unsigned /*signed_value*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error * /*error*/);

/* Original uleb creator. Only for DW_AT_const_value. */
Dwarf_P_Attribute dwarf_add_AT_const_value_unsignedint(
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Unsigned /*unsigned_value*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_const_value_unsignedint_a(
    Dwarf_P_Die /*ownerdie*/,
    Dwarf_Unsigned /*unsigned_value*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_comp_dir(Dwarf_P_Die /*ownerdie*/,
    char* /*current_working_directory*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_comp_dir_a(Dwarf_P_Die /*ownerdie*/,
    char* /*current_working_directory*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_name(Dwarf_P_Die /*die*/,
    char* /*name*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_name_a(Dwarf_P_Die /*die*/,
    char* /*name*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Attribute dwarf_add_AT_with_ref_sig8(
    Dwarf_P_Die /*ownerdie */,
    Dwarf_Half /*attrnum */,
    const Dwarf_Sig8 * /*sig8_in*/,
    Dwarf_Error * /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_AT_with_ref_sig8_a(
    Dwarf_P_Die /*ownerdie */,
    Dwarf_Half /*attrnum */,
    const Dwarf_Sig8 * /*sig8_in*/,
    Dwarf_P_Attribute * /*outattr*/,
    Dwarf_Error * /*error*/);


/* Producer line creation functions (.debug_line) */
Dwarf_Unsigned dwarf_add_directory_decl(Dwarf_P_Debug /*dbg*/,
    char* /*name*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_directory_decl_a(Dwarf_P_Debug /*dbg*/,
    char* /*name*/,
    Dwarf_Unsigned * /*index_in_directories*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_file_decl(Dwarf_P_Debug /*dbg*/,
    char* /*name*/,
    Dwarf_Unsigned /*dir_index*/,
    Dwarf_Unsigned /*time_last_modified*/,
    Dwarf_Unsigned /*length*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_file_decl_a(Dwarf_P_Debug /*dbg*/,
    char* /*name*/,
    Dwarf_Unsigned /*dir_index*/,
    Dwarf_Unsigned /*time_last_modified*/,
    Dwarf_Unsigned /*length*/,
    Dwarf_Unsigned * /*file_entry_count_out*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_line_entry_c(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*file_index*/,
    Dwarf_Addr /*code_address*/,
    Dwarf_Unsigned /*lineno*/,
    Dwarf_Signed /*column_number*/,
    Dwarf_Bool /*is_source_stmt_begin*/,
    Dwarf_Bool /*is_basic_block_begin*/,
    Dwarf_Bool /*is_epilogue_begin*/,
    Dwarf_Bool /*is_prologue_end*/,
    Dwarf_Unsigned /*isa*/,
    Dwarf_Unsigned /*discriminator*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_line_entry_b(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*file_index*/,
    Dwarf_Addr /*code_address*/,
    Dwarf_Unsigned /*lineno*/,
    Dwarf_Signed /*column_number*/,
    Dwarf_Bool /*is_source_stmt_begin*/,
    Dwarf_Bool /*is_basic_block_begin*/,
    Dwarf_Bool /*is_epilogue_begin*/,
    Dwarf_Bool /*is_prologue_end*/,
    Dwarf_Unsigned /*isa*/,
    Dwarf_Unsigned /*discriminator*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_line_entry(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*file_index*/,
    Dwarf_Addr /*code_address*/,
    Dwarf_Unsigned /*lineno*/,
    Dwarf_Signed /*column_number*/,
    Dwarf_Bool /*is_source_stmt_begin*/,
    Dwarf_Bool /*is_basic_block_begin*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_lne_set_address(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*offset*/,
    Dwarf_Unsigned /*symbol_index*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_lne_set_address_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*offset*/,
    Dwarf_Unsigned /*symbol_index*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_lne_end_sequence(Dwarf_P_Debug /*dbg*/,
    Dwarf_Addr /*end_address*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_lne_end_sequence_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_Addr /*end_address*/,
    Dwarf_Error* /*error*/);

/* Producer .debug_frame functions */
Dwarf_Unsigned dwarf_add_frame_cie(Dwarf_P_Debug /*dbg*/,
    char* /*augmenter*/,
    Dwarf_Small /*code_alignment_factor*/,
    Dwarf_Small /*data_alignment_factor*/,
    Dwarf_Small /*return_address_reg*/,
    Dwarf_Ptr /*initialization_bytes*/,
    Dwarf_Unsigned /*init_byte_len*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_frame_cie_a(Dwarf_P_Debug /*dbg*/,
    char* /*augmenter*/,
    Dwarf_Small /*code_alignment_factor*/,
    Dwarf_Small /*data_alignment_factor*/,
    Dwarf_Small /*return_address_reg*/,
    Dwarf_Ptr /*initialization_bytes*/,
    Dwarf_Unsigned /*init_byte_len*/,
    Dwarf_Unsigned * /*cie_index_out*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_frame_fde(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde /*fde*/,
    Dwarf_P_Die /*corresponding subprogram die*/,
    Dwarf_Unsigned /*cie_to_use*/,
    Dwarf_Unsigned /*virt_addr_of_described_code*/,
    Dwarf_Unsigned /*length_of_code*/,
    Dwarf_Unsigned /*symbol_index*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_frame_fde_b(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde /*fde*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned /*cie*/,
    Dwarf_Addr /*virt_addr*/,
    Dwarf_Unsigned /*code_len*/,
    Dwarf_Unsigned /*sym_idx*/,
    Dwarf_Unsigned /*sym_idx_of_end*/,
    Dwarf_Addr /*offset_from_end_sym*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_frame_fde_c(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde /*fde*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned /*cie*/,
    Dwarf_Addr /*virt_addr*/,
    Dwarf_Unsigned /*code_len*/,
    Dwarf_Unsigned /*sym_idx*/,
    Dwarf_Unsigned /*sym_idx_of_end*/,
    Dwarf_Addr /*offset_from_end_sym*/,
    Dwarf_Unsigned * /*index_to_fde*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_frame_info_c(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde /*fde*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned /*cie*/,
    Dwarf_Addr /*virt_addr*/,
    Dwarf_Unsigned /*code_len*/,
    Dwarf_Unsigned /*symidx*/,
    Dwarf_Unsigned /*end_symbol */,
    Dwarf_Addr /*offset_from_end_symbol */,
    Dwarf_Signed /*offset_into_exception_tables*/,
    Dwarf_Unsigned /*exception_table_symbol*/,
    Dwarf_Unsigned * /*fde_index_out*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_frame_info_b(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde /*fde*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned /*cie*/,
    Dwarf_Addr /*virt_addr*/,
    Dwarf_Unsigned /*code_len*/,
    Dwarf_Unsigned /*symidx*/,
    Dwarf_Unsigned /*end_symbol */,
    Dwarf_Addr /*offset_from_end_symbol */,
    Dwarf_Signed /*offset_into_exception_tables*/,
    Dwarf_Unsigned /*exception_table_symbol*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_frame_info(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde /*fde*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned /*cie*/,
    Dwarf_Addr /*virt_addr*/,
    Dwarf_Unsigned /*code_len*/,
    Dwarf_Unsigned /*symidx*/,
    Dwarf_Signed /*offset_into_exception_tables*/,
    Dwarf_Unsigned /*exception_table_symbol*/,
    Dwarf_Error* /*error*/);

/* The fde returned is just the one passed in. Silly. */
Dwarf_P_Fde dwarf_add_fde_inst(
    Dwarf_P_Fde /*fde*/,
    Dwarf_Small /*op*/,
    Dwarf_Unsigned /*val1*/,
    Dwarf_Unsigned /*val2*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_fde_inst_a(
    Dwarf_P_Fde /*fde*/,
    Dwarf_Small /*op*/,
    Dwarf_Unsigned /*val1*/,
    Dwarf_Unsigned /*val2*/,
    Dwarf_Error* /*error*/);

/* New September 17, 2009 */
int dwarf_insert_fde_inst_bytes(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde /*fde*/,
    Dwarf_Unsigned /*len*/,
    Dwarf_Ptr /*ibytes*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Fde dwarf_new_fde(Dwarf_P_Debug /*dbg*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_new_fde_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Fde * /*fde_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Fde dwarf_fde_cfa_offset(
    Dwarf_P_Fde /*fde*/,
    Dwarf_Unsigned /*register_number*/,
    Dwarf_Signed /*offset*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_fde_cfa_offset_a(
    Dwarf_P_Fde /*fde*/,
    Dwarf_Unsigned /*register_number*/,
    Dwarf_Signed /*offset*/,
    Dwarf_Error* /*error*/);

/*  die creation & addition routines
    dwarf_new_die_a() new September 2016.
    Preferred over dwarf_new_die(). */
int dwarf_new_die_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_Tag /*tag*/,
    Dwarf_P_Die /*parent*/,
    Dwarf_P_Die /*child*/,
    Dwarf_P_Die /*left */,
    Dwarf_P_Die /*right*/,
    Dwarf_P_Die * /*die_out*/,
    Dwarf_Error* /*error*/);

Dwarf_P_Die dwarf_new_die(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_Tag /*tag*/,
    Dwarf_P_Die /*parent*/,
    Dwarf_P_Die /*child*/,
    Dwarf_P_Die /*left */,
    Dwarf_P_Die /*right*/,
    Dwarf_Error* /*error*/);

/* New September 2016. */
int dwarf_add_die_to_debug_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Error* /*error*/);

/*  Original form.  */
Dwarf_Unsigned dwarf_add_die_to_debug(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Error* /*error*/);

/* Markers are not written  to DWARF2/3/4, they are user
   defined and may be used for any purpose.
*/
Dwarf_Unsigned dwarf_add_die_marker(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned /*marker*/,
    Dwarf_Error * /*error*/);

/*  Preferred version, new December 2018. */
int dwarf_add_die_marker_a(Dwarf_P_Debug dbg,
    Dwarf_P_Die die,
    Dwarf_Unsigned marker,
    Dwarf_Error * error);

Dwarf_Unsigned dwarf_get_die_marker(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned * /*marker*/,
    Dwarf_Error * /*error*/);

/*  Preferred version, new December 2018. */
int dwarf_get_die_marker_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    Dwarf_Unsigned * /*marker*/,
    Dwarf_Error * /*error*/);

/*  New September 2016. Preferred version */
int dwarf_die_link_a(
    Dwarf_P_Die /*die*/,
    Dwarf_P_Die /*parent*/,
    Dwarf_P_Die /*child*/,
    Dwarf_P_Die /*left*/,
    Dwarf_P_Die /*right*/,
    Dwarf_Error* /*error*/);

/*  Original version. Use dwarf_die_link_a() instead. */
Dwarf_P_Die dwarf_die_link(
    Dwarf_P_Die /*die*/,
    Dwarf_P_Die /*parent*/,
    Dwarf_P_Die /*child*/,
    Dwarf_P_Die /*left*/,
    Dwarf_P_Die /*right*/,
    Dwarf_Error* /*error*/);

void dwarf_dealloc_compressed_block(
    Dwarf_P_Debug,
    void *
);

/*  Call this passing in return value from
    dwarf_uncompress_integer_block()
    to free the space the decompression allocated. */
void dwarf_dealloc_uncompressed_block(
    Dwarf_Debug,
    void *
);

/*  dwarf_compress_integer_block_a( new 11 February 2019.
    Like the earlier version this turns an array of signed
    integers into a block of sleb values (and if the
    values are small enough it might be a compression!
    Or it could be an expansion...). Return DW_DLV_OK
    on success. Supercedes dwarf_compress_integer_block():
    as no ugly cast needed to know if
    dwarf_compress_integer_block_a() succeeds or not. */
int
dwarf_compress_integer_block_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*input_array_length*/,
    Dwarf_Signed * /*input_array*/,
    Dwarf_Unsigned * /*output_block_len*/,
    void ** /*output_block_returned*/,
    Dwarf_Error * /*error */);
/*  The following should be avoided as of February 2019. */
void * dwarf_compress_integer_block(
    Dwarf_P_Debug, /*dbg*/
    Dwarf_Bool, /*signed==true (or unsigned)*/
    Dwarf_Small, /*size of integer units: 8, 16, 32, 64*/
    void*, /*data*/
    Dwarf_Unsigned, /*number of elements*/
    Dwarf_Unsigned*, /*number of bytes in output block*/
    Dwarf_Error* /*error*/
);

/*  New February 2019.  On success returns DW_DLV_OK
    and creates an array of Dwarf_Signed values
    from the block of sleb numbers.
    This interface supercedes
    dwarf_uncompress_integer_block(). No ugly
    cast needed to know if
    dwarf_uncompress_integer_block_a() succeeds or not. */
int
dwarf_uncompress_integer_block_a(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*input_length_in_bytes*/,
    void * /*input_block*/,
    Dwarf_Unsigned * /*value_count*/,
    Dwarf_Signed ** /*value_array*/,
    Dwarf_Error * /*error*/);

/*  Decode an array of signed leb integers (so of course the
    array is not composed of fixed length values, but is instead
    a sequence of sleb values).
    Returns a DW_DLV_BADADDR on error.
    Otherwise returns a pointer to an array of 32bit integers.
    The signed argument must be non-zero (the decode
    assumes sleb integers in the input data) at this time.
    Size of integer units must be 32 (32 bits each) at this time.
    Number of bytes in block is a byte count (not array count).
    Returns number of units in output block (ie, number of elements
    of the array that the return value points to) thru the
    argument.  */
void * dwarf_uncompress_integer_block(
    Dwarf_Debug, /*dbg */
    Dwarf_Bool, /*signed==true (or unsigned) */
    Dwarf_Small, /*size of integer units: 8, 16, 32, 64 */
    void*, /*input data */
    Dwarf_Unsigned, /*number of bytes in input */
    Dwarf_Unsigned*, /*number of units in output block */
    Dwarf_Error* /*error */
);

/* Operations to create location expressions. */
Dwarf_P_Expr dwarf_new_expr(Dwarf_P_Debug /*dbg*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_new_expr_a(Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Expr * /*expr_out*/,
    Dwarf_Error* /*error*/);

void dwarf_expr_reset(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_expr_gen(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Small /*opcode*/,
    Dwarf_Unsigned /*val1*/,
    Dwarf_Unsigned /*val2*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_expr_gen_a(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Small /*opcode*/,
    Dwarf_Unsigned /*val1*/,
    Dwarf_Unsigned /*val2*/,
    Dwarf_Unsigned * /*next_byte_offset*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_expr_addr(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Unsigned /*addr*/,
    Dwarf_Signed /*sym_index*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_expr_addr_b(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Unsigned /*addr*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_Error* /*error*/);


/*  New December 2018. Preferred version. */
int dwarf_add_expr_addr_c(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Unsigned /*addr*/,
    Dwarf_Unsigned /*sym_index*/,
    Dwarf_Unsigned * /*next_byte_offset_out*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_expr_current_offset(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_expr_current_offset_a(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Unsigned * /*next_byte_offset_out*/,
    Dwarf_Error* /*error*/);

Dwarf_Addr dwarf_expr_into_block(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Unsigned* /*length*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_expr_into_block_a(
    Dwarf_P_Expr /*expr*/,
    Dwarf_Unsigned* /*length*/,
    Dwarf_Small ** /*start_address*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_arange(Dwarf_P_Debug /*dbg*/,
    Dwarf_Addr /*begin_address*/,
    Dwarf_Unsigned /*length*/,
    Dwarf_Signed /*symbol_index*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_arange_b(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_Addr /*begin_address*/,
    Dwarf_Unsigned /*length*/,
    Dwarf_Unsigned /*symbol_index*/,
    Dwarf_Unsigned /*end_symbol_index*/,
    Dwarf_Addr /*offset_from_end_symbol*/,
    Dwarf_Error * /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_arange_c(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_Addr /*begin_address*/,
    Dwarf_Unsigned /*length*/,
    Dwarf_Unsigned /*symbol_index*/,
    Dwarf_Unsigned /*end_symbol_index*/,
    Dwarf_Addr /*offset_from_end_symbol*/,
    Dwarf_Error * /*error*/);

Dwarf_Unsigned dwarf_add_pubname(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*pubname_name*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_pubname_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*pubname_name*/,
    Dwarf_Error* /*error*/);

/* Added 17 October 2013.  Introduced in DWARF3. */
Dwarf_Unsigned dwarf_add_pubtype(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*pubtype_name*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_pubtype_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*pubtype_name*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_funcname(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*func_name*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_funcname_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*func_name*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_typename(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*type_name*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_typename_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*type_name*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_varname(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*var_name*/,
    Dwarf_Error* /*error*/);

/*  New December 2018. Preferred version. */
int dwarf_add_varname_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*var_name*/,
    Dwarf_Error* /*error*/);

Dwarf_Unsigned dwarf_add_weakname(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*weak_name*/,
    Dwarf_Error* /*error*/);

int dwarf_add_weakname_a(
    Dwarf_P_Debug /*dbg*/,
    Dwarf_P_Die /*die*/,
    char* /*weak_name*/,
    Dwarf_Error* /*error*/);

/*  .debug_names producer functions */

/*  dwarf_force_debug_names forces creation
    of .debug_names (if DWARF5 being produced)
    even if empty. Only for testing libdwarf. */
int dwarf_force_debug_names(Dwarf_P_Debug /* dbg */,
    Dwarf_Error* /*error*/);

/*  Other debug_names functions are needed... FIXME */

/*  end .debug_names producer functions */

/*  .debug_macinfo producer functions
    Functions must be called in right order: the section is output
    In the order these are presented.
*/
int dwarf_def_macro(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*line*/,
    char * /*macname, with (arglist), no space before (*/,
    char * /*macvalue*/,
    Dwarf_Error* /*error*/);

int dwarf_undef_macro(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*line*/,
    char * /*macname, no arglist, of course*/,
    Dwarf_Error* /*error*/);

int dwarf_start_macro_file(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*fileindex*/,
    Dwarf_Unsigned /*linenumber*/,
    Dwarf_Error* /*error*/);

int dwarf_end_macro_file(Dwarf_P_Debug /*dbg*/,
    Dwarf_Error* /*error*/);

int dwarf_vendor_ext(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned /*constant*/,
    char * /*string*/,
    Dwarf_Error* /*error*/);

/* end macinfo producer functions */

int dwarf_attr_offset(Dwarf_Die /*die*/,
    Dwarf_Attribute /*attr of above die*/,
    Dwarf_Off * /*returns offset thru this ptr */,
    Dwarf_Error * /*error*/);

/*  This is a hack so clients can verify offsets.
    Added April 2005 so that debugger can detect broken offsets
    (which happened in an IRIX executable larger than 2GB
    with MIPSpro 7.3.1.3 toolchain.).
*/
int dwarf_get_section_max_offsets(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned * /*debug_info_size*/,
    Dwarf_Unsigned * /*debug_abbrev_size*/,
    Dwarf_Unsigned * /*debug_line_size*/,
    Dwarf_Unsigned * /*debug_loc_size*/,
    Dwarf_Unsigned * /*debug_aranges_size*/,
    Dwarf_Unsigned * /*debug_macinfo_size*/,
    Dwarf_Unsigned * /*debug_pubnames_size*/,
    Dwarf_Unsigned * /*debug_str_size*/,
    Dwarf_Unsigned * /*debug_frame_size*/,
    Dwarf_Unsigned * /*debug_ranges_size*/,
    Dwarf_Unsigned * /*debug_pubtypes_size*/);

/*  New October 2011., adds .debug_types section to the sizes
    returned. */
int dwarf_get_section_max_offsets_b(Dwarf_Debug /*dbg*/,

    Dwarf_Unsigned * /*debug_info_size*/,
    Dwarf_Unsigned * /*debug_abbrev_size*/,
    Dwarf_Unsigned * /*debug_line_size*/,
    Dwarf_Unsigned * /*debug_loc_size*/,
    Dwarf_Unsigned * /*debug_aranges_size*/,
    Dwarf_Unsigned * /*debug_macinfo_size*/,
    Dwarf_Unsigned * /*debug_pubnames_size*/,
    Dwarf_Unsigned * /*debug_str_size*/,
    Dwarf_Unsigned * /*debug_frame_size*/,
    Dwarf_Unsigned * /*debug_ranges_size*/,
    Dwarf_Unsigned * /*debug_pubtypes_size*/,
    Dwarf_Unsigned * /*debug_types_size*/);

int dwarf_get_section_max_offsets_c(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned * /*debug_info_size*/,
    Dwarf_Unsigned * /*debug_abbrev_size*/,
    Dwarf_Unsigned * /*debug_line_size*/,
    Dwarf_Unsigned * /*debug_loc_size*/,
    Dwarf_Unsigned * /*debug_aranges_size*/,
    Dwarf_Unsigned * /*debug_macinfo_size*/,
    Dwarf_Unsigned * /*debug_pubnames_size*/,
    Dwarf_Unsigned * /*debug_str_size*/,
    Dwarf_Unsigned * /*debug_frame_size*/,
    Dwarf_Unsigned * /*debug_ranges_size*/,
    Dwarf_Unsigned * /*debug_pubtypes_size*/,
    Dwarf_Unsigned * /*debug_types_size*/,
    Dwarf_Unsigned * /*debug_macro_size*/,
    Dwarf_Unsigned * /*debug_str_offsets_size*/,
    Dwarf_Unsigned * /*debug_sup_size*/,
    Dwarf_Unsigned * /*debug_cu_index_size*/,
    Dwarf_Unsigned * /*debug_tu_index_size*/);
int dwarf_get_section_max_offsets_d(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned * /*debug_info_size*/,
    Dwarf_Unsigned * /*debug_abbrev_size*/,
    Dwarf_Unsigned * /*debug_line_size*/,
    Dwarf_Unsigned * /*debug_loc_size*/,
    Dwarf_Unsigned * /*debug_aranges_size*/,
    Dwarf_Unsigned * /*debug_macinfo_size*/,
    Dwarf_Unsigned * /*debug_pubnames_size*/,
    Dwarf_Unsigned * /*debug_str_size*/,
    Dwarf_Unsigned * /*debug_frame_size*/,
    Dwarf_Unsigned * /*debug_ranges_size*/,
    Dwarf_Unsigned * /*debug_pubtypes_size*/,
    Dwarf_Unsigned * /*debug_types_size*/,
    Dwarf_Unsigned * /*debug_macro_size*/,
    Dwarf_Unsigned * /*debug_str_offsets_size*/,
    Dwarf_Unsigned * /*debug_sup_size*/,
    Dwarf_Unsigned * /*debug_cu_index_size*/,
    Dwarf_Unsigned * /*debug_tu_index_size*/,
    Dwarf_Unsigned * /*debug_names_size*/,
    Dwarf_Unsigned * /*debug_loclists_size*/,
    Dwarf_Unsigned * /*debug_rnglists_size*/);

/*  The 'set' calls here return the original (before any change
    by these set routines) of the respective fields. */
/*  Multiple releases spelled 'initial' as 'inital' .
    The 'inital' spelling should not be used. */
Dwarf_Half dwarf_set_frame_rule_inital_value(Dwarf_Debug /*dbg*/,
    Dwarf_Half /*value*/);
/*  Additional interface with correct 'initial' spelling. */
/*  It is likely you will want to call the following 6 functions
    before accessing any frame information.  All are useful
    to tailor handling of pseudo-registers needed to turn
    frame operation references into simpler forms and to
    reflect ABI specific data.  Of course altering libdwarf.h
    and dwarf.h allow the same capabilities, but header changes
    in the distribution would require you re-integrate your
    libdwarf.h changes into the distributed libdwarf.h ...
    so use the following functions instead.*/
Dwarf_Half dwarf_set_frame_rule_initial_value(Dwarf_Debug /*dbg*/,
    Dwarf_Half /*value*/);
Dwarf_Half dwarf_set_frame_rule_table_size(Dwarf_Debug /*dbg*/,
    Dwarf_Half /*value*/);
Dwarf_Half dwarf_set_frame_cfa_value(Dwarf_Debug /*dbg*/,
    Dwarf_Half /*value*/);
Dwarf_Half dwarf_set_frame_same_value(Dwarf_Debug /*dbg*/,
    Dwarf_Half /*value*/);
Dwarf_Half dwarf_set_frame_undefined_value(Dwarf_Debug /*dbg*/,
    Dwarf_Half /*value*/);
/*  dwarf_set_default_address_size only sets 'value' if value is
    greater than zero. */
Dwarf_Small dwarf_set_default_address_size(Dwarf_Debug /*dbg*/,
    Dwarf_Small /* value */);

/*  As of April 27, 2009, this version with no diepointer is
    obsolete though supported.  Use dwarf_get_ranges_a() instead. */
int dwarf_get_ranges(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*rangesoffset*/,
    Dwarf_Ranges ** /*rangesbuf*/,
    Dwarf_Signed * /*listlen*/,
    Dwarf_Unsigned * /*bytecount*/,
    Dwarf_Error * /*error*/);

/* This adds the address_size argument. New April 27, 2009 */
int dwarf_get_ranges_a(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*rangesoffset*/,
    Dwarf_Die /* diepointer */,
    Dwarf_Ranges ** /*rangesbuf*/,
    Dwarf_Signed * /*listlen*/,
    Dwarf_Unsigned * /*bytecount*/,
    Dwarf_Error * /*error*/);

/*  Adds return of the final offset to accommodate
    DWARF4 GNU split-dwarf. Other than for split-dwarf
    the realoffset will be set by the function
    to be the same as rangesoffset.
    New September 10, 2020.
*/
int dwarf_get_ranges_b(Dwarf_Debug /*dbg*/,
    Dwarf_Off /*rangesoffset*/,
    Dwarf_Die /*diepointer */,
    Dwarf_Off * /*realoffset */,
    Dwarf_Ranges ** /*rangesbuf*/,
    Dwarf_Signed * /*listlen*/,
    Dwarf_Unsigned * /*bytecount*/,
    Dwarf_Error * /*error*/);

void dwarf_ranges_dealloc(Dwarf_Debug /*dbg*/,
    Dwarf_Ranges * /*rangesbuf*/,
    Dwarf_Signed /*rangecount*/);

/* New July 2020 for DWARF5 */
int dwarf_get_debug_sup(Dwarf_Debug /*dbg*/,
    Dwarf_Half * /*version*/,
    Dwarf_Small * /*is_supplementary*/,
    char ** /*filename*/,
    Dwarf_Unsigned * /*checksum_len*/,
    Dwarf_Small ** /*checksum*/,
    Dwarf_Error * /*error*/);

/* ======= START .debug_rnglists interfaces.  New May 2020 */
struct Dwarf_Rnglists_Entry_s;
typedef struct Dwarf_Rnglists_Entry_s * Dwarf_Rnglists_Entry;
struct Dwarf_Rnglists_Head_s;
typedef struct Dwarf_Rnglists_Head_s * Dwarf_Rnglists_Head;

/*  For DWARF5 DW_AT_ranges: DW_FORM_sec_offset DW_FORM_rnglistx */
int dwarf_rnglists_get_rle_head(Dwarf_Attribute /*attr*/,
    Dwarf_Half /*theform*/,
    Dwarf_Unsigned /*index_or_offset_value*/,
    Dwarf_Rnglists_Head * /*head_out*/,
    Dwarf_Unsigned * /*count_of_entries_in_head*/,
    Dwarf_Unsigned * /*global_offset_of_rle_set*/,
    Dwarf_Error * /*error*/);

/*  Get the rnglist entries details */
int dwarf_get_rnglists_entry_fields_a(
    Dwarf_Rnglists_Head /*head*/,
    Dwarf_Unsigned /*entrynum*/,
    unsigned * /*entrylen*/,
    unsigned * /*rle_value_out*/,
    Dwarf_Unsigned * /*raw1*/,
    Dwarf_Unsigned * /*raw2*/,
    Dwarf_Bool * /*debug_addr_unavailable*/,
    Dwarf_Unsigned * /*cooked1*/,
    Dwarf_Unsigned * /*cooked2*/,
    Dwarf_Error * /*err*/);

/* The following is not complete. DO NOT USE.
    Use dwarf_get_rnglists_entry_fields_a() instead. */
int dwarf_get_rnglists_entry_fields(Dwarf_Rnglists_Head /*head*/,
    Dwarf_Unsigned /*entrynum*/,
    unsigned int * /*entrylen*/,
    unsigned int * /*code*/,
    Dwarf_Unsigned * /*raw1*/,
    Dwarf_Unsigned * /*raw2*/,
    Dwarf_Unsigned * /*cooked1*/,
    Dwarf_Unsigned * /*cooked2*/,
    Dwarf_Error * /*error*/);

int dwarf_dealloc_rnglists_head(Dwarf_Rnglists_Head );

/*  Loads all the rnglists headers and
    returns DW_DLV_NO_ENTRY if the section
    is missing or empty.
    Intended to be done quite early and
    it is automatically
    done if .debug_info is loaded.
    Doing it more than once is never necessary
    or harmful. There is no deallocation call
    made visible, deallocation happens
    when dwarf_finish() is called.
    With DW_DLV_OK it returns the number of
    rnglists headers in the section through
    rnglists_count. */
int dwarf_load_rnglists(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned * /*rnglists_count*/,
    Dwarf_Error * /*err*/);

/*  Retrieve the offset from the context-index'th
    rangelists context  and the offsetentry_index
    element of the array of offsets.
    If an index is too large to be correct
    this returns DW_DLV_NO_ENTRY.
    If all is correct it returns DW_DLV_OK and
    sets *offset_value_out to the offset of
    the range list from the base of the offset
    array, and *global_offset_value_out is set
    to the .debug_rnglists section offset of
    the range list. */
int dwarf_get_rnglist_offset_index_value(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*context_index*/,
    Dwarf_Unsigned /*offsetentry_index*/,
    Dwarf_Unsigned * /*offset_value_out*/,
    Dwarf_Unsigned * /*global_offset_value_out*/,
    Dwarf_Error * /*error*/);


/*  Used by dwarfdump to print basic data from the
    data generated to look at a specific rangelist
    as returned by  dwarf_rnglists_index_get_rle_head()
    or dwarf_rnglists_offset_get_rle_head. */
int dwarf_get_rnglist_head_basics(Dwarf_Rnglists_Head /*head*/,
    Dwarf_Unsigned * /*rle_count*/,
    Dwarf_Unsigned * /*rnglists_version*/,
    Dwarf_Unsigned * /*rnglists_index_returned*/,
    Dwarf_Unsigned * /*bytes_total_in_rle*/,
    Dwarf_Half * /*offset_size*/,
    Dwarf_Half * /*address_size*/,
    Dwarf_Half * /*segment_selector_size*/,
    Dwarf_Unsigned * /*overall offset_of_this_context*/,
    Dwarf_Unsigned * /*total_length of this context*/,
    Dwarf_Unsigned * /*offset_table_offset*/,
    Dwarf_Unsigned * /*offset_table_entrycount*/,
    Dwarf_Bool * /*rnglists_base_present*/,
    Dwarf_Unsigned * /*rnglists_base*/,
    Dwarf_Bool * /*rnglists_base_address_present*/,
    Dwarf_Unsigned * /*rnglists_base_address*/,
    Dwarf_Bool * /*rnglists_debug_addr_base_present*/,
    Dwarf_Unsigned * /*rnglists_debug_addr_base*/,
    Dwarf_Error * /*error*/);

/*  Enables printing of details about the Range List Table
    Headers, one header per call. Index starting at 0.
    Returns DW_DLV_NO_ENTRY if index is too high for the table.
    A .debug_rnglists section may contain any number
    of Range List Table Headers with their details.  */
int dwarf_get_rnglist_context_basics(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*index*/,
    Dwarf_Unsigned * /*header_offset*/,
    Dwarf_Small * /*offset_size*/,
    Dwarf_Small * /*extension_size*/,
    unsigned int * /*version*/, /* 5 */
    Dwarf_Small * /*address_size*/,
    Dwarf_Small * /*segment_selector_size*/,
    Dwarf_Unsigned * /*offset_entry_count*/,
    Dwarf_Unsigned * /*offset_of_offset_array*/,
    Dwarf_Unsigned * /*offset_of_first_rangeentry*/,
    Dwarf_Unsigned * /*offset_past_last_rangeentry*/,
    Dwarf_Error * /*err*/);

/*  entry offset is offset_of_first_rangeentry.
    Stop when the returned *next_entry_offset
    is == offset_past_last_rangentry (from
    dwarf_get_rnglist_context_plus).
    This only makes sense within those ranges.
    This retrieves raw detail from the section,
    no base values or anything are added.
    So this returns raw individual entries
    for a single rnglist header, meaning a
    a single Dwarf_Rnglists_Context.

    This interface assumes there is no
    segment selector. */
int dwarf_get_rnglist_raw_entry_detail(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*entry_offset*/,
    Dwarf_Unsigned * /*entry_kind*/,
    Dwarf_Unsigned * /*entry_operand1*/,
    Dwarf_Unsigned * /*entry_operand2*/,
    Dwarf_Unsigned * /*next_entry_offset*/,
    Dwarf_Error * /*err*/);

/*  If no error, returns DW_DLV_OK and sets
    the entry length,kind, and operands through
    the pointers. If any missing operands assign
    zero back through tye operand pointers. */

int dwarf_get_rnglist_rle( Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*contextnumber*/,
    Dwarf_Unsigned /*entry_offset*/,
    Dwarf_Unsigned /*endoffset*/,
    unsigned int * /*entrylen*/,
    unsigned int * /*entry_kind*/,
    Dwarf_Unsigned * /*entry_operand1*/,
    Dwarf_Unsigned * /*entry_operand2*/,
    Dwarf_Error * /*err*/);

/* ======= END .debug_rnglists interfaces.  */
/* ======= START .debug_loclists interfaces.  New May 2020 */
/*  These interfaces allow reading the .debug_loclists
    section.  Normal use of .debug_loclists uses
    dwarf_get_loclist_c() to open access to any kind of location
    or loclist and uses dwarf_loc_head_c_dealloc() to
    deallocate that memory once one is finished with
    that data. So for most purposes you do not need
    to use these functions  */
struct Dwarf_Loclists_Entry_s;
typedef struct Dwarf_Loclists_Entry_s * Dwarf_Loclists_Entry;

/*  See dwarf_get_loclist_c() to open a Dwarf_Loc_Head_c
    on any type of location list or expression. */

/*  Get the loclists entries details */
int dwarf_get_loclists_entry_fields(Dwarf_Loc_Head_c /*head*/,
    Dwarf_Unsigned /*entrynum*/,
    unsigned int * /*entrylen*/,
    unsigned int * /*code*/,
    Dwarf_Unsigned * /*raw1*/,
    Dwarf_Unsigned * /*raw2*/,
    Dwarf_Unsigned * /*cooked1*/,
    Dwarf_Unsigned * /*cooked2*/,
    Dwarf_Error * /*error*/);

/*  Loads all the loclists headers and
    returns DW_DLV_NO_ENTRY if the section
    is missing or empty.
    Intended to be done quite early and
    it is automatically
    done if .debug_info is loaded.
    Doing it more than once is never necessary
    or harmful. There is no deallocation call
    made visible, deallocation happens
    when dwarf_finish() is called.
    With DW_DLV_OK it returns the number of
    loclists headers in the section through
    loclists_count. */
int dwarf_load_loclists(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned * /*loclists_count*/,
    Dwarf_Error * /*err*/);

/*  Retrieve the offset from the context-index'th
    loclists context  and the offsetentry_index
    element of the array of offsets.
    If an index is too large to be correct
    this returns DW_DLV_NO_ENTRY.
    If all is correct it returns DW_DLV_OK and
    sets *offset_value_out to the offset of
    the range list from the base of the offset
    array, and *global_offset_value_out is set
    to the .debug_loclists section offset of
    the range list. */
int dwarf_get_loclist_offset_index_value(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*context_index*/,
    Dwarf_Unsigned /*offsetentry_index*/,
    Dwarf_Unsigned * /*offset_value_out*/,
    Dwarf_Unsigned * /*global_offset_value_out*/,
    Dwarf_Error * /*error*/);

/*  Used by dwarfdump to print basic data from the
    data generated to look at a specific rangelist
    as returned by  dwarf_loclists_index_get_lle_head()
    or dwarf_loclists_offset_get_lle_head. */
int dwarf_get_loclist_head_basics(Dwarf_Loc_Head_c /*head*/,
    Dwarf_Small * /*lkind*/,
    Dwarf_Unsigned * /*lle_count*/,
    Dwarf_Unsigned * /*loclists_version*/,
    Dwarf_Unsigned * /*loclists_index_returned*/,
    Dwarf_Unsigned * /*bytes_total_in_rle*/,
    Dwarf_Half * /*offset_size*/,
    Dwarf_Half * /*address_size*/,
    Dwarf_Half * /*segment_selector_size*/,
    Dwarf_Unsigned * /*overall offset_of_this_context*/,
    Dwarf_Unsigned * /*total_length of this context*/,
    Dwarf_Unsigned * /*offset_table_offset*/,
    Dwarf_Unsigned * /*offset_table_entrycount*/,
    Dwarf_Bool * /*loclists_base_present*/,
    Dwarf_Unsigned * /*loclists_base*/,
    Dwarf_Bool * /*loclists_base_address_present*/,
    Dwarf_Unsigned * /*loclists_base_address*/,
    Dwarf_Bool * /*loclists_debug_addr_base_present*/,
    Dwarf_Unsigned * /*loclists_debug_addr_base*/,
    Dwarf_Unsigned * /*offset_this_lle_area*/,
    Dwarf_Error * /*error*/);

/*  Enables printing of details about the Range List Table
    Headers, one header per call. Index starting at 0.
    Returns DW_DLV_NO_ENTRY if index is too high for the table.
    A .debug_loclists section may contain any number
    of Location  List Table Headers with their details.  */
int dwarf_get_loclist_context_basics(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*index*/,
    Dwarf_Unsigned * /*header_offset*/,
    Dwarf_Small * /*offset_size*/,
    Dwarf_Small * /*extension_size*/,
    unsigned int * /*version*/, /* 5 */
    Dwarf_Small * /*address_size*/,
    Dwarf_Small * /*segment_selector_size*/,
    Dwarf_Unsigned * /*offset_entry_count*/,
    Dwarf_Unsigned * /*offset_of_offset_array*/,
    Dwarf_Unsigned * /*offset_of_first_locentry*/,
    Dwarf_Unsigned * /*offset_past_last_locentry*/,
    Dwarf_Error * /*err*/);

/*  entry offset is offset_of_first_locentry.
    Stop when the returned *next_entry_offset
    is == offset_past_last_locentry (from
    dwarf_get_loclist_context_plus).
    This only makes sense within those ranges.
    This retrieves raw detail from the section,
    no base values or anything are added.
    So this returns raw individual entries
    for a single loclist header, meaning a
    a single Dwarf_Loclists_Context.

    This interface assumes there is no
    segment selector. */
int dwarf_get_loclist_raw_entry_detail(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*entry_offset*/,
    Dwarf_Unsigned * /*entry_kind*/,
    Dwarf_Unsigned * /*entry_operand1*/,
    Dwarf_Unsigned * /*entry_operand2*/,
    Dwarf_Unsigned * /*next_entry_offset*/,
    Dwarf_Error * /*err*/);

/*  If no error, returns DW_DLV_OK and sets
    the entry length,kind, and operands through
    the pointers. If any missing operands assign
    zero back through tye operand pointers. */

int dwarf_get_loclist_lle( Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*contextnumber*/,
    Dwarf_Unsigned /*entry_offset*/,
    Dwarf_Unsigned /*endoffset*/,
    unsigned int * /*entrylen*/,
    unsigned int * /*entry_kind*/,
    Dwarf_Unsigned * /*entry_operand1*/,
    Dwarf_Unsigned * /*entry_operand2*/,
    Dwarf_Unsigned * /*expr_ops_blocksize*/,
    Dwarf_Unsigned * /*expr_ops_offset*/,
    Dwarf_Small ** /*expr_opsdata*/,
    Dwarf_Error * /*err*/);

/* ======= END .debug_loclists interfaces.  */

/*  New April 2018.
    Allows applications to print the .debug_str_offsets
    section.
    Beginning at starting_offset zero,
    returns data about the first table found.
    The value *next_table_offset is the value
    of the next table (if any), one byte past
    the end of the table whose data is returned..
    Returns DW_DLV_NO_ENTRY if the starting offset
    is past the end of valid data.

    There is no guarantee that there are no non-0 nonsense
    bytes in the section outside of useful tables,
    so this can fail and return nonsense or
    DW_DLV_ERROR  if such garbage exists.
*/

struct Dwarf_Str_Offsets_Table_s;
typedef struct Dwarf_Str_Offsets_Table_s * Dwarf_Str_Offsets_Table;

/*  Allocates a struct Dwarf_Str_Offsets_Table_s for the section
    and returns DW_DLV_OK and sets a pointer to the struct through
    the table_data pointer if successful.

    If there is no such section it returns DW_DLV_NO_ENTRY. */
int dwarf_open_str_offsets_table_access(Dwarf_Debug /*dbg*/,
    Dwarf_Str_Offsets_Table * /*table_data*/,
    Dwarf_Error * /*error*/);

/*  Close access, free table_data. */
int dwarf_close_str_offsets_table_access(
    Dwarf_Str_Offsets_Table /*table_data*/,
    Dwarf_Error * /*error*/);

/*  Call till it returns DW_DLV_NO_ENTRY (normal end)
    or DW_DLV_ERROR (error) and stop.

    On successful call, call dwarf_str_offsets_table_entry()
    to get the individual table values on the now-active table. */
int dwarf_next_str_offsets_table(
    Dwarf_Str_Offsets_Table /*table_data*/,
    Dwarf_Unsigned * /*unit_length*/,
    Dwarf_Unsigned * /*unit_length_offset*/,
    Dwarf_Unsigned * /*table_start_offset*/,
    Dwarf_Half * /*entry_size*/,
    Dwarf_Half * /*version*/,
    Dwarf_Half * /*padding*/,
    Dwarf_Unsigned * /*table_value_count*/,
    Dwarf_Error * /*error*/);

/*  Valid index values n:  0 <= n <  table_entry_count
    for the active table */
int dwarf_str_offsets_value_by_index(
    Dwarf_Str_Offsets_Table /*table_data*/,
    Dwarf_Unsigned /*index_to_entry*/,
    Dwarf_Unsigned * /*entry_value*/,
    Dwarf_Error * /*error*/);

/*  After all str_offsets read this reports final
    wasted-bytes count. */
int dwarf_str_offsets_statistics(
    Dwarf_Str_Offsets_Table /*table_data*/,
    Dwarf_Unsigned * /*wasted_byte_count*/,
    Dwarf_Unsigned * /*table_count*/,
    Dwarf_Error * /*error*/);

/*  The harmless error list is a circular buffer of
    errors we note but which do not stop us from processing
    the object.  Created so dwarfdump or other tools
    can report such inconsequential errors without causing
    anything to stop early. */


/*  User code supplies size of array of pointers errmsg_ptrs_array
    in count and the array of pointers (the pointers themselves
    need not be initialized).
    The pointers returned in the array of pointers
    are invalidated by ANY call to libdwarf.
    Use them before making another libdwarf call!
    The array of string pointers passed in always has
    a final null pointer, so if there are N pointers the
    and M actual strings, then MIN(M,N-1) pointers are
    set to point to error strings.  The array of pointers
    to strings always terminates with a NULL pointer.
    If 'count' is passed in zero then errmsg_ptrs_array
    is not touched.

    The function returns DW_DLV_NO_ENTRY if no harmless errors
    were noted so far.  Returns DW_DLV_OK if there are errors.
    Never returns DW_DLV_ERROR.

    Each call empties the error list (discarding all current entries).
    If newerr_count is non-NULL the count of harmless errors
    since the last call is returned through the pointer
    (some may have been discarded or not returned, it is a circular
    list...).
    If DW_DLV_NO_ENTRY is returned none of the arguments
    here are touched or used.
    */
int dwarf_get_harmless_error_list(Dwarf_Debug /*dbg*/,
    unsigned int /*count*/,
    const char ** /*errmsg_ptrs_array*/,
    unsigned int * /*newerr_count*/);

/*  Insertion is only for testing the harmless error code, it is not
    necessarily useful otherwise. */
void dwarf_insert_harmless_error(Dwarf_Debug /*dbg*/,
    char * /*newerror*/);

/*  The size of the circular list of strings may be set
    and reset as needed.  If it is shortened excess
    messages are simply dropped.  It returns the previous
    size. If zero passed in the size is unchanged
    and it simply returns the current size  */
unsigned int dwarf_set_harmless_error_list_size(Dwarf_Debug /*dbg*/,
    unsigned int /*maxcount*/);
/*  The harmless error strings (if any) are freed when the dbg
    is dwarf_finish()ed. */

/*  When the val_in is known these dwarf_get_TAG_name (etc)
    functions return the string corresponding to the val_in passed in
    through the pointer s_out and the value returned is DW_DLV_OK.
    The strings are in static storage
    and must not be freed.
    If DW_DLV_NO_ENTRY is returned the val_in is not known and
    *s_out is not set.  DW_DLV_ERROR is never returned.*/

/* The following copied from a generated dwarf_names.h */

/* BEGIN FILE */
extern int dwarf_get_ACCESS_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_ADDR_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_ATCF_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_ATE_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_AT_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_CC_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_CFA_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_children_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_CHILDREN_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_DEFAULTED_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_DSC_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_DS_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_EH_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_END_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_FORM_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_FRAME_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_GNUIKIND_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_GNUIVIS_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_ID_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_IDX_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_INL_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_ISA_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_LANG_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_LLE_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
/*  dwarf_get_LLEX_name is for a GNU extension.
    Not defined by the GNU folks nor a DWARF standard
    but it seemed essential. */
extern int dwarf_get_LLEX_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_LNCT_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_LNE_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_LNS_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_MACINFO_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_MACRO_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_OP_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_ORD_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_RLE_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_SECT_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_TAG_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_UT_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_VIRTUALITY_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
extern int dwarf_get_VIS_name(unsigned int /*val_in*/,
    const char ** /*s_out */);
/* END FILE */

extern int dwarf_get_FORM_CLASS_name(enum Dwarf_Form_Class /*fc*/,
    const char ** /*s_out*/);

/* Convert local offset into global offset */
int dwarf_convert_to_global_offset(Dwarf_Attribute /*attr*/,
    Dwarf_Off /*offset*/,
    Dwarf_Off* /*ret_offset*/,
    Dwarf_Error* /*error*/);

/* Get both offsets (local and global) */
int dwarf_die_offsets(Dwarf_Die /*die*/,
    Dwarf_Off* /*global_offset*/,
    Dwarf_Off* /*local_offset*/,
    Dwarf_Error* /*error*/);

/* Giving a section name, get its size and address */
int dwarf_get_section_info_by_name(Dwarf_Debug /*dbg*/,
    const char * /*section_name*/,
    Dwarf_Addr* /*section_addr*/,
    Dwarf_Unsigned* /*section_size*/,
    Dwarf_Error* /*error*/);

/* Giving a section index, get its size and address */
int dwarf_get_section_info_by_index(Dwarf_Debug /*dbg*/,
    int /*section_index*/,
    const char ** /*section_name*/,
    Dwarf_Addr* /*section_addr*/,
    Dwarf_Unsigned* /*section_size*/,
    Dwarf_Error* /*error*/);

/*  Get section count, of object file sections. */
int dwarf_get_section_count(Dwarf_Debug /*dbg*/);

/*  Get the version and offset size of a CU context.
    This is useful as a precursor to
    calling dwarf_get_form_class() at times.  */
int dwarf_get_version_of_die(Dwarf_Die /*die*/,
    Dwarf_Half * /*version*/,
    Dwarf_Half * /*offset_size*/);

int dwarf_discr_list(Dwarf_Debug /*dbg*/,
    Dwarf_Small * /*blockpointer*/,
    Dwarf_Unsigned /*blocklen*/,
    Dwarf_Dsc_Head * /*dsc_head_out*/,
    Dwarf_Unsigned * /*dsc_array_length_out*/,
    Dwarf_Error * /*error*/);

/*  NEW September 2016. Allows easy access to DW_AT_discr_list
    entry. Callers must know which is the appropriate
    one of the following two interfaces, though both
    will work. */
int dwarf_discr_entry_u(Dwarf_Dsc_Head /* dsc */,
    Dwarf_Unsigned /*entrynum*/,
    Dwarf_Half * /*out_type*/,
    Dwarf_Unsigned * /*out_discr_low*/,
    Dwarf_Unsigned * /*out_discr_high*/,
    Dwarf_Error * /*error*/);

/*  NEW September 2016. Allows easy access to DW_AT_discr_list
    entry. */
int dwarf_discr_entry_s(Dwarf_Dsc_Head /* dsc */,
    Dwarf_Unsigned /*entrynum*/,
    Dwarf_Half * /*out_type*/,
    Dwarf_Signed * /*out_discr_low*/,
    Dwarf_Signed * /*out_discr_high*/,
    Dwarf_Error * /*error*/);

/*  New May 2017.  So users can find out what groups (dwo or COMDAT)
    are in the object and how much to allocate so one can get the
    group-section map data. */
int dwarf_sec_group_sizes(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned * /*section_count_out*/,
    Dwarf_Unsigned * /*group_count_out*/,
    Dwarf_Unsigned * /*selected_group_out*/,
    Dwarf_Unsigned * /*map_entry_count_out*/,
    Dwarf_Error * /*error*/);

/*  New May 2017. Reveals the map between group numbers and
    section numbers.
    Caller must allocate the arrays with space for 'map_entry_count'
    values and this function fills in the array entries.
    Output ordered by group number and section number.
    */
int dwarf_sec_group_map(Dwarf_Debug /*dbg*/,
    Dwarf_Unsigned /*map_entry_count*/,
    Dwarf_Unsigned * /*group_numbers_array*/,
    Dwarf_Unsigned * /*sec_numbers_array*/,
    const char ** /*sec_names_array*/,
    Dwarf_Error * /*error*/);

/*  dwarf_get_endian_copy_function new. December 2019. */
void (*dwarf_get_endian_copy_function(Dwarf_Debug /*dbg*/))
    (void *, const void * /*src*/, unsigned long /*srclen*/);


/*  These make the  LEB encoding routines visible to libdwarf
    callers. Added November, 2012. */
int dwarf_encode_leb128(Dwarf_Unsigned /*val*/,
    int * /*nbytes*/,
    char * /*space*/,
    int /*splen*/);
int dwarf_encode_signed_leb128(Dwarf_Signed /*val*/,
    int * /*nbytes*/,
    char * /*space*/,
    int /*splen*/);
/*  Same for LEB decoding routines.
    caller sets endptr to an address one past the last valid
    address the library should be allowed to
    access. */
int dwarf_decode_leb128(char * /*leb*/,
    Dwarf_Unsigned * /*leblen*/,
    Dwarf_Unsigned * /*outval*/,
    char * /*endptr*/);
int dwarf_decode_signed_leb128(char * /*leb*/,
    Dwarf_Unsigned * /*leblen*/,
    Dwarf_Signed * /*outval*/,
    char * /*endptr*/);

/*  Record some application command line options in libdwarf.
    This is not arc/argv processing, just precooked setting
    of a flag in libdwarf based on something the application
    wants.  check_verbose_mode of TRUE means do more checking
    and sometimes print errors (from libdwarf).
    Not restricted to a single Dwarf_Debug, it applies
    to the libdwarf the executable is using.
*/
typedef struct {
    Dwarf_Bool check_verbose_mode;
} Dwarf_Cmdline_Options;
extern Dwarf_Cmdline_Options dwarf_cmdline_options;

/* Set libdwarf to reflect some application command line options. */
void dwarf_record_cmdline_options(Dwarf_Cmdline_Options /*options*/);

int dwarf_pro_get_string_stats(Dwarf_P_Debug /*dbg*/,
    Dwarf_Unsigned * /*str_count*/,
    Dwarf_Unsigned * /*str_total_length*/,
    Dwarf_Unsigned * /*count_debug_str*/,
    Dwarf_Unsigned * /*len_debug_str*/,
    Dwarf_Unsigned * /*reused_count*/,
    Dwarf_Unsigned * /*reused_len*/,
    Dwarf_Error * /*error*/);
# 5747 "/usr/include/libdwarf/libdwarf.h" 3 4
/*  Defined March 7 2020. Allows a caller to
    avoid most tracking by the de_alloc_tree hash
    table if called with v of zero.
    Returns the value the flag was before this call. */
int dwarf_set_de_alloc_flag(int v);

/* Solely looks for debuglink */
int dwarf_object_detector_path(const char * /*path*/,
    char * /*outpath_buffer*/,
    unsigned long /*outpathlen*/,
    unsigned int * /*ftype*/,
    unsigned int * /*endian*/,
    unsigned int * /*offsetsize*/,
    Dwarf_Unsigned * /*filesize*/,
    int * /*errcode*/);

/* Solely looks for debuglink */
int dwarf_object_detector_path_b(const char * /*path*/,
    char * /*outpath_buffer*/,
    unsigned long /*outpathlen*/,
    char ** /* gl_pathnames*/,
    unsigned /* gl_pathcount*/,
    unsigned int * /*ftype*/,
    unsigned int * /*endian*/,
    unsigned int * /*offsetsize*/,
    Dwarf_Unsigned * /*filesize*/,
    unsigned char * /*pathsource*/,
    int * /*errcode*/);

/* Solely looks for dSYM */
int dwarf_object_detector_path_dSYM(
    const char *path,
    char *outpath, unsigned long outpath_len,
    char ** gl_pathnames,
    unsigned gl_pathcount,
    unsigned *ftype,
    unsigned *endian,
    unsigned *offsetsize,
    Dwarf_Unsigned *filesize,
    unsigned char *pathsource,
    int *errcode);







/*  Returns the pathsource value set up at init time*/
int dwarf_get_path_source_type(Dwarf_Debug /* dbg*/,
    unsigned char * /*path_source*/,
    Dwarf_Error * /*error*/);

int dwarf_object_detector_fd(int /*fd*/,
    unsigned int * /*ftype*/,
    unsigned int * /*endian*/,
    unsigned int * /*offsetsize*/,
    Dwarf_Unsigned * /*filesize*/,
    int * /*errcode*/);
# 11 "main.c" 2
# 1 "/usr/include/libelf.h" 1 3 4
/* Interface for libelf.
   Copyright (C) 1998-2010, 2015 Red Hat, Inc.
   This file is part of elfutils.

   This file is free software; you can redistribute it and/or modify
   it under the terms of either

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at
       your option) any later version

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at
       your option) any later version

   or both in parallel, as here.

   elfutils is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see <http://www.gnu.org/licenses/>.  */




# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
/* Copyright (C) 1997-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99: 7.18 Integer types <stdint.h>
 */





# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */







# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C2X.  In C2X, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C2X does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C2X (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C2X features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C2X.

   __GLIBC_USE (IEC_60559_BFP_EXT_C2X) controls those features from TS
   18661-1 that are also included in C2X (with no feature test macro
   required in C2X).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C2X but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C2X.  */
# 103 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
/* wchar_t type related definitions.
   Copyright (C) 2000-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* The fallback definitions, for when __WCHAR_MAX__ or __WCHAR_MIN__
   are not defined, give the right value and type as long as both int
   and wchar_t are 32-bit types.  Adding L'\0' to a constant value
   ensures that the type is correct; it is necessary to use (L'\0' +
   0) rather than just L'\0' so that the type in C++ is the promoted
   version of wchar_t rather than the distinct wchar_t type itself.
   Because wchar_t in preprocessor #if expressions is treated as
   intmax_t or uintmax_t, the expression (L'\0' - 1) would have the
   wrong value for WCHAR_MAX in such expressions and so cannot be used
   to define __WCHAR_MAX in the unsigned case.  */
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 13 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 30 "/usr/include/stdint.h" 2 3 4

/* Exact integral types.  */

/* Signed.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
/* Define intN_t types.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 35 "/usr/include/stdint.h" 2 3 4

/* Unsigned.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
/* Define uintN_t types.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 23 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 2 3 4

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4


/* Small types.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-least.h" 1 3 4
/* Define int_leastN_t and uint_leastN types.
   Copyright (C) 2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 23 "/usr/include/x86_64-linux-gnu/bits/stdint-least.h" 2 3 4

/* Signed.  */
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

/* Unsigned.  */
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
# 42 "/usr/include/stdint.h" 2 3 4


/* Fast types.  */

/* Signed.  */
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;







/* Unsigned.  */
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 73 "/usr/include/stdint.h" 3 4
/* Types for `void *' pointers.  */





typedef unsigned long int uintptr_t;
# 89 "/usr/include/stdint.h" 3 4
/* Largest integral types.  */
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 102 "/usr/include/stdint.h" 3 4
/* Limits of integral types.  */

/* Minimum of signed integral types.  */




/* Maximum of signed integral types.  */





/* Maximum of unsigned integral types.  */






/* Minimum of signed integral types having a minimum size.  */




/* Maximum of signed integral types having a minimum size.  */





/* Maximum of unsigned integral types having a minimum size.  */






/* Minimum of fast signed integral types having a minimum size.  */
# 150 "/usr/include/stdint.h" 3 4
/* Maximum of fast signed integral types having a minimum size.  */
# 161 "/usr/include/stdint.h" 3 4
/* Maximum of fast unsigned integral types having a minimum size.  */
# 173 "/usr/include/stdint.h" 3 4
/* Values to test for integral types holding `void *' pointer.  */
# 185 "/usr/include/stdint.h" 3 4
/* Minimum for largest signed integral type.  */

/* Maximum for largest signed integral type.  */


/* Maximum for largest unsigned integral type.  */



/* Limits of other integer types.  */

/* Limits of `ptrdiff_t' type.  */
# 210 "/usr/include/stdint.h" 3 4
/* Limits of `sig_atomic_t'.  */



/* Limit of `size_t' type.  */
# 225 "/usr/include/stdint.h" 3 4
/* Limits of `wchar_t'.  */

/* These constants might also be defined in <wchar.h>.  */




/* Limits of `wint_t'.  */



/* Signed.  */
# 246 "/usr/include/stdint.h" 3 4
/* Unsigned.  */
# 256 "/usr/include/stdint.h" 3 4
/* Maximal type.  */
# 10 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdint.h" 2 3 4
# 33 "/usr/include/libelf.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */
# 34 "/usr/include/libelf.h" 2 3 4

/* Get the ELF types.  */
# 1 "/usr/include/elf.h" 1 3 4
/* This file defines standard ELF types, structures, and macros.
   Copyright (C) 1995-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Standard ELF types.  */



/* Type for a 16-bit quantity.  */
typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;

/* Types for signed and unsigned 32-bit quantities.  */
typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;

/* Types for signed and unsigned 64-bit quantities.  */
typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;

/* Type of addresses.  */
typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;

/* Type of file offsets.  */
typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;

/* Type for section indices, which are 16-bit quantities.  */
typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;

/* Type for version symbol information.  */
typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;


/* The ELF file header.  This appears at the start of every ELF file.  */



typedef struct
{
  unsigned char e_ident[(16)]; /* Magic number and other info */
  Elf32_Half e_type; /* Object file type */
  Elf32_Half e_machine; /* Architecture */
  Elf32_Word e_version; /* Object file version */
  Elf32_Addr e_entry; /* Entry point virtual address */
  Elf32_Off e_phoff; /* Program header table file offset */
  Elf32_Off e_shoff; /* Section header table file offset */
  Elf32_Word e_flags; /* Processor-specific flags */
  Elf32_Half e_ehsize; /* ELF header size in bytes */
  Elf32_Half e_phentsize; /* Program header table entry size */
  Elf32_Half e_phnum; /* Program header table entry count */
  Elf32_Half e_shentsize; /* Section header table entry size */
  Elf32_Half e_shnum; /* Section header table entry count */
  Elf32_Half e_shstrndx; /* Section header string table index */
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)]; /* Magic number and other info */
  Elf64_Half e_type; /* Object file type */
  Elf64_Half e_machine; /* Architecture */
  Elf64_Word e_version; /* Object file version */
  Elf64_Addr e_entry; /* Entry point virtual address */
  Elf64_Off e_phoff; /* Program header table file offset */
  Elf64_Off e_shoff; /* Section header table file offset */
  Elf64_Word e_flags; /* Processor-specific flags */
  Elf64_Half e_ehsize; /* ELF header size in bytes */
  Elf64_Half e_phentsize; /* Program header table entry size */
  Elf64_Half e_phnum; /* Program header table entry count */
  Elf64_Half e_shentsize; /* Section header table entry size */
  Elf64_Half e_shnum; /* Section header table entry count */
  Elf64_Half e_shstrndx; /* Section header string table index */
} Elf64_Ehdr;

/* Fields in the e_ident array.  The EI_* macros are indices into the
   array.  The macros under each EI_* macro are the values the byte
   may have.  */
# 115 "/usr/include/elf.h" 3 4
/* Conglomeration of the identification bytes, for easy testing as a word.  */
# 132 "/usr/include/elf.h" 3 4
     /* Value must be EV_CURRENT */
# 156 "/usr/include/elf.h" 3 4
/* Legal values for e_type (object file type).  */
# 169 "/usr/include/elf.h" 3 4
/* Legal values for e_machine (architecture).  */
# 182 "/usr/include/elf.h" 3 4
    /* reserved 11-14 */

    /* reserved 16 */







    /* reserved 24-35 */
# 278 "/usr/include/elf.h" 3 4
    /* reserved 121-130 */
# 293 "/usr/include/elf.h" 3 4
    /* reserved 145-159 */
# 316 "/usr/include/elf.h" 3 4
    /* reserved 182 */

    /* reserved 184 */
# 340 "/usr/include/elf.h" 3 4
    /* reserved 206-209 */
# 356 "/usr/include/elf.h" 3 4
    /* reserved 225-242 */
# 365 "/usr/include/elf.h" 3 4
/* Old spellings/synonyms.  */



/* If it is necessary to assign new unofficial EM_* values, please
   pick large random numbers (0x8523, 0xa7f2, etc.) to minimize the
   chances of collision with official or non-GNU unofficial values.  */



/* Legal values for e_version (version).  */





/* Section header.  */

typedef struct
{
  Elf32_Word sh_name; /* Section name (string tbl index) */
  Elf32_Word sh_type; /* Section type */
  Elf32_Word sh_flags; /* Section flags */
  Elf32_Addr sh_addr; /* Section virtual addr at execution */
  Elf32_Off sh_offset; /* Section file offset */
  Elf32_Word sh_size; /* Section size in bytes */
  Elf32_Word sh_link; /* Link to another section */
  Elf32_Word sh_info; /* Additional section information */
  Elf32_Word sh_addralign; /* Section alignment */
  Elf32_Word sh_entsize; /* Entry size if section holds table */
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name; /* Section name (string tbl index) */
  Elf64_Word sh_type; /* Section type */
  Elf64_Xword sh_flags; /* Section flags */
  Elf64_Addr sh_addr; /* Section virtual addr at execution */
  Elf64_Off sh_offset; /* Section file offset */
  Elf64_Xword sh_size; /* Section size in bytes */
  Elf64_Word sh_link; /* Link to another section */
  Elf64_Word sh_info; /* Additional section information */
  Elf64_Xword sh_addralign; /* Section alignment */
  Elf64_Xword sh_entsize; /* Entry size if section holds table */
} Elf64_Shdr;

/* Special section indices.  */
# 428 "/usr/include/elf.h" 3 4
/* Legal values for sh_type (section type).  */
# 468 "/usr/include/elf.h" 3 4
/* Legal values for sh_flags (section flags).  */
# 490 "/usr/include/elf.h" 3 4
/* Section compression header.  Used when SHF_COMPRESSED is set.  */

typedef struct
{
  Elf32_Word ch_type; /* Compression format.  */
  Elf32_Word ch_size; /* Uncompressed data size.  */
  Elf32_Word ch_addralign; /* Uncompressed data alignment.  */
} Elf32_Chdr;

typedef struct
{
  Elf64_Word ch_type; /* Compression format.  */
  Elf64_Word ch_reserved;
  Elf64_Xword ch_size; /* Uncompressed data size.  */
  Elf64_Xword ch_addralign; /* Uncompressed data alignment.  */
} Elf64_Chdr;

/* Legal values for ch_type (compression algorithm).  */







/* Section group handling.  */


/* Symbol table entry.  */

typedef struct
{
  Elf32_Word st_name; /* Symbol name (string tbl index) */
  Elf32_Addr st_value; /* Symbol value */
  Elf32_Word st_size; /* Symbol size */
  unsigned char st_info; /* Symbol type and binding */
  unsigned char st_other; /* Symbol visibility */
  Elf32_Section st_shndx; /* Section index */
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name; /* Symbol name (string tbl index) */
  unsigned char st_info; /* Symbol type and binding */
  unsigned char st_other; /* Symbol visibility */
  Elf64_Section st_shndx; /* Section index */
  Elf64_Addr st_value; /* Symbol value */
  Elf64_Xword st_size; /* Symbol size */
} Elf64_Sym;

/* The syminfo section if available contains additional information about
   every dynamic symbol.  */

typedef struct
{
  Elf32_Half si_boundto; /* Direct bindings, symbol bound to */
  Elf32_Half si_flags; /* Per symbol flags */
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto; /* Direct bindings, symbol bound to */
  Elf64_Half si_flags; /* Per symbol flags */
} Elf64_Syminfo;

/* Possible values for si_boundto.  */




/* Possible bitmasks for si_flags.  */





/* Syminfo version values.  */





/* How to extract and insert information held in the st_info field.  */





/* Both Elf32_Sym and Elf64_Sym use the same one-byte st_info field.  */




/* Legal values for ST_BIND subfield of st_info (symbol binding).  */
# 595 "/usr/include/elf.h" 3 4
/* Legal values for ST_TYPE subfield of st_info (symbol type).  */
# 612 "/usr/include/elf.h" 3 4
/* Symbol table indices are found in the hash buckets and chain table
   of a symbol hash table section.  This special index value indicates
   the end of a chain, meaning no further symbols are found in that bucket.  */




/* How to extract and insert information held in the st_other field.  */



/* For ELF64 the definitions are the same.  */


/* Symbol visibility specification encoded in the st_other field.  */






/* Relocation table entry without addend (in section of type SHT_REL).  */

typedef struct
{
  Elf32_Addr r_offset; /* Address */
  Elf32_Word r_info; /* Relocation type and symbol index */
} Elf32_Rel;

/* I have seen two different definitions of the Elf64_Rel and
   Elf64_Rela structures, so we'll leave them out until Novell (or
   whoever) gets their act together.  */
/* The following, at least, is used on Sparc v9, MIPS, and Alpha.  */

typedef struct
{
  Elf64_Addr r_offset; /* Address */
  Elf64_Xword r_info; /* Relocation type and symbol index */
} Elf64_Rel;

/* Relocation table entry with addend (in section of type SHT_RELA).  */

typedef struct
{
  Elf32_Addr r_offset; /* Address */
  Elf32_Word r_info; /* Relocation type and symbol index */
  Elf32_Sword r_addend; /* Addend */
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset; /* Address */
  Elf64_Xword r_info; /* Relocation type and symbol index */
  Elf64_Sxword r_addend; /* Addend */
} Elf64_Rela;

/* RELR relocation table entry */

typedef Elf32_Word Elf32_Relr;
typedef Elf64_Xword Elf64_Relr;

/* How to extract and insert information held in the r_info field.  */
# 683 "/usr/include/elf.h" 3 4
/* Program segment header.  */

typedef struct
{
  Elf32_Word p_type; /* Segment type */
  Elf32_Off p_offset; /* Segment file offset */
  Elf32_Addr p_vaddr; /* Segment virtual address */
  Elf32_Addr p_paddr; /* Segment physical address */
  Elf32_Word p_filesz; /* Segment size in file */
  Elf32_Word p_memsz; /* Segment size in memory */
  Elf32_Word p_flags; /* Segment flags */
  Elf32_Word p_align; /* Segment alignment */
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type; /* Segment type */
  Elf64_Word p_flags; /* Segment flags */
  Elf64_Off p_offset; /* Segment file offset */
  Elf64_Addr p_vaddr; /* Segment virtual address */
  Elf64_Addr p_paddr; /* Segment physical address */
  Elf64_Xword p_filesz; /* Segment size in file */
  Elf64_Xword p_memsz; /* Segment size in memory */
  Elf64_Xword p_align; /* Segment alignment */
} Elf64_Phdr;

/* Special value for e_phnum.  This indicates that the real number of
   program headers is too large to fit into e_phnum.  Instead the real
   value is in the field sh_info of section 0.  */



/* Legal values for p_type (segment type).  */
# 740 "/usr/include/elf.h" 3 4
/* Legal values for p_flags (segment flags).  */







/* Legal values for note segment descriptor types for core files. */
# 852 "/usr/include/elf.h" 3 4
/* Legal values for the note segment descriptor types for object files.  */




/* Dynamic section entry.  */

typedef struct
{
  Elf32_Sword d_tag; /* Dynamic entry type */
  union
    {
      Elf32_Word d_val; /* Integer value */
      Elf32_Addr d_ptr; /* Address value */
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag; /* Dynamic entry type */
  union
    {
      Elf64_Xword d_val; /* Integer value */
      Elf64_Addr d_ptr; /* Address value */
    } d_un;
} Elf64_Dyn;

/* Legal values for d_tag (dynamic entry type).  */
# 926 "/usr/include/elf.h" 3 4
/* DT_* entries which fall between DT_VALRNGHI & DT_VALRNGLO use the
   Dyn.d_un.d_val field of the Elf*_Dyn structure.  This follows Sun's
   approach.  */
# 946 "/usr/include/elf.h" 3 4
/* DT_* entries which fall between DT_ADDRRNGHI & DT_ADDRRNGLO use the
   Dyn.d_un.d_ptr field of the Elf*_Dyn structure.

   If any adjustment is made to the ELF object after it has been
   built these entries will need to be adjusted.  */
# 967 "/usr/include/elf.h" 3 4
/* The versioning entry types.  The next are defined as part of the
   GNU extension.  */





/* These were chosen by Sun.  */
# 985 "/usr/include/elf.h" 3 4
/* Sun added these machine-independent extensions in the "processor-specific"
   range.  Be compatible.  */





/* Values of `d_un.d_val' in the DT_FLAGS entry.  */






/* State flags selectable in the `d_un.d_val' element of the DT_FLAGS_1
   entry in the dynamic section.  */
# 1033 "/usr/include/elf.h" 3 4
/* Flags for the feature selection in DT_FEATURE_1.  */



/* Flags in the DT_POSFLAG_1 entry effecting only the next DT_* entry.  */




/* Version definition sections.  */

typedef struct
{
  Elf32_Half vd_version; /* Version revision */
  Elf32_Half vd_flags; /* Version information */
  Elf32_Half vd_ndx; /* Version Index */
  Elf32_Half vd_cnt; /* Number of associated aux entries */
  Elf32_Word vd_hash; /* Version name hash value */
  Elf32_Word vd_aux; /* Offset in bytes to verdaux array */
  Elf32_Word vd_next; /* Offset in bytes to next verdef
					   entry */
} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version; /* Version revision */
  Elf64_Half vd_flags; /* Version information */
  Elf64_Half vd_ndx; /* Version Index */
  Elf64_Half vd_cnt; /* Number of associated aux entries */
  Elf64_Word vd_hash; /* Version name hash value */
  Elf64_Word vd_aux; /* Offset in bytes to verdaux array */
  Elf64_Word vd_next; /* Offset in bytes to next verdef
					   entry */
} Elf64_Verdef;


/* Legal values for vd_version (version revision).  */




/* Legal values for vd_flags (version information flags).  */




/* Versym symbol index values.  */





/* Auxiliary version information.  */

typedef struct
{
  Elf32_Word vda_name; /* Version or dependency names */
  Elf32_Word vda_next; /* Offset in bytes to next verdaux
					   entry */
} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name; /* Version or dependency names */
  Elf64_Word vda_next; /* Offset in bytes to next verdaux
					   entry */
} Elf64_Verdaux;


/* Version dependency section.  */

typedef struct
{
  Elf32_Half vn_version; /* Version of structure */
  Elf32_Half vn_cnt; /* Number of associated aux entries */
  Elf32_Word vn_file; /* Offset of filename for this
					   dependency */
  Elf32_Word vn_aux; /* Offset in bytes to vernaux array */
  Elf32_Word vn_next; /* Offset in bytes to next verneed
					   entry */
} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version; /* Version of structure */
  Elf64_Half vn_cnt; /* Number of associated aux entries */
  Elf64_Word vn_file; /* Offset of filename for this
					   dependency */
  Elf64_Word vn_aux; /* Offset in bytes to vernaux array */
  Elf64_Word vn_next; /* Offset in bytes to next verneed
					   entry */
} Elf64_Verneed;


/* Legal values for vn_version (version revision).  */




/* Auxiliary needed version information.  */

typedef struct
{
  Elf32_Word vna_hash; /* Hash value of dependency name */
  Elf32_Half vna_flags; /* Dependency specific information */
  Elf32_Half vna_other; /* Unused */
  Elf32_Word vna_name; /* Dependency name string offset */
  Elf32_Word vna_next; /* Offset in bytes to next vernaux
					   entry */
} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash; /* Hash value of dependency name */
  Elf64_Half vna_flags; /* Dependency specific information */
  Elf64_Half vna_other; /* Unused */
  Elf64_Word vna_name; /* Dependency name string offset */
  Elf64_Word vna_next; /* Offset in bytes to next vernaux
					   entry */
} Elf64_Vernaux;


/* Auxiliary vector.  */

/* This vector is normally only used by the program interpreter.  The
   usual definition in an ABI supplement uses the name auxv_t.  The
   vector is not usually defined in a standard <elf.h> file, but it
   can't hurt.  We rename it to avoid conflicts.  The sizes of these
   types are an arrangement between the exec server and the program
   interpreter, so we don't fully specify them here.  */

typedef struct
{
  uint32_t a_type; /* Entry type */
  union
    {
      uint32_t a_val; /* Integer value */
      /* We use to have pointer elements added here.  We cannot do that,
	 though, since it does not work when using 32-bit definitions
	 on 64-bit platforms and vice versa.  */
    } a_un;
} Elf32_auxv_t;

typedef struct
{
  uint64_t a_type; /* Entry type */
  union
    {
      uint64_t a_val; /* Integer value */
      /* We use to have pointer elements added here.  We cannot do that,
	 though, since it does not work when using 32-bit definitions
	 on 64-bit platforms and vice versa.  */
    } a_un;
} Elf64_auxv_t;

/* Legal values for a_type (entry type).  */
# 1207 "/usr/include/elf.h" 3 4
/* Some more special a_type values describing the hardware.  */




/* This entry gives some information about the FPU initialization
   performed by the kernel.  */


/* Cache block sizes.  */




/* A special ignored value for PPC, used by the kernel to control the
   interpretation of the AUXV. Must be > 16.  */
# 1237 "/usr/include/elf.h" 3 4
/* More machine-dependent hints about processor capabilities.  */





/* Pointer to the global system page used for system calls and other
   nice things.  */



/* Shapes of the caches.  Bits 0-3 contains associativity; bits 4-7 contains
   log2 of line size; mask those to get cache size.  */





/* Shapes of the caches, with more room to describe them.
   *GEOMETRY are comprised of cache line size in bytes in the bottom 16 bits
   and the cache associativity in the next 16 bits.  */
# 1269 "/usr/include/elf.h" 3 4
/* Note section contents.  Each entry in the note section begins with
   a header of a fixed form.  */

typedef struct
{
  Elf32_Word n_namesz; /* Length of the note's name.  */
  Elf32_Word n_descsz; /* Length of the note's descriptor.  */
  Elf32_Word n_type; /* Type of the note.  */
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz; /* Length of the note's name.  */
  Elf64_Word n_descsz; /* Length of the note's descriptor.  */
  Elf64_Word n_type; /* Type of the note.  */
} Elf64_Nhdr;

/* Known names of notes.  */

/* Solaris entries in the note section have this name.  */


/* Note entries for GNU systems have this name.  */


/* Note entries for freedesktop.org have this name.  */


/* Defined types of notes for Solaris.  */

/* Value of descriptor (one word) is desired pagesize for the binary.  */



/* Defined note types for GNU systems.  */

/* ABI information.  The descriptor consists of words:
   word 0: OS descriptor
   word 1: major version of the ABI
   word 2: minor version of the ABI
   word 3: subminor version of the ABI
*/



/* Known OSes.  These values can appear in word 0 of an
   NT_GNU_ABI_TAG note section entry.  */





/* Synthetic hwcap information.  The descriptor begins with two words:
   word 0: number of entries
   word 1: bitmask of enabled entries
   Then follow variable-length entries, one byte followed by a
   '\0'-terminated hwcap name string.  The byte gives the bit
   number to test if enabled, (1U << bit) & bitmask.  */


/* Build ID bits as generated by ld --build-id.
   The descriptor consists of any nonzero number of bytes.  */


/* Version note generated by GNU gold containing a version string.  */


/* Program property.  */


/* Packaging metadata as defined on
   https://systemd.io/COREDUMP_PACKAGE_METADATA/ */


/* Note section name of program property.   */


/* Values used in GNU .note.gnu.property notes (NT_GNU_PROPERTY_TYPE_0).  */

/* Stack size.  */

/* No copy relocation on protected data symbol.  */


/* A 4-byte unsigned integer property: A bit is set if it is set in all
   relocatable inputs.  */



/* A 4-byte unsigned integer property: A bit is set if it is set in any
   relocatable inputs.  */



/* The needed properties by the object file.  */


/* Set if the object file requires canonical function pointers and
   cannot be used with copy relocation.  */


/* Processor-specific semantics, lo */

/* Processor-specific semantics, hi */

/* Application-specific semantics, lo */

/* Application-specific semantics, hi */


/* AArch64 specific GNU properties.  */





/* The x86 instruction sets indicated by the corresponding bits are
   used in program.  Their support in the hardware is optional.  */

/* The x86 instruction sets indicated by the corresponding bits are
   used in program and they must be supported by the hardware.   */

/* X86 processor-specific features used in program.  */


/* GNU_PROPERTY_X86_ISA_1_BASELINE: CMOV, CX8 (cmpxchg8b), FPU (fld),
   MMX, OSFXSR (fxsave), SCE (syscall), SSE and SSE2.  */

/* GNU_PROPERTY_X86_ISA_1_V2: GNU_PROPERTY_X86_ISA_1_BASELINE,
   CMPXCHG16B (cmpxchg16b), LAHF-SAHF (lahf), POPCNT (popcnt), SSE3,
   SSSE3, SSE4.1 and SSE4.2.  */

/* GNU_PROPERTY_X86_ISA_1_V3: GNU_PROPERTY_X86_ISA_1_V2, AVX, AVX2, BMI1,
   BMI2, F16C, FMA, LZCNT, MOVBE, XSAVE.  */

/* GNU_PROPERTY_X86_ISA_1_V4: GNU_PROPERTY_X86_ISA_1_V3, AVX512F,
   AVX512BW, AVX512CD, AVX512DQ and AVX512VL.  */


/* This indicates that all executable sections are compatible with
   IBT.  */

/* This indicates that all executable sections are compatible with
   SHSTK.  */


/* Move records.  */
typedef struct
{
  Elf32_Xword m_value; /* Symbol value.  */
  Elf32_Word m_info; /* Size and index.  */
  Elf32_Word m_poffset; /* Symbol offset.  */
  Elf32_Half m_repeat; /* Repeat count.  */
  Elf32_Half m_stride; /* Stride info.  */
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value; /* Symbol value.  */
  Elf64_Xword m_info; /* Size and index.  */
  Elf64_Xword m_poffset; /* Symbol offset.  */
  Elf64_Half m_repeat; /* Repeat count.  */
  Elf64_Half m_stride; /* Stride info.  */
} Elf64_Move;

/* Macro to construct move records.  */
# 1444 "/usr/include/elf.h" 3 4
/* Motorola 68k specific definitions.  */

/* Values for Elf32_Ehdr.e_flags.  */


/* m68k relocs.  */
# 1495 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* Intel 80386 specific definitions.  */

/* i386 relocs.  */
# 1562 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* SUN SPARC specific definitions.  */

/* Legal values for ST_TYPE subfield of st_info (symbol type).  */



/* Values for Elf64_Ehdr.e_flags.  */
# 1584 "/usr/include/elf.h" 3 4
/* SPARC relocs.  */
# 1611 "/usr/include/elf.h" 3 4
/* Additional Sparc64 relocs.  */
# 1683 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* For Sparc64, legal values for d_tag of Elf64_Dyn.  */




/* MIPS R3000 specific definitions.  */

/* Legal values for e_flags field of Elf32_Ehdr.  */
# 1720 "/usr/include/elf.h" 3 4
/* Legal values for MIPS architecture level.  */
# 1764 "/usr/include/elf.h" 3 4
/* The following are unofficial names and should not be used.  */
# 1774 "/usr/include/elf.h" 3 4
/* Special section indices.  */







/* Legal values for sh_type field of Elf32_Shdr.  */
# 1826 "/usr/include/elf.h" 3 4
/* Legal values for sh_flags field of Elf32_Shdr.  */
# 1838 "/usr/include/elf.h" 3 4
/* Symbol tables.  */

/* MIPS specific values for `st_other'.  */







/* MIPS specific values for `st_info'.  */


/* Entries found in sections of type SHT_MIPS_GPTAB.  */

typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value; /* -G value used for compilation.  */
      Elf32_Word gt_unused; /* Not used.  */
    } gt_header; /* First entry in section.  */
  struct
    {
      Elf32_Word gt_g_value; /* If this value were used for -G.  */
      Elf32_Word gt_bytes; /* This many bytes would be used.  */
    } gt_entry; /* Subsequent entries in section.  */
} Elf32_gptab;

/* Entry found in sections of type SHT_MIPS_REGINFO.  */

typedef struct
{
  Elf32_Word ri_gprmask; /* General registers used.  */
  Elf32_Word ri_cprmask[4]; /* Coprocessor registers used.  */
  Elf32_Sword ri_gp_value; /* $gp register value.  */
} Elf32_RegInfo;

/* Entries found in sections of type SHT_MIPS_OPTIONS.  */

typedef struct
{
  unsigned char kind; /* Determines interpretation of the
				   variable part of descriptor.  */
  unsigned char size; /* Size of descriptor, including header.  */
  Elf32_Section section; /* Section header index of section affected,
				   0 for global options.  */
  Elf32_Word info; /* Kind-specific information.  */
} Elf_Options;

/* Values for `kind' field in Elf_Options.  */
# 1900 "/usr/include/elf.h" 3 4
/* Values for `info' in Elf_Options for ODK_EXCEPTIONS entries.  */
# 1916 "/usr/include/elf.h" 3 4
/* Masks for `info' in Elf_Options for an ODK_HWPATCH entry.  */
# 1927 "/usr/include/elf.h" 3 4
/* Entry found in `.options' section.  */

typedef struct
{
  Elf32_Word hwp_flags1; /* Extra flags.  */
  Elf32_Word hwp_flags2; /* Extra flags.  */
} Elf_Options_Hw;

/* Masks for `info' in ElfOptions for ODK_HWAND and ODK_HWOR entries.  */




/* MIPS relocs.  */
# 2052 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* Legal values for p_type field of Elf32_Phdr.  */






/* Special program header types.  */



/* Legal values for d_tag field of Elf32_Dyn.  */
# 2120 "/usr/include/elf.h" 3 4
/* The address of .got.plt in an executable using the new non-PIC ABI.  */

/* The base of the PLT in an executable using the new non-PIC ABI if that
   PLT is writable.  For a non-writable PLT, this is omitted or has a zero
   value.  */

/* An alternative description of the classic MIPS RLD_MAP that is usable
   in a PIE as it stores a relative offset from the address of the tag
   rather than an absolute address.  */

/* GNU-style hash table with xlat.  */



/* Legal values for DT_MIPS_FLAGS Elf32_Dyn entry.  */
# 2153 "/usr/include/elf.h" 3 4
/* Entries found in sections of type SHT_MIPS_LIBLIST.  */

typedef struct
{
  Elf32_Word l_name; /* Name (string table index) */
  Elf32_Word l_time_stamp; /* Timestamp */
  Elf32_Word l_checksum; /* Checksum */
  Elf32_Word l_version; /* Interface version */
  Elf32_Word l_flags; /* Flags */
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name; /* Name (string table index) */
  Elf64_Word l_time_stamp; /* Timestamp */
  Elf64_Word l_checksum; /* Checksum */
  Elf64_Word l_version; /* Interface version */
  Elf64_Word l_flags; /* Flags */
} Elf64_Lib;


/* Legal values for l_flags.  */
# 2184 "/usr/include/elf.h" 3 4
/* Entries found in sections of type SHT_MIPS_CONFLICT.  */

typedef Elf32_Addr Elf32_Conflict;

typedef struct
{
  /* Version of flags structure.  */
  Elf32_Half version;
  /* The level of the ISA: 1-5, 32, 64.  */
  unsigned char isa_level;
  /* The revision of ISA: 0 for MIPS V and below, 1-n otherwise.  */
  unsigned char isa_rev;
  /* The size of general purpose registers.  */
  unsigned char gpr_size;
  /* The size of co-processor 1 registers.  */
  unsigned char cpr1_size;
  /* The size of co-processor 2 registers.  */
  unsigned char cpr2_size;
  /* The floating-point ABI.  */
  unsigned char fp_abi;
  /* Processor-specific extension.  */
  Elf32_Word isa_ext;
  /* Mask of ASEs used.  */
  Elf32_Word ases;
  /* Mask of general flags.  */
  Elf32_Word flags1;
  Elf32_Word flags2;
} Elf_MIPS_ABIFlags_v0;

/* Values for the register size bytes of an abi flags structure.  */






/* Masks for the ases word of an ABI flags structure.  */
# 2237 "/usr/include/elf.h" 3 4
/* Values for the isa_ext word of an ABI flags structure.  */
# 2258 "/usr/include/elf.h" 3 4
/* Masks for the flags1 word of an ABI flags structure.  */


/* Object attribute values.  */
enum
{
  /* Not tagged or not using any ABIs affected by the differences.  */
  Val_GNU_MIPS_ABI_FP_ANY = 0,
  /* Using hard-float -mdouble-float.  */
  Val_GNU_MIPS_ABI_FP_DOUBLE = 1,
  /* Using hard-float -msingle-float.  */
  Val_GNU_MIPS_ABI_FP_SINGLE = 2,
  /* Using soft-float.  */
  Val_GNU_MIPS_ABI_FP_SOFT = 3,
  /* Using -mips32r2 -mfp64.  */
  Val_GNU_MIPS_ABI_FP_OLD_64 = 4,
  /* Using -mfpxx.  */
  Val_GNU_MIPS_ABI_FP_XX = 5,
  /* Using -mips32r2 -mfp64.  */
  Val_GNU_MIPS_ABI_FP_64 = 6,
  /* Using -mips32r2 -mfp64 -mno-odd-spreg.  */
  Val_GNU_MIPS_ABI_FP_64A = 7,
  /* Maximum allocated FP ABI value.  */
  Val_GNU_MIPS_ABI_FP_MAX = 7
};

/* HPPA specific definitions.  */

/* Legal values for e_flags field of Elf32_Ehdr.  */
# 2297 "/usr/include/elf.h" 3 4
/* Defined values for `e_flags & EF_PARISC_ARCH' are:  */





/* Additional section indices.  */





/* Legal values for sh_type field of Elf32_Shdr.  */





/* Legal values for sh_flags field of Elf32_Shdr.  */





/* Legal values for ST_TYPE subfield of st_info (symbol type).  */






/* HPPA relocs.  */
# 2441 "/usr/include/elf.h" 3 4
/* Legal values for p_type field of Elf32_Phdr/Elf64_Phdr.  */
# 2462 "/usr/include/elf.h" 3 4
/* Legal values for p_flags field of Elf32_Phdr/Elf64_Phdr.  */
# 2475 "/usr/include/elf.h" 3 4
/* Alpha specific definitions.  */

/* Legal values for e_flags field of Elf64_Ehdr.  */




/* Legal values for sh_type field of Elf64_Shdr.  */

/* These two are primerily concerned with ECOFF debugging info.  */



/* Legal values for sh_flags field of Elf64_Shdr.  */



/* Legal values for st_other field of Elf64_Sym.  */



/* Alpha relocs.  */
# 2531 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* Magic values of the LITUSE relocation addend.  */







/* Legal values for d_tag of Elf64_Dyn.  */



/* PowerPC specific declarations */

/* Values for Elf32/64_Ehdr.e_flags.  */


/* Cygnus local bits below */




/* PowerPC relocations defined by the ABIs */
# 2595 "/usr/include/elf.h" 3 4
/* PowerPC relocations defined for the TLS access ABI.  */
# 2627 "/usr/include/elf.h" 3 4
/* The remaining relocs are from the Embedded ELF ABI, and are not
   in the SVR4 ELF ABI.  */
# 2646 "/usr/include/elf.h" 3 4
/* Diab tool relocations.  */







/* GNU extension to support local ifunc.  */


/* GNU relocs used in PIC code sequences.  */





/* This is a phony reloc to handle any old fashioned TOC16 references
   that may still be in object files.  */


/* PowerPC specific values for the Dyn d_tag field.  */




/* PowerPC specific values for the DT_PPC_OPT Dyn entry.  */


/* PowerPC64 relocations defined by the ABIs */
# 2745 "/usr/include/elf.h" 3 4
/* PowerPC64 relocations defined for the TLS access ABI.  */
# 2790 "/usr/include/elf.h" 3 4
/* Added when HA and HI relocs were changed to report overflows.  */







/* GNU extension to support local ifunc.  */







/* e_flags bits specifying ABI.
   1 for original function descriptor using ABI,
   2 for revised ABI without function descriptors,
   0 for unspecified or not using any features affected by the differences.  */


/* PowerPC64 specific values for the Dyn d_tag field.  */






/* PowerPC64 specific bits in the DT_PPC64_OPT Dyn entry.  */




/* PowerPC64 specific values for the Elf64_Sym st_other field.  */






/* ARM specific declarations */

/* Processor specific flags for the ELF header e_flags field.  */
# 2851 "/usr/include/elf.h" 3 4
/* Other constants defined in the ARM ELF spec. version B-01.  */
/* NB. These conflict with values defined above.  */





/* Constants defined in AAELF.  */
# 2870 "/usr/include/elf.h" 3 4
/* Additional symbol types for Thumb.  */



/* ARM-specific values for sh_flags */




/* ARM-specific program header flags */





/* Processor specific values for the Phdr p_type field.  */


/* Processor specific values for the Shdr sh_type field.  */





/* AArch64 relocs.  */



/* ILP32 AArch64 relocs.  */
# 2910 "/usr/include/elf.h" 3 4
/* LP64 AArch64 relocs.  */
# 3034 "/usr/include/elf.h" 3 4
/* MTE memory tag segment type.  */


/* AArch64 specific values for the Dyn d_tag field.  */





/* AArch64 specific values for the st_other field.  */


/* ARM relocs.  */
# 3211 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* C-SKY */
# 3237 "/usr/include/elf.h" 3 4
                                        /* ((S + A) >> 16) & 0xffff */


                                        /* ((GOT + A - P) >> 16) & 0xffff */


                                        /* ((S + A - GOT) >> 16) & 0xffff */



                                        /* (G >> 16) & 0xffff */



                                        /* (G >> 16) & 0xffff */


                                        /* (GOT + G * 4) & 0xffff */


                                        /* ((GOT + G * 4) >> 16) & 0xFFFF */
# 3278 "/usr/include/elf.h" 3 4
/* C-SKY elf header definition.  */







/* C-SKY attributes section.  */


/* IA-64 specific declarations.  */

/* Processor specific flags for the Ehdr e_flags field.  */




/* Processor specific values for the Phdr p_type field.  */






/* Processor specific flags for the Phdr p_flags field.  */


/* Processor specific values for the Shdr sh_type field.  */



/* Processor specific flags for the Shdr sh_flags field.  */



/* Processor specific values for the Dyn d_tag field.  */



/* IA-64 relocations.  */
# 3401 "/usr/include/elf.h" 3 4
/* SH specific declarations */

/* Processor specific flags for the ELF header e_flags field.  */
# 3427 "/usr/include/elf.h" 3 4
/* SH relocs.  */
# 3465 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* S/390 specific definitions.  */

/* Valid values for the e_flags field.  */



/* Additional s390 relocs */
# 3556 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */



/* CRIS relocations.  */
# 3585 "/usr/include/elf.h" 3 4
/* AMD x86-64 relocations.  */
# 3633 "/usr/include/elf.h" 3 4
     /* 39 Reserved was R_X86_64_PC32_BND */
     /* 40 Reserved was R_X86_64_PLT32_BND */
# 3643 "/usr/include/elf.h" 3 4
/* x86-64 sh_type values.  */


/* x86-64 d_tag values.  */





/* AM33 relocations.  */
# 3696 "/usr/include/elf.h" 3 4
/* M32R relocs.  */
# 3710 "/usr/include/elf.h" 3 4
/* M32R relocs use SHT_RELA.  */
# 3751 "/usr/include/elf.h" 3 4
/* MicroBlaze relocations */
# 3783 "/usr/include/elf.h" 3 4
/* Legal values for d_tag (dynamic entry type).  */


/* Nios II relocations.  */
# 3835 "/usr/include/elf.h" 3 4
/* TILEPro relocations.  */
# 3892 "/usr/include/elf.h" 3 4
/* Relocs 56-59 are currently not defined.  */
# 3933 "/usr/include/elf.h" 3 4
/* TILE-Gx relocations.  */
# 4024 "/usr/include/elf.h" 3 4
/* Relocs 90-91 are currently not defined.  */
# 4037 "/usr/include/elf.h" 3 4
/* Relocs 104-105 are currently not defined.  */
# 4060 "/usr/include/elf.h" 3 4
/* RISC-V ELF Flags */
# 4070 "/usr/include/elf.h" 3 4
/* RISC-V relocations.  */
# 4132 "/usr/include/elf.h" 3 4
/* RISC-V specific values for the st_other field.  */



/* RISC-V specific values for the sh_type field.  */


/* RISC-V specific values for the p_type field.  */


/* RISC-V specific values for the d_tag field.  */


/* BPF specific declarations.  */





/* Imagination Meta specific relocations. */
# 4160 "/usr/include/elf.h" 3 4
/* Backward compatibility */
# 4175 "/usr/include/elf.h" 3 4
/* GNU */



/* PIC relocations */
# 4196 "/usr/include/elf.h" 3 4
/* TLS relocations */
# 4213 "/usr/include/elf.h" 3 4
/* NDS32 relocations.  */
# 4223 "/usr/include/elf.h" 3 4
/* LoongArch ELF Flags */






/* LoongArch specific dynamic relocations */
# 4245 "/usr/include/elf.h" 3 4
/* Reserved for future relocs that the dynamic linker must understand.  */

/* used by the static linker for relocating .text.  */
# 4276 "/usr/include/elf.h" 3 4
/* used by the static linker for relocating non .text.  */
# 4290 "/usr/include/elf.h" 3 4
/* reserved 59-63 */
# 4339 "/usr/include/elf.h" 3 4
/* ARC specific declarations.  */

/* Processor specific flags for the Ehdr e_flags field.  */




/* Processor specific values for the Shdr sh_type field.  */


/* ARCompact/ARCv2 specific relocs.  */
# 4427 "/usr/include/elf.h" 3 4
/* OpenRISC 1000 specific relocs.  */
# 37 "/usr/include/libelf.h" 2 3 4
# 109 "/usr/include/libelf.h" 3 4
/* Known translation types.  */
typedef enum
{
  ELF_T_BYTE, /* unsigned char */
  ELF_T_ADDR, /* Elf32_Addr, Elf64_Addr, ... */
  ELF_T_DYN, /* Dynamic section record.  */
  ELF_T_EHDR, /* ELF header.  */
  ELF_T_HALF, /* Elf32_Half, Elf64_Half, ... */
  ELF_T_OFF, /* Elf32_Off, Elf64_Off, ... */
  ELF_T_PHDR, /* Program header.  */
  ELF_T_RELA, /* Relocation entry with addend.  */
  ELF_T_REL, /* Relocation entry.  */
  ELF_T_SHDR, /* Section header.  */
  ELF_T_SWORD, /* Elf32_Sword, Elf64_Sword, ... */
  ELF_T_SYM, /* Symbol record.  */
  ELF_T_WORD, /* Elf32_Word, Elf64_Word, ... */
  ELF_T_XWORD, /* Elf32_Xword, Elf64_Xword, ... */
  ELF_T_SXWORD, /* Elf32_Sxword, Elf64_Sxword, ... */
  ELF_T_VDEF, /* Elf32_Verdef, Elf64_Verdef, ... */
  ELF_T_VDAUX, /* Elf32_Verdaux, Elf64_Verdaux, ... */
  ELF_T_VNEED, /* Elf32_Verneed, Elf64_Verneed, ... */
  ELF_T_VNAUX, /* Elf32_Vernaux, Elf64_Vernaux, ... */
  ELF_T_NHDR, /* Elf32_Nhdr, Elf64_Nhdr, ... */
  ELF_T_SYMINFO, /* Elf32_Syminfo, Elf64_Syminfo, ... */
  ELF_T_MOVE, /* Elf32_Move, Elf64_Move, ... */
  ELF_T_LIB, /* Elf32_Lib, Elf64_Lib, ... */
  ELF_T_GNUHASH, /* GNU-style hash section.  */
  ELF_T_AUXV, /* Elf32_auxv_t, Elf64_auxv_t, ... */
  ELF_T_CHDR, /* Compressed, Elf32_Chdr, Elf64_Chdr, ... */
  ELF_T_NHDR8, /* Special GNU Properties note.  Same as Nhdr,
				   except padding.  */
  ELF_T_RELR, /* Relative relocation entry.  */
  /* Keep this the last entry.  */
  ELF_T_NUM
} Elf_Type;

/* Descriptor for data to be converted to or from memory format.  */
typedef struct
{
  void *d_buf; /* Pointer to the actual data.  */
  Elf_Type d_type; /* Type of this piece of data.  */
  unsigned int d_version; /* ELF version.  */
  size_t d_size; /* Size in bytes.  */
  int64_t d_off; /* Offset into section.  */
  size_t d_align; /* Alignment in section.  */
} Elf_Data;


/* Commands for `...'.  */
typedef enum
{
  ELF_C_NULL, /* Nothing, terminate, or compute only.  */
  ELF_C_READ, /* Read .. */
  ELF_C_RDWR, /* Read and write .. */
  ELF_C_WRITE, /* Write .. */
  ELF_C_CLR, /* Clear flag.  */
  ELF_C_SET, /* Set flag.  */
  ELF_C_FDDONE, /* Signal that file descriptor will not be
				   used anymore.  */
  ELF_C_FDREAD, /* Read rest of data so that file descriptor
				   is not used anymore.  */
  /* The following are extensions.  */
  ELF_C_READ_MMAP, /* Read, but mmap the file if possible.  */
  ELF_C_RDWR_MMAP, /* Read and write, with mmap.  */
  ELF_C_WRITE_MMAP, /* Write, with mmap.  */
  ELF_C_READ_MMAP_PRIVATE, /* Read, but memory is writable, results are
				   not written to the file.  */
  ELF_C_EMPTY, /* Copy basic file data but not the content. */
  /* Keep this the last entry.  */
  ELF_C_NUM
} Elf_Cmd;


/* Flags for the ELF structures.  */
enum
{
  ELF_F_DIRTY = 0x1,

  ELF_F_LAYOUT = 0x4,

  ELF_F_PERMISSIVE = 0x8

};

/* Flags for elf_compress[_gnu].  */
enum
{
  ELF_CHF_FORCE = 0x1

};

/* Identification values for recognized object files.  */
typedef enum
{
  ELF_K_NONE, /* Unknown.  */
  ELF_K_AR, /* Archive.  */
  ELF_K_COFF, /* Stupid old COFF.  */
  ELF_K_ELF, /* ELF file.  */
  /* Keep this the last entry.  */
  ELF_K_NUM
} Elf_Kind;


/* Archive member header.  */
typedef struct
{
  char *ar_name; /* Name of archive member.  */
  time_t ar_date; /* File date.  */
  uid_t ar_uid; /* User ID.  */
  gid_t ar_gid; /* Group ID.  */
  mode_t ar_mode; /* File mode.  */
  int64_t ar_size; /* File size.  */
  char *ar_rawname; /* Original name of archive member.  */
} Elf_Arhdr;


/* Archive symbol table entry.  */
typedef struct
{
  char *as_name; /* Symbol name.  */
  size_t as_off; /* Offset for this file in the archive.  */
  unsigned long int as_hash; /* Hash value of the name.  */
} Elf_Arsym;


/* Descriptor for the ELF file.  */
typedef struct Elf Elf;

/* Descriptor for ELF file section.  */
typedef struct Elf_Scn Elf_Scn;






/* Return descriptor for ELF file to work according to CMD.  */
extern Elf *elf_begin (int __fildes, Elf_Cmd __cmd, Elf *__ref);

/* Create a clone of an existing ELF descriptor.  */
  extern Elf *elf_clone (Elf *__elf, Elf_Cmd __cmd);

/* Create descriptor for memory region.  */
extern Elf *elf_memory (char *__image, size_t __size);

/* Advance archive descriptor to next element.  */
extern Elf_Cmd elf_next (Elf *__elf);

/* Free resources allocated for ELF.  */
extern int elf_end (Elf *__elf);

/* Update ELF descriptor and write file to disk.  */
extern int64_t elf_update (Elf *__elf, Elf_Cmd __cmd);

/* Determine what kind of file is associated with ELF.  */
extern Elf_Kind elf_kind (Elf *__elf) ;

/* Get the base offset for an object file.  */
extern int64_t elf_getbase (Elf *__elf);


/* Retrieve file identification data.  */
extern char *elf_getident (Elf *__elf, size_t *__nbytes);

/* Retrieve class-dependent object file header.  */
extern Elf32_Ehdr *elf32_getehdr (Elf *__elf);
/* Similar but this time the binary calls is ELFCLASS64.  */
extern Elf64_Ehdr *elf64_getehdr (Elf *__elf);

/* Create ELF header if none exists.  */
extern Elf32_Ehdr *elf32_newehdr (Elf *__elf);
/* Similar but this time the binary calls is ELFCLASS64.  */
extern Elf64_Ehdr *elf64_newehdr (Elf *__elf);

/* Get the number of program headers in the ELF file.  If the file uses
   more headers than can be represented in the e_phnum field of the ELF
   header the information from the sh_info field in the zeroth section
   header is used.  */
extern int elf_getphdrnum (Elf *__elf, size_t *__dst);

/* Retrieve class-dependent program header table.  */
extern Elf32_Phdr *elf32_getphdr (Elf *__elf);
/* Similar but this time the binary calls is ELFCLASS64.  */
extern Elf64_Phdr *elf64_getphdr (Elf *__elf);

/* Create ELF program header.  */
extern Elf32_Phdr *elf32_newphdr (Elf *__elf, size_t __cnt);
/* Similar but this time the binary calls is ELFCLASS64.  */
extern Elf64_Phdr *elf64_newphdr (Elf *__elf, size_t __cnt);


/* Get section at INDEX.  */
extern Elf_Scn *elf_getscn (Elf *__elf, size_t __index);

/* Get section at OFFSET.  */
extern Elf_Scn *elf32_offscn (Elf *__elf, Elf32_Off __offset);
/* Similar but this time the binary calls is ELFCLASS64.  */
extern Elf_Scn *elf64_offscn (Elf *__elf, Elf64_Off __offset);

/* Get index of section.  */
extern size_t elf_ndxscn (Elf_Scn *__scn);

/* Get section with next section index.  */
extern Elf_Scn *elf_nextscn (Elf *__elf, Elf_Scn *__scn);

/* Create a new section and append it at the end of the table.  */
extern Elf_Scn *elf_newscn (Elf *__elf);

/* Get the section index of the extended section index table for the
   given symbol table.  */
extern int elf_scnshndx (Elf_Scn *__scn);

/* Get the number of sections in the ELF file.  If the file uses more
   sections than can be represented in the e_shnum field of the ELF
   header the information from the sh_size field in the zeroth section
   header is used.  */
extern int elf_getshdrnum (Elf *__elf, size_t *__dst);
/* Sun messed up the implementation of 'elf_getshnum' in their implementation.
   It was agreed to make the same functionality available under a different
   name and obsolete the old name.  */
extern int elf_getshnum (Elf *__elf, size_t *__dst)
     ;


/* Get the section index of the section header string table in the ELF
   file.  If the index cannot be represented in the e_shstrndx field of
   the ELF header the information from the sh_link field in the zeroth
   section header is used.  */
extern int elf_getshdrstrndx (Elf *__elf, size_t *__dst);
/* Sun messed up the implementation of 'elf_getshstrndx' in their
   implementation.  It was agreed to make the same functionality available
   under a different name and obsolete the old name.  */
extern int elf_getshstrndx (Elf *__elf, size_t *__dst)
     ;


/* Retrieve section header of ELFCLASS32 binary.  */
extern Elf32_Shdr *elf32_getshdr (Elf_Scn *__scn);
/* Similar for ELFCLASS64.  */
extern Elf64_Shdr *elf64_getshdr (Elf_Scn *__scn);

/* Returns compression header for a section if section data is
   compressed.  Returns NULL and sets elf_errno if the section isn't
   compressed or an error occurred.  */
extern Elf32_Chdr *elf32_getchdr (Elf_Scn *__scn);
extern Elf64_Chdr *elf64_getchdr (Elf_Scn *__scn);

/* Compress or decompress the data of a section and adjust the section
   header.

   elf_compress works by setting or clearing the SHF_COMPRESS flag
   from the section Shdr and will encode or decode a Elf32_Chdr or
   Elf64_Chdr at the start of the section data.  elf_compress_gnu will
   encode or decode any section, but is traditionally only used for
   sections that have a name starting with ".debug" when
   uncompressed or ".zdebug" when compressed and stores just the
   uncompressed size.  The GNU compression method is deprecated and
   should only be used for legacy support.

   elf_compress takes a compression type that should be either zero to
   decompress or an ELFCOMPRESS algorithm to use for compression.
   Currently ELFCOMPRESS_ZLIB and ELFCOMPRESS_ZSTD are supported.
   elf_compress_gnu will compress in the traditional GNU compression
   format when compress is one and decompress the section data when
   compress is zero.

   The FLAGS argument can be zero or ELF_CHF_FORCE.  If FLAGS contains
   ELF_CHF_FORCE then it will always compress the section, even if
   that would not reduce the size of the data section (including the
   header).  Otherwise elf_compress and elf_compress_gnu will compress
   the section only if the total data size is reduced.

   On successful compression or decompression the function returns
   one.  If (not forced) compression is requested and the data section
   would not actually reduce in size, the section is not actually
   compressed and zero is returned.  Otherwise -1 is returned and
   elf_errno is set.

   It is an error to request compression for a section that already
   has SHF_COMPRESSED set, or (for elf_compress) to request
   decompression for an section that doesn't have SHF_COMPRESSED set.
   If a section has SHF_COMPRESSED set then calling elf_compress_gnu
   will result in an error.  The section has to be decompressed first
   using elf_compress.  Calling elf_compress on a section compressed
   with elf_compress_gnu is fine, but probably useless.

   It is always an error to call these functions on SHT_NOBITS
   sections or if the section has the SHF_ALLOC flag set.
   elf_compress_gnu will not check whether the section name starts
   with ".debug" or .zdebug".  It is the responsibility of the caller
   to make sure the deprecated GNU compression method is only called
   on correctly named sections (and to change the name of the section
   when using elf_compress_gnu).

   All previous returned Shdrs and Elf_Data buffers are invalidated by
   this call and should no longer be accessed.

   Note that although this changes the header and data returned it
   doesn't mark the section as dirty.  To keep the changes when
   calling elf_update the section has to be flagged ELF_F_DIRTY.  */
extern int elf_compress (Elf_Scn *scn, int type, unsigned int flags);
extern int elf_compress_gnu (Elf_Scn *scn, int compress, unsigned int flags);

/* Set or clear flags for ELF file.  */
extern unsigned int elf_flagelf (Elf *__elf, Elf_Cmd __cmd,
     unsigned int __flags);
/* Similarly for the ELF header.  */
extern unsigned int elf_flagehdr (Elf *__elf, Elf_Cmd __cmd,
      unsigned int __flags);
/* Similarly for the ELF program header.  */
extern unsigned int elf_flagphdr (Elf *__elf, Elf_Cmd __cmd,
      unsigned int __flags);
/* Similarly for the given ELF section.  */
extern unsigned int elf_flagscn (Elf_Scn *__scn, Elf_Cmd __cmd,
     unsigned int __flags);
/* Similarly for the given ELF data.  */
extern unsigned int elf_flagdata (Elf_Data *__data, Elf_Cmd __cmd,
      unsigned int __flags);
/* Similarly for the given ELF section header.  */
extern unsigned int elf_flagshdr (Elf_Scn *__scn, Elf_Cmd __cmd,
      unsigned int __flags);


/* Get data from section while translating from file representation to
   memory representation.  The Elf_Data d_type is set based on the
   section type if known.  Otherwise d_type is set to ELF_T_BYTE.  If
   the section contains compressed data then d_type is always set to
   ELF_T_CHDR.  */
extern Elf_Data *elf_getdata (Elf_Scn *__scn, Elf_Data *__data);

/* Get uninterpreted section content.  */
extern Elf_Data *elf_rawdata (Elf_Scn *__scn, Elf_Data *__data);

/* Create new data descriptor for section SCN.  */
extern Elf_Data *elf_newdata (Elf_Scn *__scn);

/* Get data translated from a chunk of the file contents as section data
   would be for TYPE.  The resulting Elf_Data pointer is valid until
   elf_end (ELF) is called.  */
extern Elf_Data *elf_getdata_rawchunk (Elf *__elf,
           int64_t __offset, size_t __size,
           Elf_Type __type);


/* Return pointer to string at OFFSET in section INDEX.  */
extern char *elf_strptr (Elf *__elf, size_t __index, size_t __offset);


/* Return header of archive.  */
extern Elf_Arhdr *elf_getarhdr (Elf *__elf);

/* Return offset in archive for current file ELF.  */
extern int64_t elf_getaroff (Elf *__elf);

/* Select archive element at OFFSET.  */
extern size_t elf_rand (Elf *__elf, size_t __offset);

/* Get symbol table of archive.  */
extern Elf_Arsym *elf_getarsym (Elf *__elf, size_t *__narsyms);


/* Control ELF descriptor.  */
extern int elf_cntl (Elf *__elf, Elf_Cmd __cmd);

/* Retrieve uninterpreted file contents.  */
extern char *elf_rawfile (Elf *__elf, size_t *__nbytes);


/* Return size of array of COUNT elements of the type denoted by TYPE
   in the external representation.  The binary class is taken from ELF.
   The result is based on version VERSION of the ELF standard.  */
extern size_t elf32_fsize (Elf_Type __type, size_t __count,
      unsigned int __version)
       ;
/* Similar but this time the binary calls is ELFCLASS64.  */
extern size_t elf64_fsize (Elf_Type __type, size_t __count,
      unsigned int __version)
       ;


/* Convert data structure from the representation in the file represented
   by ELF to their memory representation.  */
extern Elf_Data *elf32_xlatetom (Elf_Data *__dest, const Elf_Data *__src,
     unsigned int __encode);
/* Same for 64 bit class.  */
extern Elf_Data *elf64_xlatetom (Elf_Data *__dest, const Elf_Data *__src,
     unsigned int __encode);

/* Convert data structure from to the representation in memory
   represented by ELF file representation.  */
extern Elf_Data *elf32_xlatetof (Elf_Data *__dest, const Elf_Data *__src,
     unsigned int __encode);
/* Same for 64 bit class.  */
extern Elf_Data *elf64_xlatetof (Elf_Data *__dest, const Elf_Data *__src,
     unsigned int __encode);


/* Return error code of last failing function call.  This value is kept
   separately for each thread.  */
extern int elf_errno (void);

/* Return error string for ERROR.  If ERROR is zero, return error string
   for most recent error or NULL is none occurred.  If ERROR is -1 the
   behaviour is similar to the last case except that not NULL but a legal
   string is returned.  */
extern const char *elf_errmsg (int __error);


/* Coordinate ELF library and application versions.  */
extern unsigned int elf_version (unsigned int __version);

/* Set fill bytes used to fill holes in data structures.  */
extern void elf_fill (int __fill);

/* Compute hash value.  */
extern unsigned long int elf_hash (const char *__string)
       ;

/* Compute hash value using the GNU-specific hash function.  */
extern unsigned long int elf_gnu_hash (const char *__string)
       ;


/* Compute simple checksum from permanent parts of the ELF file.  */
extern long int elf32_checksum (Elf *__elf);
/* Similar but this time the binary calls is ELFCLASS64.  */
extern long int elf64_checksum (Elf *__elf);
# 12 "main.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 6.5 File Control Operations	<fcntl.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/fcntl.h" 2 3 4

/* This must be early so <bits/fcntl.h> can define types winningly.  */


/* Get __mode_t, __dev_t and __off_t  .*/
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 32 "/usr/include/fcntl.h" 2 3 4

/* Get the definitions of O_*, F_*, FD_*: all the
   numbers and flag bits for `open', `fcntl', et al.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
/* O_*, F_*, FD_* bit values for Linux/x86.
   Copyright (C) 2001-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 28 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
/* Not necessary, we always have 64-bit offsets.  */






struct flock
  {
    short int l_type; /* Type of lock: F_RDLCK, F_WRLCK, or F_UNLCK.	*/
    short int l_whence; /* Where `l_start' is relative to (like `lseek').  */

    __off_t l_start; /* Offset where the lock begins.  */
    __off_t l_len; /* Size of the locked area; zero means until EOF.  */




    __pid_t l_pid; /* Process holding the lock.  */
  };


struct flock64
  {
    short int l_type; /* Type of lock: F_RDLCK, F_WRLCK, or F_UNLCK.	*/
    short int l_whence; /* Where `l_start' is relative to (like `lseek').  */
    __off64_t l_start; /* Offset where the lock begins.  */
    __off64_t l_len; /* Size of the locked area; zero means until EOF.  */
    __pid_t l_pid; /* Process holding the lock.  */
  };


/* Include generic Linux declarations.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
/* O_*, F_*, FD_* bit values for Linux.
   Copyright (C) 2001-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* This file contains shared definitions between Linux architectures
   and is included by <bits/fcntl.h> to declare them.  The various
   #ifndef cases allow the architecture specific file to define those
   values with different values.

   A minimal <bits/fcntl.h> contains just:

   struct flock {...}
   #ifdef __USE_LARGEFILE64
   struct flock64 {...}
   #endif
   #include <bits/fcntl-linux.h>
*/


# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 1 3 4
/* Define struct iovec.
   Copyright (C) 1996-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
/* A null pointer constant.  */
# 24 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 2 3 4

/* Structure for scatter/gather I/O.  */
struct iovec
  {
    void *iov_base; /* Pointer to data.  */
    size_t iov_len; /* Length of data.  */
  };
# 39 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4


/* open/fcntl.  */
# 120 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* open file description locks.

   Usually record locks held by a process are released on *any* close and are
   not inherited across a fork.

   These cmd values will set locks that conflict with process-associated record
   locks, but are "owned" by the opened file description, not the process.
   This means that they are inherited across fork or clone with CLONE_FILES
   like BSD (flock) locks, and they are only released automatically when the
   last reference to the the file description against which they were acquired
   is put. */
# 154 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* For now, Linux has no separate synchronicity options for read
   operations.  We define O_RSYNC therefore as the same as O_SYNC
   since this is a superset.  */
# 166 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Values for the second argument to `fcntl'.  */
# 207 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Set / get write life time hints.  */
# 218 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* For F_[GET|SET]FD.  */



/* For posix fcntl() and `l_type' field of a `struct flock' for lockf().  */






/* For old implementation of BSD flock.  */






/* Operations for BSD flock, also used by the kernel implementation.  */
# 252 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Types of directory notifications that may be requested with F_NOTIFY.  */
# 264 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Owner types.  */
enum __pid_type
  {
    F_OWNER_TID = 0, /* Kernel thread.  */
    F_OWNER_PID, /* Process.  */
    F_OWNER_PGRP, /* Process group.  */
    F_OWNER_GID = F_OWNER_PGRP /* Alternative, obsolete name.  */
  };

/* Structure to use with F_GETOWN_EX and F_SETOWN_EX.  */
struct f_owner_ex
  {
    enum __pid_type type; /* Owner type of ID.  */
    __pid_t pid; /* ID of owner.  */
  };



/* Types of seals.  */
# 293 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Hint values for F_{GET,SET}_RW_HINT.  */
# 303 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Define some more compatibility macros to be backward compatible with
   BSD systems which did not managed to hide these kernel macros.  */
# 317 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Advise to `posix_fadvise'.  */
# 329 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Flags for SYNC_FILE_RANGE.  */
# 339 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* SYNC_FILE_RANGE_WRITE_AND_WAIT ensures all pages in the range are
   written to disk before returning.  */




/* Flags for SPLICE and VMSPLICE.  */
# 354 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
/* Flags for fallocate.  */
# 1 "/usr/include/linux/falloc.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */







/*
 * FALLOC_FL_COLLAPSE_RANGE is used to remove a range of a file
 * without leaving a hole in the file. The contents of the file beyond
 * the range being removed is appended to the start offset of the range
 * being removed (i.e. the hole that was punched is "collapsed"),
 * resulting in a file layout that looks like the range that was
 * removed never existed. As such collapsing a range of a file changes
 * the size of the file, reducing it by the same length of the range
 * that has been removed by the operation.
 *
 * Different filesystems may implement different limitations on the
 * granularity of the operation. Most will limit operations to
 * filesystem block size boundaries, but this boundary may be larger or
 * smaller depending on the filesystem and/or the configuration of the
 * filesystem or file.
 *
 * Attempting to collapse a range that crosses the end of the file is
 * considered an illegal operation - just use ftruncate(2) if you need
 * to collapse a range that crosses EOF.
 */


/*
 * FALLOC_FL_ZERO_RANGE is used to convert a range of file to zeros preferably
 * without issuing data IO. Blocks should be preallocated for the regions that
 * span holes in the file, and the entire range is preferable converted to
 * unwritten extents - even though file system may choose to zero out the
 * extent or do whatever which will result in reading zeros from the range
 * while the range remains allocated for the file.
 *
 * This can be also used to preallocate blocks past EOF in the same way as
 * with fallocate. Flag FALLOC_FL_KEEP_SIZE should cause the inode
 * size to remain the same.
 */


/*
 * FALLOC_FL_INSERT_RANGE is use to insert space within the file size without
 * overwriting any existing data. The contents of the file beyond offset are
 * shifted towards right by len bytes to create a hole.  As such, this
 * operation will increase the size of the file by len bytes.
 *
 * Different filesystems may implement different limitations on the granularity
 * of the operation. Most will limit operations to filesystem block size
 * boundaries, but this boundary may be larger or smaller depending on
 * the filesystem and/or the configuration of the filesystem or file.
 *
 * Attempting to insert space using this flag at OR beyond the end of
 * the file is considered an illegal operation - just use ftruncate(2) or
 * fallocate(2) with mode 0 for such type of operations.
 */


/*
 * FALLOC_FL_UNSHARE_RANGE is used to unshare shared blocks within the
 * file size without overwriting any existing data. The purpose of this
 * call is to preemptively reallocate any blocks that are subject to
 * copy-on-write.
 *
 * Different filesystems may implement different limitations on the
 * granularity of the operation. Most will limit operations to filesystem
 * block size boundaries, but this boundary may be larger or smaller
 * depending on the filesystem and/or the configuration of the filesystem
 * or file.
 *
 * This flag can only be used with allocate-mode fallocate, which is
 * to say that it cannot be used with the punch, zero, collapse, or
 * insert range modes.
 */
# 356 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4


/* File handle structure.  */
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;
  /* File identifier.  */
  unsigned char f_handle[0];
};

/* Maximum handle size (for now).  */




/* Flags for name_to_handle_at.  See comment in fcntl.h about the use
   of the same AT_* flag bits for different purposes in different
   functions.  */











/* Provide kernel hint to read ahead.  */
extern __ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    ;


/* Selective file content synch'ing.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);


/* Splice address range into a pipe.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __ssize_t vmsplice (int __fdout, const struct iovec *__iov,
      size_t __count, unsigned int __flags);

/* Splice two files together.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
    __off64_t *__offout, size_t __len,
    unsigned int __flags);

/* In-kernel implementation of tee for pipe buffers.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __ssize_t tee (int __fdin, int __fdout, size_t __len,
        unsigned int __flags);

/* Reserve storage for the data of the file associated with FD.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 437 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);



/* Map file name to file handle.  */
extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) ;

/* Open file using the file handle.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);




# 62 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4

/* Detect if open needs mode as a third argument (or for openat as a fourth
   argument).  */







/* POSIX.1-2001 specifies that these types are defined by <fcntl.h>.
   Earlier POSIX standards permitted any type ending in `_t' to be defined
   by any POSIX header, so we don't conditionalize the definitions here.  */
# 73 "/usr/include/fcntl.h" 3 4
/* For XPG all symbols from <sys/stat.h> should also be available.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
/* NB: Include guard matches what <linux/time.h> uses.  */
# 76 "/usr/include/fcntl.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
/* Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 1 3 4
/* Definition for struct stat.
   Copyright (C) 2020-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
struct stat
  {



    __dev_t st_dev; /* Device.  */




    __ino_t st_ino; /* File serial number.	*/







    __nlink_t st_nlink; /* Link count.  */
    __mode_t st_mode; /* File mode.  */

    __uid_t st_uid; /* User ID of the file's owner.	*/
    __gid_t st_gid; /* Group ID of the file's group.*/

    int __pad0;

    __dev_t st_rdev; /* Device number, if device.  */




    __off_t st_size; /* Size of file, in bytes.  */



    __blksize_t st_blksize; /* Optimal block size for I/O.  */

    __blkcnt_t st_blocks; /* Number 512-byte blocks allocated. */




    /* Nanosecond resolution timestamps are stored in a format
       equivalent to 'struct timespec'.  This is the type used
       whenever possible but the Unix namespace rules do not allow the
       identifier 'timespec' to appear in the <sys/stat.h> header.
       Therefore we have to handle the use of this header in strictly
       standard-compliant sources special.  */
    struct timespec st_atim; /* Time of last access.  */
    struct timespec st_mtim; /* Time of last modification.  */
    struct timespec st_ctim; /* Time of last status change.  */
# 89 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 99 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
  };


/* Note stat64 has the same shape as stat for x86-64.  */
struct stat64
  {



    __dev_t st_dev; /* Device.  */

    __ino64_t st_ino; /* File serial number.  */
    __nlink_t st_nlink; /* Link count.  */
    __mode_t st_mode; /* File mode.  */






    __uid_t st_uid; /* User ID of the file's owner.	*/
    __gid_t st_gid; /* Group ID of the file's group.*/

    int __pad0;
    __dev_t st_rdev; /* Device number, if device.  */
    __off_t st_size; /* Size of file, in bytes.  */





    __blksize_t st_blksize; /* Optimal block size for I/O.  */
    __blkcnt64_t st_blocks; /* Nr. 512-byte blocks allocated.  */

    /* Nanosecond resolution timestamps are stored in a format
       equivalent to 'struct timespec'.  This is the type used
       whenever possible but the Unix namespace rules do not allow the
       identifier 'timespec' to appear in the <sys/stat.h> header.
       Therefore we have to handle the use of this header in strictly
       standard-compliant sources special.  */
    struct timespec st_atim; /* Time of last access.  */
    struct timespec st_mtim; /* Time of last modification.  */
    struct timespec st_ctim; /* Time of last status change.  */
# 151 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];




  };


/* Tell code we have these members.  */


/* Nanosecond resolution time values are supported.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/stat.h" 2 3 4

/* Encoding of the file mode.  */



/* File types.  */
# 40 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
/* POSIX.1b objects.  Note that these macros always evaluate to zero.  But
   they do it by enforcing the correct use of the macros.  */




/* Protection bits.  */
# 79 "/usr/include/fcntl.h" 2 3 4
# 95 "/usr/include/fcntl.h" 3 4
/* Protection bits.  */





/* Save swapped text after use (sticky bit).  This is pretty well obsolete.  */






/* Read, write, and execute by owner.  */





/* Read, write, and execute by group.  */





/* Read, write, and execute by others.  */
# 135 "/usr/include/fcntl.h" 3 4
/* XPG wants the following symbols.   <stdio.h> has the same definitions.  */






/* The constants AT_REMOVEDIR and AT_EACCESS have the same value.  AT_EACCESS
   is meaningful only to faccessat, while AT_REMOVEDIR is meaningful only to
   unlinkat.  The two functions do completely different things and therefore,
   the flags can be allowed to overlap.  For example, passing AT_REMOVEDIR to
   faccessat would be undefined behavior and thus treating it equivalent to
   AT_EACCESS is valid undefined behavior.  */
# 170 "/usr/include/fcntl.h" 3 4
/* Do the file control operation described by CMD on FD.
   The remaining arguments are interpreted depending on CMD.

   This function is a cancellation point and therefore not marked with
   __THROW.  */


extern int fcntl (int __fd, int __cmd, ...);
# 186 "/usr/include/fcntl.h" 3 4
extern int fcntl64 (int __fd, int __cmd, ...);
# 201 "/usr/include/fcntl.h" 3 4
/* Open FILE and return a new file descriptor for it, or -1 on error.
   OFLAG determines the type of access used.  If O_CREAT or O_TMPFILE is set
   in OFLAG, the third argument is taken as a `mode_t', the mode of the
   created file.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int open (const char *__file, int __oflag, ...) ;
# 219 "/usr/include/fcntl.h" 3 4
extern int open64 (const char *__file, int __oflag, ...) ;



/* Similar to `open' but a relative path name is interpreted relative to
   the directory for which FD is a descriptor.

   NOTE: some other `openat' implementation support additional functionality
   through this interface, especially using the O_XATTR flag.  This is not
   yet supported here.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
# 244 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     ;



/* Create and open FILE, with mode MODE.  This takes an `int' MODE
   argument because that is what `mode_t' will be widened to.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int creat (const char *__file, mode_t __mode) ;
# 265 "/usr/include/fcntl.h" 3 4
extern int creat64 (const char *__file, mode_t __mode) ;
# 298 "/usr/include/fcntl.h" 3 4
/* Advice the system about the expected behaviour of the application with
   respect to the file associated with FD.  */

extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
# 313 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) ;



/* Reserve storage for the data of the file associated with FD.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 334 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);




/* Define some inlines helping to catch common problems.  */






# 13 "main.c" 2
# 1 "/usr/include/string.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.21 String handling	<string.h>
 */
# 14 "main.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard 7.4: Character handling	<ctype.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/ctype.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 27 "/usr/include/ctype.h" 2 3 4




/* These are all the characteristics of characters.
   If there get to be more than 16 distinct characteristics,
   many things must be changed that use `unsigned short int's.

   The characteristics are stored always in network byte order (big
   endian).  We define the bit value interpretations here dependent on the
   machine's byte order.  */

# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
/* Endian macros for string.h functions
   Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
# 40 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)), /* UPPERCASE.  */
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)), /* lowercase.  */
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)), /* Alphabetic.  */
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)), /* Numeric.  */
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)), /* Hexadecimal numeric.  */
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)), /* Whitespace.  */
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)), /* Printing.  */
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)), /* Graphical.  */
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)), /* Blank (usually SPC and TAB).  */
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)), /* Control character.  */
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)), /* Punctuation.  */
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8)) /* Alphanumeric.  */
};


/* These are defined in ctype-info.c.
   The declarations here must match those in localeinfo.h.

   In the thread-specific locale model (see `uselocale' in <locale.h>)
   we cannot use global variables for these as was done in the past.
   Instead, the following accessor functions return the address of
   each variable, which is local to the current thread if multithreaded.

   These point into arrays of 384, so they can be indexed by any `unsigned
   char' value [0,255]; by EOF (-1); or by any `signed char' value
   [-128,-1).  ISO C requires that the ctype functions work for `unsigned
   char' values and for EOF; we also support negative `signed char' values
   for broken old programs.  The case conversion arrays are of `int's
   rather than `unsigned char's because tolower (EOF) must be EOF, which
   doesn't fit into an `unsigned char'.  But today more important is that
   the arrays are also used for multi-byte character sets.  */
extern const unsigned short int **__ctype_b_loc (void)
     ;
extern const __int32_t **__ctype_tolower_loc (void)
     ;
extern const __int32_t **__ctype_toupper_loc (void)
     ;
# 104 "/usr/include/ctype.h" 3 4
/* The following names are all functions:
     int isCHARACTERISTIC(int c);
   which return nonzero iff C has CHARACTERISTIC.
   For the meaning of the characteristic names, see the `enum' above.  */
extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;


/* Return the lowercase version of C.  */
extern int tolower (int __c) ;

/* Return the uppercase version of C.  */
extern int toupper (int __c) ;


/* ISO C99 introduced one new function.  */

extern int isblank (int) ;



/* Test C for a set of character classes according to MASK.  */
extern int isctype (int __c, int __mask) ;




/* Return nonzero iff C is in the ASCII set
   (i.e., is no more than 7 bits wide).  */
extern int isascii (int __c) ;

/* Return the part of C that is in the ASCII set
   (i.e., the low-order 7 bits of C).  */
extern int toascii (int __c) ;

/* These are the same as `toupper' and `tolower' except that they do not
   check the argument for being in the range of a `char'.  */
extern int _toupper (int) ;
extern int _tolower (int) ;


/* This code is needed for the optimized mapping functions.  */
# 236 "/usr/include/ctype.h" 3 4
/* POSIX.1-2008 extended locale interface (see locale.h).  */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
/* Definition of locale_t.
   Copyright (C) 2017-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 238 "/usr/include/ctype.h" 2 3 4

/* These definitions are similar to the ones above but all functions
   take as an argument a handle for the locale which shall be used.  */






/* The following names are all functions:
     int isCHARACTERISTIC(int c, locale_t *locale);
   which return nonzero iff C has CHARACTERISTIC.
   For the meaning of the characteristic names, see the `enum' above.  */
extern int isalnum_l (int, locale_t) ;
extern int isalpha_l (int, locale_t) ;
extern int iscntrl_l (int, locale_t) ;
extern int isdigit_l (int, locale_t) ;
extern int islower_l (int, locale_t) ;
extern int isgraph_l (int, locale_t) ;
extern int isprint_l (int, locale_t) ;
extern int ispunct_l (int, locale_t) ;
extern int isspace_l (int, locale_t) ;
extern int isupper_l (int, locale_t) ;
extern int isxdigit_l (int, locale_t) ;

extern int isblank_l (int, locale_t) ;


/* Return the lowercase version of C in locale L.  */
extern int __tolower_l (int __c, locale_t __l) ;
extern int tolower_l (int __c, locale_t __l) ;

/* Return the uppercase version of C.  */
extern int __toupper_l (int __c, locale_t __l) ;
extern int toupper_l (int __c, locale_t __l) ;
# 327 "/usr/include/ctype.h" 3 4

# 15 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */
# 16 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 5.6 File Characteristics	<sys/stat.h>
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */
# 28 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
/* NB: Include guard matches what <linux/time.h> uses.  */
# 31 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4



/* The Single Unix specification says that some more types are
   available here.  */
# 99 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
/* Copyright (C) 1992-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 102 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* Test macros for file types.	*/
# 147 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* These are from POSIX.1b.  If the objects are not implemented using separate
   distinct file types, the macros always will evaluate to zero.  Unlike the
   other S_* macros the following three take a pointer to a `struct stat'
   object as the argument.  */







/* Protection bits.  */





/* Save swapped text after use (sticky bit).  This is pretty well obsolete.  */






/* Read, write, and execute by owner.  */
# 183 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* Read, write, and execute by group.  */





/* Read, write, and execute by others.  */




/* Macros for common mode bit masks.  */
# 204 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* Get file attributes for FILE and put them in BUF.  */
extern int stat (const char *restrict __file,
   struct stat *restrict __buf) ;

/* Get file attributes for the file, device, pipe, or socket
   that file descriptor FD is open on and put them in BUF.  */
extern int fstat (int __fd, struct stat *__buf) ;
# 240 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat64 (const char *restrict __file,
     struct stat64 *restrict __buf) ;
extern int fstat64 (int __fd, struct stat64 *__buf) ;
# 260 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* Similar to stat, get the attributes for FILE and put them in BUF.
   Relative path names are interpreted relative to FD unless FD is
   AT_FDCWD.  */

extern int fstatat (int __fd, const char *restrict __file,
      struct stat *restrict __buf, int __flag)
     ;
# 291 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *restrict __file,
        struct stat64 *restrict __buf, int __flag)
     ;
# 311 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* Get file attributes about FILE and put them in BUF.
   If FILE is a symbolic link, do not follow it.  */
extern int lstat (const char *restrict __file,
    struct stat *restrict __buf) ;
# 338 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat64 (const char *restrict __file,
      struct stat64 *restrict __buf)
     ;
# 350 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* Set file access permissions for FILE to MODE.
   If FILE is a symbolic link, this affects its target instead.  */
extern int chmod (const char *__file, __mode_t __mode)
     ;


/* Set file access permissions for FILE to MODE.
   If FILE is a symbolic link, this affects the link itself
   rather than its target.  */
extern int lchmod (const char *__file, __mode_t __mode)
     ;


/* Set file access permissions of the file FD is open on to MODE.  */

extern int fchmod (int __fd, __mode_t __mode) ;



/* Set file access permissions of FILE relative to
   the directory FD is open on.  */
extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     ;




/* Set the file creation mask of the current process to MASK,
   and return the old creation mask.  */
extern __mode_t umask (__mode_t __mask) ;


/* Get the current `umask' value without changing it.
   This function is only available under the GNU Hurd.  */
extern __mode_t getumask (void) ;


/* Create a new directory named PATH, with permission bits MODE.  */
extern int mkdir (const char *__path, __mode_t __mode)
     ;


/* Like mkdir, create a new directory with permission bits MODE.  But
   interpret relative PATH names relative to the directory associated
   with FD.  */
extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     ;


/* Create a device file named PATH, with permission and special bits MODE
   and device number DEV (which can be constructed from major and minor
   device numbers with the `makedev' macro above).  */

extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     ;


/* Like mknod, create a new device file with permission bits MODE and
   device number DEV.  But interpret relative PATH names relative to
   the directory associated with FD.  */
extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) ;




/* Create a new FIFO named PATH, with permission bits MODE.  */
extern int mkfifo (const char *__path, __mode_t __mode)
     ;


/* Like mkfifo, create a new FIFO with permission bits MODE.  But
   interpret relative PATH names relative to the directory associated
   with FD.  */
extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     ;




/* Set file access and modification times relative to directory file
   descriptor.  */
extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     ;
# 451 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
/* Set file access and modification times of the file associated with FD.  */
extern int futimens (int __fd, const struct timespec __times[2]) ;
# 465 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/statx.h" 1 3 4
/* statx-related definitions and declarations.  Linux version.
   Copyright (C) 2018-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This interface is based on <linux/stat.h> in Linux.  */





/* Use the Linux kernel header if available.  */

/* Use "" to work around incorrect macro expansion of the
   __has_include argument (GCC PR 80005).  */


# 1 "/usr/include/linux/stat.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/linux/types.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/x86_64-linux-gnu/asm/types.h" 1 3 4
# 1 "/usr/include/asm-generic/types.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */


/*
 * int-ll64 is used everywhere now.
 */
# 1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 * asm-generic/int-ll64.h
 *
 * Integer declarations for architectures which use "long long"
 * for 64-bit types.
 */




# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 11 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 12 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 13 "/usr/include/asm-generic/int-ll64.h" 2 3 4


/*
 * __xx is ok: it doesn't pollute the POSIX namespace. Use these in the
 * header files exported to user space
 */

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;





typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/types.h" 2 3 4
# 6 "/usr/include/linux/types.h" 2 3 4



# 1 "/usr/include/linux/posix_types.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/linux/stddef.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 11 "/usr/include/linux/stddef.h" 3 4
/**
 * __struct_group() - Create a mirrored named and anonyomous struct
 *
 * @TAG: The tag name for the named sub-struct (usually empty)
 * @NAME: The identifier name of the mirrored sub-struct
 * @ATTRS: Any struct attributes (usually empty)
 * @MEMBERS: The member declarations for the mirrored structs
 *
 * Used to create an anonymous union of two structs with identical layout
 * and size: one anonymous and one named. The former's members can be used
 * normally without sub-struct naming, and the latter can be used to
 * reason about the start, end, and size of the group of struct members.
 * The named struct can also be explicitly tagged for layer reuse, as well
 * as both having struct attributes appended.
 */
# 37 "/usr/include/linux/stddef.h" 3 4
/**
 * __DECLARE_FLEX_ARRAY() - Declare a flexible array usable in a union
 *
 * @TYPE: The type of each flexible array element
 * @NAME: The name of the flexible array member
 *
 * In order to have a flexible array member in a union or alone in a
 * struct, it needs to be wrapped in an anonymous struct with at least 1
 * named member, but that member can be empty.
 */
# 6 "/usr/include/linux/posix_types.h" 2 3 4

/*
 * This allows for 1024 file descriptors: if NR_OPEN is ever grown
 * beyond that you'll have to change this too. But 1024 fd's seem to be
 * enough even for such "real" unices like OSF/1, so hopefully this is
 * one limit that doesn't have to be changed [again].
 *
 * Note that POSIX wants the FD_CLEAR(fd,fdsetp) defines to be in
 * <sys/time.h> (and thus <linux/time.h>) - but this is a more logical
 * place for them. Solved by having dummy defines in <sys/time.h>.
 */

/*
 * This macro may have been defined in <gnu/types.h>. But we always
 * use the one here.
 */



typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;

/* Type of a signal handler.  */
typedef void (*__kernel_sighandler_t)(int);

/* Type of a SYSV IPC key.  */
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */





# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


typedef unsigned long __kernel_old_dev_t;


# 1 "/usr/include/asm-generic/posix_types.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 6 "/usr/include/asm-generic/posix_types.h" 2 3 4
/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.
 *
 * First the types that are often defined in different ways across
 * architectures, so that you can override them.
 */


typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 62 "/usr/include/asm-generic/posix_types.h" 3 4
/*
 * Most 32 bit architectures use "unsigned int" size_t,
 * and all 64 bit architectures use "unsigned long" size_t.
 */






typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;


/*
 * anything below here should be completely generic
 */
typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 19 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 2 3 4
# 8 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 2 3 4
# 37 "/usr/include/linux/posix_types.h" 2 3 4
# 10 "/usr/include/linux/types.h" 2 3 4


typedef __signed__ __int128 __s128 ;
typedef unsigned __int128 __u128 ;


/*
 * Below are truly Linux-specific types that should never collide with
 * any application/library that wants linux/types.h.
 */

/* sparse defines __CHECKER__; see Documentation/dev-tools/sparse.rst */






/* The kernel doesn't use this legacy form, but user space does */


typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;

/*
 * aligned_u64 should be used in defining kernel<->userspace ABIs to avoid
 * common 32/64-bit compat problems.
 * 64-bit values align to 4-byte boundaries on x86_32 (and possibly other
 * architectures) and to 8-byte boundaries on 64-bit architectures.  The new
 * aligned_64 type enforces 8-byte alignment so that structs containing
 * aligned_64 values have the same alignment on 32-bit and 64-bit architectures.
 * No conversions are necessary between 32-bit user-space and a 64-bit kernel.
 */




typedef unsigned __poll_t;
# 6 "/usr/include/linux/stat.h" 2 3 4
# 46 "/usr/include/linux/stat.h" 3 4
/*
 * Timestamp structure for the timestamps in struct statx.
 *
 * tv_sec holds the number of seconds before (negative) or after (positive)
 * 00:00:00 1st January 1970 UTC.
 *
 * tv_nsec holds a number of nanoseconds (0..999,999,999) after the tv_sec time.
 *
 * __reserved is held in case we need a yet finer resolution.
 */
struct statx_timestamp {
 __s64 tv_sec;
 __u32 tv_nsec;
 __s32 __reserved;
};

/*
 * Structures for the extended file attribute retrieval system call
 * (statx()).
 *
 * The caller passes a mask of what they're specifically interested in as a
 * parameter to statx().  What statx() actually got will be indicated in
 * st_mask upon return.
 *
 * For each bit in the mask argument:
 *
 * - if the datum is not supported:
 *
 *   - the bit will be cleared, and
 *
 *   - the datum will be set to an appropriate fabricated value if one is
 *     available (eg. CIFS can take a default uid and gid), otherwise
 *
 *   - the field will be cleared;
 *
 * - otherwise, if explicitly requested:
 *
 *   - the datum will be synchronised to the server if AT_STATX_FORCE_SYNC is
 *     set or if the datum is considered out of date, and
 *
 *   - the field will be filled in and the bit will be set;
 *
 * - otherwise, if not requested, but available in approximate form without any
 *   effort, it will be filled in anyway, and the bit will be set upon return
 *   (it might not be up to date, however, and no attempt will be made to
 *   synchronise the internal state first);
 *
 * - otherwise the field and the bit will be cleared before returning.
 *
 * Items in STATX_BASIC_STATS may be marked unavailable on return, but they
 * will have values installed for compatibility purposes so that stat() and
 * co. can be emulated in userspace.
 */
struct statx {
 /* 0x00 */
 __u32 stx_mask; /* What results were written [uncond] */
 __u32 stx_blksize; /* Preferred general I/O size [uncond] */
 __u64 stx_attributes; /* Flags conveying information about the file [uncond] */
 /* 0x10 */
 __u32 stx_nlink; /* Number of hard links */
 __u32 stx_uid; /* User ID of owner */
 __u32 stx_gid; /* Group ID of owner */
 __u16 stx_mode; /* File mode */
 __u16 __spare0[1];
 /* 0x20 */
 __u64 stx_ino; /* Inode number */
 __u64 stx_size; /* File size */
 __u64 stx_blocks; /* Number of 512-byte blocks allocated */
 __u64 stx_attributes_mask; /* Mask to show what's supported in stx_attributes */
 /* 0x40 */
 struct statx_timestamp stx_atime; /* Last access time */
 struct statx_timestamp stx_btime; /* File creation time */
 struct statx_timestamp stx_ctime; /* Last attribute change time */
 struct statx_timestamp stx_mtime; /* Last data modification time */
 /* 0x80 */
 __u32 stx_rdev_major; /* Device ID of special file [if bdev/cdev] */
 __u32 stx_rdev_minor;
 __u32 stx_dev_major; /* ID of device containing file [uncond] */
 __u32 stx_dev_minor;
 /* 0x90 */
 __u64 stx_mnt_id;
 __u32 stx_dio_mem_align; /* Memory buffer alignment for direct I/O */
 __u32 stx_dio_offset_align; /* File offset alignment for direct I/O */
 /* 0xa0 */
 __u64 __spare3[12]; /* Spare space for future expansion */
 /* 0x100 */
};

/*
 * Flags to be stx_mask
 *
 * Query request/result mask for statx() and struct statx::stx_mask.
 *
 * These bits should be set in the mask argument of statx() to request
 * particular items when calling statx().
 */
# 161 "/usr/include/linux/stat.h" 3 4
/*
 * This is deprecated, and shall remain the same value in the future.  To avoid
 * confusion please use the equivalent (STATX_BASIC_STATS | STATX_BTIME)
 * instead.
 */


/*
 * Attributes to be found in stx_attributes and masked in stx_attributes_mask.
 *
 * These give information about the features or the state of a file that might
 * be of use to ordinary userspace programs such as GUIs or ls rather than
 * specialised tools.
 *
 * Note that the flags marked [I] correspond to the FS_IOC_SETFLAGS flags
 * semantically.  Where possible, the numerical value is picked to correspond
 * also.  Note that the DAX attribute indicates that the file is in the CPU
 * direct access state.  It does not correspond to the per-inode flag that
 * some filesystems support.
 *
 */
# 32 "/usr/include/x86_64-linux-gnu/bits/statx.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 1 3 4
/* Generic statx-related definitions and declarations.
   Copyright (C) 2018-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This interface is based on <linux/stat.h> in Linux.  */





# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_statx_timestamp.h" 1 3 4
/* Definition of the generic version of struct statx_timestamp.
   Copyright (C) 2018-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_statx.h" 1 3 4
/* Definition of the generic version of struct statx.
   Copyright (C) 2018-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 2 3 4
# 58 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 3 4


/* Fill *BUF with information about PATH in DIRFD.  */
int statx (int __dirfd, const char *restrict __path, int __flags,
           unsigned int __mask, struct statx *restrict __buf)
  ;


# 40 "/usr/include/x86_64-linux-gnu/bits/statx.h" 2 3 4
# 466 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4



# 17 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/signal.h" 1 3 4
# 1 "/usr/include/signal.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.14 Signal handling <signal.h>
 */
# 2 "/usr/include/x86_64-linux-gnu/sys/signal.h" 2 3 4
# 18 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/fcntl.h" 1 3 4
# 1 "/usr/include/fcntl.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 6.5 File Control Operations	<fcntl.h>
 */
# 2 "/usr/include/x86_64-linux-gnu/sys/fcntl.h" 2 3 4
# 19 "main.c" 2
# 1 "/usr/include/syscall.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 1 3 4
/* Copyright (C) 1995-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This file should list the numbers of the system calls the system knows.
   But instead of duplicating this we use the information available
   from the kernel sources.  */
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



/*
 * x32 syscall flag bit.  Some user programs expect syscall NR macros
 * and __X32_SYSCALL_BIT to have type int, even though syscall numbers
 * are, for practical purposes, unsigned long.
 *
 * Fortunately, expressions like (nr & ~__X32_SYSCALL_BIT) do the right
 * thing regardless.
 */







# 1 "/usr/include/x86_64-linux-gnu/asm/unistd_64.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 2 3 4

/* The Linux kernel header file defines macros __NR_*, but some
   programs expect the traditional form SYS_*.  <bits/syscall.h>
   defines SYS_* macros for __NR_* macros of known names.  */
# 1 "/usr/include/x86_64-linux-gnu/bits/syscall.h" 1 3 4
/* Generated at libc build time from syscall list.  */
/* The system call list corresponds to kernel 6.7.  */
# 30 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 2 3 4
# 2 "/usr/include/syscall.h" 2 3 4
# 20 "main.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 1 3 4
/* Copyright (C) 1995-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 21 "main.c" 2
# 1 "/usr/include/errno.h" 1 3 4
/* Copyright (C) 1991-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.5 Errors	<errno.h>
 */
# 22 "main.c" 2


# 23 "main.c"
map<string, void*>*% get_function_addr_from_elf_file(const char *filename)
{
    map<string, void*>*% result = new map<string, void*>();
    int fd = open(filename, 
# 26 "main.c" 3 4
                           00
# 26 "main.c"
                                   );
    if (fd < 0) {
        perror("Failed to open file");
        exit(
# 29 "main.c" 3 4
            1
# 29 "main.c"
                        );
    }

    Elf *elf;
    if (elf_version(
# 33 "main.c" 3 4
                   1
# 33 "main.c"
                             ) == 
# 33 "main.c" 3 4
                                  0
# 33 "main.c"
                                         ) {
        fprintf(
# 34 "main.c" 3 4
               stderr
# 34 "main.c"
                     , "ELF library initialization failed\n");
        exit(
# 35 "main.c" 3 4
            1
# 35 "main.c"
                        );
    }

    elf = elf_begin(fd, ELF_C_READ, 
# 38 "main.c" 3 4
                                   ((void *)0)
# 38 "main.c"
                                       );
    if (!elf) {
        fprintf(
# 40 "main.c" 3 4
               stderr
# 40 "main.c"
                     , "elf_begin() failed\n");
        exit(
# 41 "main.c" 3 4
            1
# 41 "main.c"
                        );
    }

    Dwarf_Debug dbg;
    Dwarf_Error err;
    if (dwarf_elf_init(elf, 
# 46 "main.c" 3 4
                           0
# 46 "main.c"
                                      , 
# 46 "main.c" 3 4
                                        ((void *)0)
# 46 "main.c"
                                            , 
# 46 "main.c" 3 4
                                              ((void *)0)
# 46 "main.c"
                                                  , &dbg, &err) != 
# 46 "main.c" 3 4
                                                                   0
# 46 "main.c"
                                                                            ) {
        fprintf(
# 47 "main.c" 3 4
               stderr
# 47 "main.c"
                     , "dwarf_elf_init() failed: %s\n", dwarf_errmsg(err));
        exit(
# 48 "main.c" 3 4
            1
# 48 "main.c"
                        );
    }

    Dwarf_Unsigned cu_header_length, abbrev_offset, next_cu_header;
    Dwarf_Half version_stamp, address_size;
    Dwarf_Error error;
    while (dwarf_next_cu_header(dbg, &cu_header_length, &version_stamp,
                                &abbrev_offset, &address_size, &next_cu_header, &error) == 
# 55 "main.c" 3 4
                                                                                          0
# 55 "main.c"
                                                                                                   ) {
        Dwarf_Die no_die = 0, cu_die;
        if (dwarf_siblingof(dbg, no_die, &cu_die, &error) == 
# 57 "main.c" 3 4
                                                            0
# 57 "main.c"
                                                                     ) {
            Dwarf_Die child_die;
            if (dwarf_child(cu_die, &child_die, &error) == 
# 59 "main.c" 3 4
                                                          0
# 59 "main.c"
                                                                   ) {
                Dwarf_Die current_die = child_die;
                do {
                    char *die_name;
                    Dwarf_Addr low_pc;
                    if (dwarf_diename(current_die, &die_name, &error) == 
# 64 "main.c" 3 4
                                                                        0
# 64 "main.c"
                                                                                 ) {
                        if (dwarf_lowpc(current_die, &low_pc, &error) == 
# 65 "main.c" 3 4
                                                                        0
# 65 "main.c"
                                                                                 ) {
                            result.insert(string(die_name), low_pc);
                        }
                    }
                } while (dwarf_siblingof(dbg, current_die, &current_die, &error) == 
# 69 "main.c" 3 4
                                                                                   0
# 69 "main.c"
                                                                                            );
            }
        }
    }

    dwarf_finish(dbg, &err);
    elf_end(elf);
    close(fd);

    return result;
}

void run_target(char* target_program)
{
    if (ptrace(PTRACE_TRACEME, 0, 
# 83 "main.c" 3 4
                                 ((void *)0)
# 83 "main.c"
                                     , 
# 83 "main.c" 3 4
                                       ((void *)0)
# 83 "main.c"
                                           ) == -1) {
        perror("ptrace");
        exit(1);
    }
    execl(target_program, s"./\{target_program}", 
# 87 "main.c" 3 4
                                                 ((void *)0)
# 87 "main.c"
                                                     );
}

void run_debugger(pid_t child_pid, void *func_addr) {
    int wait_status;
    struct user_regs_struct regs;


    waitpid(child_pid, &wait_status, 0);


    printf("Setting breakpoint at address %p\n", func_addr);
    long original_data = ptrace(PTRACE_PEEKTEXT, child_pid, func_addr, 
# 99 "main.c" 3 4
                                                                      ((void *)0)
# 99 "main.c"
                                                                          );
    if (
# 100 "main.c" 3 4
       (*__errno_location ()) 
# 100 "main.c"
             != 0) {
        perror("ptrace PEEKTEXT");
        exit(1);
    }


    ptrace(PTRACE_POKETEXT, child_pid, func_addr, (original_data & ~0xFF) | 0xCC);


    ptrace(PTRACE_CONT, child_pid, 
# 109 "main.c" 3 4
                                  ((void *)0)
# 109 "main.c"
                                      , 
# 109 "main.c" 3 4
                                        ((void *)0)
# 109 "main.c"
                                            );


    waitpid(child_pid, &wait_status, 0);
    if (
# 113 "main.c" 3 4
       (((
# 113 "main.c"
       wait_status
# 113 "main.c" 3 4
       ) & 0xff) == 0x7f) 
# 113 "main.c"
                               && 
# 113 "main.c" 3 4
                                  (((
# 113 "main.c"
                                  wait_status
# 113 "main.c" 3 4
                                  ) & 0xff00) >> 8) 
# 113 "main.c"
                                                        == 
# 113 "main.c" 3 4
                                                           5
# 113 "main.c"
                                                                  ) {
        printf("Hit breakpoint at address %p\n", func_addr);


        ptrace(PTRACE_GETREGS, child_pid, 
# 117 "main.c" 3 4
                                         ((void *)0)
# 117 "main.c"
                                             , &regs);
        printf("RIP = 0x%llx\n", regs.rip);


        ptrace(PTRACE_POKETEXT, child_pid, func_addr, original_data);


        regs.rip -= 1;
        ptrace(PTRACE_SETREGS, child_pid, 
# 125 "main.c" 3 4
                                         ((void *)0)
# 125 "main.c"
                                             , &regs);


        ptrace(PTRACE_SINGLESTEP, child_pid, 
# 128 "main.c" 3 4
                                            ((void *)0)
# 128 "main.c"
                                                , 
# 128 "main.c" 3 4
                                                  ((void *)0)
# 128 "main.c"
                                                      );
        waitpid(child_pid, &wait_status, 0);
    }


    ptrace(PTRACE_CONT, child_pid, 
# 133 "main.c" 3 4
                                  ((void *)0)
# 133 "main.c"
                                      , 
# 133 "main.c" 3 4
                                        ((void *)0)
# 133 "main.c"
                                            );
    waitpid(child_pid, &wait_status, 0);
    printf("Target program finished.\n");
}

int main(int argc, char **argv) {
    if(argc == 3) {
        string program_name = string(argv[1]);
        var addrs = get_function_addr_from_elf_file(program_name);

        string func_name = string(argv[2]);

        pid_t child_pid;
        void (*func_ptr)() = addrs[func_name]??;


        child_pid = fork();
        if (child_pid == 0) {

            run_target();
        } else if (child_pid > 0) {

            run_debugger(child_pid, func_addr);
        } else {
            perror("fork");
            return 1;
        }
    }

    return 0;
}
