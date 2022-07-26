#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# 683 "tcc.h"
enum tcc_token {
    TOK_LAST = 256 - 1,

# 1 "tcctok.h" 1

     TOK_INT,
     TOK_VOID,
     TOK_CHAR,
     TOK_IF,
     TOK_ELSE,
     TOK_WHILE,
     TOK_BREAK,
     TOK_RETURN,
     TOK_FOR,
     TOK_EXTERN,
     TOK_STATIC,
     TOK_UNSIGNED,
     TOK_GOTO,
     TOK_DO,
     TOK_CONTINUE,
     TOK_SWITCH,
     TOK_CASE,

     TOK_CONST1,
     TOK_CONST2,
     TOK_CONST3,
     TOK_VOLATILE1,
     TOK_VOLATILE2,
     TOK_VOLATILE3,
     TOK_LONG,
     TOK_REGISTER,
     TOK_SIGNED1,
     TOK_SIGNED2,
     TOK_SIGNED3,
     TOK_AUTO,
     TOK_INLINE1,
     TOK_INLINE2,
     TOK_INLINE3,
     TOK_RESTRICT1,
     TOK_RESTRICT2,
     TOK_RESTRICT3,
     TOK_EXTENSION,

     TOK_FLOAT,
     TOK_DOUBLE,
     TOK_BOOL,
     TOK_SHORT,
     TOK_STRUCT,
     TOK_UNION,
     TOK_TYPEDEF,
     TOK_DEFAULT,
     TOK_ENUM,
     TOK_SIZEOF,
     TOK_ATTRIBUTE1,
     TOK_ATTRIBUTE2,
     TOK_ALIGNOF1,
     TOK_ALIGNOF2,
     TOK_TYPEOF1,
     TOK_TYPEOF2,
     TOK_TYPEOF3,
     TOK_LABEL,
     TOK_ASM1,
     TOK_ASM2,
     TOK_ASM3,




     TOK_DEFINE,
     TOK_INCLUDE,
     TOK_INCLUDE_NEXT,
     TOK_IFDEF,
     TOK_IFNDEF,
     TOK_ELIF,
     TOK_ENDIF,
     TOK_DEFINED,
     TOK_UNDEF,
     TOK_ERROR,
     TOK_WARNING,
     TOK_LINE,
     TOK_PRAGMA,
     TOK___LINE__,
     TOK___FILE__,
     TOK___DATE__,
     TOK___TIME__,
     TOK___FUNCTION__,
     TOK___VA_ARGS__,


     TOK___FUNC__,



     TOK_SECTION1,
     TOK_SECTION2,
     TOK_ALIGNED1,
     TOK_ALIGNED2,
     TOK_PACKED1,
     TOK_PACKED2,
     TOK_UNUSED1,
     TOK_UNUSED2,
     TOK_CDECL1,
     TOK_CDECL2,
     TOK_CDECL3,
     TOK_STDCALL1,
     TOK_STDCALL2,
     TOK_STDCALL3,
     TOK_FASTCALL1,
     TOK_FASTCALL2,
     TOK_FASTCALL3,
     TOK_DLLEXPORT,
     TOK_NORETURN1,
     TOK_NORETURN2,
     TOK_builtin_types_compatible_p,
     TOK_builtin_constant_p,
     TOK_builtin_frame_address,

     TOK_builtin_malloc,
     TOK_builtin_free,
     TOK_malloc,
     TOK_free,

     TOK_REGPARM1,
     TOK_REGPARM2,


     TOK_pack,


     TOK_ASM_push,
     TOK_ASM_pop,
# 139 "tcctok.h"
     TOK_memcpy,
     TOK_memset,
     TOK___divdi3,
     TOK___moddi3,
     TOK___udivdi3,
     TOK___umoddi3,
# 194 "tcctok.h"
     TOK___ashrdi3,
     TOK___lshrdi3,
     TOK___ashldi3,
     TOK___floatundisf,
     TOK___floatundidf,

     TOK___floatundixf,
     TOK___fixunsxfdi,

     TOK___fixunssfdi,
     TOK___fixunsdfdi,
# 236 "tcctok.h"
 TOK_ASM_byte,
 TOK_ASM_align,
 TOK_ASM_skip,
 TOK_ASM_space,
 TOK_ASM_string,
 TOK_ASM_asciz,
 TOK_ASM_ascii,
 TOK_ASM_globl,
 TOK_ASM_global,
 TOK_ASM_text,
 TOK_ASM_data,
 TOK_ASM_bss,
 TOK_ASM_previous,
 TOK_ASM_fill,
 TOK_ASM_org,
 TOK_ASM_quad,
# 687 "tcc.h" 2

};

int main()
{
    
    return 0;
}
