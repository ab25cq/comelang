/*
 * Copyright (c) 2002-2013 Apple Computer, Inc. All rights reserved.
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
 *  File:  fenv.h                                                             *
 *                                                                            *
 *  Contains: typedefs and prototypes for C99 floating point environment.     *
 *                                                                            *
 *  A collection of functions designed to provide access to the floating      *
 *  point environment for numerical programming. It is compliant with the     *
 *  floating-point requirements in C99.                                       *
 *                                                                            *
 *  The file <fenv.h> declares many functions in support of numerical         *
 *  programming. Programs that test flags or run under non-default mode       *
 *  must do so under the effect of an enabling "fenv_access" pragma:          *
 *                                                                            *
 *      #pragma STDC FENV_ACCESS on                                           *
 *                                                                            *
 ******************************************************************************/


    
/******************************************************************************
 *                                                                            *
 *  Architecture-specific types and macros.                                   *
 *                                                                            *
 *      fenv_t          a type for representing the entire floating-point     *
 *                      environment in a single object.                       *
 *                                                                            *
 *      fexcept_t       a type for representing the floating-point            *
 *                      exception flag state collectively.                    *
 *                                                                            *
 *      FE_INEXACT      macros representing the various floating-point        *
 *      FE_UNDERFLOW    exceptions.                                           *
 *      FE_OVERFLOW                                                           *
 *      FE_DIVBYZERO                                                          *
 *      FE_INVALID                                                            *
 *      FE_ALL_EXCEPT                                                         *
 *                                                                            *
 *      FE_TONEAREST    macros representing the various floating-point        *
 *      FE_UPWARD       rounding modes                                        *
 *      FE_DOWNWARD                                                           *
 *      FE_TOWARDZERO                                                         *
 *                                                                            *
 *      FE_DFL_ENV      a macro expanding to a pointer to an object           *
 *                      representing the default floating-point environemnt   *
 *                                                                            *
 ******************************************************************************/
    
/******************************************************************************
 *  ARM definitions of architecture-specific types and macros.                *
 ******************************************************************************/
     
    
typedef struct {
    unsigned long long      __fpsr;
    unsigned long long      __fpcr;
} fenv_t;
    
typedef unsigned short fexcept_t;
    
/*  FE_FLUSHTOZERO
    An ARM-specific flag that is raised when a denormal is flushed to zero.
    This is also called the "input denormal exception"                        */
    
    
/*  Masks for values that may be controlled in the FPCR.  Modifying any other
    bits invokes undefined behavior.                                          */
enum {
    __fpcr_trap_invalid   = 0x00000100,
    __fpcr_trap_divbyzero = 0x00000200,
    __fpcr_trap_overflow  = 0x00000400,
    __fpcr_trap_underflow = 0x00000800,
    __fpcr_trap_inexact   = 0x00001000,
    __fpcr_trap_denormal  = 0x00008000,
    __fpcr_flush_to_zero  = 0x01000000,
};

/*  Mask for the QC bit of the FPSR                                           */
enum { __fpsr_saturation  = 0x08000000 };
    
extern const fenv_t _FE_DFL_ENV;

/*  FE_DFL_DISABLE_DENORMS_ENV
 
    A pointer to a fenv_t object with the default floating-point state modified
    to set the FZ (flush to zero) bit in the FPCR.  When using this environment
    denormals encountered by floating-point calculations will be treated as
    zero.  Denormal results of floating-point operations will also be treated
    as zero.  This calculation mode is not IEEE-754 compliant, but it may
    prevent lengthy stalls that occur in code that encounters denormals.  It is
    suggested that you do not use this mode unless you have established that
    denormals are the source of measurable performance problems.
 
    Note that the math library, and other system libraries, are not guaranteed
    to do the right thing if called in this mode.  Edge cases may be incorrect.
    Use at your own risk.                                                     */
extern const fenv_t _FE_DFL_DISABLE_DENORMS_ENV;
    
/******************************************************************************
 *  x86 definitions of architecture-specific types and macros.                *
 ******************************************************************************/
    

/******************************************************************************
 *  The following functions provide high level access to the exception flags. *  
 *  The "int" input argument can be constructed by bitwise ORs of the         *
 *  exception macros: for example: 0x0004 | 0x0010.                  *
 *                                                                            *
 *  The function "feclearexcept" clears the supported floating point          *
 *  exceptions represented by its argument.                                   *
 *                                                                            *
 *  The function "fegetexceptflag" stores a implementation-defined            *
 *  representation of the states of the floating-point status flags indicated *
 *  by its integer argument excepts in the object pointed to by the argument, * 
 *  flagp.                                                                    *
 *                                                                            *
 *  The function "feraiseexcept" raises the supported floating-point          *
 *  exceptions represented by its argument. The order in which these          *
 *  floating-point exceptions are raised is unspecified.                      *
 *                                                                            *
 *  The function "fesetexceptflag" sets or clears the floating point status   *
 *  flags indicated by the argument excepts to the states stored in the       *
 *  object pointed to by flagp. The value of the *flagp shall have been set   *
 *  by a previous call to fegetexceptflag whose second argument represented   *
 *  at least those floating-point exceptions represented by the argument      *
 *  excepts. This function does not raise floating-point exceptions; it just  *
 *  sets the state of the flags.                                              *
 *                                                                            *
 *  The function "fetestexcept" determines which of the specified subset of   *
 *  the floating-point exception flags are currently set.  The excepts        *
 *  argument specifies the floating-point status flags to be queried. This    *
 *  function returns the value of the bitwise OR of the floating-point        *
 *  exception macros corresponding to the currently set floating-point        *
 *  exceptions included in excepts.                                           *
 ******************************************************************************/

extern int feclearexcept(int /* excepts */);
extern int fegetexceptflag(fexcept_t * /* flagp */, int /* excepts */);
extern int feraiseexcept(int /* excepts */);
extern int fesetexceptflag(const fexcept_t * /* flagp */, int /* excepts */);
extern int fetestexcept(int /* excepts */);

/******************************************************************************
 *  The following functions provide control of rounding direction modes.      *
 *                                                                            *
 *  The function "fegetround" returns the value of the rounding direction     *
 *  macro which represents the current rounding direction, or a negative      *
 *  if there is no such rounding direction macro or the current rounding      *
 *  direction is not determinable.                                            *
 *                                                                            *
 *  The function "fesetround" establishes the rounding direction represented  *
 *  by its argument "round". If the argument is not equal to the value of a   *
 *  rounding direction macro, the rounding direction is not changed.  It      *
 *  returns zero if and only if the argument is equal to a rounding           *
 *  direction macro.                                                          *
 ******************************************************************************/
    
extern int fegetround(void);
extern int fesetround(int /* round */);

/******************************************************************************
 *  The following functions manage the floating-point environment, exception  *
 *  flags and dynamic modes, as one entity.                                   *
 *                                                                            *
 *  The fegetenv function stores the current floating-point enviornment in    *
 *  the object pointed to by envp.                                            *
 *                                                                            *
 *  The feholdexcept function saves the current floating-point environment in *
 *  the object pointed to by envp, clears the floating-point status flags,    *
 *  and then installs a non-stop (continue on floating-point exceptions)      *
 *  mode, if available, for all floating-point exceptions. The feholdexcept   *
 *  function returns zero if and only if non-stop floating-point exceptions   *
 *  handling was successfully installed.                                      *
 *                                                                            *
 *  The fesetnv function establishes the floating-point environment           *
 *  represented by the object pointed to by envp. The argument envp shall     *
 *  point to an object set by a call to fegetenv or feholdexcept, or equal to *
 *  a floating-point environment macro to be C99 standard compliant and       *
 *  portable to other architectures. Note that fesetnv merely installs the    *
 *  state of the floating-point status flags represented through its          *
 *  argument, and does not raise these floating-point exceptions.             *
 *                                                                            *
 *  The feupdateenv function saves the currently raised floating-point        *
 *  exceptions in its automatic storage, installs the floating-point          *
 *  environment represented by the object pointed to by envp, and then raises *
 *  the saved floating-point exceptions. The argument envp shall point to an  *
 *  object set by a call to feholdexcept or fegetenv or equal a               *
 *  floating-point environment macro.                                         *
 ******************************************************************************/
    
extern int fegetenv(fenv_t * /* envp */);
extern int feholdexcept(fenv_t * /* envp */);
extern int fesetenv(const fenv_t * /* envp */);
extern int feupdateenv(const fenv_t * /* envp */);


int main(void){return 0;}
