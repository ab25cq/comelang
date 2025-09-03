/*
 * Copyright (c) 2009 Apple Inc. All rights reserved.
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


/* C99 7.22 Type-generic math <tgmath.h>. */
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



/* This SDK is designed to work with clang and specific versions of
 * gcc >= 4.0 with Apple's patch sets */

/*
 * Compatibility with compilers and environments that don't support compiler
 * feature checking function-like macros.
 */

/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky -- make sure you don't put spaces
 * in between its arguments.  __CONCAT can also concatenate double-quoted
 * strings produced by the __STRING macro, but this only works with ANSI C.
 */



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




/* __unavailable causes the compiler to error out when encountering
 * code using the tagged function
 */



/* Delete pseudo-keywords wherever they are not available or needed. */

/*
 * We use `__restrict' as a way to define the `restrict' type qualifier
 * without disturbing older software that is unaware of C99 keywords.
 */

/* Compatibility with compilers and environments that don't support the
 * nullability feature.
 */


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
 * return value is a bug, i.__deprecated_enum_msg(_msg). dismissing malloc() return value results in a
 * memory leak.
 */

/*
 * __swift_unavailable causes the compiler to mark a symbol as specifically
 * unavailable in Swift, regardless of any other availability in C.
 */

/*
 * Attributes to support Swift concurrency.
 */

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
 * The check for !4 || 1 is because gcc doesn't correctly
 * support c99 inline in some cases:
 * http://gcc.gnu.org/bugzilla/show_bug.cgi?id=55965
 */



/*
 * Compiler-dependent macros that bracket portions of code where the
 * "-Wunreachable-code" warning should be ignored. Please use sparingly.
 */

/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly.  Functions declared
 * with these attributes will cause compilation warnings if there is a
 * mismatch between the format string and subsequent function parameter
 * types.
 */






/* Source compatibility only, ID string not emitted in object file */




/*
 * __alloc_align can be used to label function arguments that represent the
 * alignment of the returned pointer.
 */

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
 * to annotating it as __attribute__((__deprecated__)), the __unsafe_buffer_usage attribute
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

/*
 * The __DARWIN_ALIAS macros are used to do symbol renaming; they allow
 * legacy code to use the old symbol, thus maintaining binary compatibility
 * while new code can use a standards compliant version of the same function.
 *
 * __DARWIN_ALIAS is used by itself if the function signature has not
 * changed, it is used along with a #ifdef check for __DARWIN_UNIX03
 * if the signature has changed.  Because the 1 environment
 * only supports UNIX03 semantics it causes __DARWIN_UNIX03 to be
 * defined, but causes __DARWIN_ALIAS to do no symbol mangling.
 *
 * As a special case, when XCode is used to target a specific version of the
 * OS, the manifest constant __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
 * will be defined by the compiler, with the digits representing major version
 * time 100 + minor version times 10 (__unreachable_ok_pop 	 _Pragma("clang diagnostic pop").g. 10.5 := 1050).  If we are targeting
 * pre-10.5, and it is the default compilation environment, revert the
 * compilation environment to pre-__DARWIN_UNIX03.
 */




/*
 * symbol suffixes used for symbol versioning
 */


/*
 * symbol versioning macros
 */



/*
 * symbol release macros
 */
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

/*
 * Deal with all versions of POSIX.  The ordering relative to the tests above is
 * important.
 */

/* POSIX C deprecation macros */
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










/*
 * Set a single macro which will always be defined and can be used to determine
 * the appropriate namespace.  For POSIX, these values will correspond to
 * _POSIX_C_SOURCE value.  Currently there are two additional levels corresponding
 * to ANSI (_ANSI_SOURCE) and Darwin extensions (_DARWIN_C_SOURCE)
 */


/* If the developer has neither requested a strict language mode nor a version
 * of POSIX, turn on functionality provided by __STDC_WANT_LIB_EXT1__ as part
 * of 900000L.
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

/*
 * __XNU_PRIVATE_EXTERN is a linkage decoration indicating that a symbol can be
 * used from other compilation units, but not other libraries or executables.
 */


/*
 * We intentionally __DARWIN_64_BIT_INO_T 1 to nothing pointer attributes which do not have an
 * impact on the ABI. __indexable and __bidi_indexable are not defined because
 * of the ABI incompatibility that makes the diagnostic preferable.
 */

/*
 * Similarly, we intentionally __DARWIN_64_BIT_INO_T 1 to nothing the
 * __ptrcheck_abi_assume_single and __ptrcheck_abi_assume_unsafe_indexable
 * macros because they do not lead to an ABI incompatibility. However, we do not
 * __DARWIN_64_BIT_INO_T 1 the indexable and unsafe_indexable ones because the diagnostic is
 * better than the silent ABI break.
 */

/* __unsafe_forge intrinsics are defined as regular C casts. */

/* decay operates normally; attribute is meaningless without pointer checks. */

/* this is a write-once variable; not useful without pointer checks. */






/*
 * Architecture validation for current SDK
 */






/*
 * Similar to OS_ENUM/OS_CLOSED_ENUM/OS_OPTIONS/OS_CLOSED_OPTIONS
 *
 * This provides more advanced type checking on compilers supporting
 * the proper extensions, even in C.
 */







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
    That is because you might get compiled on an old OS that does not __DARWIN_64_BIT_INO_T 1 a later
    OS version macro, and in the C preprocessor undefined values evaluate to zero
    in expresssions, which could cause the #if expression to evaluate in an unexpected
    way.
    


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
 

/* __MAC__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */

/* __IPHONE__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */

/* __WATCHOS__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */

/* __TVOS__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */



/* __DRIVERKIT__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */

/* __VISIONOS__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */



/* __KERNELKIT__NA is not defined to a value but is used as a token by macros to indicate that the API is unavailable */




/*
 * Set up standard Mac OS X versions
 */





// This is explicitly outside the header guard
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
 

// This is explicitly outside the header guard
#pragma GCC error "Already found AvailabilityVersions version " __AVAILABILITY_FILE " from " __AVAILABILITY_VERSIONS_VERSION_STRING ", which is incompatible with AvailabilityVersions.h from Local. Mixing and matching Availability from different SDKs is not supported"

















/*
 Macros for defining which versions/platform a given symbol can be used.
 
 @see http://clang.llvm.org/docs/AttributeReference.html#availability
 */


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
 



// This is explicitly outside the header guard
#pragma GCC error "Already found AvailabilityVersions version " __AVAILABILITY_FILE " from " __AVAILABILITY_VERSIONS_VERSION_STRING ", which is incompatible with AvailabilityInternal.h from Local. Mixing and matching Availability from different SDKs is not supported"
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


// This is explicitly outside the header guard
#pragma GCC error "Already found AvailabilityVersions version " __AVAILABILITY_FILE " from " __AVAILABILITY_VERSIONS_VERSION_STRING ", which is incompatible with AvailabilityInternal.h from Local. Mixing and matching Availability from different SDKs is not supported"









/* for use to document app extension usage */




/* for use marking APIs available info for Mac OSX */






/* for use marking APIs available info for iOS */






/* for use marking APIs available info for tvOS */






/* for use marking APIs available info for Watch OS */





/* for use marking APIs unavailable for swift */



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
 * Evaluate to nothing for compilers that don't support availability.
 */



















/*
 * If SPI decorations have not been defined elsewhere, disable them.
 */







// This is explicitly outside the header guard
#pragma GCC error "Already found AvailabilityVersions version " __AVAILABILITY_FILE " from " __AVAILABILITY_VERSIONS_VERSION_STRING ", which is incompatible with Availability.h from Local. Mixing and matching Availability from different SDKs is not supported"




/******************************************************************************
 * Floating point data types                                                  *
 ******************************************************************************/

/*  Define float_t and double_t per C standard, ISO/IEC 9899:2011 7.12 2,
    taking advantage of GCC's __FLT_EVAL_METHOD__ (which a compiler may
    __DARWIN_64_BIT_INO_T 1 anytime and GCC does) that shadows FLT_EVAL_METHOD (which a
    compiler must __DARWIN_64_BIT_INO_T 1 only in float.h).                                    */
    typedef float float_t;
    typedef double double_t;



/******************************************************************************
 *      Taxonomy of floating point data types                                 *
 ******************************************************************************/


/*  On these architectures, fma(), fmaf( ), and fmal( ) are generally about as
    fast as (or faster than) separate multiply and add of the same operands.  */

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

/*  These inline functions may fail to return expected results if unsafe
    math optimizations like those enabled by -ffast-math are turned on.
    Thus, (somewhat surprisingly) you only get the fast inline
    implementations if such compiler options are NOT enabled.  This is
    because the inline functions require the compiler to be adhering to
    the standard in order to work properly; -ffast-math, among other
    things, implies that NaNs don't happen, which allows the compiler to
    optimize away checks like x != x, which might lead to things like
    isnan(NaN) returning false.                                               
 
    Thus, if you compile with -ffast-math, actual function calls are
    generated for these utilities.                                            */
    





__header_always_inline int __inline_isfinitef(float);
__header_always_inline int __inline_isfinited(double);
__header_always_inline int __inline_isfinitel(long double);
__header_always_inline int __inline_isinff(float);
__header_always_inline int __inline_isinfd(double);
__header_always_inline int __inline_isinfl(long double);
__header_always_inline int __inline_isnanf(float);
__header_always_inline int __inline_isnand(double);
__header_always_inline int __inline_isnanl(long double);
__header_always_inline int __inline_isnormalf(float);
__header_always_inline int __inline_isnormald(double);
__header_always_inline int __inline_isnormall(long double);
__header_always_inline int __inline_signbitf(float);
__header_always_inline int __inline_signbitd(double);
__header_always_inline int __inline_signbitl(long double);
    
__header_always_inline int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
__header_always_inline int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
__header_always_inline int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
__header_always_inline int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
__header_always_inline int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
__header_always_inline int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
__header_always_inline int __inline_isnanf(float __x) {
    return __x != __x;
}
__header_always_inline int __inline_isnand(double __x) {
    return __x != __x;
}
__header_always_inline int __inline_isnanl(long double __x) {
    return __x != __x;
}
__header_always_inline int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
__header_always_inline int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
__header_always_inline int __inline_signbitl(long double __x) {
    union { long double __f; unsigned long long __u;} __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
__header_always_inline int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= __FLT_MIN__;
}
__header_always_inline int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= __DBL_MIN__;
}
__header_always_inline int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= __LDBL_MIN__;
}
    

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
    you __DARWIN_64_BIT_INO_T 1 the _REENTRANT symbol before including <math.h>                */
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



/******************************************************************************
 *  Reentrant variants of lgamma[fl]                                          *
 ******************************************************************************/


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
extern float __exp10f(float) __API_AVAILABLE(macos(10.9), ios(7.0));
extern double __exp10(double) __API_AVAILABLE(macos(10.9), ios(7.0));

/*  __sincos(x,sinp,cosp) computes the sine and cosine of x with a single
    function call, storing the sine in the memory pointed to by sinp, and
    the cosine in the memory pointed to by cosp. Edge cases match those of
    separate calls to sin( ) and cos( ).                                      */
__header_always_inline void __sincosf(float __x, float *__sinp, float *__cosp);
__header_always_inline void __sincos(double __x, double *__sinp, double *__cosp);

/*  __sinpi(x) returns the sine of pi times x; __cospi(x) and __tanpi(x) return
    the cosine and tangent, respectively.  These functions can produce a more
    accurate answer than expressions of the form sin(M_PI * x) because they
    avoid any loss of precision that results from rounding the result of the
    multiplication M_PI * x.  They may also be significantly more efficient in
    some cases because the argument reduction for these functions is easier
    to compute.  Consult the man pages for edge case details.                 */
extern float __cospif(float) __API_AVAILABLE(macos(10.9), ios(7.0));
extern double __cospi(double) __API_AVAILABLE(macos(10.9), ios(7.0));
extern float __sinpif(float) __API_AVAILABLE(macos(10.9), ios(7.0));
extern double __sinpi(double) __API_AVAILABLE(macos(10.9), ios(7.0));
extern float __tanpif(float) __API_AVAILABLE(macos(10.9), ios(7.0));
extern double __tanpi(double) __API_AVAILABLE(macos(10.9), ios(7.0));

/* half precision math functions */
extern _Float16 __fabsf16(_Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __hypotf16(_Float16, _Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __sqrtf16(_Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __ceilf16(_Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __floorf16(_Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __rintf16(_Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __roundf16(_Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __truncf16(_Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __copysignf16(_Float16, _Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __nextafterf16(_Float16, _Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __fmaxf16(_Float16, _Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __fminf16(_Float16, _Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));
extern _Float16 __fmaf16(_Float16, _Float16, _Float16) __API_AVAILABLE(macos(15.0), ios(18.0), watchos(11.0), tvos(18.0));

/*  __sincospi(x,sinp,cosp) computes the sine and cosine of pi times x with a
    single function call, storing the sine in the memory pointed to by sinp,
    and the cosine in the memory pointed to by cosp.  Edge cases match those
    of separate calls to __sinpi( ) and __cospi( ), and are documented in the
    man pages.
 
    These functions were introduced in OSX 10.9 and iOS 7.0.  Because they are
    implemented as header inlines, weak-linking does not function as normal,
    and they are simply hidden when targeting earlier OS versions.            */
__header_always_inline void __sincospif(float __x, float *__sinp, float *__cosp);
__header_always_inline void __sincospi(double __x, double *__sinp, double *__cosp);

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

__header_always_inline void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

__header_always_inline void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

__header_always_inline void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

__header_always_inline void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

/******************************************************************************
 *  POSIX/UNIX extensions to the C standard                                   *
 ******************************************************************************/


/*  Long-double versions of M_E, etc for convenience on Intel where long-
    double is not the same as double.  Define __MATH_LONG_DOUBLE_CONSTANTS
    to make these constants available.                                        */

/******************************************************************************
 *  Legacy BSD extensions to the C standard                                   *
 ******************************************************************************/



struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};






/* C++ handles type genericity with overloading in math.h. */
/*
 * Copyright (c) 2002-2013 Apple Inc. All rights reserved.
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

/******************************************************************************
 *                                                                            *
 *     File:  complex.h                                                       *
 *                                                                            *
 *     Contains: prototypes and macros germane to C99 complex math.           *
 *                                                                            *
 ******************************************************************************/


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

/*  Constant expression of type const float _Complex                          */



extern float _Complex cacosf(float _Complex);
extern double _Complex cacos(double _Complex);
extern long double _Complex cacosl(long double _Complex);

extern float _Complex casinf(float _Complex);
extern double _Complex casin(double _Complex);
extern long double _Complex casinl(long double _Complex);

extern float _Complex catanf(float _Complex);
extern double _Complex catan(double _Complex);
extern long double _Complex catanl(long double _Complex);

extern float _Complex ccosf(float _Complex);
extern double _Complex ccos(double _Complex);
extern long double _Complex ccosl(long double _Complex);

extern float _Complex csinf(float _Complex);
extern double _Complex csin(double _Complex);
extern long double _Complex csinl(long double _Complex);

extern float _Complex ctanf(float _Complex);
extern double _Complex ctan(double _Complex);
extern long double _Complex ctanl(long double _Complex);

extern float _Complex cacoshf(float _Complex);
extern double _Complex cacosh(double _Complex);
extern long double _Complex cacoshl(long double _Complex);

extern float _Complex casinhf(float _Complex);
extern double _Complex casinh(double _Complex);
extern long double _Complex casinhl(long double _Complex);

extern float _Complex catanhf(float _Complex);
extern double _Complex catanh(double _Complex);
extern long double _Complex catanhl(long double _Complex);

extern float _Complex ccoshf(float _Complex);
extern double _Complex ccosh(double _Complex);
extern long double _Complex ccoshl(long double _Complex);

extern float _Complex csinhf(float _Complex);
extern double _Complex csinh(double _Complex);
extern long double _Complex csinhl(long double _Complex);

extern float _Complex ctanhf(float _Complex);
extern double _Complex ctanh(double _Complex);
extern long double _Complex ctanhl(long double _Complex);

extern float _Complex cexpf(float _Complex);
extern double _Complex cexp(double _Complex);
extern long double _Complex cexpl(long double _Complex);

extern float _Complex clogf(float _Complex);
extern double _Complex clog(double _Complex);
extern long double _Complex clogl(long double _Complex);

extern float cabsf(float _Complex);
extern double cabs(double _Complex);
extern long double cabsl(long double _Complex);

extern float _Complex cpowf(float _Complex, float _Complex);
extern double _Complex cpow(double _Complex, double _Complex);
extern long double _Complex cpowl(long double _Complex, long double _Complex);

extern float _Complex csqrtf(float _Complex);
extern double _Complex csqrt(double _Complex);
extern long double _Complex csqrtl(long double _Complex);

extern float cargf(float _Complex);
extern double carg(double _Complex);
extern long double cargl(long double _Complex);

extern float cimagf(float _Complex);
extern double cimag(double _Complex);
extern long double cimagl(long double _Complex);

extern float _Complex conjf(float _Complex);
extern double _Complex conj(double _Complex);
extern long double _Complex conjl(long double _Complex);

extern float _Complex cprojf(float _Complex);
extern double _Complex cproj(double _Complex);
extern long double _Complex cprojl(long double _Complex);

extern float crealf(float _Complex);
extern double creal(double _Complex);
extern long double creall(long double _Complex);




// promotion

typedef void _Argument_type_is_not_arithmetic;
static _Argument_type_is_not_arithmetic __tg_promote(...)
  __attribute__((__unavailable__,__overloadable__));
static double               __attribute__((__overloadable__)) __tg_promote(int);
static double               __attribute__((__overloadable__)) __tg_promote(unsigned int);
static double               __attribute__((__overloadable__)) __tg_promote(long);
static double               __attribute__((__overloadable__)) __tg_promote(unsigned long);
static double               __attribute__((__overloadable__)) __tg_promote(long long);
static double               __attribute__((__overloadable__)) __tg_promote(unsigned long long);
static _Float16             __attribute__((__overloadable__)) __tg_promote(_Float16);
static float                __attribute__((__overloadable__)) __tg_promote(float);
static double               __attribute__((__overloadable__)) __tg_promote(double);
static long double          __attribute__((__overloadable__)) __tg_promote(long double);
static float _Complex       __attribute__((__overloadable__)) __tg_promote(float _Complex);
static double _Complex      __attribute__((__overloadable__)) __tg_promote(double _Complex);
static long double _Complex __attribute__((__overloadable__)) __tg_promote(long double _Complex);


// acos

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(float __x) {return acosf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(double __x) {return acos(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(long double __x) {return acosl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(float _Complex __x) {return cacosf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(double _Complex __x) {return cacos(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(long double _Complex __x) {return cacosl(__x);}


// asin

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(float __x) {return asinf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(double __x) {return asin(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(long double __x) {return asinl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(float _Complex __x) {return casinf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(double _Complex __x) {return casin(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(long double _Complex __x) {return casinl(__x);}


// atan

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(float __x) {return atanf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(double __x) {return atan(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(long double __x) {return atanl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(float _Complex __x) {return catanf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(double _Complex __x) {return catan(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(long double _Complex __x) {return catanl(__x);}


// acosh

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(float __x) {return acoshf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(double __x) {return acosh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(long double __x) {return acoshl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(float _Complex __x) {return cacoshf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(double _Complex __x) {return cacosh(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(long double _Complex __x) {return cacoshl(__x);}


// asinh

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(float __x) {return asinhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(double __x) {return asinh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(long double __x) {return asinhl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(float _Complex __x) {return casinhf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(double _Complex __x) {return casinh(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(long double _Complex __x) {return casinhl(__x);}


// atanh

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(float __x) {return atanhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(double __x) {return atanh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(long double __x) {return atanhl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(float _Complex __x) {return catanhf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(double _Complex __x) {return catanh(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(long double _Complex __x) {return catanhl(__x);}


// cos

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(float __x) {return cosf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(double __x) {return cos(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(long double __x) {return cosl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(float _Complex __x) {return ccosf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(double _Complex __x) {return ccos(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(long double _Complex __x) {return ccosl(__x);}


// sin

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(float __x) {return sinf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(double __x) {return sin(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(long double __x) {return sinl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(float _Complex __x) {return csinf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(double _Complex __x) {return csin(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(long double _Complex __x) {return csinl(__x);}


// tan

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(float __x) {return tanf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(double __x) {return tan(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(long double __x) {return tanl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(float _Complex __x) {return ctanf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(double _Complex __x) {return ctan(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(long double _Complex __x) {return ctanl(__x);}


// cosh

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(float __x) {return coshf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(double __x) {return cosh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(long double __x) {return coshl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(float _Complex __x) {return ccoshf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(double _Complex __x) {return ccosh(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(long double _Complex __x) {return ccoshl(__x);}


// sinh

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(float __x) {return sinhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(double __x) {return sinh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(long double __x) {return sinhl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(float _Complex __x) {return csinhf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(double _Complex __x) {return csinh(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(long double _Complex __x) {return csinhl(__x);}


// tanh

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(float __x) {return tanhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(double __x) {return tanh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(long double __x) {return tanhl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(float _Complex __x) {return ctanhf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(double _Complex __x) {return ctanh(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(long double _Complex __x) {return ctanhl(__x);}


// exp

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(float __x) {return expf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(double __x) {return exp(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(long double __x) {return expl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(float _Complex __x) {return cexpf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(double _Complex __x) {return cexp(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(long double _Complex __x) {return cexpl(__x);}


// log

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(float __x) {return logf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(double __x) {return log(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(long double __x) {return logl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(float _Complex __x) {return clogf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(double _Complex __x) {return clog(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(long double _Complex __x) {return clogl(__x);}


// pow

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(float __x, float __y) {return powf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(double __x, double __y) {return pow(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(long double __x, long double __y) {return powl(__x, __y);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(float _Complex __x, float _Complex __y) {return cpowf(__x, __y);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(double _Complex __x, double _Complex __y) {return cpow(__x, __y);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(long double _Complex __x, long double _Complex __y) 
    {return cpowl(__x, __y);}


// sqrt

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(_Float16 __x) {return __sqrtf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(float __x) {return sqrtf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(double __x) {return sqrt(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(long double __x) {return sqrtl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(float _Complex __x) {return csqrtf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(double _Complex __x) {return csqrt(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(long double _Complex __x) {return csqrtl(__x);}


// fabs

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(_Float16 __x) {return __fabsf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(float __x) {return fabsf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(double __x) {return fabs(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(long double __x) {return fabsl(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(float _Complex __x) {return cabsf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(double _Complex __x) {return cabs(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(long double _Complex __x) {return cabsl(__x);}


// atan2

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan2(float __x, float __y) {return atan2f(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan2(double __x, double __y) {return atan2(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan2(long double __x, long double __y) {return atan2l(__x, __y);}


// cbrt

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cbrt(float __x) {return cbrtf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cbrt(double __x) {return cbrt(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cbrt(long double __x) {return cbrtl(__x);}


// ceil

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(_Float16 __x) {return __ceilf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(float __x) {return ceilf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(double __x) {return ceil(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(long double __x) {return ceill(__x);}


// copysign

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(_Float16 __x, _Float16 __y) {return __copysignf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(float __x, float __y) {return copysignf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(double __x, double __y) {return copysign(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(long double __x, long double __y) {return copysignl(__x, __y);}


// erf

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_erf(float __x) {return erff(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erf(double __x) {return erf(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erf(long double __x) {return erfl(__x);}


// erfc

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_erfc(float __x) {return erfcf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erfc(double __x) {return erfc(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erfc(long double __x) {return erfcl(__x);}


// exp2

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp2(float __x) {return exp2f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp2(double __x) {return exp2(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp2(long double __x) {return exp2l(__x);}


// expm1

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_expm1(float __x) {return expm1f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_expm1(double __x) {return expm1(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_expm1(long double __x) {return expm1l(__x);}


// fdim

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fdim(float __x, float __y) {return fdimf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fdim(double __x, double __y) {return fdim(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fdim(long double __x, long double __y) {return fdiml(__x, __y);}


// floor

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(_Float16 __x) {return __floorf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(float __x) {return floorf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(double __x) {return floor(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(long double __x) {return floorl(__x);}


// fma

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(_Float16 __x, _Float16 __y, _Float16 __z)
    {return __fmaf16(__x, __y, __z);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(float __x, float __y, float __z)
    {return fmaf(__x, __y, __z);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(double __x, double __y, double __z)
    {return fma(__x, __y, __z);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(long double __x,long double __y, long double __z)
    {return fmal(__x, __y, __z);}


// fmax

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(_Float16 __x, _Float16 __y) {return __fmaxf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(float __x, float __y) {return fmaxf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(double __x, double __y) {return fmax(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(long double __x, long double __y) {return fmaxl(__x, __y);}


// fmin

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(_Float16 __x, _Float16 __y) {return __fminf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(float __x, float __y) {return fminf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(double __x, double __y) {return fmin(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(long double __x, long double __y) {return fminl(__x, __y);}


// fmod

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmod(float __x, float __y) {return fmodf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmod(double __x, double __y) {return fmod(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmod(long double __x, long double __y) {return fmodl(__x, __y);}


// frexp

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_frexp(float __x, int* __y) {return frexpf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_frexp(double __x, int* __y) {return frexp(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_frexp(long double __x, int* __y) {return frexpl(__x, __y);}


// hypot

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(_Float16 __x, _Float16 __y) {return __hypotf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(float __x, float __y) {return hypotf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(double __x, double __y) {return hypot(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(long double __x, long double __y) {return hypotl(__x, __y);}


// ilogb

static int
    __attribute__((__overloadable__, __always_inline__))
    __tg_ilogb(float __x) {return ilogbf(__x);}

static int
    __attribute__((__overloadable__, __always_inline__))
    __tg_ilogb(double __x) {return ilogb(__x);}

static int
    __attribute__((__overloadable__, __always_inline__))
    __tg_ilogb(long double __x) {return ilogbl(__x);}


// ldexp

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_ldexp(float __x, int __y) {return ldexpf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ldexp(double __x, int __y) {return ldexp(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ldexp(long double __x, int __y) {return ldexpl(__x, __y);}


// lgamma

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_lgamma(float __x) {return lgammaf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_lgamma(double __x) {return lgamma(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_lgamma(long double __x) {return lgammal(__x);}


/*  long long is not part of C90. Make sure you are passing -std=c99 or
 -std=gnu99 or higher if you need these functions returning long longs     */

// llrint

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llrint(float __x) {return llrintf(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llrint(double __x) {return llrint(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llrint(long double __x) {return llrintl(__x);}


// llround

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llround(float __x) {return llroundf(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llround(double __x) {return llround(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llround(long double __x) {return llroundl(__x);}



// log10

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log10(float __x) {return log10f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log10(double __x) {return log10(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log10(long double __x) {return log10l(__x);}


// log1p

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log1p(float __x) {return log1pf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log1p(double __x) {return log1p(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log1p(long double __x) {return log1pl(__x);}


// log2

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log2(float __x) {return log2f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log2(double __x) {return log2(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log2(long double __x) {return log2l(__x);}


// logb

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_logb(float __x) {return logbf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_logb(double __x) {return logb(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_logb(long double __x) {return logbl(__x);}


// lrint

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lrint(float __x) {return lrintf(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lrint(double __x) {return lrint(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lrint(long double __x) {return lrintl(__x);}


// lround

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lround(float __x) {return lroundf(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lround(double __x) {return lround(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lround(long double __x) {return lroundl(__x);}


// nearbyint

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_nearbyint(float __x) {return nearbyintf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nearbyint(double __x) {return nearbyint(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nearbyint(long double __x) {return nearbyintl(__x);}


// nextafter

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(_Float16 __x, _Float16 __y) {return __nextafterf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(float __x, float __y) {return nextafterf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(double __x, double __y) {return nextafter(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(long double __x, long double __y) {return nextafterl(__x, __y);}


// nexttoward

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_nexttoward(float __x, long double __y) {return nexttowardf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nexttoward(double __x, long double __y) {return nexttoward(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nexttoward(long double __x, long double __y) {return nexttowardl(__x, __y);}


// remainder

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_remainder(float __x, float __y) {return remainderf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remainder(double __x, double __y) {return remainder(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remainder(long double __x, long double __y) {return remainderl(__x, __y);}


// remquo

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_remquo(float __x, float __y, int* __z)
    {return remquof(__x, __y, __z);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remquo(double __x, double __y, int* __z)
    {return remquo(__x, __y, __z);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remquo(long double __x,long double __y, int* __z)
    {return remquol(__x, __y, __z);}


// rint

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(_Float16 __x) {return __rintf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(float __x) {return rintf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(double __x) {return rint(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(long double __x) {return rintl(__x);}


// round

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(_Float16 __x) {return __roundf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(float __x) {return roundf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(double __x) {return round(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(long double __x) {return roundl(__x);}


// scalbn

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbn(float __x, int __y) {return scalbnf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbn(double __x, int __y) {return scalbn(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbn(long double __x, int __y) {return scalbnl(__x, __y);}


// scalbln

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbln(float __x, long __y) {return scalblnf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbln(double __x, long __y) {return scalbln(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbln(long double __x, long __y) {return scalblnl(__x, __y);}


// tgamma

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tgamma(float __x) {return tgammaf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tgamma(double __x) {return tgamma(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tgamma(long double __x) {return tgammal(__x);}


// trunc

static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(_Float16 __x) {return __truncf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(float __x) {return truncf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(double __x) {return trunc(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(long double __x) {return truncl(__x);}


// carg

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(float __x) {return atan2f(0.F, __x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(double __x) {return __tg_atan2((__typeof__(__tg_promote((0.)) +                                                  __tg_promote((__x))))(0.),                                    (__typeof__(__tg_promote((0.)) +                                                  __tg_promote((__x))))(__x));}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(long double __x) {return atan2l(0.L, __x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(float _Complex __x) {return cargf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(double _Complex __x) {return carg(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(long double _Complex __x) {return cargl(__x);}


// cimag

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(float __x) {return 0;}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(double __x) {return 0;}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(long double __x) {return 0;}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(float _Complex __x) {return cimagf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(double _Complex __x) {return cimag(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(long double _Complex __x) {return cimagl(__x);}


// conj

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(float __x) {return __x;}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(double __x) {return __x;}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(long double __x) {return __x;}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(float _Complex __x) {return conjf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(double _Complex __x) {return conj(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(long double _Complex __x) {return conjl(__x);}


// cproj

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(float __x) {return cprojf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(double __x) {return cproj(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(long double __x) {return cprojl(__x);}

static float _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(float _Complex __x) {return cprojf(__x);}

static double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(double _Complex __x) {return cproj(__x);}

static long double _Complex
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(long double _Complex __x) {return cprojl(__x);}


// creal

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(float __x) {return __x;}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(double __x) {return __x;}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(long double __x) {return __x;}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(float _Complex __x) {return crealf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(double _Complex __x) {return creal(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(long double _Complex __x) {return creall(__x);}



int main(void){return 0;}
