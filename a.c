#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VT_VALMASK   0x00ff
#define VT_CONST     0x00f0  /* constant in vc 
                              (must be first non register value) */
#define VT_LLOCAL    0x00f1  /* lvalue, offset on stack */
#define VT_LOCAL     0x00f2  /* offset on stack */
#define VT_CMP       0x00f3  /* the value is stored in processor flags (in vc) */
#define VT_JMP       0x00f4  /* value is the consequence of jmp true (even) */
#define VT_JMPI      0x00f5  /* value is the consequence of jmp false (odd) */
#define VT_LVAL      0x0100  /* var is an lvalue */
#define VT_SYM       0x0200  /* a symbol value is added */
#define VT_MUSTCAST  0x0400  /* value must be casted to be correct (used for
                                char/short stored in integer registers) */
#define VT_MUSTBOUND 0x0800  /* bound checking must be done before
                                dereferencing value */
#define VT_BOUNDED   0x8000  /* value is bounded. The address of the
                                bounding function call point is in vc */
#define VT_LVAL_BYTE     0x1000  /* lvalue is a byte */
#define VT_LVAL_SHORT    0x2000  /* lvalue is a short */
#define VT_LVAL_UNSIGNED 0x4000  /* lvalue is unsigned */
#define VT_LVAL_TYPE     (VT_LVAL_BYTE | VT_LVAL_SHORT | VT_LVAL_UNSIGNED)

/* types */
#define VT_INT        0  /* integer type */
#define VT_BYTE       1  /* signed byte type */
#define VT_SHORT      2  /* short type */
#define VT_VOID       3  /* void type */
#define VT_PTR        4  /* pointer */
#define VT_ENUM       5  /* enum definition */
#define VT_FUNC       6  /* function type */
#define VT_STRUCT     7  /* struct/union definition */
#define VT_FLOAT      8  /* IEEE float */
#define VT_DOUBLE     9  /* IEEE double */
#define VT_LDOUBLE   10  /* IEEE long double */
#define VT_BOOL      11  /* ISOC99 boolean type */
#define VT_LLONG     12  /* 64 bit integer */
#define VT_LONG      13  /* long integer (NEVER USED as type, only
                            during parsing) */
#define VT_BTYPE      0x000f /* mask for basic type */
#define VT_UNSIGNED   0x0010  /* unsigned type */
#define VT_ARRAY      0x0020  /* array type (also has VT_PTR) */
#define VT_BITFIELD   0x0040  /* bitfield modifier */
#define VT_CONSTANT   0x0800  /* const modifier */
#define VT_VOLATILE   0x1000  /* volatile modifier */
#define VT_SIGNED     0x2000  /* signed type */

/* storage */
#define VT_EXTERN  0x00000080  /* extern definition */
#define VT_STATIC  0x00000100  /* static variable */
#define VT_TYPEDEF 0x00000200  /* typedef definition */
#define VT_INLINE  0x00000400  /* inline definition */

#define VT_STRUCT_SHIFT 16   /* shift for bitfield shift values */

#define VSTACK_SIZE         256

struct Sym;

typedef struct CType {
    int t;
    struct Sym *ref;
} CType;

typedef union CValue {
    long double ld;
    double d;
    float f;
    int i;
    unsigned int ui;
    unsigned int ul; /* address (should be unsigned long on 64 bit cpu) */
    long long ll;
    unsigned long long ull;
    struct CString *cstr;
    void *ptr;
    int tab[1];
} CValue;

typedef struct Sym {
    int v;    /* symbol token */
    long r;    /* associated register */
    long c;    /* associated number */
    CType type;    /* associated type */
    struct Sym *next; /* next related symbol */
    struct Sym *prev; /* prev symbol in stack */
    struct Sym *prev_tok; /* previous symbol for this token */
} Sym;
typedef struct SValue {
    CType type;      /* type */
    unsigned short r;      /* register + flags */
    unsigned short r2;     /* second register, used for 'long long'
                              type. If not used, set to VT_CONST */
    CValue c;              /* constant, if VT_CONST */
    struct Sym *sym;       /* symbol, if (VT_SYM | VT_CONST) */
} SValue;

static SValue vstack[VSTACK_SIZE], *vtop;

static void gen_cast(CType *type)
{
    int sbt, dbt, sf, df, c, p;

    /* special delayed cast for char/short */
    /* XXX: in some cases (multiple cascaded casts), it may still
       be incorrect */
    if (vtop->r & VT_MUSTCAST) {
        vtop->r &= ~VT_MUSTCAST;
//        force_charshort_cast(vtop->type.t);
    }

    /* bitfields first get cast to ints */
    if (vtop->type.t & VT_BITFIELD) {
//        gv(RC_INT);
    }

    dbt = type->t & (VT_BTYPE | VT_UNSIGNED);
    sbt = vtop->type.t & (VT_BTYPE | VT_UNSIGNED);

    if (sbt != dbt) {
//        sf = is_float(sbt);
//        df = is_float(dbt);
        c = (vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) == VT_CONST;
        p = (vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) == (VT_CONST | VT_SYM);
        if (c) {
            /* constant case: we can do it now */
            /* XXX: in ISOC, cannot do it if error in convert */
            if (sbt == VT_FLOAT)
                vtop->c.ld = vtop->c.f;
            else if (sbt == VT_DOUBLE)
                vtop->c.ld = vtop->c.d;

            if (df) {
                if ((sbt & VT_BTYPE) == VT_LLONG) {
                    if (sbt & VT_UNSIGNED)
                        vtop->c.ld = vtop->c.ull;
                    else
                        vtop->c.ld = vtop->c.ll;
                } 
                else if(!sf) {
                    if (sbt & VT_UNSIGNED)
                        vtop->c.ld = vtop->c.ui;
                    else
                        vtop->c.ld = vtop->c.i;
                }

                if (dbt == VT_FLOAT)
                    vtop->c.f = (float)vtop->c.ld;
                else if (dbt == VT_DOUBLE)
                    vtop->c.d = (double)vtop->c.ld;
                    
            } else if (sf && dbt == (VT_LLONG|VT_UNSIGNED)) {
            } else if (sf && dbt == VT_BOOL) {
            } else {
                if(sf)
                    vtop->c.ll = (long long)vtop->c.ld;
                else if (sbt == (VT_LLONG|VT_UNSIGNED))
                    vtop->c.ll = vtop->c.ull;
                else if (sbt & VT_UNSIGNED)
                    vtop->c.ll = vtop->c.ui;
                else if (sbt != VT_LLONG)
                    vtop->c.ll = vtop->c.i;

                if (dbt == (VT_LLONG|VT_UNSIGNED))
                    vtop->c.ull = vtop->c.ll;
                else if (dbt == VT_BOOL)
                    vtop->c.i = (vtop->c.ll != 0);
                else if (dbt != VT_LLONG) {
                    int s = 0;
                    if ((dbt & VT_BTYPE) == VT_BYTE)
                        s = 24;
                    else if ((dbt & VT_BTYPE) == VT_SHORT)
                        s = 16;

                    if(dbt & VT_UNSIGNED)
                        vtop->c.ui = ((unsigned int)vtop->c.ll << s) >> s;
                    else
                        vtop->c.i = ((int)vtop->c.ll << s) >> s;
                }
            }
        } else if (p && dbt == VT_BOOL) {
            vtop->r = VT_CONST;
            vtop->c.i = 1;
        } else if (!0) {
            if (sf && df) {
                /* convert from fp to fp */
            } else if (df) {
            } else if (sf) {
                /* convert fp to int */
                if (dbt == VT_BOOL) {
                     //vpushi(0);
                     //gen_op(TOK_NE);
                } else {
                    /* we handle char/short/etc... with generic code */
                    if (dbt != (VT_INT | VT_UNSIGNED) &&
                        dbt != (VT_LLONG | VT_UNSIGNED) &&
                        dbt != VT_LLONG)
                        dbt = VT_INT;
                    //gen_cvt_ftoi1(dbt);
                    if (dbt == VT_INT && (type->t & (VT_BTYPE | VT_UNSIGNED)) != dbt) {
                        /* additional cast for char/short... */
                        vtop->type.t = dbt;
                        gen_cast(type);
                    }
                }
            } else if (dbt == VT_BOOL) {
                /* scalar to bool */
                //vpushi(0);
                //gen_op(TOK_NE);
            } else if ((dbt & VT_BTYPE) == VT_BYTE || 
                       (dbt & VT_BTYPE) == VT_SHORT) {
                if (sbt == VT_PTR) {
                    vtop->type.t = VT_INT;
                    //warning("nonportable conversion from pointer to char/short");
                }
                //force_charshort_cast(dbt);
            } else if ((dbt & VT_BTYPE) == VT_INT) {
                if (sbt == VT_LLONG) {
                } 
            }
        }
    }
    vtop->type = *type;
}

int main()
{
    
    return 0;
}
