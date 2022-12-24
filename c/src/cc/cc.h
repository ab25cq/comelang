/* Provides the preprocessor, compiler frontend. It also
   contains the interface the c compilers implement. */

typedef struct SrcPos SrcPos;
typedef struct StructMember StructMember;
typedef struct StructExport StructExport;
typedef struct StructIter StructIter;
typedef struct ExportPath ExportPath;
typedef struct NameTy NameTy;
typedef struct CTy CTy;
typedef struct Sym Sym;
typedef struct StkSlot StkSlot;
typedef struct Node Node;
typedef struct Lexer Lexer;

/* Token types */
typedef enum {
    TOKADD    = '+',
    TOKSUB    = '-',
    TOKMUL    = '*',
    TOKMOD    = '%',
    TOKDIV    = '/',
    TOKNOT    = '!',
    TOKBNOT   = '~',
    TOKGT     = '>',
    TOKLT     = '<',
    TOKASS    = '=',
    TOKQUES   = '?',
    TOKLBRACK = '[',
    TOKRBRACK = ']',
    TOKBAND   = '&',
    TOKBOR    = '|',
    TOKLBRACE = '{',
    TOKRBRACE = '}',
    TOKSEMI   = ';',
    TOKLPAREN = '(',
    TOKRPAREN = ')',
    TOKDOT    = '.',
    TOKCOLON  = ':',
    TOKXOR    = '^',
    TOKSTAR   = '*',
    TOKCOMMA  = ',',
    TOKBSLASH = '\\',
    TOKHASH   = '#',
    TOKNUM = 256,
    TOKIDENT,
    TOKHEADER,
    TOKIF,
    TOKDO,
    TOKFOR,
    TOKWHILE,
    TOKRETURN,
    TOKINC,
    TOKDEC,
    TOKADDASS,
    TOKSUBASS,
    TOKMULASS,
    TOKDIVASS,
    TOKMODASS,
    TOKORASS,
    TOKANDASS,
    TOKEQL,
    TOKVOID,
    TOKCHAR,
    TOKCHARLIT,
    TOKINT,
    TOKELSE,
    TOKVOLATILE,
    TOKCONST,
    TOKLOR,
    TOKLAND,
    TOKNEQ,
    TOKLEQ,
    TOKGEQ,
    TOKSHL,
    TOKSHR,
    TOKARROW,
    TOKSTR,
    TOKTYPEDEF,
    TOKSIGNED,
    TOKUNSIGNED,
    TOKSHORT,
    TOKLONG,
    TOKSIZEOF,
    TOKFLOAT,
    TOKDOUBLE,
    TOKSTRUCT,
    TOKUNION,
    TOKGOTO,
    TOKSWITCH,
    TOKCASE,
    TOKDEFAULT,
    TOKCONTINUE,
    TOKBREAK,
    TOKREGISTER,
    TOKEXTERN,
    TOKSTATIC,
    TOKAUTO,
    TOKENUM,
    TOKELLIPSIS,
    TOKHASHHASH,
    TOKDIRSTART,
    TOKDIREND,
    TOKEOF /* EOF needs to be the last. */
} Tokkind;

/* Storage classes */
typedef enum {
    SCNONE,
    SCEXTERN,
    SCSTATIC,
    SCREGISTER,
    SCGLOBAL,
    SCTYPEDEF,
    SCAUTO
} Sclass;

struct SrcPos {
    char *file;
    int   line;
    int   col;
};

typedef enum {
    CVOID,
    CPRIM,
    CSTRUCT,
    CARR,
    CPTR,
    CFUNC,
    CENUM,
} Ctypekind;

typedef enum {
    PRIMCHAR,
    PRIMSHORT,
    PRIMINT,
    PRIMLONG,
    PRIMLLONG,
    PRIMFLOAT,
    PRIMDOUBLE,
    PRIMLDOUBLE
} Primkind;

struct StructMember {
    int   offset;
    char *name;
    CTy  *type;
};

struct NameTy {
    char *name;
    CTy  *type;
};

struct StructIter {
    CTy *root;
    int depth;
    int path[1024];
};

struct ExportPath {
    int idx;
    ExportPath *next;
};

struct StructExport {
    char *name;
    ExportPath *path;
};

struct CTy {
    Ctypekind t;
    int size;
    int align;
    int incomplete;
    union {
        struct {
            CTy *rtype;
            Vec *params; /* Vec of *NameTy */
            int  isvararg;
        } Func;
        struct {
            int   isunion;
            char *name;
            Vec  *members;
            Vec  *exports;
        } Struct;
        struct {
            Vec  *members;
        } Enum;
        struct {
            CTy *subty;
        } Ptr;
        struct {
            CTy *subty;
            int  dim;
        } Arr;
        struct {
            int issigned;
            int type;
        } Prim;
    };
};

/* node types */
typedef enum {
    NASSIGN,
    NFUNC,
    NLABELED,
    NWHILE,
    NDOWHILE,
    NFOR,
    NBINOP,
    NBLOCK,
    NUNOP,
    NCAST,
    NCASE,
    NCOMMA,
    NCOND,
    NINIT,
    NRETURN,
    NSWITCH,
    NGOTO,
    NIDENT,
    NNUM,
    NSTR,
    NIDX,
    NINCDEC,
    NPTRADD,
    NSEL,
    NCALL,
    NSIZEOF,
    NIF,
    NDECL,
    NEXPRSTMT,
    NBUILTIN
} Nodekind;

typedef struct {
    int offset;
    Node *n;
} InitMember;

typedef enum {
    BUILTIN_VASTART
} Builtinkind;

struct Node {
    /* type tag, one of the N* types */
    Nodekind t;
    SrcPos pos;
    CTy *type;
    union {
        struct {
            int     localsz;
            char    *name;
            Node    *body;
            Vec     *params;   /* list of *Sym */
            Vec     *stkslots; /* list of *Stkslot */
        } Func;
        struct {
            Vec *syms;
        } Decl;
        struct {
            char *lelse;
            Node *expr;
            Node *iftrue;
            Node *iffalse;
        } If;
        struct {
            Node *cond;
            Node *iftrue;
            Node *iffalse;
        } Cond;
        struct {
            char *lstart;
            char *lstep;
            char *lend;
            Node *init;
            Node *cond;
            Node *step;
            Node *stmt;
        } For;
        struct {
            char *lstart;
            char *lcond;
            char *lend;
            Node *stmt;
            Node *expr;
        } DoWhile;
        struct {
            char *lstart;
            char *lend;
            Node *expr;
            Node *stmt;
        } While;
        struct {
            char *lend;
            char *ldefault;
            Node *expr;
            Node *stmt;
            Vec  *cases;
        } Switch;
        struct {
            char  *l;
            int64 cond;
            Node  *stmt;
        } Case;
        struct {
            char *l;
            Node *stmt;
        } Labeled;
        struct {
            Node *expr;
        } Return;
        struct {
            Vec *exprs;
        } Comma;
        struct {
            Vec *stmts;
        } Block;
        struct {
            int op;
            Node *l;
            Node *r;
        } Binop;
        struct {
            int op;
            Node *l;
            Node *r;
        } Assign;
        struct {
            int   op;
            Node *operand;
        } Unop;
        struct {
            int   op;
            int   post;
            Node *operand;
        } Incdec;
        struct {
            Node *ptr;
            Node *offset;
        } Ptradd;
        struct {
            Node *operand;
        } Cast;
        struct {
            Vec *inits;
        } Init;
        struct {
            int64 v;
        } Num;
        struct {
            char *v;
        } Str;
        struct {
            char *l;
            char *name;
        } Goto;
        struct {
            Sym  *sym;
        } Ident;
        struct {
            Node *idx;
            Node *operand;
        } Idx;
        struct {
            int   arrow;
            char *name;
            Node *operand;
        } Sel;
        struct {
            Node *expr;
        } ExprStmt;
        struct {
            Node *funclike;
            Vec  *args;
        } Call;
        struct {
            CTy *type;
        } Sizeof;
        struct {
            Builtinkind t;
            union {
                struct {
                    Node *valist;
                    Node *param;
                } Vastart;
            };
        } Builtin;
    };
};

typedef enum {
    SYMENUM,
    SYMTYPE,
    SYMGLOBAL,
    SYMLOCAL,
} Symkind;

struct Sym {
    Symkind k;
    SrcPos *pos;
    CTy    *type;
    char   *name;
    Node   *init;
    union {
        struct {
            int sclass;
            char *label;
        } Global;
        struct {
            StkSlot *slot;
            /* XXX make a Param sym type */ 
            CTy *functy;
            int paramidx;
            int isparam;
        } Local;
        struct {
            int64 v;
        } Enum;
    };
};

struct StkSlot {
    int size;
    int align;
    int offset;
};

#define MAXTOKSZ 4096

struct Lexer {
    FILE   *f;
    SrcPos pos;
    SrcPos prevpos;
    SrcPos markpos;
    int    nchars;
    int    indirective;
    int    ws;
    int    nl;
    int    includestate;
    char   tokval[MAXTOKSZ+1];
};

typedef struct Tok Tok;
struct Tok {
    Tokkind k;
    char   *v;
    int     ws; /* There was whitespace before this token */
    int     nl; /* There was a newline before this token */
    StrSet *hs; /* Hideset, the list of tokens expanded to get this token */
    SrcPos  pos;
};

typedef struct Const Const;
struct Const {
    char  *p; /* p is null, or the label of a symbol */
    int64  v;
};

typedef struct Data Data;
struct Data {
    char *label;
    CTy  *type;
    Node *init;
    int   isglobal;
};

/* dbg.c */
void dumpty(CTy *);

/* error.c */
void errorf(char *, ...) NORETURN;
void errorposf(SrcPos *, char *, ...) NORETURN;

/* lex.c cpp.c */
void  cppinit(char *, Vec *);
char *tokktostr(Tokkind);
Tok  *lex(Lexer *);
Tok  *pp(void);

/* types.c */
CTy *newtype(int);
CTy *mkptr(CTy *);
int isvoid(CTy *);
int isftype(CTy *);
int isitype(CTy *);
int isarithtype(CTy *);
int isptr(CTy *);
int ischarptr(CTy *t);
int ischararray(CTy *t);
int isfunc(CTy *);
int isfuncptr(CTy *);
int isstruct(CTy *);
int isarray(CTy *);
int sametype(CTy *, CTy *);
int convrank(CTy *);
int canrepresent(CTy *, CTy *);
int getstructiter(StructIter *, CTy *, char *);
int structnext(StructIter *);
int structoffsetfromname(CTy *, char *);
CTy * structtypefromname(CTy *, char *);
void initstructiter(StructIter *, CTy *);
void structwalk(StructIter *, StructMember **, int *);
void addtostruct(CTy *, char *, CTy *);
void finalizestruct(SrcPos *, CTy *);

/* parse.c */
void  parse(void);
char *newlabel(void);

/* foldexpr.c */
Const *foldexpr(Node *);

/* target specific types and functions. */

/* Frontend */

extern CTy *cvoid;
extern CTy *cchar;
extern CTy *cshort;
extern CTy *cint;
extern CTy *clong;
extern CTy *cllong;
extern CTy *cuchar;
extern CTy *cushort;
extern CTy *cuint;
extern CTy *culong;
extern CTy *cullong;
extern CTy *cfloat;
extern CTy *cdouble;
extern CTy *cldouble;

uint64 getmaxval(CTy *);
int64  getminval(CTy *);

/* Backend */

void  emitinit(FILE *);
void  emitsym(Sym *);
void  penddata(char *, CTy *, Node *, int);
void  emitend();


