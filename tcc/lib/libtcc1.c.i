# 1 "lib/libtcc1.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4

# 1 "/usr/include/stdc-predef.h" 3 4
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
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
# 52 "/usr/include/stdc-predef.h" 3 4
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
# 32 "<command-line>" 2
# 1 "lib/libtcc1.c"

# 1 "lib/libtcc1.c"
/* TCC runtime library. 
   Parts of this code are (c) 2002 Fabrice Bellard 

   Copyright (C) 1987, 1988, 1992, 1994, 1995 Free Software Foundation, Inc.

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  
*/




typedef int Wtype;
typedef unsigned int UWtype;
typedef unsigned int USItype;
typedef long long DWtype;
typedef unsigned long long UDWtype;

struct DWstruct {
    Wtype low, high;
};

typedef union
{
  struct DWstruct s;
  DWtype ll;
} DWunion;

typedef long double XFtype;



/* the following deal with IEEE single-precision numbers */
# 63 "lib/libtcc1.c"
/* the following deal with IEEE double-precision numbers */
# 74 "lib/libtcc1.c"
/* the following deal with x86 long double-precision numbers */




/* only for x86 */
union ldouble_long {
    long double ld;
    struct {
        unsigned long long lower;
        unsigned short upper;
    } l;
};

union double_long {
    double d;

    struct {
        unsigned int lower;
        int upper;
    } l;






    long long ll;
};

union float_long {
    float f;
    long l;
};

/* XXX: we don't support several builtin supports for now */


/* XXX: use gcc/tcc intrinsic ? */
# 146 "lib/libtcc1.c"
/* most of this code is taken from libgcc2.c from gcc */

static UDWtype __udivmoddi4 (UDWtype n, UDWtype d, UDWtype *rp)
{
  DWunion ww;
  DWunion nn, dd;
  DWunion rr;
  UWtype d0, d1, n0, n1, n2;
  UWtype q0, q1;
  UWtype b, bm;

  nn.ll = n;
  dd.ll = d;

  d0 = dd.s.low;
  d1 = dd.s.high;
  n0 = nn.s.low;
  n1 = nn.s.high;


  if (d1 == 0)
    {
      if (d0 > n1)
 {
   /* 0q = nn / 0D */

   udiv_qrnnd (q0, n0, n1, n0, d0);
   q1 = 0;

   /* Remainder in n0.  */
 }
      else
 {
   /* qq = NN / 0d */

   if (d0 == 0)
     d0 = 1 / d0; /* Divide intentionally by zero.  */

   udiv_qrnnd (q1, n1, 0, n1, d0);
   udiv_qrnnd (q0, n0, n1, n0, d0);

   /* Remainder in n0.  */
 }

      if (rp != 0)
 {
   rr.s.low = n0;
   rr.s.high = 0;
   *rp = rr.ll;
 }
    }
# 274 "lib/libtcc1.c"
  else
    {
      if (d1 > n1)
 {
   /* 00 = nn / DD */

   q0 = 0;
   q1 = 0;

   /* Remainder in n1n0.  */
   if (rp != 0)
     {
       rr.s.low = n0;
       rr.s.high = n1;
       *rp = rr.ll;
     }
 }
      else
 {
   /* 0q = NN / dd */

   count_leading_zeros (bm, d1);
   if (bm == 0)
     {
       /* From (n1 >= d1) /\ (the most significant bit of d1 is set),
		 conclude (the most significant bit of n1 is set) /\ (the
		 quotient digit q0 = 0 or 1).

		 This special case is necessary, not an optimization.  */

       /* The condition on the next line takes advantage of that
		 n1 >= d1 (true due to program flow).  */
       if (n1 > d1 || n0 >= d0)
  {
    q0 = 1;
    sub_ddmmss (n1, n0, n1, n0, d1, d0);
  }
       else
  q0 = 0;

       q1 = 0;

       if (rp != 0)
  {
    rr.s.low = n0;
    rr.s.high = n1;
    *rp = rr.ll;
  }
     }
   else
     {
       UWtype m1, m0;
       /* Normalize.  */

       b = 32 - bm;

       d1 = (d1 << bm) | (d0 >> b);
       d0 = d0 << bm;
       n2 = n1 >> b;
       n1 = (n1 << bm) | (n0 >> b);
       n0 = n0 << bm;

       udiv_qrnnd (q0, n1, n2, n1, d1);
       umul_ppmm (m1, m0, q0, d0);

       if (m1 > n1 || (m1 == n1 && m0 > n0))
  {
    q0--;
    sub_ddmmss (m1, m0, m1, m0, d1, d0);
  }

       q1 = 0;

       /* Remainder in (n1n0 - m1m0) >> bm.  */
       if (rp != 0)
  {
    sub_ddmmss (n1, n0, n1, n0, m1, m0);
    rr.s.low = (n1 << b) | (n0 >> bm);
    rr.s.high = n1 >> bm;
    *rp = rr.ll;
  }
     }
 }
    }

  ww.s.low = q0;
  ww.s.high = q1;
  return ww.ll;
}



long long __divdi3(long long u, long long v)
{
    int c = 0;
    DWunion uu, vv;
    DWtype w;

    uu.ll = u;
    vv.ll = v;

    if (uu.s.high < 0) {
        c = ~c;
        uu.ll = (-(uu.ll));
    }
    if (vv.s.high < 0) {
        c = ~c;
        vv.ll = (-(vv.ll));
    }
    w = __udivmoddi4 (uu.ll, vv.ll, (UDWtype *) 0);
    if (c)
        w = (-(w));
    return w;
}

long long __moddi3(long long u, long long v)
{
    int c = 0;
    DWunion uu, vv;
    DWtype w;

    uu.ll = u;
    vv.ll = v;

    if (uu.s.high < 0) {
        c = ~c;
        uu.ll = (-(uu.ll));
    }
    if (vv.s.high < 0)
        vv.ll = (-(vv.ll));

    __udivmoddi4 (uu.ll, vv.ll, (UDWtype *) &w);
    if (c)
        w = (-(w));
    return w;
}

unsigned long long __udivdi3(unsigned long long u, unsigned long long v)
{
    return __udivmoddi4 (u, v, (UDWtype *) 0);
}

unsigned long long __umoddi3(unsigned long long u, unsigned long long v)
{
    UDWtype w;

    __udivmoddi4 (u, v, &w);
    return w;
}

/* XXX: fix tcc's code generator to do this instead */
long long __ashrdi3(long long a, int b)
{
# 439 "lib/libtcc1.c"
    return a >> b;

}

/* XXX: fix tcc's code generator to do this instead */
unsigned long long __lshrdi3(unsigned long long a, int b)
{
# 458 "lib/libtcc1.c"
    return a >> b;

}

/* XXX: fix tcc's code generator to do this instead */
long long __ashldi3(long long a, int b)
{
# 477 "lib/libtcc1.c"
    return a << b;

}
# 490 "lib/libtcc1.c"
/* XXX: fix tcc's code generator to do this instead */
float __floatundisf(unsigned long long a)
{
    DWunion uu;
    XFtype r;

    uu.ll = a;
    if (uu.s.high >= 0) {
        return (float)uu.ll;
    } else {
        r = (XFtype)uu.ll;
        r += 18446744073709551616.0;
        return (float)r;
    }
}

double __floatundidf(unsigned long long a)
{
    DWunion uu;
    XFtype r;

    uu.ll = a;
    if (uu.s.high >= 0) {
        return (double)uu.ll;
    } else {
        r = (XFtype)uu.ll;
        r += 18446744073709551616.0;
        return (double)r;
    }
}

long double __floatundixf(unsigned long long a)
{
    DWunion uu;
    XFtype r;

    uu.ll = a;
    if (uu.s.high >= 0) {
        return (long double)uu.ll;
    } else {
        r = (XFtype)uu.ll;
        r += 18446744073709551616.0;
        return (long double)r;
    }
}

unsigned long long __fixunssfdi (float a1)
{
    register union float_long fl1;
    register int exp;
    register unsigned long l;

    fl1.f = a1;

    if (fl1.l == 0)
 return (0);

    exp = (((fl1.l) >> 23) & 0xFF) - 126 - 24;

    l = (((fl1.l) & 0x7FFFFF) | (1 << 23));
    if (exp >= 41)
 return (unsigned long long)-1;
    else if (exp >= 0)
        return (unsigned long long)l << exp;
    else if (exp >= -23)
        return l >> -exp;
    else
        return 0;
}

unsigned long long __fixunsdfdi (double a1)
{
    register union double_long dl1;
    register int exp;
    register unsigned long long l;

    dl1.d = a1;

    if (dl1.ll == 0)
 return (0);

    exp = (((dl1.l.upper) >> 20) & 0x7FF) - 1022 - 53;

    l = ((dl1.ll & (((long long)1 << 52)-1)) | ((long long)1 << 52));

    if (exp >= 12)
 return (unsigned long long)-1;
    else if (exp >= 0)
        return l << exp;
    else if (exp >= -52)
        return l >> -exp;
    else
        return 0;
}

unsigned long long __fixunsxfdi (long double a1)
{
    register union ldouble_long dl1;
    register int exp;
    register unsigned long long l;

    dl1.ld = a1;

    if (dl1.l.lower == 0 && dl1.l.upper == 0)
 return (0);

    exp = (dl1.l.upper & 0x7fff) - 16382 - 64;

    l = dl1.l.lower;

    if (exp > 0)
 return (unsigned long long)-1;
    else if (exp >= -63)
        return l >> -exp;
    else
        return 0;
}
