# 1 "code/codex.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 465 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "code/codex.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 1 3 4
/*
 * Copyright (c) 2000, 2005, 2007, 2009, 2010, 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Chris Torek.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)stdio.h	8.5 (Berkeley) 4/29/95
 */

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 1 3 4
/*
 * Copyright (c) 2000, 2005, 2007, 2009, 2010, 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Chris Torek.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)stdio.h	8.5 (Berkeley) 4/29/95
 */

/*
 * Common header for stdio.h and xlocale/_stdio.h
 */





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h" 1 3 4
/*
 * Copyright (c) 2024 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 1 3 4
/*
 * Copyright (c) 2000-2018 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright 1995 NeXT Computer, Inc. All rights reserved. */
/*
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 */
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/* This SDK is designed to work with clang and specific versions of
 * gcc >= 4.0 with Apple's patch sets */




/*
 * Compatibility with compilers and environments that don't support compiler
 * feature checking function-like macros.
 */
# 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky -- make sure you don't put spaces
 * in between its arguments.  __CONCAT can also concatenate double-quoted
 * strings produced by the __STRING macro, but this only works with ANSI C.
 */
# 158 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * __pure2 can be used for functions that are only a function of their scalar
 * arguments (meaning they can't dereference pointers).
 *
 * __stateful_pure can be used for functions that have no side effects,
 * but depend on the state of the memory.
 */




/* __unused denotes variables and functions that may not be used, preventing
 * the compiler from warning about it if not used.
 */


/* __used forces variables and functions to be included even if it appears
 * to the compiler that they are not used (and would thust be discarded).
 */


/* __cold marks code used for debugging or that is rarely taken
 * and tells the compiler to optimize for size and outline code.
 */






/* __returns_nonnull marks functions that return a non-null pointer. */






/* __exported denotes symbols that should be exported even when symbols
 * are hidden by default.
 * __exported_push/_exported_pop are pragmas used to delimit a range of
 *  symbols that should be exported even when symbols are hidden by default.
 */




/* __deprecated causes the compiler to produce a warning when encountering
 * code using the deprecated functionality.
 * __deprecated_msg() does the same, and compilers that support it will print
 * a message along with the deprecation warning.
 * This may require turning on such warning with the -Wdeprecated flag.
 * __deprecated_enum_msg() should be used on enums, and compilers that support
 * it will print the deprecation warning.
 * __kpi_deprecated() specifically indicates deprecation of kernel programming
 * interfaces in Kernel.framework used by KEXTs.
 */
# 231 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/* __unavailable causes the compiler to error out when encountering
 * code using the tagged function
 */
# 244 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/* Delete pseudo-keywords wherever they are not available or needed. */





/*
 * We use `__restrict' as a way to define the `restrict' type qualifier
 * without disturbing older software that is unaware of C99 keywords.
 */






/* Compatibility with compilers and environments that don't support the
 * nullability feature.
 */
# 285 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * __disable_tail_calls causes the compiler to not perform tail call
 * optimization inside the marked function.
 */






/*
 * __not_tail_called causes the compiler to prevent tail call optimization
 * on statically bound calls to the function.  It has no effect on indirect
 * calls.  Virtual functions, objective-c methods, and functions marked as
 * "always_inline" cannot be marked as __not_tail_called.
 */






/*
 * __result_use_check warns callers of a function that not using the function
 * return value is a bug, i.e. dismissing malloc() return value results in a
 * memory leak.
 */






/*
 * __swift_unavailable causes the compiler to mark a symbol as specifically
 * unavailable in Swift, regardless of any other availability in C.
 */






/*
 * Attributes to support Swift concurrency.
 */
# 341 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * __abortlike is the attribute to put on functions like abort() that are
 * typically used to mark assertions. These optimize the codegen
 * for outlining while still maintaining debugability.
 */




/* Declaring inline functions within headers is error-prone due to differences
 * across various versions of the C language and extensions.  __header_inline
 * can be used to declare inline functions within system headers.  In cases
 * where you want to force inlining instead of letting the compiler make
 * the decision, you can use __header_always_inline.
 *
 * Be aware that using inline for functions which compilers may also provide
 * builtins can behave differently under various compilers.  If you intend to
 * provide an inline version of such a function, you may want to use a macro
 * instead.
 *
 * The check for !__GNUC__ || __clang__ is because gcc doesn't correctly
 * support c99 inline in some cases:
 * http://gcc.gnu.org/bugzilla/show_bug.cgi?id=55965
 */
# 385 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/* Unfortunately, we're using a compiler that we don't know how to force to
 * inline.  Oh well.
 */



/*
 * Compiler-dependent macros that bracket portions of code where the
 * "-Wunreachable-code" warning should be ignored. Please use sparingly.
 */
# 412 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly.  Functions declared
 * with these attributes will cause compilation warnings if there is a
 * mismatch between the format string and subsequent function parameter
 * types.
 */
# 447 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/* Source compatibility only, ID string not emitted in object file */
# 464 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * __alloc_align can be used to label function arguments that represent the
 * alignment of the returned pointer.
 */
# 476 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * __alloc_size can be used to label function arguments that represent the
 * size of memory that the function allocates and returns. The one-argument
 * form labels a single argument that gives the allocation size (where the
 * arguments are numbered from 1):
 *
 * void	*malloc(size_t __size) __alloc_size(1);
 *
 * The two-argument form handles the case where the size is calculated as the
 * product of two arguments:
 *
 * void	*calloc(size_t __count, size_t __size) __alloc_size(1,2);
 */
# 497 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * Facilities below assist adoption of -Wunsafe-buffer-usage, an off-by-default
 * Clang compiler warning that helps the developer minimize unsafe, raw
 * buffer manipulation in the code that may lead to buffer overflow
 * vulnerabilities.
 *
 * They are primarily designed for modern C++ code where -Wunsafe-buffer-usage
 * comes with automatic fix-it hints that help the developer transform
 * their code to use modern C++ containers, which may be made bounds-safe by
 * linking against a version of the C++ standard library that offers
 * bounds-checked containers.
 * They can be used in plain C, but -fbounds-safety is the preferred solution
 * for plain C (see also <ptrcheck.h>).
 *
 * Attribute __unsafe_buffer_usage can be used to label functions that should be
 * avoided as they may perform or otherwise introduce unsafe buffer
 * manipulation operations.
 *
 * Calls to such functions are flagged by -Wunsafe-buffer-usage, similarly to
 * how unchecked buffer manipulation operations are flagged when observed
 * by the compiler directly:
 *
 *   // An unsafe function that needs to be avoided.
 *   __unsafe_buffer_usage
 *   void foo(int *buf, size_t size);
 *
 *   // A safe alternative to foo().
 *   void foo(std::span<int> buf);
 *
 *   void bar(size_t idx) {
 *       int array[5];
 *
 *       // Direct unsafe buffer manipulation through subscript operator:
 *       array[idx] = 3;  // warning [-Wunsafe-buffer-usage]
 *       // Unsafe buffer manipulation through function foo():
 *       foo(array, 5);   // warning [-Wunsafe-buffer-usage]
 *       // Checked buffer manipulation, with bounds information automatically
 *       // preserved for the purposes of runtime checks in standard library:
 *       foo(array);      // no warning
 *   }
 *
 * While annotating a function as __unsafe_buffer_usage has an effect similar
 * to annotating it as __deprecated, the __unsafe_buffer_usage attribute
 * should be used whenever the resulting warning needs to be controlled
 * by the -Wunsafe-buffer-usage flag (which is turned off in codebases that
 * don't attempt to achieve bounds safety this way) as opposed to -Wdeprecated
 * (enabled in most codebases).
 *
 * The attribute does NOT suppress -Wunsafe-buffer-usage warnings inside
 * the function's body; it simply introduces new warnings at each call site
 * to help the developers avoid the function entirely. Most of the time
 * it does not make sense to annotate a function as __unsafe_buffer_usage
 * without providing the users with a safe alternative.
 *
 * Pragmas __unsafe_buffer_usage_begin and __unsafe_buffer_usage_end
 * annotate a range of code as intentionally containing unsafe buffer
 * operations. They suppress -Wunsafe-buffer-usage warnings
 * for unsafe operations in range:
 *
 *   __unsafe_buffer_usage_begin
 *   array[idx] = 3; // warning suppressed
 *   foo(array, 5);  // warning suppressed
 *   __unsafe_buffer_usage_end
 *
 * These pragmas are NOT a way to mass-annotate functions with the attribute
 * __unsafe_buffer_usage. Functions declared within the pragma range
 * do NOT get annotated automatically. In some rare situations it makes sense
 * to do all three: put the attribute on the function, put pragmas inside
 * the body of the function, and put pragmas around some call sites.
 */
# 585 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * COMPILATION ENVIRONMENTS -- see compat(5) for additional detail
 *
 * DEFAULT	By default newly complied code will get POSIX APIs plus
 *		Apple API extensions in scope.
 *
 *		Most users will use this compilation environment to avoid
 *		behavioral differences between 32 and 64 bit code.
 *
 * LEGACY	Defining _NONSTD_SOURCE will get pre-POSIX APIs plus Apple
 *		API extensions in scope.
 *
 *		This is generally equivalent to the Tiger release compilation
 *		environment, except that it cannot be applied to 64 bit code;
 *		its use is discouraged.
 *
 *		We expect this environment to be deprecated in the future.
 *
 * STRICT	Defining _POSIX_C_SOURCE or _XOPEN_SOURCE restricts the
 *		available APIs to exactly the set of APIs defined by the
 *		corresponding standard, based on the value defined.
 *
 *		A correct, portable definition for _POSIX_C_SOURCE is 200112L.
 *		A correct, portable definition for _XOPEN_SOURCE is 600L.
 *
 *		Apple API extensions are not visible in this environment,
 *		which can cause Apple specific code to fail to compile,
 *		or behave incorrectly if prototypes are not in scope or
 *		warnings about missing prototypes are not enabled or ignored.
 *
 * In any compilation environment, for correct symbol resolution to occur,
 * function prototypes must be in scope.  It is recommended that all Apple
 * tools users add either the "-Wall" or "-Wimplicit-function-declaration"
 * compiler flags to their projects to be warned when a function is being
 * used without a prototype in scope.
 */

/* These settings are particular to each product. */
/* Platform: MacOSX */
# 638 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * The __DARWIN_ALIAS macros are used to do symbol renaming; they allow
 * legacy code to use the old symbol, thus maintaining binary compatibility
 * while new code can use a standards compliant version of the same function.
 *
 * __DARWIN_ALIAS is used by itself if the function signature has not
 * changed, it is used along with a #ifdef check for __DARWIN_UNIX03
 * if the signature has changed.  Because the __LP64__ environment
 * only supports UNIX03 semantics it causes __DARWIN_UNIX03 to be
 * defined, but causes __DARWIN_ALIAS to do no symbol mangling.
 *
 * As a special case, when XCode is used to target a specific version of the
 * OS, the manifest constant __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
 * will be defined by the compiler, with the digits representing major version
 * time 100 + minor version times 10 (e.g. 10.5 := 1050).  If we are targeting
 * pre-10.5, and it is the default compilation environment, revert the
 * compilation environment to pre-__DARWIN_UNIX03.
 */
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * symbol suffixes used for symbol versioning
 */
# 761 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * symbol versioning macros
 */
# 779 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * symbol release macros
 */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
/* Copyright (c) 2010 Apple Inc. All rights reserved.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 783 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 793 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * POSIX.1 requires that the macros we test be defined before any standard
 * header file is included.  This permits us to convert values for feature
 * testing, as necessary, using only _POSIX_C_SOURCE.
 *
 * Here's a quick run-down of the versions:
 *  defined(_POSIX_SOURCE)		1003.1-1988
 *  _POSIX_C_SOURCE == 1L		1003.1-1990
 *  _POSIX_C_SOURCE == 2L		1003.2-1992 C Language Binding Option
 *  _POSIX_C_SOURCE == 199309L		1003.1b-1993
 *  _POSIX_C_SOURCE == 199506L		1003.1c-1995, 1003.1i-1995,
 *					and the omnibus ISO/IEC 9945-1: 1996
 *  _POSIX_C_SOURCE == 200112L		1003.1-2001
 *  _POSIX_C_SOURCE == 200809L		1003.1-2008
 *
 * In addition, the X/Open Portability Guide, which is now the Single UNIX
 * Specification, defines a feature-test macro which indicates the version of
 * that specification, and which subsumes _POSIX_C_SOURCE.
 */

/* Deal with IEEE Std. 1003.1-1990, in which _POSIX_C_SOURCE == 1L. */





/* Deal with IEEE Std. 1003.2-1992, in which _POSIX_C_SOURCE == 2L. */





/* Deal with various X/Open Portability Guides and Single UNIX Spec. */
# 839 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * Deal with all versions of POSIX.  The ordering relative to the tests above is
 * important.
 */




/* POSIX C deprecation macros */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h" 1 3 4
/* Copyright (c) 2010 Apple Inc. All rights reserved.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 849 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4



/*
 * Set a single macro which will always be defined and can be used to determine
 * the appropriate namespace.  For POSIX, these values will correspond to
 * _POSIX_C_SOURCE value.  Currently there are two additional levels corresponding
 * to ANSI (_ANSI_SOURCE) and Darwin extensions (_DARWIN_C_SOURCE)
 */
# 869 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/* If the developer has neither requested a strict language mode nor a version
 * of POSIX, turn on functionality provided by __STDC_WANT_LIB_EXT1__ as part
 * of __DARWIN_C_FULL.
 */




/*
 * long long is not supported in c89 (__STRICT_ANSI__), but g++ -ansi and
 * c99 still want long longs.  While not perfect, we allow long longs for
 * g++.
 */






/*****************************************
*  Public darwin-specific feature macros
*****************************************/

/*
 * _DARWIN_FEATURE_64_BIT_INODE indicates that the ino_t type is 64-bit, and
 * structures modified for 64-bit inodes (like struct stat) will be used.
 */




/*
 * _DARWIN_FEATURE_64_ONLY_BIT_INODE indicates that the ino_t type may only
 * be 64-bit; there is no support for 32-bit ino_t when this macro is defined
 * (and non-zero).  There is no struct stat64 either, as the regular
 * struct stat will already be the 64-bit version.
 */




/*
 * _DARWIN_FEATURE_ONLY_VERS_1050 indicates that only those APIs updated
 * in 10.5 exists; no pre-10.5 variants are available.
 */




/*
 * _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE indicates only UNIX conforming API
 * are available (the legacy BSD APIs are not available)
 */




/*
 * _DARWIN_FEATURE_UNIX_CONFORMANCE indicates whether UNIX conformance is on,
 * and specifies the conformance level (3 is SUSv3)
 */





/*
 * This macro casts away the qualifier from the variable
 *
 * Note: use at your own risk, removing qualifiers can result in
 * catastrophic run-time failures.
 */

/*
 * XXX: this shouldn't ignore anything more than -Wcast-qual,
 * but the old implementation made it an almighty cast that
 * ignored everything, so things break left and right if you
 * make it only ignore -Wcast-qual.
 */
# 957 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * __XNU_PRIVATE_EXTERN is a linkage decoration indicating that a symbol can be
 * used from other compilation units, but not other libraries or executables.
 */





# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h" 1 3 4
/*===---- ptrcheck.h - Pointer bounds hints & specifications ----------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */




/* __has_ptrcheck can be used in preprocessor macros (and other parts of the
   language expecting constant expressions) to test if bounds attributes
   exist. */
# 163 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h" 3 4
/* We intentionally define the terminated_by attributes to nothing. */



/* Similarly, we intentionally define to nothing the
   __ptrcheck_abi_assume_single and __ptrcheck_abi_assume_unsafe_indexable
   macros because they do not lead to an ABI incompatibility. However, we do not
   define the indexable and unsafe_indexable ones because the diagnostic is
   better than the silent ABI break. */



/* __unsafe_forge intrinsics are defined as regular C casts. */




/* decay operates normally; attribute is meaningless without pointer checks. */
# 307 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h" 3 4
/* We intentionally define to nothing pointer attributes which do not have an
   impact on the ABI. __indexable and __bidi_indexable are not defined because
   of the ABI incompatibility that makes the diagnostic preferable. */

/* __unsafe_forge intrinsics are defined as regular C casts. */


/* The conversion between terminated_by pointers just evaluates to the pointer
   argument. */






/* Adding DUMMY is a workaround for the case where the macro is called
   with only a single argument: calling the __IGNORE_REST macro with only a
   single argument is a C23 extension and emits a warning for earlier
   versions.
 */





/* The APIs marked with these attributes are available outside the context of
   pointer checks, so do nothing. */
# 967 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 1034 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * Architecture validation for current SDK
 */
# 1063 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
/*
 * Similar to OS_ENUM/OS_CLOSED_ENUM/OS_OPTIONS/OS_CLOSED_OPTIONS
 *
 * This provides more advanced type checking on compilers supporting
 * the proper extensions, even in C.
 */
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h" 2 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */



 /*     
    These macros are for use in OS header files. They enable function prototypes
    and Objective-C methods to be tagged with the OS version in which they
    were first available; and, if applicable, the OS versions in which they
    became deprecated and obsoleted.
     
    The desktop Mac OS X and iOS each have different version numbers.
    The __OSX_AVAILABLE_STARTING() macro allows you to specify both the desktop
    and iOS version numbers.  For instance:
        __OSX_AVAILABLE_STARTING(__MAC_10_2,__IPHONE_2_0)
    means the function/method was first available on Mac OS X 10.2 on the desktop
    and first available in iOS 2.0 on the iPhone.
    
    If a function is available on one platform, but not the other a _NA (not
    applicable) parameter is used.  For instance:
            __OSX_AVAILABLE_STARTING(__MAC_10_3,__IPHONE_NA)
    means that the function/method was first available on Mac OS X 10.3, and it
    currently not implemented on the iPhone.

    At some point, a function/method may be deprecated.  That means Apple
    recommends applications stop using the function, either because there is a 
    better replacement or the functionality is being phased out.  Deprecated
    functions/methods can be tagged with a __OSX_AVAILABLE_BUT_DEPRECATED()
    macro which specifies the OS version where the function became available
    as well as the OS version in which it became deprecated.  For instance:
        __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_0,__MAC_10_5,__IPHONE_NA,__IPHONE_NA)
    means that the function/method was introduced in Mac OS X 10.0, then
    became deprecated beginning in Mac OS X 10.5.  On iOS the function 
    has never been available.  
    
    For these macros to function properly, a program must specify the OS version range 
    it is targeting.  The min OS version is specified as an option to the compiler:
    -mmacosx-version-min=10.x when building for Mac OS X, and -miphoneos-version-min=y.z
    when building for the iPhone.  The upper bound for the OS version is rarely needed,
    but it can be set on the command line via: -D__MAC_OS_X_VERSION_MAX_ALLOWED=10x0 for
    Mac OS X and __IPHONE_OS_VERSION_MAX_ALLOWED = y0z00 for iOS.  
    
    Examples:

        A function available in Mac OS X 10.5 and later, but not on the phone:
        
            extern void mymacfunc() __OSX_AVAILABLE_STARTING(__MAC_10_5,__IPHONE_NA);


        An Objective-C method in Mac OS X 10.5 and later, but not on the phone:
        
            @interface MyClass : NSObject
            -(void) mymacmethod __OSX_AVAILABLE_STARTING(__MAC_10_5,__IPHONE_NA);
            @end

        
        An enum available on the phone, but not available on Mac OS X:
        
            #if __IPHONE_OS_VERSION_MIN_REQUIRED
                enum { myEnum = 1 };
            #endif
           Note: this works when targeting the Mac OS X platform because 
           __IPHONE_OS_VERSION_MIN_REQUIRED is undefined which evaluates to zero. 
        

        An enum with values added in different iPhoneOS versions:
		
			enum {
			    myX  = 1,	// Usable on iPhoneOS 2.1 and later
			    myY  = 2,	// Usable on iPhoneOS 3.0 and later
			    myZ  = 3,	// Usable on iPhoneOS 3.0 and later
				...
		      Note: you do not want to use #if with enumeration values
			  when a client needs to see all values at compile time
			  and use runtime logic to only use the viable values.
			  

    It is also possible to use the *_VERSION_MIN_REQUIRED in source code to make one
    source base that can be compiled to target a range of OS versions.  It is best
    to not use the _MAC_* and __IPHONE_* macros for comparisons, but rather their values.
    That is because you might get compiled on an old OS that does not define a later
    OS version macro, and in the C preprocessor undefined values evaluate to zero
    in expresssions, which could cause the #if expression to evaluate in an unexpected
    way.
    
        #ifdef __MAC_OS_X_VERSION_MIN_REQUIRED
            // code only compiled when targeting Mac OS X and not iPhone
            // note use of 1050 instead of __MAC_10_5
            #if __MAC_OS_X_VERSION_MIN_REQUIRED < 1050
                // code in here might run on pre-Leopard OS
            #else
                // code here can assume Leopard or later
            #endif
        #endif


*/

/* 
 * __API_TO_BE_DEPRECATED is used as a version number in API that will be deprecated 
 * in an upcoming release. This soft deprecation is an intermediate step before formal 
 * deprecation to notify developers about the API before compiler warnings are generated.
 * You can find all places in your code that use soft deprecated API by redefining the 
 * value of this macro to your current minimum deployment target, for example:
 * (macOS)
 *   clang -D__API_TO_BE_DEPRECATED=10.12 <other compiler flags>
 * (iOS)
 *   clang -D__API_TO_BE_DEPRECATED=11.0 <other compiler flags>
 */
# 196 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 1 3 4
/*
 * Copyright (c) 2019 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
/* __MAC__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */
# 188 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
/* __IPHONE__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */
# 245 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
/* __WATCHOS__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */
# 302 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
/* __TVOS__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */
# 360 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
/* __DRIVERKIT__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */
# 372 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
/* __VISIONOS__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */



/* __KERNELKIT__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */






/*
 * Set up standard Mac OS X versions
 */
# 466 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
// This is explicitly outside the header guard
# 197 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*
    File:       AvailabilityInternal.h
 
    Contains:   implementation details of __OSX_AVAILABLE_* macros from <Availability.h>

*/



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 1 3 4
/*
 * Copyright (c) 2019 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 466 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h" 3 4
// This is explicitly outside the header guard
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 2 3 4
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3 4
/*
 Macros for defining which versions/platform a given symbol can be used.
 
 @see http://clang.llvm.org/docs/AttributeReference.html#availability
 */
# 452 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3 4
    /*
     * API Unavailability
     * Use to specify that an API is unavailable for a particular platform.
     *
     * Example:
     *    __API_UNAVAILABLE(macos)
     *    __API_UNAVAILABLE(watchos, tvos)
     */
# 504 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3 4
/*
 * Swift compiler version
 * Allows for project-agnostic "epochs" for frameworks imported into Swift via the Clang importer, like #if _compiler_version for Swift
 * Example:
 *
 *  #if __swift_compiler_version_at_least(800, 2, 20)
 *  - (nonnull NSString *)description;
 *  #else
 *  - (NSString *)description;
 *  #endif
 */
# 528 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3 4
// This is explicitly outside the header guard
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h" 1 3 4
/*
 * Copyright (c) 2007-2022 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*
    File:       AvailabilityInternalLegacy.h
 
    Contains:   implementation details of __OSX_AVAILABLE_* macros from <Availability.h>

*/




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*
    File:       AvailabilityInternal.h
 
    Contains:   implementation details of __OSX_AVAILABLE_* macros from <Availability.h>

*/
# 528 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3 4
// This is explicitly outside the header guard
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h" 2 3 4
# 2832 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h" 3 4
            /* use better attributes if possible */
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 278 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/* for use to document app extension usage */
# 296 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/* for use marking APIs available info for Mac OSX */
# 322 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/* for use marking APIs available info for iOS */
# 351 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/* for use marking APIs available info for tvOS */
# 380 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/* for use marking APIs available info for Watch OS */
# 408 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/* for use marking APIs unavailable for swift */
# 424 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/*
 Macros for defining which versions/platform a given symbol can be used.
 
 @see http://clang.llvm.org/docs/AttributeReference.html#availability
 
 * Note that these macros are only compatible with clang compilers that
 * support the following target selection options:
 *
 * -mmacosx-version-min
 * -miphoneos-version-min
 * -mwatchos-version-min
 * -mtvos-version-min
 */




    /*
     * API Introductions
     *
     * Use to specify the release that a particular API became available.
     *
     * Platform names:
     *   macos, macOSApplicationExtension, macCatalyst, macCatalystApplicationExtension,
     *   ios, iOSApplicationExtension, tvos, tvOSApplicationExtension, watchos,
     *   watchOSApplicationExtension, driverkit, visionos, visionOSApplicationExtension
     *
     * Examples:
     *    __API_AVAILABLE(macos(10.10))
     *    __API_AVAILABLE(macos(10.9), ios(10.0))
     *    __API_AVAILABLE(macos(10.4), ios(8.0), watchos(2.0), tvos(10.0))
     *    __API_AVAILABLE(driverkit(19.0))
     */





    /*
     * API Deprecations
     *
     * Use to specify the release that a particular API became deprecated.
     *
     * Platform names:
     *   macos, macOSApplicationExtension, macCatalyst, macCatalystApplicationExtension,
     *   ios, iOSApplicationExtension, tvos, tvOSApplicationExtension, watchos,
     *   watchOSApplicationExtension, driverkit, visionos, visionOSApplicationExtension
     *
     * Examples:
     *
     *    __API_DEPRECATED("Deprecated", macos(10.4, 10.8))
     *    __API_DEPRECATED("Deprecated", macos(10.4, 10.8), ios(2.0, 3.0), watchos(2.0, 3.0), tvos(9.0, 10.0))
     *
     *    __API_DEPRECATED_WITH_REPLACEMENT("-setName:", tvos(10.0, 10.4), ios(9.0, 10.0))
     *    __API_DEPRECATED_WITH_REPLACEMENT("SomeClassName", macos(10.4, 10.6), watchos(2.0, 3.0))
     */
# 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
    /*
     * API Unavailability
     * Use to specify that an API is unavailable for a particular platform.
     *
     * Example:
     *    __API_UNAVAILABLE(macos)
     *    __API_UNAVAILABLE(watchos, tvos)
     */







/* 
 * Evaluate to nothing for compilers that don't support availability.
 */
# 590 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
/*
 * If SPI decorations have not been defined elsewhere, disable them.
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 1 3 4
/*
 * Copyright (c) 2004, 2008, 2009 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 1 3 4
/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 */
# 22 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h" 3 4
/*
 * This header file contains integer types.  It's intended to also contain
 * flotaing point and other arithmetic types, as needed, later.
 */




typedef char __int8_t;

typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;

/*
 * The rune type below is declared to be an ``int'' instead of the more natural
 * ``unsigned long'' or ``long''.  Two things are happening here.  It is not
 * unsigned so that EOF (-1) can be naturally assigned to it and used.  Also,
 * it looks like 10646 will be a 31 bit standard.  This means that if your
 * ints cannot hold 32 bits, you will be in trouble.  The reason an int was
 * chosen over a long is that the is*() and to*() routines take ints (says
 * ANSI C), but they use __darwin_ct_rune_t instead of int.  By changing it
 * here, you lose a bit of ANSI conformance, but your programs will still
 * work.
 *
 * NOTE: rune_t is not covered by ANSI nor other standards, and should not
 * be instantiated outside of lib/libc/locale.  Use wchar_t.  wchar_t and
 * rune_t must be the same type.  Also wint_t must be no narrower than
 * wchar_t, and should also be able to hold all members of the largest
 * character set plus one extra value (WEOF). wint_t must be at least 16 bits.
 */

typedef int __darwin_ct_rune_t; /* ct_rune_t */

/*
 * mbstate_t is an opaque object to keep conversion state, during multibyte
 * stream conversions.  The content must not be referenced by user programs.
 */
typedef union {
 char __mbstate8[128];
 long long _mbstateL; /* for alignment */
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t; /* mbstate_t */




typedef long int __darwin_ptrdiff_t; /* ptr1 - ptr2 */
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h" 3 4
typedef long unsigned int __darwin_size_t; /* sizeof() */
# 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h" 3 4
typedef void * __darwin_va_list; /* va_list */





typedef int __darwin_wchar_t; /* wchar_t */




typedef __darwin_wchar_t __darwin_rune_t; /* rune_t */


typedef int __darwin_wint_t; /* wint_t */




typedef unsigned long __darwin_clock_t; /* clock() */
typedef __uint32_t __darwin_socklen_t; /* socklen_t (duh) */
typedef long __darwin_ssize_t; /* byte count or error */
typedef long __darwin_time_t; /* time() */
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3 4
/*
 * Type definitions; takes common type definitions that must be used
 * in multiple header files due to [XSI], removes them from the system
 * space, and puts them in the implementation space.
 */
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t; /* total blocks */
typedef __int32_t __darwin_blksize_t; /* preferred block size */
typedef __int32_t __darwin_dev_t; /* dev_t */
typedef unsigned int __darwin_fsblkcnt_t; /* Used by statvfs and fstatvfs */
typedef unsigned int __darwin_fsfilcnt_t; /* Used by statvfs and fstatvfs */
typedef __uint32_t __darwin_gid_t; /* [???] process and group IDs */
typedef __uint32_t __darwin_id_t; /* [XSI] pid_t, uid_t, or gid_t*/
typedef __uint64_t __darwin_ino64_t; /* [???] Used for 64 bit inodes */

typedef __darwin_ino64_t __darwin_ino_t; /* [???] Used for inodes */



typedef __darwin_natural_t __darwin_mach_port_name_t; /* Used by mach */
typedef __darwin_mach_port_name_t __darwin_mach_port_t; /* Used by mach */
typedef __uint16_t __darwin_mode_t; /* [???] Some file attributes */
typedef __int64_t __darwin_off_t; /* [???] Used for file sizes */
typedef __int32_t __darwin_pid_t; /* [???] process and group IDs */
typedef __uint32_t __darwin_sigset_t; /* [???] signal set */
typedef __int32_t __darwin_suseconds_t; /* [???] microseconds */
typedef __uint32_t __darwin_uid_t; /* [???] user IDs */
typedef __uint32_t __darwin_useconds_t; /* [???] microseconds */
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
/*
 * Copyright (c) 2003-2013 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






// pthread opaque structures
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *); // Routine to call
 void *__arg; // Argument to pass
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 2 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4

/* DO NOT REMOVE THIS COMMENT: fixincludes needs to see:
 * __gnuc_va_list and include <stdarg.h> */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 1 3 4
/*
 * Copyright (c) 2000-2008 Apple Inc. All rights reserved.
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */
/*
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)types.h	8.3 (Berkeley) 1/5/94
 */
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 3 4
/*
 * Basic integral types.  Omit the typedef if
 * not possible for a machine/compiler combination.
 */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef signed char int8_t;
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef short int16_t;
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef int int32_t;
# 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef long long int64_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
/*
 * Copyright (c) 2016 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef unsigned char u_int8_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef unsigned short u_int16_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef unsigned int u_int32_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef unsigned long long u_int64_t;
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4


typedef int64_t register_t;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */




typedef __darwin_intptr_t intptr_t;
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






typedef unsigned long uintptr_t;
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 2 3 4


/* These types are used for reserving the largest possible size. */

typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h" 3 4
/* This defines the size of syscall arguments after copying into the kernel: */



typedef u_int64_t syscall_arg_t;
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 2 3 4
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 2 3 4
typedef __darwin_va_list va_list;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 1 3 4
/*
 * Copyright (c) 2013 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 2 3 4



int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));



int renamex_np(const char *, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int, const char *, int, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h" 1 3 4
/*
 * Copyright (c) 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h" 3 4
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4



typedef __darwin_off_t fpos_t;



/*
 * NB: to fit things in six character monocase externals, the stdio
 * code uses the prefix `__s' for stdio objects, typically followed
 * by a three-character attempt at a mnemonic.
 */

/* stdio buffers */
struct __sbuf {
 unsigned char * _base;
 int _size;
};

/* hold a buncha junk that would grow the ABI */
struct __sFILEX;

/*
 * stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 *
 * NB: see WARNING above before changing the layout of this structure!
 */
typedef struct __sFILE {
 unsigned char * _p; /* current position in (some) buffer */
 int _r; /* read space left for getc() */
 int _w; /* write space left for putc() */
 short _flags; /* flags, below; this FILE is free if 0 */
 short _file; /* fileno, if Unix descriptor, else -1 */
 struct __sbuf _bf; /* the buffer (at least 1 byte, if !NULL) */
 int _lbfsize; /* 0 or -_bf._size, for inline putc */

 /* operations */
 void *_cookie; /* cookie passed to io functions */
 int (* _Nullable _close)(void *);
 int (* _Nullable _read) (void *, char *, int __n);
 fpos_t (* _Nullable _seek) (void *, fpos_t, int);
 int (* _Nullable _write)(void *, const char *, int __n);

 /* separate buffer for long sequences of ungetc() */
 struct __sbuf _ub; /* ungetc buffer */
 struct __sFILEX *_extra; /* additions to FILE to not break ABI */
 int _ur; /* saved _r when _r is counting ungetc data */

 /* tricks to meet minimum requirements even when malloc() fails */
 unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
 unsigned char _nbuf[1]; /* guarantee a getc() buffer */

 /* separate buffer for fgetln() when line crosses buffer boundary */
 struct __sbuf _lb; /* buffer for fgetln() */

 /* Unix stdio files get aligned to block boundaries on fseek() */
 int _blksize; /* stat.st_blksize (may be != _bf._size) */
 fpos_t _offset; /* current lseek offset (see WARNING) */
} FILE;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






/* whence values for lseek(2) */
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4


extern FILE *__stdinp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern FILE *__stdoutp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern FILE *__stderrp __attribute__((__swift_attr__("nonisolated(unsafe)")));






 /* RD and WR are never simultaneously asserted */
# 190 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
/*
 * The following three definitions are for ANSI C, which took them
 * from System V, which brilliantly took internal interface macros and
 * made them official arguments to setvbuf(), without renaming them.
 * Hence, these ugly _IOxxx names are *supposed* to appear in user code.
 *
 * Although numbered as their counterparts above, the implementation
 * does not rely on this.
 */







    /* must be == _POSIX_STREAM_MAX <limits.h> */



/* System V/ANSI C; this is the wrong way to do this, do *not* use these. */
# 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
/* ANSI-C */


void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char * fgets(char * restrict , int __size, FILE *);



FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
     FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);


__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")))

char * gets(char *) ;

void perror(const char *) __attribute__((__cold__));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict );
int setvbuf(FILE * restrict, char * restrict , int, size_t __size);

__attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")))


__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use snprintf(3) instead.")))

int sprintf(char * restrict , const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;

int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);

__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char * tmpnam(char *);

int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));

__attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")))


__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use vsnprintf(3) instead.")))

int vsprintf(char * restrict , const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) ;




/* Additional functionality provided by:
 * POSIX.1-1988
 */



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h" 1 3 4
/*
 * Copyright (c) 2000, 2002-2006, 2008-2010, 2012, 2020 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h" 3 4
char * ctermid(char *);
# 312 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4






FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);




/* Additional functionality provided by:
 * POSIX.2-1992 C Language Binding Option
 */



int pclose(FILE *) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));



FILE *popen(const char *, const char *) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));




/* Additional functionality provided by:
 * POSIX.1c-1995,
 * POSIX.1i-1995,
 * and the omnibus ISO/IEC 9945-1: 1996
 */



/* Functions internal to the implementation. */

int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);


/*
 * The __sfoo macros are here so that we can
 * define function versions in the C library.
 */
# 368 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
/*
 * This has been tuned to generate reasonable code on the vax using pcc.
 */
# 387 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);

/* Removed in Issue 6 */

int getw(FILE *);
int putw(int, FILE *);


__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char * tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );
# 419 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
/* Additional functionality provided by:
 * POSIX.1-2001
 * ISO C99
 */


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_off_t off_t;
# 426 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));





/* Additional functionality provided by:
 * POSIX.1-2008
 */


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_ssize_t ssize_t;
# 451 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char * *restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char * *restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
FILE *fmemopen(void * restrict __buf , size_t __size, const char * restrict __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
FILE *open_memstream(char * *__bufp, size_t *__sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));





/* Darwin extensions */



extern const int sys_nerr; /* perror(3) external variables */
extern const char *const sys_errlist[];

int asprintf(char * *restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char * ctermid_r(char *);
char * fgetln(FILE *, size_t *__len);
const char *fmtcheck(const char *, const char *) __attribute__((format_arg(2)));
int fpurge(FILE *);
void setbuffer(FILE *, char *, int __size);
int setlinebuf(FILE *);
int vasprintf(char * *restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));


/*
 * Stdio function-access interface.
 */
FILE *funopen(const void *,
     int (* _Nullable)(void *, char *, int __n),
     int (* _Nullable)(void *, const char *, int __n),
     fpos_t (* _Nullable)(void *, fpos_t, int),
     int (* _Nullable)(void *));
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3 4
# 2 "code/codex.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdlib.h" 1 3 4
/*
 * Copyright (c) 2000, 2002 - 2008, 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)stdlib.h	8.5 (Berkeley) 5/19/95
 */

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 1 3 4
/*
 * Copyright (c) 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)stdlib.h	8.5 (Berkeley) 5/19/95
 */







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1989, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)wait.h	8.2 (Berkeley) 7/10/94
 */







/*
 * This file holds definitions relevent to the wait4 system call
 * and the alternate interfaces that use it (wait, wait3, waitpid).
 */

/*
 * [XSI] The type idtype_t shall be defined as an enumeration type whose
 * possible values shall include at least P_ALL, P_PID, and P_PGID.
 */
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;

/*
 * [XSI] The id_t and pid_t types shall be defined as described
 * in <sys/types.h>
 */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_id_t id_t; /* can hold pid_t, gid_t, or uid_t */
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 2 3 4

/*
 * [XSI] The siginfo_t type shall be defined as described in <signal.h>
 * [XSI] The rusage structure shall be defined as described in <sys/resource.h>
 * [XSI] Inclusion of the <sys/wait.h> header may also make visible all
 * symbols from <signal.h> and <sys/resource.h>
 *
 * NOTE:	This requirement is currently being satisfied by the direct
 *		inclusion of <sys/signal.h> and <sys/resource.h>, below.
 *
 *		Software should not depend on the exposure of anything other
 *		than the types siginfo_t and struct rusage as a result of
 *		this inclusion.  If you depend on any types or manifest
 *		values othe than siginfo_t and struct rusage from either of
 *		those files, you should explicitly include them yourself, as
 *		well, or in future releases your stware may not compile
 *		without modification.
 */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 1 3 4
/*
 * Copyright (c) 2000-2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1989, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)signal.h	8.2 (Berkeley) 1/21/94
 */





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h" 1 3 4
/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/signal.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/signal.h" 1 3 4
/*
 * Copyright (c) 2000-2009 Apple, Inc. All rights reserved.
 */
/*
 * Copyright (c) 1992 NeXT Computer, Inc.
 *
 */
# 17 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/signal.h" 3 4
typedef int sig_atomic_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4
# 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
/*
 * Language spec sez we must list exactly one parameter, even though we
 * actually supply three.  Ugh!
 * SIG_HOLD is chosen to avoid KERN_SIG_* values in <sys/signalvar.h>
 */
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_mcontext.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/_structs.h" 1 3 4
/*
 * Copyright (c) 2017 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 1 3 4
/*
 * Copyright (c) 2004-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * @OSF_COPYRIGHT@
 */
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_exception_state
{
 __uint32_t __exception; /* number of arm exception taken */
 __uint32_t __fsr; /* Fault status */
 __uint32_t __far; /* Virtual Fault Address */
};
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_exception_state64
{
 __uint64_t __far; /* Virtual Fault Address */
 __uint32_t __esr; /* Exception syndrome */
 __uint32_t __exception; /* number of arm exception taken */
};

struct __darwin_arm_exception_state64_v2
{
 __uint64_t __far; /* Virtual Fault Address */
 __uint64_t __esr; /* Exception syndrome */
};
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state
{
 __uint32_t __r[13]; /* General purpose register r0-r12 */
 __uint32_t __sp; /* Stack pointer r13 */
 __uint32_t __lr; /* Link register r14 */
 __uint32_t __pc; /* Program counter r15 */
 __uint32_t __cpsr; /* Current program status register */
};
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
/*
 * By default, the pointer fields in the arm_thread_state64_t structure are
 * opaque on the arm64e architecture and require the use of accessor macros.
 * This mode can also be enabled on the arm64 architecture by building with
 * -D__DARWIN_OPAQUE_ARM_THREAD_STATE64=1.
 */
# 148 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state64
{
 __uint64_t __x[29]; /* General purpose registers x0-x28 */
 __uint64_t __fp; /* Frame pointer x29 */
 __uint64_t __lr; /* Link register x30 */
 __uint64_t __sp; /* Stack pointer x31 */
 __uint64_t __pc; /* Program counter */
 __uint32_t __cpsr; /* Current program status register */
 __uint32_t __pad; /* Same size for 32-bit or 64-bit clients */
};
# 188 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
/* Accessor macros for arm_thread_state64_t pointer fields */
# 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
/* Return pc field of arm_thread_state64_t as a data pointer value */


/* Return pc field of arm_thread_state64_t as a function pointer */


/* Set pc field of arm_thread_state64_t to a function pointer */


/* Set pc field of arm_thread_state64_t to an already signed function pointer */


/* Return lr field of arm_thread_state64_t as a data pointer value */


/* Return lr field of arm_thread_state64_t as a function pointer */


/* Set lr field of arm_thread_state64_t to a function pointer */


/* Set lr field of arm_thread_state64_t to a presigned function pointer */


/* Return sp field of arm_thread_state64_t as a data pointer value */


/* Set sp field of arm_thread_state64_t to a data pointer value */


/* Return fp field of arm_thread_state64_t as a data pointer value */


/* Set fp field of arm_thread_state64_t to a data pointer value */


/* Strip ptr auth bits from pc, lr, sp and fp field of arm_thread_state64_t */
# 519 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_vfp_state
{
 __uint32_t __r[64];
 __uint32_t __fpscr;
};
# 538 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_neon_state64
{
 __uint128_t __v[32];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};

struct __darwin_arm_neon_state
{
 __uint128_t __v[16];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};
# 609 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __arm_pagein_state
{
 int __pagein_error;
};



struct __darwin_arm_sme_state
{
 __uint64_t __svcr;
 __uint64_t __tpidr2_el0;
 __uint16_t __svl_b;
};


struct __darwin_arm_sve_z_state
{
 char __z[16][256];
} __attribute__((aligned(4)));


struct __darwin_arm_sve_p_state
{
 char __p[16][256 / 8];
} __attribute__((aligned(4)));


struct __darwin_arm_sme_za_state
{
 char __za[4096];
} __attribute__((aligned(4)));


struct __darwin_arm_sme2_state
{
 char __zt0[64];
} __attribute__((aligned(4)));
# 680 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
/*
 * Debug State
 */
# 708 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
/* ARM's arm_debug_state is ARM64's arm_legacy_debug_state */



struct __arm_legacy_debug_state
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
};
# 735 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_debug_state32
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
 __uint64_t __mdscr_el1; /* Bit 0 is SS (Hardware Single Step) */
};


struct __darwin_arm_debug_state64
{
 __uint64_t __bvr[16];
 __uint64_t __bcr[16];
 __uint64_t __wvr[16];
 __uint64_t __wcr[16];
 __uint64_t __mdscr_el1; /* Bit 0 is SS (Hardware Single Step) */
};
# 777 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_arm_exception_state __es;
 struct __darwin_arm_thread_state __ss;
 struct __darwin_arm_vfp_state __fs;
};
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_arm_exception_state64 __es;
 struct __darwin_arm_thread_state64 __ss;
 struct __darwin_arm_neon_state64 __ns;
};
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

/* Structure used in sigaltstack call. */
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp; /* signal stack base */
 __darwin_size_t ss_size; /* signal stack length */
 int ss_flags; /* SA_DISABLE and/or SA_ONSTACK */
};
typedef struct __darwin_sigaltstack stack_t; /* [???] signal stack */
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask; /* signal mask used by this context */
 struct __darwin_sigaltstack uc_stack; /* stack used by this context */
 struct __darwin_ucontext *uc_link; /* pointer to resuming context */
 __darwin_size_t uc_mcsize; /* size of the machine context passed in */
 struct __darwin_mcontext64 *uc_mcontext; /* pointer to machine specific context */



};

/* user context */
typedef struct __darwin_ucontext ucontext_t; /* [???] user context */
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 2 3 4

union sigval {
 /* Members as suggested by Annex C of POSIX 1003.1b. */
 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify; /* Notification type */
 int sigev_signo; /* Signal number */
 union sigval sigev_value; /* Signal value */
 void (*sigev_notify_function)(union sigval); /* Notification function */
 pthread_attr_t *sigev_notify_attributes; /* Notification attributes */
};


typedef struct __siginfo {
 int si_signo; /* signal number */
 int si_errno; /* errno association */
 int si_code; /* signal code */
 pid_t si_pid; /* sending process */
 uid_t si_uid; /* sender's ruid */
 int si_status; /* exit value */
 void *si_addr; /* faulting instruction */
 union sigval si_value; /* signal value */
 long si_band; /* band event for SIGPOLL */
 unsigned long __pad[7]; /* Reserved for Future Use */
} siginfo_t;


/*
 * When the signal is SIGILL or SIGFPE, si_addr contains the address of
 * the faulting instruction.
 * When the signal is SIGSEGV or SIGBUS, si_addr contains the address of
 * the faulting memory reference. Although for x86 there are cases of SIGSEGV
 * for which si_addr cannot be determined and is NULL.
 * If the signal is SIGCHLD, the si_pid field will contain the child process ID,
 *  si_status contains the exit value or signal and
 *  si_uid contains the real user ID of the process that sent the signal.
 */

/* Values for si_code */

/* Codes for SIGILL */
# 217 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
/* Codes for SIGFPE */
# 230 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
/* Codes for SIGSEGV */






/* Codes for SIGBUS */







/* Codes for SIGTRAP */



/* Codes for SIGCHLD */
# 260 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
/* Codes for SIGPOLL */







/* union for signal handlers */
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};

/* Signal vector template for Kernel user boundary */
struct __sigaction {
 union __sigaction_u __sigaction_u; /* signal handler */
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask; /* signal mask to apply */
 int sa_flags; /* see signal options below */
};

/*
 * Signal vector "template" used in sigaction call.
 */
struct sigaction {
 union __sigaction_u __sigaction_u; /* signal handler */
 sigset_t sa_mask; /* signal mask to apply */
 int sa_flags; /* see signal options below */
};



/* if SA_SIGINFO is set, sa_sigaction is to be used instead of sa_handler. */
# 307 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
/* This will provide 64bit register set in a 32bit user address space */



/* the following are the only bits we support from user space, the
 * rest are for kernel use only.
 */


/*
 * Flags for sigprocmask:
 */




/* POSIX 1003.1b required values. */







typedef void (*sig_t)(int); /* type of signal function */


/*
 * Structure used in sigaltstack call.
 */







/*
 * 4.3 compatibility:
 * Signal vector "template" used in sigvec call.
 */
struct sigvec {
 void (*sv_handler)(int); /* signal handler */
 int sv_mask; /* signal mask to apply */
 int sv_flags; /* see signal options below */
};
# 364 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
/*
 * Structure used in sigstack call.
 */
struct sigstack {
 char *ss_sp; /* signal stack pointer */
 int ss_onstack; /* current status */
};


/*
 * Macro for converting signal number to a mask suitable for
 * sigblock().
 */
# 385 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3 4
/*
 * For historical reasons; programs expect signal's return value to be
 * defined by <sys/signal.h>.
 */

void(*signal(int, void (*)(int)))(int);
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 1 3 4
/*
 * Copyright (c) 2000-2018 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)resource.h	8.2 (Berkeley) 1/4/94
 */
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 3 4
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdint.h" 1 3 4
/*===---- stdint.h - Standard header for sized integer types --------------===*\
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
\*===----------------------------------------------------------------------===*/


// AIX system headers need stdint.h to be re-enterable while _STD_TYPES_T
// is defined until an inclusion of it without _STD_TYPES_T occurs, in which
// case the header guard macro is defined.








/* If we're hosted, fall back to the system's stdint.h, which might have
 * additional definitions.
 */


// C99 7.18.3 Limits of other integer types
//
//  Footnote 219, 220: C++ implementations should define these macros only when
//  __STDC_LIMIT_MACROS is defined before <stdint.h> is included.
//
//  Footnote 222: C++ implementations should define these macros only when
//  __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.
//
// C++11 [cstdint.syn]p2:
//
//  The macros defined by <cstdint> are provided unconditionally. In particular,
//  the symbols __STDC_LIMIT_MACROS and __STDC_CONSTANT_MACROS (mentioned in
//  footnotes 219, 220, and 222 in the C standard) play no role in C++.
//
// C11 removed the problematic footnotes.
//
// Work around this inconsistency by always defining those macros in C++ mode,
// so that a C library implementation which follows the C99 standard can be
// used in C++.
# 56 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 1 3 4
/*
 * Copyright (c) 2000-2010 Apple Inc.
 * All rights reserved.
 */
# 15 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
/* from ISO/IEC 988:1999 spec */

/* 7.18.1.1 Exact-width integer types */





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint8_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef unsigned char uint8_t;
# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint16_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef unsigned short uint16_t;
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef unsigned int uint32_t;
# 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef unsigned long long uint64_t;
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4

/* 7.18.1.2 Minimum-width integer types */
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;


/* 7.18.1.3 Fastest-width integer types */
typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;


/* 7.18.1.4 Integer types capable of holding object pointers */






/* 7.18.1.5 Greatest-width integer types */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_intmax_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */




typedef long int intmax_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */




typedef long unsigned int uintmax_t;
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4

/* 7.18.4 Macros for integer constants */
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
/* 7.18.2 Limits of specified-width integer types:
 *   These #defines specify the minimum and maximum limits
 *   of each of the types declared above.
 *
 *   They must have "the same type as would an expression that is an
 *   object of the corresponding type converted according to the integer
 *   promotion".
 */


/* 7.18.2.1 Limits of exact-width integer types */







   /*
      Note:  the literal "most negative int" cannot be written in C --
      the rules in the standard (section 6.4.4.1 in C99) will give it
      an unsigned type, so INT32_MIN (and the most negative member of
      any larger signed type) must be written via a constant expression.
   */
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
/* 7.18.2.2 Limits of minimum-width integer types */
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
/* 7.18.2.3 Limits of fastest minimum-width integer types */
# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
/* 7.18.2.4 Limits of integer types capable of holding object pointers */
# 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
/* 7.18.2.5 Limits of greatest-width integer types */




/* 7.18.3 "Other" */
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
/* WCHAR_MIN should be 0 if wchar_t is an unsigned type and
   (-WCHAR_MAX-1) if wchar_t is a signed type.  Unfortunately,
   it turns out that -fshort-wchar changes the signedness of
   the type. */
# 57 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdint.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 2 3 4

/* [XSI] The timeval structure shall be defined as described in
 * <sys/time.h>
 */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






struct timeval
{
 __darwin_time_t tv_sec; /* seconds */
 __darwin_suseconds_t tv_usec; /* and microseconds */
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 2 3 4

/* The id_t type shall be defined as described in <sys/types.h> */



/*
 * Resource limit type (low 63 bits, excluding the sign bit)
 */
typedef __uint64_t rlim_t;


/*****
 * PRIORITY
 */

/*
 * Possible values of the first parameter to getpriority()/setpriority(),
 * used to indicate the type of the second parameter.
 */







/* Additional private parameters to getpriority()/setpriority() are in resource_private.h */

/*
 * Range limitations for the value of the third parameter to setpriority().
 */



/*
 * use PRIO_DARWIN_BG to set the current thread into "background" state
 * which lowers CPU, disk IO, and networking priorites until thread terminates
 * or "background" state is revoked
 */


/*
 * use PRIO_DARWIN_NONUI to restrict a process's ability to make calls to
 * the GPU. (deprecated)
 */






/*****
 * RESOURCE USAGE
 */

/*
 * Possible values of the first parameter to getrusage(), used to indicate
 * the scope of the information to be returned.
 */



/*
 * A structure representing an accounting of resource utilization.  The
 * address of an instance of this structure is the second parameter to
 * getrusage().
 *
 * Note: All values other than ru_utime and ru_stime are implementaiton
 *       defined and subject to change in a future release.  Their use
 *       is discouraged for standards compliant programs.
 */
struct rusage {
 struct timeval ru_utime; /* user time used (PL) */
 struct timeval ru_stime; /* system time used (PL) */



 /*
	 * Informational aliases for source compatibility with programs
	 * that need more information than that provided by standards,
	 * and which do not mind being OS-dependent.
	 */
 long ru_maxrss; /* max resident set size (PL) */

 long ru_ixrss; /* integral shared memory size (NU) */
 long ru_idrss; /* integral unshared data (NU)  */
 long ru_isrss; /* integral unshared stack (NU) */
 long ru_minflt; /* page reclaims (NU) */
 long ru_majflt; /* page faults (NU) */
 long ru_nswap; /* swaps (NU) */
 long ru_inblock; /* block input operations (atomic) */
 long ru_oublock; /* block output operations (atomic) */
 long ru_msgsnd; /* messages sent (atomic) */
 long ru_msgrcv; /* messages received (atomic) */
 long ru_nsignals; /* signals received (atomic) */
 long ru_nvcsw; /* voluntary context switches (atomic) */
 long ru_nivcsw; /* involuntary " */


};


/*
 * Flavors for proc_pid_rusage().
 */
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 3 4
/*
 * Flags for RUSAGE_INFO_V5
 */


typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};

struct rusage_info_v6 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
 uint64_t ri_user_ptime;
 uint64_t ri_system_ptime;
 uint64_t ri_pinstructions;
 uint64_t ri_pcycles;
 uint64_t ri_energy_nj;
 uint64_t ri_penergy_nj;
 uint64_t ri_secure_time_in_system;
 uint64_t ri_secure_ptime_in_system;
 uint64_t ri_neural_footprint;
 uint64_t ri_lifetime_max_neural_footprint;
 uint64_t ri_interval_max_neural_footprint;
 uint64_t ri_reserved[9];
};

typedef struct rusage_info_v6 rusage_info_current;





/*****
 * RESOURCE LIMITS
 */

/*
 * Symbolic constants for resource limits; since all limits are representable
 * as a type rlim_t, we are permitted to define RLIM_SAVED_* in terms of
 * RLIM_INFINITY.
 */




/*
 * Possible values of the first parameter to getrlimit()/setrlimit(), to
 * indicate for which resource the operation is being performed.
 */
# 460 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 3 4
/*
 * A structure representing a resource limit.  The address of an instance
 * of this structure is the second parameter to getrlimit()/setrlimit().
 */
struct rlimit {
 rlim_t rlim_cur; /* current (soft) limit */
 rlim_t rlim_max; /* maximum value for rlim_cur */
};


/*
 * proc_rlimit_control()
 *
 * Resource limit flavors
 */





/*
 * Flags for wakeups monitor control.
 */






/*
 * Flags for CPU usage monitor control.
 */


/*
 * Flags for memory footprint interval tracking.
 */


struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};

/* Additional private I/O policies are in resource_private.h */

/* I/O type */
# 518 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 3 4
/* scope */




/* I/O Priority */







/* compatibility with older names */
# 571 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 2 3 4

/*
 * Option bits for the third argument of wait4.  WNOHANG causes the
 * wait to not hang if there are no stopped or terminated processes, rather
 * returning an error indication in this case (pid==0).  WUNTRACED
 * indicates that the caller should receive status about untraced children
 * which stop due to signals.  If children are stopped and a wait without
 * this option is done, it is as though they were still running... nothing
 * about them is returned.
 */



/*
 * Macros to test the exit status returned by wait
 * and extract the relevant values.
 */







/* These macros are permited, as they are in the implementation namespace */



/*
 * [XSI] The <sys/wait.h> header shall define the following macros for
 * analysis of process status values
 */





/* 0x13 == SIGCONT */
# 162 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 3 4
/*
 * [XSI] The following symbolic constants shall be defined as possible
 * values for the fourth argument to waitid().
 */
/* WNOHANG already defined for wait4() */
/* WUNTRACED defined for wait4() but not for waitid() */


/* waitid() parameter */







/* POSIX extensions and 4.2/4.3 compatability: */

/*
 * Tokens for special values of the "pid" parameter to wait4.
 */



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/endian.h" 1 3 4
/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/endian.h" 1 3 4
/*
 * Copyright (c) 2000-2023 Apple Inc. All rights reserved.
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */
/*
 * Copyright (c) 1987, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)endian.h	8.1 (Berkeley) 6/11/93
 */







/*
 * Define _NOQUAD if the compiler does NOT support 64-bit integers.
 */
/* #define _NOQUAD */

/*
 * Define the order of 32-bit words in 64-bit words.
 */





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h" 1 3 4
/*
 * Copyright (c) 2004, 2006, 2023 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

/*
 * Copyright (c) 1995 NeXT Computer, Inc. All rights reserved.
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1987, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_endian.h" 1 3 4
/*
 * Copyright (c) 2000-2023 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1995 NeXT Computer, Inc. All rights reserved.
 */






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_endian.h" 1 3 4
/*
 * Copyright (c) 2004, 2006, 2023 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

/*
 * Copyright (c) 1995 NeXT Computer, Inc. All rights reserved.
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1987, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/__endian.h" 1 3 4
/*
 * Copyright (c) 2004, 2006, 2023 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

/*
 * Copyright (c) 1995 NeXT Computer, Inc. All rights reserved.
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1987, 1991, 1993
 *    The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    This product includes software developed by the University of
 *    California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */




/*
 * Definitions for byte order, according to byte significance from low
 * address to high.
 */
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_endian.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_endian.h" 2 3 4
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h" 2 3 4

/*
 * Macros for network/external number representation conversion.
 */
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
/*
 * Copyright (c) 2006-2023 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */






/* Macros for swapping constant values in the preprocessing stage. */
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h" 2 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/endian.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/endian.h" 2 3 4
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 2 3 4

/*
 * Deprecated:
 * Structure of the information in the status word returned by wait4.
 * If w_stopval==_WSTOPPED, then the second structure describes
 * the information returned, else the first.
 */
union wait {
 int w_status; /* used in syscall */
 /*
	 * Terminated process status.
	 */
 struct {

  unsigned int w_Termsig:7, /* termination signal */
      w_Coredump:1, /* core dump indicator */
      w_Retcode:8, /* exit code if w_termsig==0 */
      w_Filler:16; /* upper bits filler */






 } w_T;
 /*
	 * Stopped process status.  Returned
	 * only for traced children unless requested
	 * with the WUNTRACED option bit.
	 */
 struct {

  unsigned int w_Stopval:8, /* == W_STOPPED if stopped */
      w_Stopsig:8, /* signal that stopped us */
      w_Filler:16; /* upper bits filler */





 } w_S;
};
# 246 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h" 1 3 4
/*
 * Copyright (c) 2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h" 2 3 4




void * alloca(size_t __size); /* built-in for gcc */
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 3 4
/* DO NOT REMOVE THIS COMMENT: fixincludes needs to see:
 * _GCC_SIZE_T */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */




typedef __darwin_ct_rune_t ct_rune_t;
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_rune_t rune_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
/*
 * Copyright (c) 2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
/* wchar_t is a built-in type in C++ */




typedef __darwin_wchar_t wchar_t;
# 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4



typedef struct {
 int quot; /* quotient */
 int rem; /* remainder */
} div_t;

typedef struct {
 long quot; /* quotient */
 long rem; /* remainder */
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4






// When _USE_EXTENDED_LOCALES_ is enabled (by including xlocale.h),
// MB_CUR_MAX is defined by xlocale.h.






extern int __mb_cur_max;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h" 1 3 4
/*
 * Copyright (c) 2018-2023 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */




/*
 * This header is included from <stdlib.h>, so the contents of this file have
 * broad source compatibility and POSIX conformance implications.
 * Be cautious about what is included and declared here.
 */

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h" 1 3 4
/*
 * Copyright (c) 2022 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_ptrcheck.h" 1 3 4
/*
 * Copyright (c) 2023 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h" 2 3 4


typedef unsigned long long malloc_type_id_t;



// Included from <malloc/_malloc.h> so carefully manage what we include here.
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h" 2 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h" 3 4
/* <malloc/_malloc.h> */

__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_malloc(size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_calloc(size_t count, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void malloc_type_free(void * ptr, malloc_type_id_t type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_realloc(void * ptr, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_valloc(size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_aligned_alloc(size_t alignment, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
/* rdar://120689514 */
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) int malloc_type_posix_memalign(void * *memptr, size_t alignment, size_t size, malloc_type_id_t type_id) /*__alloc_size(3)*/;


/* <malloc/malloc.h> */

typedef struct _malloc_zone_t malloc_zone_t;

__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_zone_malloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_zone_calloc(malloc_zone_t *zone, size_t count, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2,3)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void malloc_type_zone_free(malloc_zone_t *zone, void * ptr, malloc_type_id_t type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_zone_realloc(malloc_zone_t *zone, void * ptr, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_zone_valloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0))) void * malloc_type_zone_memalign(malloc_zone_t *zone, size_t alignment, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));



/* Rewrite enablement */
# 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h" 2 3 4
# 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h" 3 4
void * malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void * calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2))) ;
void free(void * );
void * realloc(void * __ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;
void * reallocf(void * __ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void * valloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;




void * aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_align(1))) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));

/* rdar://120689514 */
int posix_memalign(void * *__memptr, size_t __alignment, size_t __size) __attribute__((availability(macosx,introduced=10.6)));
# 140 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_abort.h" 1 3 4
/*
 * Copyright (c) 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_abort.h" 3 4
void abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
# 141 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4


int abs(int) __attribute__((__const__));
int atexit(void (* _Nonnull)(void));


int at_quick_exit(void (*)(void));

double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void * __key, const void * __base, size_t __nel,
     size_t __width, int (* _Nonnull __compar)(const void *, const void *));
/* calloc is now declared in _malloc.h */
div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));
/* free is now declared in _malloc.h */
char * getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

/* malloc is now declared in _malloc.h */
int mblen(const char * __s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t __n);
int mbtowc(wchar_t * restrict, const char * restrict , size_t __n);
/* posix_memalign is now declared in _malloc.h */
void qsort(void * __base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));


void quick_exit(int) __attribute__((__noreturn__));

int rand(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
/* realloc is now declared in _malloc.h */
void srand(unsigned) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char *, char * *) __asm("_" "strtod" );
float strtof(const char *, char * *) __asm("_" "strtof" );
long strtol(const char *__str, char * *__endptr, int __base);
long double
  strtold(const char *, char * *);

long long
  strtoll(const char *__str, char * *__endptr, int __base);

unsigned long
  strtoul(const char *__str, char * *__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char * *__endptr, int __base);


__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
int system(const char *) __asm("_" "system" );


size_t wcstombs(char * restrict , const wchar_t * restrict, size_t __n);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char * ecvt(double, int, int *restrict, int *restrict); /* LEGACY */
double erand48(unsigned short[3]);
char * fcvt(double, int, int *restrict, int *restrict); /* LEGACY */
char * gcvt(double, int, char *) ; /* LEGACY */
int getsubopt(char * *, char * const *, char * *);
int grantpt(int);

char *
  initstate(unsigned, char *, size_t __size); /* no  __DARWIN_ALIAS needed */




long jrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of mktemp(3), it is highly recommended that you use mkstemp(3) instead.")))

char * mktemp(char *);
int mkstemp(char *);
long mrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int);
char * ptsname(int);


int ptsname_r(int fildes, char * buffer, size_t buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));


int putenv(char *) __asm("_" "putenv" );
long random(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned *) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

char * realpath(const char * restrict, char * restrict ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short * seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char * setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );
# 277 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_dev_t dev_t; /* device number */
# 278 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */



typedef __darwin_mode_t mode_t;
# 279 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 2 3 4



uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * /*dat*/, int __datlen)
    __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void * __buf, size_t __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^ _Nonnull)(void)) __attribute__((availability(macosx,introduced=10.6)));
# 302 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 3 4
void *bsearch_b(const void * __key, const void * __base, size_t __nel,
     size_t __width, int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));


  /* getcap(3) functions */
char * cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char * *, char * *, const char *);
int cgetfirst(char * *, char * *);
int cgetmatch(const char *, const char *);
int cgetnext(char * *, char * *);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char * *);
int cgetustr(char *, const char *, char * *);

int daemon(int, int) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char * devname(dev_t, mode_t);
char * devname_r(dev_t, mode_t, char * buf, int len);
char * getbsize(int *, long *);
int getloadavg(double [], int __nelem);
const char
 *getprogname(void);
void setprogname(const char *);
# 336 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h" 3 4
int heapsort(void * __base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int heapsort_b(void * __base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void * __base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *));

int mergesort_b(void * __base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void psort(void * __base, size_t __nel, size_t __width,
     int (* _Nonnull __compar)(const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void * __base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void * __base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void * __base, size_t __nel, size_t __width,
     int (^ _Nonnull __compar)(const void *, const void *) __attribute__((__noescape__)))
     __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void * __base, size_t __nel, size_t __width, void *,
     int (* _Nonnull __compar)(void *, const void *, const void *));
int radixsort(const unsigned char * * __base, int __nel, const unsigned char * __table,
     unsigned __endbyte);
int rpmatch(const char *)
 __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char * * __base, int __nel, const unsigned char * __table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);
/* reallocf is now declared in _malloc.h */
long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char * *__errstrp)
 __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));

long long
  strtoq(const char *__str, char * *__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char * *__endptr, int __base);

extern char * suboptarg; /* getsubopt(3) external variable */
/* valloc is now declared in _malloc.h */




/* Poison the following routines if -fshort-wchar is set */
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdlib.h" 2 3 4
# 3 "code/codex.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 1 3 4
/*
 * Copyright (c) 2000, 2007, 2010, 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)string.h	8.1 (Berkeley) 6/2/93
 */

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h" 1 3 4
/*
 * Copyright (c) 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)string.h	8.1 (Berkeley) 6/2/93
 */







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h" 2 3 4

/* ANSI-C */




void *
  memchr(const void * __s, int __c, size_t __n);
int memcmp(const void * __s1, const void * __s2,
  size_t __n);
void *
  memcpy(void * __dst, const void * __src,
  size_t __n);
void *
  memmove(void * __dst,
  const void * __src, size_t __len);
void *
  memset(void * __b, int __c, size_t __len);
char *
  strcat(char * __s1, const char *__s2)
                                  ;
char * strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *
  strcpy(char * __dst, const char *__src)
                                  ;
size_t strcspn(const char *__s, const char *__charset);
char * strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *
  strncat(char * __s1,
  const char * __s2, size_t __n)
                                  ;
int strncmp(const char * __s1,
  const char * __s2, size_t __n);
char *
  strncpy(char * __dst,
        const char * __src, size_t __n)
                                        ;
char * strpbrk(const char *__s, const char *__charset);
char * strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char * strstr(const char *__big, const char *__little);
char * strtok(char * __str, const char *__sep);
size_t strxfrm(char * __s1, const char *__s2, size_t __n);




/* Additional functionality provided by:
 * POSIX.1c-1995,
 * POSIX.1i-1995,
 * and the omnibus ISO/IEC 9945-1: 1996
 */



char *
        strtok_r(char * __str, const char *__sep,
        char * *__lasts);





/* Additional functionality provided by:
 * POSIX.1-2001
 */



int strerror_r(int __errnum, char * __strerrbuf,
        size_t __buflen);
char * strdup(const char *__s1);
void * /* in bounds of __dst */
        memccpy(void * __dst, const void * __src,
        int __c, size_t __n);





/* Additional functionality provided by:
 * POSIX.1-2008
 */



char *
        stpcpy(char * __dst, const char *__src) ;
char *
        stpncpy(char * __dst,
        const char * __src, size_t __n)
        __attribute__((availability(macosx,introduced=10.7)))
                                        ;
char * strndup(const char * __s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char * __s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char * strsignal(int __sig);



/* C11 Annex K */


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */


typedef int errno_t;
# 174 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h" 2 3 4


errno_t memset_s(void * __s, rsize_t __smax, int __c, rsize_t __n) __attribute__((availability(macosx,introduced=10.9)));



/* Darwin extensions */





void *
        memmem(const void * __big, size_t __big_len,
        const void * __little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void * __b, const void * __pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void * __b, const void * __pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void * __b, const void * __pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));

char *
        strcasestr(const char *__big, const char *__little);
__attribute__((availability(macosx,introduced=15.4))) __attribute__((availability(ios,introduced=18.4)))
__attribute__((availability(tvos,introduced=18.4))) __attribute__((availability(watchos,introduced=11.4)))
char *
        strchrnul(const char *__s, int __c);
char *
        strnstr(const char * __big, const char *__little, size_t __len);
size_t strlcat(char * __dst, const char *__source, size_t __size);
size_t strlcpy(char * __dst, const char *__source, size_t __size);
void strmode(int __mode, char * __bp);
char *
        strsep(char * *__stringp, const char *__delim);

/* SUS places swab() in unistd.h.  It is listed here for source compatibility */
void swab(const void * restrict, void * restrict, ssize_t __len);

__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
int timingsafe_bcmp(const void * __b1, const void * __b2, size_t __len);

__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
int strsignal_r(int __sig, char * __strsignalbuf, size_t __buflen);


/* Some functions historically defined in string.h were placed in strings.h
 * by SUS.
 */
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h" 1 3 4
/*
 * Copyright (c) 2000, 2007, 2010, 2023 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)strings.h	8.1 (Berkeley) 6/2/93
 */
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h" 2 3 4




/* Removed in Issue 7 */

int bcmp(const void *, const void *, size_t __n) ;
void bcopy(const void *, void *, size_t __n) ;
void bzero(void *, size_t __n) ;
char * index(const char *, int) ;
char * rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);


/* Darwin extensions */


int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));
# 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h" 2 3 4
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4
# 4 "code/codex.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 1 3 4
/*
 * Copyright (c) 2002-2017 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
/*
 * Copyright (c) 2007-2016 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
# 617 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
// This is explicitly outside the header guard
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 2 3 4








/******************************************************************************
 * Floating point data types                                                  *
 ******************************************************************************/

/*  Define float_t and double_t per C standard, ISO/IEC 9899:2011 7.12 2,
    taking advantage of GCC's __FLT_EVAL_METHOD__ (which a compiler may
    define anytime and GCC does) that shadows FLT_EVAL_METHOD (which a
    compiler must define only in float.h).                                    */

    typedef float float_t;
    typedef double double_t;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/******************************************************************************
 *      Taxonomy of floating point data types                                 *
 ******************************************************************************/
# 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/*  On these architectures, fma(), fmaf( ), and fmal( ) are generally about as
    fast as (or faster than) separate multiply and add of the same operands.  */
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/* The values returned by `ilogb' for 0 and NaN respectively. */



/* Bitmasks for the math_errhandling macro.  */




extern int __math_errhandling(void);

/******************************************************************************
 *                                                                            *
 *                              Inquiry macros                                *
 *                                                                            *
 *  fpclassify      Returns one of the FP_* values.                           *
 *  isnormal        Non-zero if and only if the argument x is normalized.     *
 *  isfinite        Non-zero if and only if the argument x is finite.         *
 *  isnan           Non-zero if and only if the argument x is a NaN.          *
 *  signbit         Non-zero if and only if the sign of the argument x is     *
 *                  negative.  This includes, NaNs, infinities and zeros.     *
 *                                                                            *
 ******************************************************************************/






extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 261 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/*  Implementations making function calls to fall back on when -ffast-math
    or similar is specified.  These are not available in iOS versions prior
    to 6.0.  If you need them, you must target that version or later.         */
# 290 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern int __isnormalf(float);
extern int __isnormald(double);
extern int __isnormall(long double);
extern int __isfinitef(float);
extern int __isfinited(double);
extern int __isfinitel(long double);
extern int __isinff(float);
extern int __isinfd(double);
extern int __isinfl(long double);
extern int __isnanf(float);
extern int __isnand(double);
extern int __isnanl(long double);
extern int __signbitf(float);
extern int __signbitd(double);
extern int __signbitl(long double);



/******************************************************************************
 *                                                                            *
 *                              Math Functions                                *
 *                                                                            *
 ******************************************************************************/

extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);

/*	lgammaf, lgamma, and lgammal are not thread-safe. The thread-safe
    variants lgammaf_r, lgamma_r, and lgammal_r are made available if
    you define the _REENTRANT symbol before including <math.h>                */
extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);

/*  long long is not part of C90. Make sure you are passing -std=c99 or
    -std=gnu99 or higher if you need these functions returning long longs     */

extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 568 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/******************************************************************************
 *  Reentrant variants of lgamma[fl]                                          *
 ******************************************************************************/
# 579 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/******************************************************************************
 *  Apple extensions to the C standard                                        *
 ******************************************************************************/

/*  Because these functions are not specified by any relevant standard, they
    are prefixed with __, which places them in the implementor's namespace, so
    they should not conflict with any developer or third-party code.  If they
    are added to a relevant standard in the future, un-prefixed names may be
    added to the library and they may be moved out of this section of the
    header.                                                                   
 
    Because these functions are non-standard, they may not be available on non-
    Apple platforms.                                                          */

/*  __exp10(x) returns 10**x.  Edge cases match those of exp( ) and exp2( ).  */
extern float __exp10f(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __exp10(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));

/*  __sincos(x,sinp,cosp) computes the sine and cosine of x with a single
    function call, storing the sine in the memory pointed to by sinp, and
    the cosine in the memory pointed to by cosp. Edge cases match those of
    separate calls to sin( ) and cos( ).                                      */
inline void __sincosf(float __x, float *__sinp, float *__cosp);
inline void __sincos(double __x, double *__sinp, double *__cosp);

/*  __sinpi(x) returns the sine of pi times x; __cospi(x) and __tanpi(x) return
    the cosine and tangent, respectively.  These functions can produce a more
    accurate answer than expressions of the form sin(M_PI * x) because they
    avoid any loss of precision that results from rounding the result of the
    multiplication M_PI * x.  They may also be significantly more efficient in
    some cases because the argument reduction for these functions is easier
    to compute.  Consult the man pages for edge case details.                 */
extern float __cospif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __cospi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __sinpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __sinpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __tanpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __tanpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));

/* half precision math functions */
extern _Float16 __fabsf16(_Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __hypotf16(_Float16, _Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __sqrtf16(_Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __ceilf16(_Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __floorf16(_Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __rintf16(_Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __roundf16(_Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __truncf16(_Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __copysignf16(_Float16, _Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __nextafterf16(_Float16, _Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __fmaxf16(_Float16, _Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __fminf16(_Float16, _Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
extern _Float16 __fmaf16(_Float16, _Float16, _Float16) __attribute__((availability(macos,introduced=15.0))) __attribute__((availability(ios,introduced=18.0))) __attribute__((availability(watchos,introduced=11.0))) __attribute__((availability(tvos,introduced=18.0)));
# 648 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/*  __sincospi(x,sinp,cosp) computes the sine and cosine of pi times x with a
    single function call, storing the sine in the memory pointed to by sinp,
    and the cosine in the memory pointed to by cosp.  Edge cases match those
    of separate calls to __sinpi( ) and __cospi( ), and are documented in the
    man pages.
 
    These functions were introduced in OSX 10.9 and iOS 7.0.  Because they are
    implemented as header inlines, weak-linking does not function as normal,
    and they are simply hidden when targeting earlier OS versions.            */
inline void __sincospif(float __x, float *__sinp, float *__cosp);
inline void __sincospi(double __x, double *__sinp, double *__cosp);

/*  Implementation details of __sincos and __sincospi allowing them to return
    two results while allowing the compiler to optimize away unnecessary load-
    store traffic.  Although these interfaces are exposed in the math.h header
    to allow compilers to generate better code, users should call __sincos[f]
    and __sincospi[f] instead and allow the compiler to emit these calls.     */
struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}


/******************************************************************************
 *  POSIX/UNIX extensions to the C standard                                   *
 ******************************************************************************/


extern double j0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double j1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double jn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double yn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double scalb(double, double);
extern int signgam;

/*  Even though these might be more useful as long doubles, POSIX requires
    that they be double-precision literals.                                   */
# 727 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/*  Long-double versions of M_E, etc for convenience on Intel where long-
    double is not the same as double.  Define __MATH_LONG_DOUBLE_CONSTANTS
    to make these constants available.                                        */
# 746 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
/******************************************************************************
 *  Legacy BSD extensions to the C standard                                   *
 ******************************************************************************/
# 784 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
# 5 "code/codex.c" 2
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdbool.h" 1 3
/*===---- stdbool.h - Standard header for booleans -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 6 "code/codex.c" 2

# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdatomic.h" 1 3
/*===---- stdatomic.h - Standard header for atomic types and operations -----===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */




/* If we're hosted, fall back to the system's stdatomic.h. FreeBSD, for
 * example, already has a Clang-compatible stdatomic.h header.
 *
 * Exclude the MSVC path as well as the MSVC header as of the 14.31.30818
 * explicitly disallows `stdatomic.h` in the C mode via an `#error`.  Fallback
 * to the clang resource header until that is fully supported.  The
 * `stdatomic.h` header requires C++23 or newer.
 */






# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 50 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 3
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */





/*
 * __stddef_null.h is special when building without modules: if __need_NULL is
 * set, then it will unconditionally redefine NULL. To avoid stepping on client
 * definitions of NULL, __need_NULL should only be set the first time this
 * header is included, that is when __STDDEF_H is not defined. However, when
 * building with modules, this header is a textual header and needs to
 * unconditionally include __stdef_null.h to support multiple submodules
 * exporting _Builtin_stddef.null. Take module SM with submodules A and B, whose
 * headers both include stddef.h When SM.A builds, __STDDEF_H will be defined.
 * When SM.B builds, the definition from SM.A will leak when building without
 * local submodule visibility. stddef.h wouldn't include __stddef_null.h, and
 * SM.B wouldn't import _Builtin_stddef.null, and SM.B's `export *` wouldn't
 * export NULL as expected. When building with modules, always include
 * __stddef_null.h so that everything works as expected.
 */
# 86 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 3
/* wint_t is provided by <wchar.h> and not <stddef.h>. It's here
 * for compatibility, but must be explicitly requested. Therefore
 * __need_wint_t is intentionally not defined here. */
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_header_macro.h" 1 3
/*===---- __stddef_header_macro.h ------------------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 90 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3



# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_ptrdiff_t.h" 1 3
/*===---- __stddef_ptrdiff_t.h - Definition of ptrdiff_t -------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */




typedef long int ptrdiff_t;
# 94 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_size_t.h" 1 3
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 99 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_rsize_t.h" 1 3
/*===---- __stddef_rsize_t.h - Definition of rsize_t -----------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 104 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_wchar_t.h" 1 3
/*===---- __stddef_wchar.h - Definition of wchar_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 109 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_null.h" 1 3
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 114 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3
# 128 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 3
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_max_align_t.h" 1 3
/*===---- __stddef_max_align_t.h - Definition of max_align_t ---------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */







typedef long double max_align_t;
# 129 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_offsetof.h" 1 3
/*===---- __stddef_offsetof.h - Definition of offsetof ---------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 134 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3



/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 28 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdatomic.h" 2 3






/* 7.17.1 Introduction */
# 50 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdatomic.h" 3
/* 7.17.2 Initialization */


/* ATOMIC_VAR_INIT was removed in C23, but still remains in C++23. */







/* ATOMIC_VAR_INIT was deprecated in C17 and C++20. */




/* 7.17.3 Order and consistency */

typedef enum memory_order {
  memory_order_relaxed = 0,
  memory_order_consume = 1,
  memory_order_acquire = 2,
  memory_order_release = 3,
  memory_order_acq_rel = 4,
  memory_order_seq_cst = 5
} memory_order;



/* 7.17.4 Fences */

/* These should be provided by the libc implementation. */
void atomic_thread_fence(memory_order);
void atomic_signal_fence(memory_order);




/* 7.17.5 Lock-free property */



/* 7.17.6 Atomic integer types */




typedef _Atomic(_Bool) atomic_bool;

typedef _Atomic(char) atomic_char;
typedef _Atomic(signed char) atomic_schar;
typedef _Atomic(unsigned char) atomic_uchar;
typedef _Atomic(short) atomic_short;
typedef _Atomic(unsigned short) atomic_ushort;
typedef _Atomic(int) atomic_int;
typedef _Atomic(unsigned int) atomic_uint;
typedef _Atomic(long) atomic_long;
typedef _Atomic(unsigned long) atomic_ulong;
typedef _Atomic(long long) atomic_llong;
typedef _Atomic(unsigned long long) atomic_ullong;



typedef _Atomic(uint_least16_t) atomic_char16_t;
typedef _Atomic(uint_least32_t) atomic_char32_t;
typedef _Atomic(wchar_t) atomic_wchar_t;
typedef _Atomic(int_least8_t) atomic_int_least8_t;
typedef _Atomic(uint_least8_t) atomic_uint_least8_t;
typedef _Atomic(int_least16_t) atomic_int_least16_t;
typedef _Atomic(uint_least16_t) atomic_uint_least16_t;
typedef _Atomic(int_least32_t) atomic_int_least32_t;
typedef _Atomic(uint_least32_t) atomic_uint_least32_t;
typedef _Atomic(int_least64_t) atomic_int_least64_t;
typedef _Atomic(uint_least64_t) atomic_uint_least64_t;
typedef _Atomic(int_fast8_t) atomic_int_fast8_t;
typedef _Atomic(uint_fast8_t) atomic_uint_fast8_t;
typedef _Atomic(int_fast16_t) atomic_int_fast16_t;
typedef _Atomic(uint_fast16_t) atomic_uint_fast16_t;
typedef _Atomic(int_fast32_t) atomic_int_fast32_t;
typedef _Atomic(uint_fast32_t) atomic_uint_fast32_t;
typedef _Atomic(int_fast64_t) atomic_int_fast64_t;
typedef _Atomic(uint_fast64_t) atomic_uint_fast64_t;
typedef _Atomic(intptr_t) atomic_intptr_t;
typedef _Atomic(uintptr_t) atomic_uintptr_t;
typedef _Atomic(size_t) atomic_size_t;
typedef _Atomic(ptrdiff_t) atomic_ptrdiff_t;
typedef _Atomic(intmax_t) atomic_intmax_t;
typedef _Atomic(uintmax_t) atomic_uintmax_t;

/* 7.17.7 Operations on atomic types */
# 171 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdatomic.h" 3
/* 7.17.8 Atomic flag type and operations */

typedef struct atomic_flag { atomic_bool _Value; } atomic_flag;







/* These should be provided by the libc implementation. */




_Bool atomic_flag_test_and_set(volatile atomic_flag *);
_Bool atomic_flag_test_and_set_explicit(volatile atomic_flag *, memory_order);

void atomic_flag_clear(volatile atomic_flag *);
void atomic_flag_clear_explicit(volatile atomic_flag *, memory_order);
# 8 "code/codex.c" 2
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 1 3
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stdarg.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 39 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 3
/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */





# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_header_macro.h" 1 3
/*===---- __stdarg_header_macro.h ------------------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 48 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 2 3



# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___gnuc_va_list.h" 1 3
/*===---- __stdarg___gnuc_va_list.h - Definition of __gnuc_va_list ---------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



typedef __builtin_va_list __gnuc_va_list;
# 52 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_list.h" 1 3
/*===---- __stdarg_va_list.h - Definition of va_list -----------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



typedef __builtin_va_list va_list;
# 57 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_arg.h" 1 3
/*===---- __stdarg_va_arg.h - Definitions of va_start, va_arg, va_end-------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */







/* Versions before C23 do require the second parameter. */
# 62 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___va_copy.h" 1 3
/*===---- __stdarg___va_copy.h - Definition of __va_copy -------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 67 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_copy.h" 1 3
/*===---- __stdarg_va_copy.h - Definition of va_copy------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 72 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h" 2 3
# 9 "code/codex.c" 2
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 50 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 3
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
# 86 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 3
/* wint_t is provided by <wchar.h> and not <stddef.h>. It's here
 * for compatibility, but must be explicitly requested. Therefore
 * __need_wint_t is intentionally not defined here. */




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_ptrdiff_t.h" 1 3
/*===---- __stddef_ptrdiff_t.h - Definition of ptrdiff_t -------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_size_t.h" 1 3
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 99 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_rsize_t.h" 1 3
/*===---- __stddef_rsize_t.h - Definition of rsize_t -----------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 104 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3




# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_wchar_t.h" 1 3
/*===---- __stddef_wchar.h - Definition of wchar_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 109 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3
# 133 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 3
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stddef_offsetof.h" 1 3
/*===---- __stddef_offsetof.h - Definition of offsetof ---------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 134 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stddef.h" 2 3



/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 10 "code/codex.c" 2

// Simple test harness
static int total_tests = 0;
static int failed_tests = 0;
# 57 "code/codex.c"
// Feature macros



// Typedefs, enums, structs, unions
typedef struct {
    int x, y;
} Point;

typedef enum {
    kRed = 1,
    kGreen = 2,
    kBlue = 4
} Color;

typedef union {
    uint32_t u32;
    unsigned char b[4];
} U32Bytes;

// Compile-time checks
_Static_assert(sizeof(char) == 1, "char is 1 byte");
_Static_assert(sizeof(int) >= 2, "int is at least 16-bit");
_Static_assert(sizeof(U32Bytes) == 4, "U32Bytes must be 4 bytes");
_Static_assert((int)kRed == 1 && (int)kGreen == 2 && (int)kBlue == 4, "Color enum values");
_Static_assert(__builtin_offsetof(Point, y) >= sizeof(int), "Point.y offset after x");
_Static_assert(sizeof(void*) >= sizeof(int*), "pointer size sane");

// _Noreturn declaration for compile-time/type checks
_Noreturn static void must_exit(int code);
_Static_assert(sizeof(&must_exit) == sizeof(void (*)(int)), "_Noreturn function pointer size matches");

// Function pointer example
static int add(int a, int b) { return a + b; }
static int mul(int a, int b) { return a * b; }
static int sub(int a, int b) { return a - b; }

// Static local state
static int bump_static_counter(void) {
    static int counter = 0; // persists across calls
    counter += 3;
    return counter;
}

// Recursion
static int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

// Helper functions for tests
static int sum_for_loop(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) s += i;
    return s;
}

static int sum_while_loop(int n) {
    int s = 0, i = 1;
    while (i <= n) { s += i; i++; }
    return s;
}

static int sum_do_while_loop(int n) {
    if (n <= 0) return 0;
    int s = 0, i = 1;
    do { s += i; i++; } while (i <= n);
    return s;
}

// Tests
static void test_arithmetic(void) {
    do { do { total_tests++; } while(0); long long _e = (long long)(7); long long _g = (long long)(3 + 4); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 128, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(12); long long _g = (long long)(3 * 4); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 129, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(2); long long _g = (long long)(7 / 3); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 130, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(7 % 3); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 131, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(11); long long _g = (long long)(3 + 4 * 2); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 132, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(14); long long _g = (long long)((3 + 4) * 2); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 133, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(-10); long long _g = (long long)(-(3 + 7)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 134, __func__, _e, _g); } while(0); } while(0);

    int a = 5; a += 2; do { do { total_tests++; } while(0); long long _e = (long long)(7); long long _g = (long long)(a); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 136, __func__, _e, _g); } while(0); } while(0);
    a |= 8; do { do { total_tests++; } while(0); long long _e = (long long)(15); long long _g = (long long)(a); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 137, __func__, _e, _g); } while(0); } while(0);
    a &= ~1; do { do { total_tests++; } while(0); long long _e = (long long)(14); long long _g = (long long)(a); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 138, __func__, _e, _g); } while(0); } while(0);
    a ^= 6; do { do { total_tests++; } while(0); long long _e = (long long)(8); long long _g = (long long)(a); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 139, __func__, _e, _g); } while(0); } while(0);

    unsigned u = 1u << 31; do { do { total_tests++; } while(0); if(!(u > 0)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 141, __func__, "u > 0"); } while(0); } while(0);
}

static void test_bit_ops(void) {
    unsigned x = 0b10101010u; // 170
    unsigned y = 0b11001100u; // 204
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0b10001000u); unsigned long long _g = (unsigned long long)(x & y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 147, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0b11101110u); unsigned long long _g = (unsigned long long)(x | y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 148, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0b01100110u); unsigned long long _g = (unsigned long long)(x ^ y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 149, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0b01010101u); unsigned long long _g = (unsigned long long)((unsigned)(~x & 0xFF)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 150, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0b01010100u); unsigned long long _g = (unsigned long long)((x << 1) & 0xFFu); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 151, __func__, _e, _g); } while(0); } while(0); // mask to 8 bits
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0b01010101u); unsigned long long _g = (unsigned long long)(x >> 1); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 152, __func__, _e, _g); } while(0); } while(0);
}

static void test_logic_ternary(void) {
    int a = 3, b = 4;
    do { do { total_tests++; } while(0); if(!(a < b && b > 0)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 157, __func__, "a < b && b > 0"); } while(0); } while(0);
    do { do { total_tests++; } while(0); if(!(!(a == b))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 158, __func__, "!(a == b)"); } while(0); } while(0);
    int m = a > b ? a : b;
    do { do { total_tests++; } while(0); long long _e = (long long)(4); long long _g = (long long)(m); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 160, __func__, _e, _g); } while(0); } while(0);
}

static void test_loops(void) {
    do { do { total_tests++; } while(0); long long _e = (long long)(55); long long _g = (long long)(sum_for_loop(10)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 164, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(55); long long _g = (long long)(sum_while_loop(10)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 165, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(55); long long _g = (long long)(sum_do_while_loop(10)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 166, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(sum_do_while_loop(0)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 167, __func__, _e, _g); } while(0); } while(0);
}

static void test_arrays_pointers(void) {
    int arr[5] = {1,2,3,4,5};
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(arr[0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 172, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(5); long long _g = (long long)(arr[4]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 173, __func__, _e, _g); } while(0); } while(0);
    int *p = arr;
    do { do { total_tests++; } while(0); long long _e = (long long)(3); long long _g = (long long)(*(p + 2)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 175, __func__, _e, _g); } while(0); } while(0);
    *(p + 1) = 20; do { do { total_tests++; } while(0); long long _e = (long long)(20); long long _g = (long long)(arr[1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 176, __func__, _e, _g); } while(0); } while(0);

    int mat[2][3] = {{1,2,3},{4,5,6}};
    do { do { total_tests++; } while(0); long long _e = (long long)(5); long long _g = (long long)(mat[1][1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 179, __func__, _e, _g); } while(0); } while(0);

    // function pointer
    int (*op)(int,int) = add;
    do { do { total_tests++; } while(0); long long _e = (long long)(9); long long _g = (long long)(op(4,5)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 183, __func__, _e, _g); } while(0); } while(0);
    op = mul;
    do { do { total_tests++; } while(0); long long _e = (long long)(20); long long _g = (long long)(op(4,5)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 185, __func__, _e, _g); } while(0); } while(0);
}

// Function pointer array + dispatch
static void test_func_pointer_array(void) {
    int (*ops[3])(int,int) = { add, mul, sub };
    int a = 4, b = 2;
    do { do { total_tests++; } while(0); long long _e = (long long)(6); long long _g = (long long)(ops[0](a,b)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 192, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(8); long long _g = (long long)(ops[1](a,b)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 193, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(2); long long _g = (long long)(ops[2](a,b)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 194, __func__, _e, _g); } while(0); } while(0);

    // Iterate over ops to ensure indexing/calls work generically
    int expected[3] = {6, 8, 2};
    for (int i = 0; i < 3; ++i) {
        do { do { total_tests++; } while(0); long long _e = (long long)(expected[i]); long long _g = (long long)(ops[i](a,b)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 199, __func__, _e, _g); } while(0); } while(0);
    }
}

// Array initializers (designated, nested, partial)
static void test_array_initializers(void) {
    int a1[5] = {1, 2, 3}; // tail zero-initialized
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(a1[0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 206, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(2); long long _g = (long long)(a1[1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 207, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(3); long long _g = (long long)(a1[2]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 208, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(a1[3]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 209, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(a1[4]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 210, __func__, _e, _g); } while(0); } while(0);

    int a2[6] = { [4] = 40, [2] = 20, [0] = 10 };
    do { do { total_tests++; } while(0); long long _e = (long long)(10); long long _g = (long long)(a2[0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 213, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(a2[1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 214, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(20); long long _g = (long long)(a2[2]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 215, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(a2[3]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 216, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(40); long long _g = (long long)(a2[4]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 217, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(a2[5]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 218, __func__, _e, _g); } while(0); } while(0);

    int m[2][3] = { [1] = { [2] = 9 } }; // nested designated
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(m[0][0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 221, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(m[0][1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 222, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(m[0][2]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 223, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(m[1][0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 224, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(m[1][1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 225, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(9); long long _g = (long long)(m[1][2]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 226, __func__, _e, _g); } while(0); } while(0);

    // String literal initializer (includes NUL terminator)
    char s[] = "ABC";
    do { do { total_tests++; } while(0); long long _e = (long long)(4); long long _g = (long long)((int)sizeof(s)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 230, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)('A'); long long _g = (long long)(s[0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 231, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)('B'); long long _g = (long long)(s[1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 232, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)('C'); long long _g = (long long)(s[2]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 233, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)('\0'); long long _g = (long long)(s[3]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 234, __func__, _e, _g); } while(0); } while(0);

    // Struct array with designated initializers
    Point pts[3] = { [1] = {.x = 2, .y = 3}, [0] = {.y = 1} };
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(pts[0].x); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 238, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(pts[0].y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 239, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(2); long long _g = (long long)(pts[1].x); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 240, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(3); long long _g = (long long)(pts[1].y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 241, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(pts[2].x); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 242, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(pts[2].y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 243, __func__, _e, _g); } while(0); } while(0);

    // Compound literals (C99)
    Point q = (Point){ .x = 7, .y = 8 };
    do { do { total_tests++; } while(0); long long _e = (long long)(7); long long _g = (long long)(q.x); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 247, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(8); long long _g = (long long)(q.y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 248, __func__, _e, _g); } while(0); } while(0);
    Point *qp = &(Point){ .x = 1, .y = 2 }; // automatic storage, valid within this block
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(qp->x); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 250, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(2); long long _g = (long long)(qp->y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 251, __func__, _e, _g); } while(0); } while(0);
}

// Casts: numeric, pointer, qualifiers
static void test_casts(void) {
    // Numeric casts
    double d = 3.9;
    int i = (int)d; // truncates toward zero
    do { do { total_tests++; } while(0); long long _e = (long long)(3); long long _g = (long long)(i); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 259, __func__, _e, _g); } while(0); } while(0);

    uint8_t small = (uint8_t)260; // modulo 256 -> 4
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(4u); unsigned long long _g = (unsigned long long)((unsigned)small); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 262, __func__, _e, _g); } while(0); } while(0);

    unsigned all1 = (unsigned)-1;
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(~0u); unsigned long long _g = (unsigned long long)(all1); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 265, __func__, _e, _g); } while(0); } while(0);

    // Signed/unsigned interactions
    int neg = -5;
    unsigned u = (unsigned)neg; // large positive modulo 2^N
    do { do { total_tests++; } while(0); if(!(u > 1000000u || sizeof(unsigned) == 2)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 270, __func__, "u > 1000000u || sizeof(unsigned) == 2"); } while(0); } while(0); // allow 16-bit edge cases

    // Pointer casts round-trip via void*
    int v = 42;
    int *pi = &v;
    void *pv = (void*)pi;
    int *pi2 = (int*)pv;
    do { do { total_tests++; } while(0); if(!(pi == pi2)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 277, __func__, "pi == pi2"); } while(0); } while(0);

    // uintptr_t round-trip
    uintptr_t addr = (uintptr_t)pi;
    int *pi3 = (int*)addr;
    do { do { total_tests++; } while(0); if(!(pi3 == pi)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 282, __func__, "pi3 == pi"); } while(0); } while(0);

    // Discard qualifiers via cast (do not write through it)
    const int cx = 7;
    const int *pcx = &cx;
    int *pncx = (int*)(uintptr_t)pcx; // just type conversion; no write
    do { do { total_tests++; } while(0); if(!((void*)pncx == (void*)pcx)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 288, __func__, "(void*)pncx == (void*)pcx"); } while(0); } while(0);
}

// Atomics (single-thread sanity checks)
static void test_atomics(void) {
    _Atomic int ai = (3);
    __c11_atomic_store(&ai, 10, memory_order_relaxed);
    do { do { total_tests++; } while(0); long long _e = (long long)(10); long long _g = (long long)(__c11_atomic_load(&ai, memory_order_relaxed)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 295, __func__, _e, _g); } while(0); } while(0);

    int old = __c11_atomic_fetch_add(&ai, 5, memory_order_relaxed);
    do { do { total_tests++; } while(0); long long _e = (long long)(10); long long _g = (long long)(old); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 298, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(15); long long _g = (long long)(__c11_atomic_load(&ai, memory_order_relaxed)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 299, __func__, _e, _g); } while(0); } while(0);

    int expected = 15;
    _Bool exchanged = __c11_atomic_compare_exchange_strong(
        &ai, &expected, 99, memory_order_relaxed, memory_order_relaxed);
    do { do { total_tests++; } while(0); if(!(exchanged)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 304, __func__, "exchanged"); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(99); long long _g = (long long)(__c11_atomic_load(&ai, memory_order_relaxed)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 305, __func__, _e, _g); } while(0); } while(0);

    _Atomic unsigned long au = 0;
    unsigned long prev = __c11_atomic_fetch_or(&au, 0xAUL, memory_order_relaxed);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)((unsigned)prev); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 309, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0xAUL); unsigned long long _g = (unsigned long long)((unsigned)__c11_atomic_load(&au, memory_order_relaxed)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 310, __func__, _e, _g); } while(0); } while(0);
}

// Atomics with different types and memory orders
static void test_atomics_orders_types(void) {
    _Atomic int ai = 0;
    __c11_atomic_store(&ai, 1, memory_order_release);
    int li = __c11_atomic_load(&ai, memory_order_acquire);
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(li); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 318, __func__, _e, _g); } while(0); } while(0);
    int expected = 1;
    _Bool ok = __c11_atomic_compare_exchange_weak(&ai, &expected, 2, memory_order_acq_rel, memory_order_relaxed);
    do { do { total_tests++; } while(0); if(!(ok)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 321, __func__, "ok"); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(2); long long _g = (long long)(__c11_atomic_load(&ai, memory_order_seq_cst)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 322, __func__, _e, _g); } while(0); } while(0);

    _Atomic long long all = 0;
    long long prevll = __c11_atomic_exchange(&all, 123LL, memory_order_seq_cst);
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)((int)prevll); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 326, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(123); long long _g = (long long)((int)__c11_atomic_load(&all, memory_order_relaxed)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 327, __func__, _e, _g); } while(0); } while(0);

    _Atomic uint32_t au32; __c11_atomic_init(&au32, 0u);
    uint32_t prev = __c11_atomic_fetch_add(&au32, 5u, memory_order_acq_rel);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)(prev); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 331, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(5u); unsigned long long _g = (unsigned long long)(__c11_atomic_load(&au32, memory_order_relaxed)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 332, __func__, _e, _g); } while(0); } while(0);
    uint32_t expu = 999u;
    _Bool ok2 = __c11_atomic_compare_exchange_strong(&au32, &expu, 42u, memory_order_release, memory_order_relaxed);
    do { do { total_tests++; } while(0); if(!(!ok2)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 335, __func__, "!ok2"); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(5u); unsigned long long _g = (unsigned long long)(expu); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 336, __func__, _e, _g); } while(0); } while(0);

    _Atomic _Bool ab = 0;
    _Bool oldb = __c11_atomic_exchange(&ab, 1, memory_order_seq_cst);
    do { do { total_tests++; } while(0); if(!(!oldb && __c11_atomic_load(&ab, 5))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 340, __func__, "!oldb && atomic_load(&ab)"); } while(0); } while(0);
}

// Alignment tests using _Alignas/_Alignof
static void test_alignas_alignof(void) {
    _Alignas(16) unsigned char buf[64];
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)((unsigned)((uintptr_t)buf % 16u)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 346, __func__, _e, _g); } while(0); } while(0);

    struct Al16 { _Alignas(16) char c; };
    do { do { total_tests++; } while(0); if(!(_Alignof(struct Al16) >= 16)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 349, __func__, "_Alignof(struct Al16) >= 16"); } while(0); } while(0);
    struct Al16 s;
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)((unsigned)((uintptr_t)&s % 16u)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 351, __func__, _e, _g); } while(0); } while(0);

    do { do { total_tests++; } while(0); if(!(_Alignof(int) <= _Alignof(max_align_t))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 353, __func__, "_Alignof(int) <= _Alignof(max_align_t)"); } while(0); } while(0);
    do { do { total_tests++; } while(0); if(!(_Alignof(double) <= _Alignof(max_align_t))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 354, __func__, "_Alignof(double) <= _Alignof(max_align_t)"); } while(0); } while(0);
}

// SIMD-friendly alignment with _Alignas
static void test_simd_alignas(void) {
    static _Alignas(32) unsigned char buf32[128];
    static _Alignas(64) unsigned char buf64[128];
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)((unsigned)((uintptr_t)buf32 % 32u)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 361, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)((unsigned)((uintptr_t)buf64 % 64u)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 362, __func__, _e, _g); } while(0); } while(0);

    struct V32 { _Alignas(32) double v[4]; };
    struct V64 { _Alignas(64) double v[8]; };
    struct V32 v32;
    struct V64 v64;
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)((unsigned)((uintptr_t)&v32 % 32u)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 368, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0u); unsigned long long _g = (unsigned long long)((unsigned)((uintptr_t)&v64 % 64u)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 369, __func__, _e, _g); } while(0); } while(0);
}

// _Noreturn usage (do not call; just type sanity)
static void test_noreturn_decl(void) {
    void (*fp)(int) = must_exit; // type-compatible with void(int)
    do { do { total_tests++; } while(0); if(!(fp != ((void*)0))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 375, __func__, "fp != NULL"); } while(0); } while(0);
}

static _Noreturn void must_exit(int code) {
    // Not called in tests; exists to validate _Noreturn syntax/type
    exit(code);
}

// _Generic tests
# 394 "code/codex.c"
static void test_generic(void) {
    do { do { total_tests++; } while(0); const char* _e = ("int"); const char* _g = (_Generic((1), int: "int", unsigned: "unsigned", long: "long", float: "float", double: "double", const char*: "cstr", char*: "char*", default: "other")); if((_e == ((void*)0) && _g != ((void*)0)) || (_e != ((void*)0) && _g == ((void*)0)) || (_e && _g && strcmp(_e,_g) != 0)) { do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "STR expected=\"%s\" got=\"%s\"" "\n", "code/codex.c", 395, __func__, _e ? _e : "(null)", _g ? _g : "(null)"); } while(0); } } while(0);
    do { do { total_tests++; } while(0); const char* _e = ("double"); const char* _g = (_Generic((1.0), int: "int", unsigned: "unsigned", long: "long", float: "float", double: "double", const char*: "cstr", char*: "char*", default: "other")); if((_e == ((void*)0) && _g != ((void*)0)) || (_e != ((void*)0) && _g == ((void*)0)) || (_e && _g && strcmp(_e,_g) != 0)) { do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "STR expected=\"%s\" got=\"%s\"" "\n", "code/codex.c", 396, __func__, _e ? _e : "(null)", _g ? _g : "(null)"); } while(0); } } while(0);
    do { do { total_tests++; } while(0); const char* _e = ("float"); const char* _g = (_Generic((1.0f), int: "int", unsigned: "unsigned", long: "long", float: "float", double: "double", const char*: "cstr", char*: "char*", default: "other")); if((_e == ((void*)0) && _g != ((void*)0)) || (_e != ((void*)0) && _g == ((void*)0)) || (_e && _g && strcmp(_e,_g) != 0)) { do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "STR expected=\"%s\" got=\"%s\"" "\n", "code/codex.c", 397, __func__, _e ? _e : "(null)", _g ? _g : "(null)"); } while(0); } } while(0);
    do { do { total_tests++; } while(0); const char* _e = ("cstr"); const char* _g = (_Generic(((const char*)"hi"), int: "int", unsigned: "unsigned", long: "long", float: "float", double: "double", const char*: "cstr", char*: "char*", default: "other")); if((_e == ((void*)0) && _g != ((void*)0)) || (_e != ((void*)0) && _g == ((void*)0)) || (_e && _g && strcmp(_e,_g) != 0)) { do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "STR expected=\"%s\" got=\"%s\"" "\n", "code/codex.c", 398, __func__, _e ? _e : "(null)", _g ? _g : "(null)"); } while(0); } } while(0);
    char buf[1];
    do { do { total_tests++; } while(0); const char* _e = ("char*"); const char* _g = (_Generic(((char*)buf), int: "int", unsigned: "unsigned", long: "long", float: "float", double: "double", const char*: "cstr", char*: "char*", default: "other")); if((_e == ((void*)0) && _g != ((void*)0)) || (_e != ((void*)0) && _g == ((void*)0)) || (_e && _g && strcmp(_e,_g) != 0)) { do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "STR expected=\"%s\" got=\"%s\"" "\n", "code/codex.c", 400, __func__, _e ? _e : "(null)", _g ? _g : "(null)"); } while(0); } } while(0);
    do { do { total_tests++; } while(0); const char* _e = ("other"); const char* _g = (_Generic(((short)1), int: "int", unsigned: "unsigned", long: "long", float: "float", double: "double", const char*: "cstr", char*: "char*", default: "other")); if((_e == ((void*)0) && _g != ((void*)0)) || (_e != ((void*)0) && _g == ((void*)0)) || (_e && _g && strcmp(_e,_g) != 0)) { do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "STR expected=\"%s\" got=\"%s\"" "\n", "code/codex.c", 401, __func__, _e ? _e : "(null)", _g ? _g : "(null)"); } while(0); } } while(0);

    int gi = _Generic(0, int: 1, default: 2);
    int gd = _Generic(0.0, double: 3, float: 4, default: 5);
    int gf = _Generic(0.0f, double: 3, float: 4, default: 5);
    int gp = _Generic((const char*)0, const char*: 7, char*: 8, default: 9);
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(gi); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 407, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(3); long long _g = (long long)(gd); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 408, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(4); long long _g = (long long)(gf); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 409, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(7); long long _g = (long long)(gp); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 410, __func__, _e, _g); } while(0); } while(0);
}

// _Generic-based function dispatch (compile-time selection)
static int max_int(int a, int b) { return a > b ? a : b; }
static long max_long(long a, long b) { return a > b ? a : b; }
static double max_double(double a, double b) { return a > b ? a : b; }







static void test_generic_dispatch(void) {
    // Function selection by type
    int (*fi)(int,int) = _Generic(0, int: max_int, default: max_int);
    long (*fl)(long,long) = _Generic(0L, long: max_long, default: max_long);
    double (*fd)(double,double) = _Generic(0.0, double: max_double, default: max_double);
    do { do { total_tests++; } while(0); if(!(fi == max_int)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 429, __func__, "fi == max_int"); } while(0); } while(0);
    do { do { total_tests++; } while(0); if(!(fl == max_long)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 430, __func__, "fl == max_long"); } while(0); } while(0);
    do { do { total_tests++; } while(0); if(!(fd == max_double)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 431, __func__, "fd == max_double"); } while(0); } while(0);

    // Value results via macro-dispatch
    do { do { total_tests++; } while(0); long long _e = (long long)(5); long long _g = (long long)(_Generic((3), int: max_int, long: max_long, double: max_double, default: max_double)(3, 5)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 434, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(7L); long long _g = (long long)((long)_Generic((7L), int: max_int, long: max_long, double: max_double, default: max_double)(7L, 2L)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 435, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); double _e = (double)(2.5); double _g = (double)(_Generic((2.5), int: max_int, long: max_long, double: max_double, default: max_double)(2.5, -1.0)); double _d = fabs(_e - _g); if(!(_d <= (1e-12))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "DBL expected=%.10f got=%.10f (|d|=%.3g, eps=%.3g)" "\n", "code/codex.c", 436, __func__, _e, _g, _d, (double)(1e-12)); } while(0); } while(0);
}

// Variable Length Arrays (VLA)
static void test_vla(void) {
    int n = 10;
    int a[n];
    for (int i = 0; i < n; ++i) a[i] = i + 1;
    size_t bytes = sizeof a; // runtime for VLA
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)((unsigned)(n * (int)sizeof(int))); unsigned long long _g = (unsigned long long)((unsigned)bytes); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 445, __func__, _e, _g); } while(0); } while(0);
    int s = 0; for (int i = 0; i < n; ++i) s += a[i];
    do { do { total_tests++; } while(0); long long _e = (long long)(n * (n + 1) / 2); long long _g = (long long)(s); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 447, __func__, _e, _g); } while(0); } while(0);

    // 2D VLA
    int r = 3, c = 4;
    int m[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) m[i][j] = i * 10 + j;
    }
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(m[0][0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 455, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(11); long long _g = (long long)(m[1][1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 456, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(23); long long _g = (long long)(m[2][3]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 457, __func__, _e, _g); } while(0); } while(0);

    // VLA parameter function is defined at file scope (below)
}

// Helper defined at file scope to accept VLA parameter
static int sum_vla_param(int len, int arr[len]) {
    int sum = 0; for (int i = 0; i < len; ++i) sum += arr[i];
    return sum;
}

static void test_vla_more(void) {
    int n = 7; int arr[n]; for (int i = 0; i < n; ++i) arr[i] = i;
    do { do { total_tests++; } while(0); long long _e = (long long)((n - 1) * n / 2); long long _g = (long long)(sum_vla_param(n, arr)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 470, __func__, _e, _g); } while(0); } while(0);
}

// Variadic functions
static int sum_variadic(int count, ...) {
    va_list ap; __builtin_va_start(ap, count);
    int s = 0;
    for (int i = 0; i < count; ++i) s += __builtin_va_arg(ap, int);
    __builtin_va_end(ap);
    return s;
}

static void test_variadic(void) {
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(sum_variadic(0)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 483, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(6); long long _g = (long long)(sum_variadic(3, 1, 2, 3)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 484, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(55); long long _g = (long long)(sum_variadic(10, 1,2,3,4,5,6,7,8,9,10)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 485, __func__, _e, _g); } while(0); } while(0);
}

// _Thread_local tests (single-thread semantics)
_Thread_local static int g_tls_counter = 0;
static int tls_get(void) { return g_tls_counter; }
static void tls_inc(void) { g_tls_counter++; }
static int* tls_addr(void) { return &g_tls_counter; }

static void test_thread_local(void) {
    int *a1 = tls_addr();
    int start = tls_get();
    tls_inc(); tls_inc();
    do { do { total_tests++; } while(0); long long _e = (long long)(start + 2); long long _g = (long long)(tls_get()); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 498, __func__, _e, _g); } while(0); } while(0);
    int *a2 = tls_addr();
    do { do { total_tests++; } while(0); if(!(a1 == a2)) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "code/codex.c", 500, __func__, "a1 == a2"); } while(0); } while(0);
}
static void test_strings(void) {
    char buf[32];
    strcpy(buf, "Hello");
    strcat(buf, ", ");
    strcat(buf, "World");
    do { do { total_tests++; } while(0); const char* _e = ("Hello, World"); const char* _g = (buf); if((_e == ((void*)0) && _g != ((void*)0)) || (_e != ((void*)0) && _g == ((void*)0)) || (_e && _g && strcmp(_e,_g) != 0)) { do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "STR expected=\"%s\" got=\"%s\"" "\n", "code/codex.c", 507, __func__, _e ? _e : "(null)", _g ? _g : "(null)"); } while(0); } } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(12); long long _g = (long long)((int)strlen(buf)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 508, __func__, _e, _g); } while(0); } while(0);

    // memcpy / memcmp
    char a[8] = {0};
    char b[8] = {0};
    for (int i = 0; i < 8; i++) a[i] = (char)(i + 1);
    memcpy(b, a, sizeof(a));
    do { do { total_tests++; } while(0); long long _e = (long long)(0); long long _g = (long long)(memcmp(a, b, sizeof(a))); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 515, __func__, _e, _g); } while(0); } while(0);
}

static void test_structs_enums_unions(void) {
    Point p = { .x = 3, .y = 4 };
    do { do { total_tests++; } while(0); long long _e = (long long)(3); long long _g = (long long)(p.x); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 520, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(4); long long _g = (long long)(p.y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 521, __func__, _e, _g); } while(0); } while(0);
    Point *pp = &p; pp->x += 7; pp->y += 6;
    do { do { total_tests++; } while(0); long long _e = (long long)(10); long long _g = (long long)(p.x); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 523, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(10); long long _g = (long long)(p.y); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 524, __func__, _e, _g); } while(0); } while(0);

    Color c = kGreen;
    int res = 0;
    switch (c) {
        case kRed: res = 1; break;
        case kGreen: res = 2; break;
        case kBlue: res = 3; break;
        default: res = -1; break;
    }
    do { do { total_tests++; } while(0); long long _e = (long long)(2); long long _g = (long long)(res); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 534, __func__, _e, _g); } while(0); } while(0);

    U32Bytes u; u.u32 = 0x11223344u;
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0x44u); unsigned long long _g = (unsigned long long)((unsigned)u.b[0]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 537, __func__, _e, _g); } while(0); } while(0); // assuming little-endian on common platforms
    do { do { total_tests++; } while(0); unsigned long long _e = (unsigned long long)(0x33u); unsigned long long _g = (unsigned long long)((unsigned)u.b[1]); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "UINT expected=%llu got=%llu" "\n", "code/codex.c", 538, __func__, _e, _g); } while(0); } while(0);
}

static void test_macros_static(void) {
    do { do { total_tests++; } while(0); long long _e = (long long)(25); long long _g = (long long)(((5) * (5))); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 542, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(36); long long _g = (long long)(((5 + 1) * (5 + 1))); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 543, __func__, _e, _g); } while(0); } while(0); // ((5+1)*(5+1))
    do { do { total_tests++; } while(0); long long _e = (long long)(9); long long _g = (long long)(((9) > (-1) ? (9) : (-1))); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 544, __func__, _e, _g); } while(0); } while(0);

    int a = bump_static_counter(); // 3
    int b = bump_static_counter(); // 6
    int c = bump_static_counter(); // 9
    do { do { total_tests++; } while(0); long long _e = (long long)(3); long long _g = (long long)(a); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 549, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(6); long long _g = (long long)(b); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 550, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(9); long long _g = (long long)(c); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 551, __func__, _e, _g); } while(0); } while(0);
}

static void test_recursion(void) {
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(factorial(0)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 555, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(1); long long _g = (long long)(factorial(1)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 556, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(120); long long _g = (long long)(factorial(5)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 557, __func__, _e, _g); } while(0); } while(0);
}

static void test_floating_point(void) {
    double x = 0.1 + 0.2; // infamous 0.30000000000000004
    do { do { total_tests++; } while(0); double _e = (double)(0.3); double _g = (double)(x); double _d = fabs(_e - _g); if(!(_d <= (1e-9))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "DBL expected=%.10f got=%.10f (|d|=%.3g, eps=%.3g)" "\n", "code/codex.c", 562, __func__, _e, _g, _d, (double)(1e-9)); } while(0); } while(0);
    do { do { total_tests++; } while(0); double _e = (double)(3.14159265358979323846264338327950288 * 3.14159265358979323846264338327950288); double _g = (double)(((3.14159265358979323846264338327950288) * (3.14159265358979323846264338327950288))); double _d = fabs(_e - _g); if(!(_d <= (1e-12))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "DBL expected=%.10f got=%.10f (|d|=%.3g, eps=%.3g)" "\n", "code/codex.c", 563, __func__, _e, _g, _d, (double)(1e-12)); } while(0); } while(0);
}

int main(void) {
    printf("Running C syntax/feature tests...\n");
    test_arithmetic();
    test_bit_ops();
    test_logic_ternary();
    test_loops();
    test_arrays_pointers();
    test_strings();
    test_structs_enums_unions();
    test_macros_static();
    test_recursion();
    test_floating_point();
    test_func_pointer_array();
    test_array_initializers();
    test_casts();
    test_generic();
    test_generic_dispatch();
    test_vla();
    test_vla_more();
    test_variadic();
    test_thread_local();
    test_atomics();
    test_atomics_orders_types();
    test_alignas_alignof();
    test_simd_alignas();
    test_noreturn_decl();

    int passed = total_tests - failed_tests;
    printf("\nSummary: %d tests, %d passed, %d failed\n", total_tests, passed, failed_tests);
    if (failed_tests == 0) {
        printf("All tests passed. ✅\n");
    } else {
        printf("Some tests failed. ❌\n");
    }
    return failed_tests == 0 ? 0 : 1;
}
