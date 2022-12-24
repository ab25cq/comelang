/* 
 * float.h
 *
 * Constants related to floating point arithmetic.
 *
 * Also included here are some non-ANSI bits for accessing the floating
 * point controller.
 *
 * NOTE: GCC provides float.h, and it is probably more accurate than this,
 *       but it doesn't include the non-standard stuff for accessing the
 *       fp controller. (TODO: Move those bits elsewhere?) Thus it is
 *       probably not a good idea to use the GCC supplied version instead
 *       of this header.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Revision: 1.2 $
 * $Author: bellard $
 * $Date: 2005/04/17 13:14:29 $
 *
 */

#ifndef _FLOAT_H_
#define _FLOAT_H_

/* All the headers include this file. */
#include <_mingw.h>

#define FLT_ROUNDS	1
#define FLT_GUARD	1
#define FLT_NORMALIZE	1

/*
 * The characteristics of float.
 */

/* The radix for floating point representation. */
#define FLT_RADIX	2

/* Decimal digits of precision. */
#define FLT_DIG		6

/* Smallest number such that 1+x != 1 */
#define FLT_EPSILON	1.19209290e-07F

/* The number of base FLT_RADIX digits in the mantissa. */
#define FLT_MANT_DIG	24

/* The maximum floating point number. */
#define FLT_MAX		3.40282347e+38F

/* Maximum n such that FLT_RADIX^n - 1 is representable. */
#define FLT_MAX_EXP	128

/* Maximum n such that 10^n is representable. */
#define FLT_MAX_10_EXP	38

/* Minimum normalized floating-point number. */
#define FLT_MIN		1.17549435e-38F

/* Minimum n such that FLT_RADIX^n is a normalized number. */
#define FLT_MIN_EXP	(-125)

/* Minimum n such that 10^n is a normalized number. */
#define FLT_MIN_10_EXP	(-37)


/*
 * The characteristics of double.
 */
#define DBL_DIG		15
#define DBL_EPSILON	1.1102230246251568e-16
#define DBL_MANT_DIG	53
#define DBL_MAX		1.7976931348623157e+308
#define DBL_MAX_EXP	1024
#define DBL_MAX_10_EXP	308
#define DBL_MIN		2.2250738585072014e-308
#define DBL_MIN_EXP	(-1021)
#define DBL_MIN_10_EXP	(-307)


/*
 * The characteristics of long double.
 * NOTE: long double is the same as double.
 */
#define LDBL_DIG	15
#define LDBL_EPSILON	1.1102230246251568e-16L
#define LDBL_MANT_DIG	53
#define LDBL_MAX	1.7976931348623157e+308L
#define LDBL_MAX_EXP	1024
#define LDBL_MAX_10_EXP	308
#define LDBL_MIN	2.2250738585072014e-308L
#define LDBL_MIN_EXP	(-1021)
#define LDBL_MIN_10_EXP	(-307)


/*
 * Functions and definitions for controlling the FPU.
 */
#ifndef	__STRICT_ANSI__

/* TODO: These constants are only valid for x86 machines */

/* Control word masks for unMask */
#define	_MCW_EM		0x0008001F	/* Error masks */
#define	_MCW_IC		0x00040000	/* Infinity */
#define	_MCW_RC		0x00000300	/* Rounding */
#define	_MCW_PC		0x00030000	/* Precision */

/* Control word values for unNew (use with related unMask above) */
#define	_EM_INVALID	0x00000010
#define	_EM_DENORMAL	0x00080000
#define	_EM_ZERODIVIDE	0x00000008
#define	_EM_OVERFLOW	0x00000004
#define	_EM_UNDERFLOW	0x00000002
#define	_EM_INEXACT	0x00000001
#define	_IC_AFFINE	0x00040000
#define	_IC_PROJECTIVE	0x00000000
#define	_RC_CHOP	0x00000300
#define	_RC_UP		0x00000200
#define	_RC_DOWN	0x00000100
#define	_RC_NEAR	0x00000000
#define	_PC_24		0x00020000
#define	_PC_53		0x00010000
#define	_PC_64		0x00000000

/* These are also defined in Mingw math.h, needed to work around
   GCC build issues.  */
/* Return values for fpclass. */
#ifndef __MINGW_FPCLASS_DEFINED
#define __MINGW_FPCLASS_DEFINED 1
#define	_FPCLASS_SNAN	0x0001	/* Signaling "Not a Number" */
#define	_FPCLASS_QNAN	0x0002	/* Quiet "Not a Number" */
#define	_FPCLASS_NINF	0x0004	/* Negative Infinity */
#define	_FPCLASS_NN	0x0008	/* Negative Normal */
#define	_FPCLASS_ND	0x0010	/* Negative Denormal */
#define	_FPCLASS_NZ	0x0020	/* Negative Zero */
#define	_FPCLASS_PZ	0x0040	/* Positive Zero */
#define	_FPCLASS_PD	0x0080	/* Positive Denormal */
#define	_FPCLASS_PN	0x0100	/* Positive Normal */
#define	_FPCLASS_PINF	0x0200	/* Positive Infinity */
#endif /* __MINGW_FPCLASS_DEFINED */

/* invalid subconditions (_SW_INVALID also set) */
#define _SW_UNEMULATED		0x0040  /* unemulated instruction */
#define _SW_SQRTNEG		0x0080  /* square root of a neg number */
#define _SW_STACKOVERFLOW	0x0200  /* FP stack overflow */
#define _SW_STACKUNDERFLOW	0x0400  /* FP stack underflow */

/*  Floating point error signals and return codes */
#define _FPE_INVALID		0x81
#define _FPE_DENORMAL		0x82
#define _FPE_ZERODIVIDE		0x83
#define _FPE_OVERFLOW		0x84
#define _FPE_UNDERFLOW		0x85
#define _FPE_INEXACT		0x86
#define _FPE_UNEMULATED		0x87
#define _FPE_SQRTNEG		0x88
#define _FPE_STACKOVERFLOW	0x8a
#define _FPE_STACKUNDERFLOW	0x8b
#define _FPE_EXPLICITGEN	0x8c    /* raise( SIGFPE ); */

#ifndef RC_INVOKED

#ifdef	__cplusplus
extern "C" {
#endif

/* Set the FPU control word as cw = (cw & ~unMask) | (unNew & unMask),
 * i.e. change the bits in unMask to have the values they have in unNew,
 * leaving other bits unchanged. */
unsigned int	_controlfp (unsigned int unNew, unsigned int unMask);
unsigned int	_control87 (unsigned int unNew, unsigned int unMask);


unsigned int	_clearfp (void);	/* Clear the FPU status word */
unsigned int	_statusfp (void);	/* Report the FPU status word */
#define		_clear87	_clearfp
#define		_status87	_statusfp

void		_fpreset (void);	/* Reset the FPU */
void		fpreset (void);

/* Global 'variable' for the current floating point error code. */
int *	__fpecode(void);
#define	_fpecode	(*(__fpecode()))

/*
 * IEEE recommended functions
 */

double	_chgsign	(double);
double	_copysign	(double, double);
double	_logb		(double);
double	_nextafter	(double, double);
double	_scalb		(double, long);

int	_finite		(double);
int	_fpclass	(double);
int	_isnan		(double);

#ifdef	__cplusplus
}
#endif

#endif	/* Not RC_INVOKED */

#endif	/* Not __STRICT_ANSI__ */

#endif /* _FLOAT_H_ */

