#include "cc.h"

/*
// 静的メモリプール（大きなバッファとして定義）
#define STRUCT_POOL_SIZE (384 * 1024)  // 384KB for structures
#define CHAR_BUF_SIZE (128 * 1024)      // 128KB for char arrays

static char StructPool[STRUCT_POOL_SIZE] __attribute__((aligned(16)));
static size_t StructPoolIndex = 0;

static char CharBuf[CHAR_BUF_SIZE];
static size_t CharBufIndex = 0;

// 静的calloc代替関数
static void *static_calloc(size_t nmemb, size_t size) {
    size_t total = nmemb * size;

    // アライメントを16バイトに調整
    size_t align = 16;

    // 小さいサイズの場合は構造体プールから割り当て
    if (total <= 1024 || nmemb == 1) {
        // アライメント調整
        size_t aligned_index = (StructPoolIndex + align - 1) & ~(align - 1);

        if (aligned_index + total > STRUCT_POOL_SIZE) {
            error("Struct pool exhausted");
        }

        void *ptr = &StructPool[aligned_index];
        memset(ptr, 0, total);
        StructPoolIndex = aligned_index + total;
        return ptr;
    }

    // 大きいサイズ（主にchar配列）はCharBufから割り当て
    if (CharBufIndex + total > CHAR_BUF_SIZE) {
        error("Char buffer exhausted");
    }

    void *ptr = &CharBuf[CharBufIndex];
    memset(ptr, 0, total);
    CharBufIndex += total;
    return ptr;
}

#define calloc static_calloc
#define free(ptr) ((void)0)
*/

static bool OptDebug;

#define GP_MAX 8
#define FP_MAX 0 //8
#define FS_SAVE_COUNT 12
#define FS_SAVE_BYTES (FS_SAVE_COUNT * 8)


// 输出文件
static FILE *OutputFile;
// 记录栈深度
static int Depth;
// 记录大结构体的深度
static int BSDepth;
// 当前的函数
static Obj *CurrentFn;

// 我们将fs0～fs11两两组对形成6个寄存器对
// 用于long double类型的存储，每次+2
static int LDSP;

static void genExpr(Node *Nd);
static void genStmt(Node *Nd);

// 输出字符串到目标文件并换行
__attribute__((format(printf, 1, 2))) static void printLn(char *Fmt, ...) {
  char *Buf = NULL;
  size_t Len = 0;

  va_list VA;
  va_start(VA, Fmt);
  FILE *Tmp = open_memstream(&Buf, &Len);
  if (!Tmp)
    error("open_memstream failed");
  vfprintf(Tmp, Fmt, VA);
  va_end(VA);
  fclose(Tmp);

  char *Cur = Buf;
  bool Printed = false;

  while (*Cur) {
    char *NL = strchr(Cur, '\n');
    size_t LineLen = NL ? (size_t)(NL - Cur) : strlen(Cur);
    char *LineStart = Cur;
    char *LineEnd = Cur + LineLen;

    char *First = LineStart;
    while (First < LineEnd && isspace((unsigned char)*First))
      First++;

    if (First == LineEnd) {
      if (NL || LineLen > 0) {
        fprintf(OutputFile, "\n");
        Printed = true;
      }
    } else {
      char *Hash = NULL;
      for (char *Q = First; Q < LineEnd; Q++) {
        if (*Q == '#') {
          Hash = Q;
          break;
        }
      }

      if (Hash == First) {
        // 注释行，跳过
      } else {
        if (Hash) {
          char *Trim = Hash;
          while (Trim > LineStart && isspace((unsigned char)Trim[-1]))
            Trim--;
          LineEnd = Trim;
        }

        while (LineEnd > LineStart && isspace((unsigned char)LineEnd[-1]))
          LineEnd--;

        if (LineEnd > LineStart) {
          bool SkipLine = false;
          size_t TokenLen = (size_t)(LineEnd - First);

          if (TokenLen >= 3) {
            if (strncmp(First, "fsd", 3) == 0) {
              if (TokenLen == 3 || isspace((unsigned char)First[3]))
                SkipLine = true;
            } else if (strncmp(First, "fld", 3) == 0) {
              if (TokenLen == 3 || isspace((unsigned char)First[3]))
                SkipLine = true;
            }
          }

          if (!SkipLine) {
            fwrite(LineStart, 1, LineEnd - LineStart, OutputFile);
            fprintf(OutputFile, "\n");
            Printed = true;
          }
        }
      }
    }

    if (!NL)
      break;
    Cur = NL + 1;
  }

  if (!Printed && Len == 0)
    fprintf(OutputFile, "\n");

  free(Buf);
}

// 将原始字节转换为可用于.ascii的字符串字面量
static char *quoteBytes(const unsigned char *Data, int Len) {
  // 每个字节最多需要4个字符（例如\\xFF），再加上首尾引号和终止符
  char *Buf = calloc(Len * 4 + 3, 1);
  char *P = Buf;

  *P++ = '"';
  for (int I = 0; I < Len; I++) {
    unsigned char C = Data[I];
    switch (C) {
    case '\\':
      *P++ = '\\';
      *P++ = '\\';
      break;
    case '"':
      *P++ = '\\';
      *P++ = '"';
      break;
    case '\n':
      *P++ = '\\';
      *P++ = 'n';
      break;
    case '\r':
      *P++ = '\\';
      *P++ = 'r';
      break;
    case '\t':
      *P++ = '\\';
      *P++ = 't';
      break;
    case '\0':
      *P++ = '\\';
      *P++ = 'x';
      *P++ = "0123456789abcdef"[C >> 4];
      *P++ = "0123456789abcdef"[C & 0xF];
      break;
    default:
      if (C >= 0x20 && C <= 0x7E)
        *P++ = (char)C;
      else {
        *P++ = '\\';
        *P++ = 'x';
        *P++ = "0123456789abcdef"[C >> 4];
        *P++ = "0123456789abcdef"[C & 0xF];
      }
      break;
    }
  }

  *P++ = '"';
  *P = '\0';
  return Buf;
}

// 输出.ascii/.asciz指示
static void emitAsciiData(const char *Directive, const unsigned char *Data, int Len) {
  char *Quoted = quoteBytes(Data, Len);
  printLn("  %s %s", Directive, Quoted);
  free(Quoted);
}

// 输出指定数量的0字节
static void emitZeroBytes(int Count) {
  if (Count <= 0)
    return;

  unsigned char Zeros[16] = {0};
  while (Count > 0) {
    int Chunk = Count < (int)sizeof(Zeros) ? Count : (int)sizeof(Zeros);
    emitAsciiData(".ascii", Zeros, Chunk);
    Count -= Chunk;
  }
}

static int limitedStrnlen(const char *S, int Max) {
  int Len = 0;
  while (Len < Max && S[Len])
    Len++;
  return Len;
}

// 代码段计数
static int count(void) {
  static int I = 1;
  return I++;
}

// 压栈，将结果临时压入栈中备用
// sp为栈指针，栈反向向下增长，64位下，8个字节为一个单位，所以sp-8
// 当前栈指针的地址就是sp，将a0的值压入栈
// 不使用寄存器存储的原因是因为需要存储的值的数量是变化的。
static void push(void) {
  printLn("  # 压栈，将a0的值存入栈顶");
  printLn("  addi sp, sp, -8");
  printLn("  sd a0, 0(sp)");
  Depth++;
}

// 弹栈，将sp指向的地址的值，弹出到a1
static void pop(int Reg) {
  printLn("  # 弹栈，将栈顶的值存入a%d", Reg);
  printLn("  ld a%d, 0(sp)", Reg);
  printLn("  addi sp, sp, 8");
  Depth--;
}

// 对于浮点类型进行压栈
static void pushF(void) {
  printLn("  # 压栈，将fa0的值存入栈顶");
  printLn("  addi sp, sp, -8");
  printLn("  fsd fa0, 0(sp)");
  Depth++;
}

// 对于浮点类型进行弹栈
static void popF(int Reg) {
  printLn("  # 弹栈，将栈顶的值存入fa%d", Reg);
  printLn("  fld fa%d, 0(sp)", Reg);
  printLn("  addi sp, sp, 8");
  Depth--;
}

// 对于long double类型进行压栈
static void pushLD(void) {
  printLn("  # LD压栈，将a0,a1的值存入LD栈顶");
  printLn("  fmv.d.x fs%d, a1", LDSP + 1);
  printLn("  fmv.d.x fs%d, a0", LDSP);
  LDSP += 2;
  if (LDSP > 10)
    error("LDSP can't be larger than 10!");
}

// 对于long double类型进行弹栈
static void popLD(int Reg) {
  LDSP -= 2;
  if (LDSP < 0)
    error("LDSP can't be less than 0!");
  printLn("  # LD弹栈，将LD栈顶的值存入a%d,a%d", Reg, Reg + 1);
  printLn("  fmv.x.d a%d, fs%d", Reg + 1, LDSP + 1);
  printLn("  fmv.x.d a%d, fs%d", Reg, LDSP);
}

// 对齐到Align的整数倍
int alignTo(int N, int Align) {
  // (0,Align]返回Align
  return (N + Align - 1) / Align * Align;
}

// 计算给定节点的绝对地址
// 如果报错，说明节点不在内存中
static void genAddr(Node *Nd) {
  switch (Nd->Kind) {
  // 变量
  case ND_VAR:
    // VLA可变长度数组是局部变量
    if (Nd->Var->Ty->Kind == TY_VLA) {
      printLn("  # 为VLA生成局部变量");
      printLn("  li t0, %d", Nd->Var->Offset);
      printLn("  add t0, t0, fp");
      printLn("  ld a0, 0(t0)");
      return;
    }

    // 局部变量
    if (Nd->Var->IsLocal) { // 偏移量是相对于fp的
      printLn("  # 获取局部变量%s的栈内地址为%d(fp)", Nd->Var->Name,
              Nd->Var->Offset);
      printLn("  li t0, %d", Nd->Var->Offset);
      printLn("  add a0, fp, t0");
      return;
    }

    // 生成位置无关代码
    if (OptFPIC) {
      if (Nd->Var->IsStatic && !Nd->Var->IsTLS) {
        printLn("  la a0, %s", Nd->Var->Name);
        return;
      }
      int C = count();
      printLn(".Lpcrel_hi%d:", C);
      // 线程局部变量
      if (Nd->Var->IsTLS) {
        printLn("  # 获取PIC中TLS%s的地址", Nd->Var->Name);
        // 计算TLS高20位地址
        printLn("  auipc a0, %%tls_gd_pcrel_hi(%s)", Nd->Var->Name);
        // 计算TLS低12位地址
        printLn("  addi a0, a0, %%pcrel_lo(.Lpcrel_hi%d)", C);
        // 获取地址
        printLn("  call __tls_get_addr@plt");
        return;
      }

      // 函数或者全局变量
      printLn("  # 获取PIC中%s%s的地址",
              Nd->Ty->Kind == TY_FUNC ? "函数" : "全局变量", Nd->Var->Name);
      // 高20位地址，存到a0中
      printLn("  auipc a0, %%got_pcrel_hi(%s)", Nd->Var->Name);
      // 低12位地址，加到a0中
      printLn("  ld a0, %%pcrel_lo(.Lpcrel_hi%d)(a0)", C);
      return;
    }

    // 线程局部变量
    if (Nd->Var->IsTLS) {
      // 计算TLS高20位地址
      printLn("  lui a0, %%tprel_hi(%s)", Nd->Var->Name);
      // 计算TLS低12位地址
      printLn("  addi a0, a0, %%tprel_lo(%s)", Nd->Var->Name);
      return;
    }

    // 函数
    if (Nd->Ty->Kind == TY_FUNC) {
      // 定义的函数
      if (Nd->Var->IsDefinition) {
        printLn("  # 获取函数%s的地址", Nd->Var->Name);
        printLn("  la a0, %s", Nd->Var->Name);
      }
      // 外部函数
      else {
        int C = count();
        printLn("  # 获取外部函数的绝对地址");
        printLn(".Lpcrel_hi%d:", C);
        // 高20位地址，存到a0中
        printLn("  auipc a0, %%got_pcrel_hi(%s)", Nd->Var->Name);
        // 低12位地址，加到a0中
        printLn("  ld a0, %%pcrel_lo(.Lpcrel_hi%d)(a0)", C);
      }
      return;
    }

    // 全局变量
    if (Nd->Var->IsStatic && !Nd->Var->IsTLS) {
      printLn("  la a0, %s", Nd->Var->Name);
      return;
    }

    int C = count();
    printLn("  # 获取全局变量的绝对地址");
    printLn(".Lpcrel_hi%d:", C);
    // 高20位地址，存到a0中
    printLn("  auipc a0, %%got_pcrel_hi(%s)", Nd->Var->Name);
    // 低12位地址，加到a0中
    printLn("  ld a0, %%pcrel_lo(.Lpcrel_hi%d)(a0)", C);
    return;
  // 解引用*
  case ND_DEREF:
    genExpr(Nd->LHS);
    return;
  // 逗号
  case ND_COMMA:
    genExpr(Nd->LHS);
    genAddr(Nd->RHS);
    return;
  // 结构体成员
  case ND_MEMBER:
    genAddr(Nd->LHS);
    printLn("  # 计算成员变量的地址偏移量");
    printLn("  li t0, %d", Nd->Mem->Offset);
    printLn("  add a0, a0, t0");
    return;
  // 函数调用
  case ND_FUNCALL:
    // 如果存在返回值缓冲区
    if (Nd->RetBuffer) {
      genExpr(Nd);
      return;
    }
    break;
  case ND_ASSIGN:
  case ND_COND:
    // 使结构体成员可以通过=或?:访问
    if (Nd->Ty->Kind == TY_STRUCT || Nd->Ty->Kind == TY_UNION) {
      genExpr(Nd);
      return;
    }
    break;
  case ND_VLA_PTR:
    // VLA的指针
    printLn("  # 生成VLA的指针");
    printLn("  li t0, %d", Nd->Var->Offset);
    printLn("  add a0, t0, fp");
    return;
  default:
    break;
  }

  errorTok(Nd->Tok, "not an lvalue");
}

// 加载a0指向的值
static void load(Type *Ty) {
  switch (Ty->Kind) {
  case TY_ARRAY:
  case TY_STRUCT:
  case TY_UNION:
  case TY_FUNC:
  case TY_VLA:
    return;
  case TY_FLOAT:
    printLn("  # 访问a0中存放的地址，取得的值存入fa0");
    printLn("  flw fa0, 0(a0)");
    return;
  case TY_DOUBLE:
    printLn("  # 访问a0中存放的地址，取得的值存入fa0");
    printLn("  fld fa0, 0(a0)");
    return;
  case TY_LDOUBLE:
    printLn("  # 访问a0中存放的地址，取得的值存入LD栈当中");
    printLn("  fld fs%d, 8(a0)", LDSP + 1);
    printLn("  fld fs%d, 0(a0)", LDSP);
    LDSP += 2;
    return;
  default:
    break;
  }

  // 添加无符号类型的后缀u
  char *Suffix = Ty->IsUnsigned ? "u" : "";

  printLn("  # 读取a0中存放的地址，得到的值存入a0");
  if (Ty->Size == 1)
    printLn("  lb%s a0, 0(a0)", Suffix);
  else if (Ty->Size == 2)
    printLn("  lh%s a0, 0(a0)", Suffix);
  else if (Ty->Size == 4)
    printLn("  lw%s a0, 0(a0)", Suffix);
  else
    printLn("  ld a0, 0(a0)");
}

// 将栈顶值(为一个地址)存入a0
static void store(Type *Ty) {
  pop(1);

  switch (Ty->Kind) {
  case TY_STRUCT:
  case TY_UNION:
    printLn("  # 对%s进行赋值", Ty->Kind == TY_STRUCT ? "结构体" : "联合体");
    for (int I = 0; I < Ty->Size; ++I) {
      printLn("  li t0, %d", I);
      printLn("  add t0, a0, t0");
      printLn("  lb t1, 0(t0)");

      printLn("  li t0, %d", I);
      printLn("  add t0, a1, t0");
      printLn("  sb t1, 0(t0)");
    }
    return;
  case TY_FLOAT:
    printLn("  # 将fa0的值，写入到a1中存放的地址");
    printLn("  fsw fa0, 0(a1)");
    return;
  case TY_DOUBLE:
    printLn("  # 将fa0的值，写入到a1中存放的地址");
    printLn("  fsd fa0, 0(a1)");
    return;
  case TY_LDOUBLE:
    printLn("  # 将LD栈顶值，写入到a1中存放地址");
    LDSP -= 2;
    printLn("  fsd fs%d, 8(a1)", LDSP + 1);
    printLn("  fsd fs%d, 0(a1)", LDSP);
    return;
  default:
    break;
  }

  printLn("  # 将a0的值，写入到a1中存放的地址");
  if (Ty->Size == 1)
    printLn("  sb a0, 0(a1)");
  else if (Ty->Size == 2)
    printLn("  sh a0, 0(a1)");
  else if (Ty->Size == 4)
    printLn("  sw a0, 0(a1)");
  else
    printLn("  sd a0, 0(a1)");
};

// 与0进行比较，不等于0则置1
static void notZero(Type *Ty) {
  switch (Ty->Kind) {
  case TY_FLOAT:
    printLn("  # 判断fa1是否不为0，为0置0，非0置1");
    printLn("  fmv.s.x fa1, zero");
    printLn("  feq.s a0, fa0, fa1");
    printLn("  xori a0, a0, 1");
    return;
  case TY_DOUBLE:
    printLn("  # 判断fa1是否不为0，为0置0，非0置1");
    printLn("  fmv.d.x fa1, zero");
    printLn("  feq.d a0, fa0, fa1");
    printLn("  xori a0, a0, 1");
    return;
  case TY_LDOUBLE:
    printLn("  # 判断fa1是否不为0，为0置0，非0置1");
    popLD(0);
    printLn("  mv a2, zero");
    printLn("  mv a3, zero");
    printLn("  call __netf2@plt");
    printLn("  snez a0, a0");
    return;
  default:
    return;
  }
}

// 类型枚举
enum { I8, I16, I32, I64, U8, U16, U32, U64, F32, F64, F128 };

// 获取类型对应的枚举值
static int getTypeId(Type *Ty) {
  switch (Ty->Kind) {
  case TY_CHAR:
    return Ty->IsUnsigned ? U8 : I8;
  case TY_SHORT:
    return Ty->IsUnsigned ? U16 : I16;
  case TY_INT:
    return Ty->IsUnsigned ? U32 : I32;
  case TY_LONG:
    return Ty->IsUnsigned ? U64 : I64;
  case TY_FLOAT:
    return F32;
  case TY_DOUBLE:
    return F64;
  case TY_LDOUBLE:
    return F128;
  default:
    return U64;
  }
}

// 类型映射表
// 有符号整型转换
static char i32f32[] = "  # i32转换为f32类型\n"
                       "  fcvt.s.w fa0, a0";
static char i32f64[] = "  # i32转换为f64类型\n"
                       "  fcvt.d.w fa0, a0";
static char i32f128[] = "  # i32转换为f128类型\n"
                        "  call __floatsitf@plt";

// 先逻辑左移N位，再算术右移N位，就实现了将64位有符号数转换为64-N位的有符号数
static char i64i8[] = "  # 转换为i8类型\n"
                      "  slli a0, a0, 56\n"
                      "  srai a0, a0, 56";
static char i64i16[] = "  # 转换为i16类型\n"
                       "  slli a0, a0, 48\n"
                       "  srai a0, a0, 48";
static char i64i32[] = "  # 转换为i32类型\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";

// 先逻辑左移N位，再逻辑右移N位，就实现了将64位无符号数转换为64-N位的无符号数
static char i64u8[] = "  # 转换为u8类型\n"
                      "  slli a0, a0, 56\n"
                      "  srli a0, a0, 56";
static char i64u16[] = "  # 转换为u16类型\n"
                       "  slli a0, a0, 48\n"
                       "  srli a0, a0, 48";
static char i64u32[] = "  # 转换为u32类型\n"
                       "  slli a0, a0, 32\n"
                       "  srli a0, a0, 32";

// 有符号整型转换为浮点数
static char i64f32[] = "  # i64转换为f32类型\n"
                       "  fcvt.s.l fa0, a0";
static char i64f64[] = "  # i64转换为f64类型\n"
                       "  fcvt.d.l fa0, a0";
static char i64f128[] = "  # i64转换为f128类型\n"
                        "  call __floatditf@plt";

// 无符号整型转换
static char u32f32[] = "  # u32转换为f32类型\n"
                       "  fcvt.s.wu fa0, a0";
static char u32f64[] = "  # u32转换为f64类型\n"
                       "  fcvt.d.wu fa0, a0";
static char u32f128[] = "  # u32转换为f128类型\n"
                        "  call __floatunsitf@plt";

static char u32i64[] = "  # u32转换为i64类型\n"
                       "  slli a0, a0, 32\n"
                       "  srli a0, a0, 32";

// 无符号整型转换为浮点数
static char u64f32[] = "  # u64转换为f32类型\n"
                       "  fcvt.s.lu fa0, a0";
static char u64f64[] = "  # u64转换为f64类型\n"
                       "  fcvt.d.lu fa0, a0";
static char u64f128[] = "  # u64转换为f128类型\n"
                        "  call __floatunditf@plt";

// 单精度浮点数转换为整型
static char f32i8[] = "  # f32转换为i8类型\n"
                      "  fcvt.w.s a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srai a0, a0, 56";
static char f32i16[] = "  # f32转换为i16类型\n"
                       "  fcvt.w.s a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srai a0, a0, 48";
static char f32i32[] = "  # f32转换为i32类型\n"
                       "  fcvt.w.s a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f32i64[] = "  # f32转换为i64类型\n"
                       "  fcvt.l.s a0, fa0, rtz";

// 单精度浮点数转换为无符号浮点数
static char f32u8[] = "  # f32转换为u8类型\n"
                      "  fcvt.wu.s a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srli a0, a0, 56";
static char f32u16[] = "  # f32转换为u16类型\n"
                       "  fcvt.wu.s a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srli a0, a0, 48\n";
static char f32u32[] = "  # f32转换为u32类型\n"
                       "  fcvt.wu.s a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f32u64[] = "  # f32转换为u64类型\n"
                       "  fcvt.lu.s a0, fa0, rtz";

// 单精度转换为双精度浮点数
static char f32f64[] = "  # f32转换为f64类型\n"
                       "  fcvt.d.s fa0, fa0";
static char f32f128[] = "  # f32转换为f128类型\n"
                        "  call __extendsftf2@plt";

// 双精度浮点数转换为整型
static char f64i8[] = "  # f64转换为i8类型\n"
                      "  fcvt.w.d a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srai a0, a0, 56";
static char f64i16[] = "  # f64转换为i16类型\n"
                       "  fcvt.w.d a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srai a0, a0, 48";
static char f64i32[] = "  # f64转换为i32类型\n"
                       "  fcvt.w.d a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f64i64[] = "  # f64转换为i64类型\n"
                       "  fcvt.l.d a0, fa0, rtz";

// 双精度浮点数转换为无符号整型
static char f64u8[] = "  # f64转换为u8类型\n"
                      "  fcvt.wu.d a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srli a0, a0, 56";
static char f64u16[] = "  # f64转换为u16类型\n"
                       "  fcvt.wu.d a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srli a0, a0, 48";
static char f64u32[] = "  # f64转换为u32类型\n"
                       "  fcvt.wu.d a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f64u64[] = "  # f64转换为u64类型\n"
                       "  fcvt.lu.d a0, fa0, rtz";

// 双精度转换为单精度浮点数
static char f64f32[] = "  # f64转换为f32类型\n"
                       "  fcvt.s.d fa0, fa0";

static char f64f128[] = "  # f64转换为f128类型\n"
                        "  call __extenddftf2@plt";

// long double转换
static char f128i8[] = "  # f128转换为i8类型\n"
                       "  call __fixtfsi@plt\n"
                       "  slli a0, a0, 56\n"
                       "  srai a0, a0, 56";

static char f128i16[] = "  # f128转换为i16类型\n"
                        "  call __fixtfsi@plt\n"
                        "  slli a0, a0, 48\n"
                        "  srai a0, a0, 48";

static char f128i32[] = "  # f128转换为i32类型\n"
                        "  call __fixtfsi@plt\n"
                        "  slli a0, a0, 32\n"
                        "  srai a0, a0, 32";

static char f128i64[] = "  # f128转换为i64类型\n"
                        "  call __fixtfdi@plt";

static char f128u8[] = "  # f128转换为u8类型\n"
                       "  call __fixunstfsi@plt\n"
                       "  slli a0, a0, 56\n"
                       "  srli a0, a0, 56";

static char f128u16[] = "  # f128转换为u16类型\n"
                        "  call __fixunstfsi@plt\n"
                        "  slli a0, a0, 48\n"
                        "  srli a0, a0, 48";

static char f128u32[] = "  # f128转换为u32类型\n"
                        "  call __fixunstfsi@plt\n"
                        "  slli a0, a0, 32\n"
                        "  srai a0, a0, 32";

static char f128u64[] = "  # f128转换为u64类型\n"
                        "  call __fixunstfdi@plt";

static char f128f32[] = "  # f128转换为f32类型\n"
                        "  call __trunctfsf2@plt";

static char f128f64[] = "  # f128转换为f64类型\n"
                        "  call __trunctfdf2@plt";

// 所有类型转换表
static char *castTable[11][11] = {
    // clang-format off

  // 被映射到
  // {i8,  i16,     i32,     i64,     u8,     u16,     u32,     u64,     f32,     f64,     f128}
  {NULL,   NULL,    NULL,    NULL,    i64u8,  i64u16,  i64u32,  NULL,    i32f32,  i32f64,  i32f128}, // 从i8转换
  {i64i8,  NULL,    NULL,    NULL,    i64u8,  i64u16,  i64u32,  NULL,    i32f32,  i32f64,  i32f128}, // 从i16转换
  {i64i8,  i64i16,  NULL,    NULL,    i64u8,  i64u16,  i64u32,  NULL,    i32f32,  i32f64,  i32f128}, // 从i32转换
  {i64i8,  i64i16,  i64i32,  NULL,    i64u8,  i64u16,  i64u32,  NULL,    i64f32,  i64f64,  i64f128}, // 从i64转换

  {i64i8,  NULL,    NULL,    NULL,    NULL,   NULL,    NULL,    NULL,    u32f32,  u32f64,  u32f128}, // 从u8转换
  {i64i8,  i64i16,  NULL,    NULL,    i64u8,  NULL,    NULL,    NULL,    u32f32,  u32f64,  u32f128}, // 从u16转换
  {i64i8,  i64i16,  i64i32,  u32i64,  i64u8,  i64u16,  NULL,    u32i64,  u32f32,  u32f64,  u32f128}, // 从u32转换
  {i64i8,  i64i16,  i64i32,  NULL,    i64u8,  i64u16,  i64u32,  NULL,    u64f32,  u64f64,  u64f128}, // 从u64转换

  {f32i8,  f32i16,  f32i32,  f32i64,  f32u8,  f32u16,  f32u32,  f32u64,  NULL,    f32f64,  f32f128}, // 从f32转换
  {f64i8,  f64i16,  f64i32,  f64i64,  f64u8,  f64u16,  f64u32,  f64u64,  f64f32,  NULL,    f64f128}, // 从f64转换
  {f128i8, f128i16, f128i32, f128i64, f128u8, f128u16, f128u32, f128u64, f128f32, f128f64, NULL},    // 从f128转换

    // clang-format on
};

// 类型转换
static void cast(Type *From, Type *To) {
  if (To->Kind == TY_VOID)
    return;

  if (To->Kind == TY_BOOL) {
    notZero(From);
    printLn("  # 转为bool类型：为0置0，非0置1");
    printLn("  snez a0, a0");
    return;
  }

  // 获取类型的枚举值
  int T1 = getTypeId(From);
  int T2 = getTypeId(To);
  if (castTable[T1][T2]) {
    printLn("  # 转换函数");
    if (T1 == F128)
      popLD(0);
    printLn("%s", castTable[T1][T2]);
    if (T2 == F128)
      pushLD();
  }
}

// 获取浮点结构体的成员类型
void getFloStMemsTy(Type *Ty, Type **RegsTy, int *Idx) {
  switch (Ty->Kind) {
  case TY_STRUCT:
    // 遍历结构体的成员，获取成员类型
    for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next)
      getFloStMemsTy(Mem->Ty, RegsTy, Idx);
    return;
  case TY_UNION:
    // 含有联合体不是浮点结构体
    *Idx += 2;
    return;
  case TY_LDOUBLE:
    // long double不是浮点结构体
    *Idx += 2;
    return;
  case TY_ARRAY:
    // 遍历数组的成员，计算是否为浮点结构体
    for (int I = 0; I < Ty->ArrayLen; ++I)
      getFloStMemsTy(Ty->Base, RegsTy, Idx);
    return;
  default:
    // 若为基础类型，且存在可用寄存器时，填充成员的类型
    if (*Idx < 2)
      RegsTy[*Idx] = Ty;
    *Idx += 1;
    return;
  }
}

// 是否为一或两个含浮点成员变量的结构体
void setFloStMemsTy(Type **Ty, int GP, int FP) {
  Type *T = *Ty;
  T->FSReg1Ty = TyVoid;
  T->FSReg2Ty = TyVoid;

  // 联合体不通过浮点寄存器传递
  if (T->Kind == TY_UNION)
    return;

  // RTy：RegsType，结构体的第一、二个寄存器的类型
  Type *RTy[2] = {TyVoid, TyVoid};
  // 记录可以使用的寄存器的索引值
  int RegsTyIdx = 0;
  // 获取浮点结构体的寄存器类型，如果不是则为TyVoid
  getFloStMemsTy(T, RTy, &RegsTyIdx);

  // 不是浮点结构体，直接退出
  if (RegsTyIdx > 2)
    return;

  if ( // 只有一个浮点成员的结构体，使用1个FP
      (isSFloNum(RTy[0]) && RTy[1] == TyVoid && FP < FP_MAX) ||
      // 一个浮点成员和一个整型成员的结构体，使用1个FP和1个GP
      (isSFloNum(RTy[0]) && isInteger(RTy[1]) && FP < FP_MAX && GP < GP_MAX) ||
      (isInteger(RTy[0]) && isSFloNum(RTy[1]) && FP < FP_MAX && GP < GP_MAX) ||
      // 两个浮点成员的结构体，使用2个FP
      (isSFloNum(RTy[0]) && isSFloNum(RTy[1]) && FP + 1 < FP_MAX)) {
    T->FSReg1Ty = RTy[0];
    T->FSReg2Ty = RTy[1];
  }
}

// 为大结构体开辟空间
static int createBSSpace(Node *Args) {
  int BSStack = 0;
  for (Node *Arg = Args; Arg; Arg = Arg->Next) {
    Type *Ty = Arg->Ty;
    // 大于16字节的结构体
    if (Ty->Size > 16 && Ty->Kind == TY_STRUCT) {
      printLn("  # 大于16字节的结构体，先开辟相应的栈空间");
      int Sz = alignTo(Ty->Size, 8);
      printLn("  addi sp, sp, -%d", Sz);
      // t6指向了最终的 大结构体空间的起始位置
      printLn("  mv t6, sp");
      Depth += Sz / 8;
      BSStack += Sz / 8;
      BSDepth += Sz / 8;
    }
  }
  return BSStack;
}

// 传递结构体的指针
static void pushStruct(Type *Ty) {
  // 大于16字节的结构体
  if (Ty->Size > 16) {
    // 将结构体复制一份到栈中，然后通过寄存器或栈传递被复制结构体的地址
    // ---------------------------------
    //             大结构体      ←
    // --------------------------------- <- t6
    //      栈传递的   其他变量
    // ---------------------------------
    //            大结构体的指针  ↑
    // --------------------------------- <- sp

    // 计算大结构体的偏移量
    int Sz = alignTo(Ty->Size, 8);
    // BSDepth记录了剩余 大结构体的字节数
    BSDepth -= Sz / 8;
    // t6存储了，大结构体空间的起始位置
    int BSOffset = BSDepth * 8;

    printLn("  # 复制%d字节的大结构体到%d(t6)的位置", Sz, BSOffset);
    for (int I = 0; I < Sz; I++) {
      printLn("  lb t0, %d(a0)", I);
      printLn("  sb t0, %d(t6)", BSOffset + I);
    }

    printLn("  # 大于16字节的结构体，对该结构体地址压栈");
    printLn("  addi a0, t6, %d", BSOffset);
    push();
    return;
  }

  // 含有两个成员（含浮点）的结构体
  // 展开到栈内的两个8字节的空间
  if ((isSFloNum(Ty->FSReg1Ty) && Ty->FSReg2Ty != TyVoid) ||
      isSFloNum(Ty->FSReg2Ty)) {
    printLn("  # 对含有两个成员（含浮点）结构体进行压栈");
    printLn("  addi sp, sp, -16");
    Depth += 2;

    printLn("  ld t0, 0(a0)");
    printLn("  sd t0, 0(sp)");

    // 计算第二部分在结构体中的偏移量，为两个成员间的最大尺寸
    int Off = MAX(Ty->FSReg1Ty->Size, Ty->FSReg2Ty->Size);
    printLn("  ld t0, %d(a0)", Off);
    printLn("  sd t0, 8(sp)");

    return;
  }
  // 处理只有一个浮点成员的结构体
  // 或者是小于16字节的结构体
  char *Str = isSFloNum(Ty->FSReg1Ty) ? "只有一个浮点" : "小于16字节";
  int Sz = alignTo(Ty->Size, 8);
  printLn("  # 为%s的结构体开辟%d字节的空间，", Str, Sz);
  printLn("  addi sp, sp, -%d", Sz);
  Depth += Sz / 8;

  printLn("  # 开辟%d字节的空间，复制%s的内存", Sz, Str);
  for (int I = 0; I < Ty->Size; I++) {
    printLn("  lb t0, %d(a0)", I);
    printLn("  sb t0, %d(sp)", I);
  }
  return;
}

// 将函数实参计算后压入栈中
static void pushArgs2(Node *Args, bool FirstPass) {
  // 参数为空直接返回
  if (!Args)
    return;

  // 递归到最后一个实参进行
  pushArgs2(Args->Next, FirstPass);

  // 第一遍对栈传递的变量进行压栈
  // 第二遍对寄存器传递的变量进行压栈
  if ((FirstPass && !Args->PassByStack) ||
      (!FirstPass && Args->PassByStack))
    return;

  printLn("\n  # ↓对表达式进行计算，然后压栈↓");
  // 计算出表达式
  genExpr(Args);
  // 根据表达式结果的类型进行压栈
  switch (Args->Ty->Kind) {
  case TY_STRUCT:
  case TY_UNION:
    pushStruct(Args->Ty);
    break;
  case TY_FLOAT:
  case TY_DOUBLE:
    pushF();
    break;
  case TY_LDOUBLE:
    printLn("  # 对long double参数表达式进行计算后压栈");
    LDSP -= 2;
    printLn("  addi sp, sp, -16");
    printLn("  fsd fs%d, 8(sp)", LDSP + 1);
    printLn("  fsd fs%d, 0(sp)", LDSP);
    Depth += 2;
    break;
  default:
    push();
  }
  printLn("  # ↑结束压栈↑");
}

// 处理参数后进行压栈
static int pushArgs(Node *Nd) {
  int Stack = 0, GP = 0, FP = 0;

  // 如果是超过16字节的结构体，则通过第一个寄存器传递结构体的指针
  if (Nd->RetBuffer && Nd->Ty->Size > 16)
    GP++;

  // 遍历所有参数，优先使用寄存器传递，然后是栈传递
  Type *CurArg = Nd->FuncType->Params;
  for (Node *Arg = Nd->Args; Arg; Arg = Arg->Next) {
    // 如果是可变参数的参数，只使用整型寄存器和栈传递
    if (Nd->FuncType->IsVariadic && CurArg == NULL) {
      int64_t Val = Arg->Val ? Arg->Val : Arg->FVal;
      if (GP < GP_MAX) {
        printLn("  # 可变参数%ld值通过a%d传递", Val, GP);
        GP++;
      } else {
        printLn("  # 可变参数%ld值通过栈传递", Val);
        Arg->PassByStack = true;
        Stack++;
      }
      continue;
    }

    // 遍历相应的实参，用于检查是不是到了可变参数
    CurArg = CurArg->Next;

    // 读取实参的类型
    Type *Ty = Arg->Ty;

    switch (Ty->Kind) {
    case TY_STRUCT:
    case TY_UNION: {
      // 判断结构体的类型
      setFloStMemsTy(&Ty, GP, FP);
      // 处理一或两个浮点成员变量的结构体
      if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
        Type *Regs[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
        for (int I = 0; I < 2; ++I) {
          if (isSFloNum(Regs[I]))
            FP++;
          if (isInteger(Regs[I]))
            GP++;
        }
        break;
      }

      // 9~16字节整型结构体用两个寄存器，其他字节结构体用一个寄存器
      int Regs = (8 < Ty->Size && Ty->Size <= 16) ? 2 : 1;
      for (int I = 1; I <= Regs; ++I) {
        if (GP < GP_MAX) {
          GP++;
        } else {
          Arg->PassByStack = true;
          Stack++;
        }
      }
      break;
    }
    case TY_FLOAT:
    case TY_DOUBLE:
      // 浮点优先使用FP，而后是GP，最后是栈传递
      if (FP < FP_MAX) {
        printLn("  # 浮点%Lf值通过fa%d传递", Arg->FVal, FP);
        FP++;
      } else if (GP < GP_MAX) {
        printLn("  # 浮点%Lf值通过a%d传递", Arg->FVal, GP);
        GP++;
      } else {
        printLn("  # 浮点%Lf值通过栈传递", Arg->FVal);
        Arg->PassByStack = true;
        Stack++;
      }
      break;
    case TY_LDOUBLE:
      for (int I = 1; I <= 2; ++I) {
        if (GP < GP_MAX) {
          printLn("  # LD的第%d部分%Lf值通过a%d传递", I, Arg->FVal, GP);
          GP++;
        } else {
          printLn("  # LD的第%d部分%Lf值通过栈传递", I, Arg->FVal);
          Stack++;
        }
      }
      break;
    default:
      // 整型优先使用GP，最后是栈传递
      if (GP < GP_MAX) {
        printLn("  # 整型%ld值通过a%d传递", Arg->Val, GP);
        GP++;
      } else {
        printLn("  # 整型%ld值通过栈传递", Arg->Val);
        Arg->PassByStack = true;
        Stack++;
      }
      break;
    }
  }

  // 对齐栈边界
  if ((Depth + Stack) % 2 == 1) {
    printLn("  # 对齐栈边界到16字节");
    printLn("  addi sp, sp, -8");
    Depth++;
    Stack++;
  }

  // 进行压栈
  // 开辟大于16字节的结构体的栈空间
  int BSStack = createBSSpace(Nd->Args);
  // 第一遍对栈传递的变量进行压栈
  pushArgs2(Nd->Args, true);
  // 第二遍对寄存器传递的变量进行压栈
  pushArgs2(Nd->Args, false);
  // 返回栈传递参数的个数

  if (Nd->RetBuffer && Nd->Ty->Size > 16) {
    printLn("  # 返回类型是大于16字节的结构体，指向其的指针，压入栈顶");
    printLn("  li t0, %d", Nd->RetBuffer->Offset);
    printLn("  add a0, fp, t0");
    push();
  }

  return Stack + BSStack;
}

// 复制结构体返回值到缓冲区中
static void copyRetBuffer(Obj *Var) {
  Type *Ty = Var->Ty;
  int GP = 0, FP = 0;

  setFloStMemsTy(&Ty, GP, FP);

  printLn("  # 拷贝到返回缓冲区");
  printLn("  # 加载struct地址到t0");
  printLn("  li t0, %d", Var->Offset);
  printLn("  add t1, fp, t0");

  // 处理浮点结构体的情况
  if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
    int Off = 0;
    Type *RTys[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
    for (int I = 0; I < 2; ++I) {
      switch (RTys[I]->Kind) {
      case TY_FLOAT:
        printLn("  fsw fa%d, %d(t1)", FP++, Off);
        Off = 4;
        break;
      case TY_DOUBLE:
        printLn("  fsd fa%d, %d(t1)", FP++, Off);
        Off = 8;
        break;
      case TY_VOID:
        break;
      default:
        printLn("  sd a%d, %d(t1)", GP++, Off);
        Off = 8;
        break;
      }
    }
    return;
  }

  printLn("  # 复制整型结构体返回值到缓冲区中");
  for (int Off = 0; Off < Ty->Size; Off += 8) {
    switch (Ty->Size - Off) {
    case 1:
      printLn("  sb a%d, %d(t1)", GP++, Off);
      break;
    case 2:
      printLn("  sh a%d, %d(t1)", GP++, Off);
      break;
    case 3:
    case 4:
      printLn("  sw a%d, %d(t1)", GP++, Off);
      break;
    default:
      printLn("  sd a%d, %d(t1)", GP++, Off);
      break;
    }
  }
}

// 拷贝结构体的寄存器
static void copyStructReg(void) {
  Type *Ty = CurrentFn->Ty->ReturnTy;
  int GP = 0, FP = 0;

  printLn("  # 复制结构体寄存器");
  printLn("  # 读取寄存器，写入存有struct地址的0(t1)中");
  printLn("  mv t1, a0");

  setFloStMemsTy(&Ty, GP, FP);

  if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
    int Off = 0;
    Type *RTys[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
    for (int I = 0; I < 2; ++I) {
      switch (RTys[I]->Kind) {
      case TY_FLOAT:
        printLn("  flw fa%d, %d(t1)", FP++, Off);
        Off = 4;
        break;
      case TY_DOUBLE:
        printLn("  fld fa%d, %d(t1)", FP++, Off);
        Off = 8;
        break;
      case TY_VOID:
        break;
      default:
        printLn("  ld a%d, %d(t1)", GP++, Off);
        Off = 8;
        break;
      }
    }
    return;
  }

  printLn("  # 复制返回的整型结构体的值");
  for (int Off = 0; Off < Ty->Size; Off += 8) {
    switch (Ty->Size - Off) {
    case 1:
      printLn("  lb a%d, %d(t1)", GP++, Off);
      break;
    case 2:
      printLn("  lh a%d, %d(t1)", GP++, Off);
      break;
    case 3:
    case 4:
      printLn("  lw a%d, %d(t1)", GP++, Off);
      break;
    default:
      printLn("  ld a%d, %d(t1)", GP++, Off);
      break;
    }
  }
}

// 大于16字节的结构体返回值，需要拷贝内存
static void copyStructMem(void) {
  Type *Ty = CurrentFn->Ty->ReturnTy;
  // 第一个参数，调用者的缓冲区指针
  Obj *Var = CurrentFn->Params;

  printLn("  # 复制大于16字节结构体内存");
  printLn("  # 将栈内struct地址存入t1，调用者的结构体的地址");
  printLn("  li t0, %d", Var->Offset);
  printLn("  add t0, fp, t0");
  printLn("  ld t1, 0(t0)");

  printLn("  # 遍历结构体并从a0位置复制所有字节到t1");
  for (int I = 0; I < Ty->Size; I++) {
    printLn("  lb t0, %d(a0)", I);
    printLn("  sb t0, %d(t1)", I);
  }
}

// 开辟Alloca空间
static void builtinAlloca(void) {
  // 对齐需要的空间t1到16字节
  //
  // 加上15，然后去除最低位的十六进制数
  printLn("  addi t1, t1, 15");
  printLn("  andi t1, t1, -16");

  // 注意t2与t1大小不定，仅为示例
  // ----------------------------- 旧sp（AllocaBottom所存的sp）
  // - - - - - - - - - - - - - - -
  //  需要在此开辟大小为t1的Alloca区域
  // - - - - - - - - - - - - - - -
  //            ↑
  //    t2（旧sp和新sp间的距离）
  //            ↓
  // ----------------------------- 新sp ← sp

  // 根据t1的值，提升临时区域
  //
  // 加载 旧sp 到t2中
  printLn("  li t0, %d", CurrentFn->AllocaBottom->Offset);
  printLn("  add t0, fp, t0");
  printLn("  ld t2, 0(t0)");
  // t2=旧sp-新sp，将二者的距离存入t2
  printLn("  sub t2, t2, sp");

  // 保存 新sp 存入a0
  printLn("  mv a0, sp");
  // 新sp 开辟（减去）所需要的空间数，结果存入 sp
  // 并将 新sp开辟空间后的栈顶 同时存入t3
  printLn("  sub sp, sp, t1");
  printLn("  mv t3, sp");

  // 注意t2与t1大小不定，仅为示例
  // ----------------------------- 旧sp（AllocaBottom所存的sp）
  //              ↑
  //      t2（旧sp和新sp间的距离）
  //              ↓
  // ----------------------------- 新sp  ← a0
  //              ↑
  //     t1（Alloca所需要的空间数）
  //              ↓
  // ----------------------------- 新新sp ← sp,t3

  // 将 新sp内（底部和顶部间的）数据，复制到 新sp的顶部之上
  printLn("1:");
  // t2为0时跳转到标签2，结束复制
  printLn("beqz t2, 2f");
  // 将 新sp底部 内容复制到 新sp顶部之上
  printLn("  lb t0, 0(a0)");
  printLn("  sb t0, 0(t3)");
  printLn("  addi a0, a0, 1");
  printLn("  addi t3, t3, 1");
  printLn("  addi t2, t2, -1");
  printLn("  j 1b");
  printLn("2:");

  // 注意t2与t1大小不定，仅为示例
  // ------------------------------ 旧sp   a0
  //             ↑                         ↓
  //       t1（Alloca区域）
  //             ↓
  // ------------------------------ 新sp ← a0
  //             ↑
  //  t2（旧sp和新sp间的内容，复制到此）
  //             ↓
  // ------------------------------ 新新sp ← sp

  // 移动alloca_bottom指针
  //
  // 加载 旧sp 到 a0
  printLn("  li t0, %d", CurrentFn->AllocaBottom->Offset);
  printLn("  add t0, fp, t0");
  printLn("  ld a0, 0(t0)");
  // 旧sp 减去开辟的空间 t1
  printLn("  sub a0, a0, t1");
  // 存储a0到alloca底部地址
  printLn("sd a0, 0(t0)");
}

// 生成表达式
static void genExpr(Node *Nd) {
  // .loc 文件编号 行号
  if (OptDebug)
    printLn("  .loc %d %d", Nd->Tok->File->FileNo, Nd->Tok->LineNo);

  // 生成各个根节点
  switch (Nd->Kind) {
  // 空表达式
  case ND_NULL_EXPR:
    return;
  // 加载数字到a0

  // float和uint32、double和uint64 共用一份内存空间
  case ND_NUM: {
    switch (Nd->Ty->Kind) {
    case TY_FLOAT: {
      union {
        float F32;
        uint32_t U32;
      } U;
      U.F32 = Nd->FVal;
      printLn("  # 将a0转换到float类型值为%Lf的fa0中", Nd->FVal);
      printLn("  li a0, %u  # float %Lf", U.U32, Nd->FVal);
      printLn("  fmv.w.x fa0, a0");
      return;
    }
    case TY_DOUBLE: {
      union {
        double F64;
        uint64_t U64;
      } U;
      printLn("  # 将a0转换到double类型值为%Lf的fa0中", Nd->FVal);
      U.F64 = Nd->FVal;
      printLn("  li a0, %lu  # double %Lf", U.U64, Nd->FVal);
      printLn("  fmv.d.x fa0, a0");
      return;
    }
    case TY_LDOUBLE: {
#ifdef __riscv
      union {
        long double F128;
        uint64_t U64[2];
      } U;
      memset(&U, 0, sizeof(U));
      U.F128 = Nd->FVal;
      printLn("  # 将long double类型的%Lf值，压入LD栈中", Nd->FVal);
      printLn("  li a0, 0x%016lx  # long double %Lf", U.U64[0], Nd->FVal);
      printLn("  fmv.d.x fs%d, a0", LDSP);

      printLn("  li a0, 0x%016lx", U.U64[1]);
      printLn("  fmv.d.x fs%d, a0", LDSP + 1);
      LDSP += 2;
      return;
#endif // __riscv
#ifdef __x86_64
      // 【注意】交叉环境当中，x86_64的long double是f80而非f128
      // 因而此处的支持仅供交叉测试，存在f80->f64的精度的丢失！
      union {
        double F64;
        uint64_t U64;
      } U = {Nd->FVal};
      printLn("  # 【注意】此处存在f80->f64的精度丢失！！！");
      printLn("  # 将long double类型的%Lf值，压入LD栈中", Nd->FVal);
      printLn("  li a0, %lu  # double %Lf", U.U64, Nd->FVal);
      printLn("  fmv.d.x fa0, a0");
      printLn("  call __extenddftf2@plt");
      pushLD();
      return;
#endif // __x86_64
    }
    default:
      printLn("  # 将%ld加载到a0中", Nd->Val);
      printLn("  li a0, %ld", Nd->Val);
      return;
    }
  }
  // 对寄存器取反
  case ND_NEG:
    // 计算左部的表达式
    genExpr(Nd->LHS);

    switch (Nd->Ty->Kind) {
    case TY_FLOAT:
      printLn("  # 对float类型的fa0值进行取反");
      printLn("  fneg.s fa0, fa0");
      return;
    case TY_DOUBLE:
      printLn("  # 对double类型的fa0值进行取反");
      printLn("  fneg.d fa0, fa0");
      return;
    case TY_LDOUBLE:
      printLn("  # 对long double类型的LD栈顶值进行取反");
      printLn("  li t0, -1");
      printLn("  slli t0, t0, 63");
      printLn("  xor a%d, a%d, t0", LDSP + 1, LDSP + 1);
      return;
    default:
      // neg a0, a0是sub a0, x0, a0的别名, 即a0=0-a0
      printLn("  # 对a0值进行取反");
      printLn("  neg%s a0, a0", Nd->Ty->Size <= 4 ? "w" : "");
      return;
    }
  // 变量
  case ND_VAR:
    // 计算出变量的地址，然后存入a0
    genAddr(Nd);
    load(Nd->Ty);
    return;
  // 成员变量
  case ND_MEMBER: {
    // 计算出成员变量的地址，然后存入a0
    genAddr(Nd);
    load(Nd->Ty);

    Member *Mem = Nd->Mem;
    if (Mem->IsBitfield) {
      printLn("  # 清除位域的成员变量（%d位）未用到的位", Mem->BitWidth);
      // 清除位域成员变量未用到的高位
      printLn("  slli a0, a0, %d", 64 - Mem->BitWidth - Mem->BitOffset);
      // 清除位域成员变量未用到的低位
      if (Mem->Ty->IsUnsigned)
        printLn("  srli a0, a0, %d", 64 - Mem->BitWidth);
      else
        printLn("  srai a0, a0, %d", 64 - Mem->BitWidth);
    }
    return;
  }
  // 解引用
  case ND_DEREF:
    genExpr(Nd->LHS);
    load(Nd->Ty);
    return;
  // 取地址
  case ND_ADDR:
    genAddr(Nd->LHS);
    return;
  // 赋值
  case ND_ASSIGN:
    // 左部是左值，保存值到的地址
    genAddr(Nd->LHS);
    push();
    // 右部是右值，为表达式的值
    genExpr(Nd->RHS);

    // 如果是位域成员变量，需要先从内存中读取当前值，然后合并到新值中
    if (Nd->LHS->Kind == ND_MEMBER && Nd->LHS->Mem->IsBitfield) {
      printLn("\n  # 位域成员变量进行赋值↓");
      printLn("  # 备份需要赋的a0值");
      printLn("  mv t2, a0");

      printLn("  # 计算位域成员变量的新值：");
      Member *Mem = Nd->LHS->Mem;
      // 将需要赋的值a0存入t1
      printLn("  mv t1, a0");
      // 构造一个和位域成员长度相同，全为1的二进制数
      printLn("  li t0, %ld", (1L << Mem->BitWidth) - 1);
      // 取交之后，位域长度的低位，存储了我们需要的值，其他位都为0
      printLn("  and t1, t1, t0");
      // 然后将该值左移，相应的位偏移量中
      // 此时我们所需要的位域数值已经处于正确的位置，且其他位置都为0
      printLn("  slli t1, t1, %d", Mem->BitOffset);

      printLn("  # 读取位域当前值：");
      // 将位域值保存的地址加载进来
      printLn("  ld a0, 0(sp)");
      // 读取该地址的值
      load(Mem->Ty);

      printLn("  # 写入成员变量新值到位域当前值中：");
      // 位域值对应的掩码，即t1需要写入的位置
      // 掩码位都为1，其余位为0
      long Mask = ((1L << Mem->BitWidth) - 1) << Mem->BitOffset;
      // 对掩码取反，此时，其余位都为1，掩码位都为0
      printLn("  li t0, %ld", ~Mask);
      // 取交，保留除掩码位外所有的位
      printLn("  and a0, a0, t0");
      // 取或，将成员变量的新值写入到掩码位
      printLn("  or a0, a0, t1");

      store(Nd->Ty);
      printLn("  # 恢复需要赋的a0值作为返回值");
      printLn("  mv a0, t2");
      printLn("  # 完成位域成员变量的赋值↑\n");
      return;
    }

    store(Nd->Ty);
    return;
  // 语句表达式
  case ND_STMT_EXPR:
    for (Node *N = Nd->Body; N; N = N->Next)
      genStmt(N);
    return;
  // 逗号
  case ND_COMMA:
    genExpr(Nd->LHS);
    genExpr(Nd->RHS);
    return;
  // 类型转换
  case ND_CAST:
    genExpr(Nd->LHS);
    cast(Nd->LHS->Ty, Nd->Ty);
    return;
  // 内存清零
  case ND_MEMZERO: {
    printLn("  # 对%s的内存%d(fp)清零%d位", Nd->Var->Name, Nd->Var->Offset,
            Nd->Var->Ty->Size);
    // 对栈内变量所占用的每个字节都进行清零
    for (int I = 0; I < Nd->Var->Ty->Size; I++) {
      printLn("  li t0, %d", Nd->Var->Offset + I);
      printLn("  add t0, fp, t0");
      printLn("  sb zero, 0(t0)");
    }
    return;
  }
  // 条件运算符
  case ND_COND: {
    int C = count();
    printLn("\n# =====条件运算符%d===========", C);
    genExpr(Nd->Cond);
    notZero(Nd->Cond->Ty);
    printLn("  # 条件判断，为0则跳转");
    printLn("  beqz a0, .L.else.%d", C);
    genExpr(Nd->Then);
    printLn("  # 跳转到条件运算符结尾部分");
    printLn("  j .L.end.%d", C);
    printLn(".L.else.%d:", C);
    genExpr(Nd->Els);
    printLn(".L.end.%d:", C);
    return;
  }
  // 非运算
  case ND_NOT:
    genExpr(Nd->LHS);
    notZero(Nd->LHS->Ty);
    printLn("  # 非运算");
    // a0=0则置1，否则为0
    printLn("  seqz a0, a0");
    return;
  // 逻辑与
  case ND_LOGAND: {
    int C = count();
    printLn("\n# =====逻辑与%d===============", C);
    genExpr(Nd->LHS);
    // 判断是否为短路操作
    notZero(Nd->LHS->Ty);
    printLn("  # 左部短路操作判断，为0则跳转");
    printLn("  beqz a0, .L.false.%d", C);
    genExpr(Nd->RHS);
    notZero(Nd->RHS->Ty);
    printLn("  # 右部判断，为0则跳转");
    printLn("  beqz a0, .L.false.%d", C);
    printLn("  li a0, 1");
    printLn("  j .L.end.%d", C);
    printLn(".L.false.%d:", C);
    printLn("  li a0, 0");
    printLn(".L.end.%d:", C);
    return;
  }
  // 逻辑或
  case ND_LOGOR: {
    int C = count();
    printLn("\n# =====逻辑或%d===============", C);
    genExpr(Nd->LHS);
    notZero(Nd->LHS->Ty);
    // 判断是否为短路操作
    printLn("  # 左部短路操作判断，不为0则跳转");
    printLn("  bnez a0, .L.true.%d", C);
    genExpr(Nd->RHS);
    notZero(Nd->RHS->Ty);
    printLn("  # 右部判断，不为0则跳转");
    printLn("  bnez a0, .L.true.%d", C);
    printLn("  li a0, 0");
    printLn("  j .L.end.%d", C);
    printLn(".L.true.%d:", C);
    printLn("  li a0, 1");
    printLn(".L.end.%d:", C);
    return;
  }
  // 按位取非运算
  case ND_BITNOT:
    genExpr(Nd->LHS);
    printLn("  # 按位取反");
    // 这里的 not a0, a0 为 xori a0, a0, -1 的伪码
    printLn("  not a0, a0");
    return;
  // 函数调用
  case ND_FUNCALL: {
    // 对alloca函数进行处理
    if (Nd->LHS->Kind == ND_VAR && !strcmp(Nd->LHS->Var->Name, "alloca")) {
      // 解析alloca函数的参数，确定开辟空间的字节数
      genExpr(Nd->Args);
      // 将需要的字节数存入t1
      printLn("  mv t1, a0");
      // 生成Alloca函数汇编
      builtinAlloca();
      return;
    }

    // 计算所有参数的值，正向压栈
    // 此处获取到栈传递参数的数量
    int StackArgs = pushArgs(Nd);
    genExpr(Nd->LHS);
    // 将a0的值存入t5
    printLn("  mv t5, a0");

    // 反向弹栈，a0->参数1，a1->参数2……
    int GP = 0, FP = 0;

    if (Nd->RetBuffer && Nd->Ty->Size > 16) {
      printLn("  # 返回结构体大于16字节，那么第一个参数指向返回缓冲区");
      pop(GP++);
    }

    // 读取函数形参中的参数类型
    Type *CurArg = Nd->FuncType->Params;
    for (Node *Arg = Nd->Args; Arg; Arg = Arg->Next) {
      // 如果是可变参数函数
      // 匹配到空参数（最后一个）的时候，将剩余的整型寄存器弹栈
      if (Nd->FuncType->IsVariadic && CurArg == NULL) {
        if (GP < GP_MAX) {
          if (Arg->Ty->Kind == TY_LDOUBLE) {
            // 在可变参数函数的调用中
            // LD的第一个寄存器必须是偶数下标，即a0,a2,a4,a6
            if (GP % 2 == 1)
              GP++;
            printLn("  # long double通过a%d,a%d传递可变实参", GP, GP + 1);
            pop(GP++);
            if (GP < GP_MAX)
              pop(GP++);
          } else {
            printLn("  # a%d传递可变实参", GP);
            pop(GP++);
          }
        }
        continue;
      }

      CurArg = CurArg->Next;
      // 实参的类型
      Type *Ty = Arg->Ty;

      switch (Ty->Kind) {
      case TY_STRUCT:
      case TY_UNION: {
        // 判断结构体的类型
        // 结构体的大小
        int Sz = Ty->Size;

        // 处理一或两个浮点成员变量的结构体
        if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
          Type *Regs[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
          for (int I = 0; I < 2; ++I) {
            if (Regs[I]->Kind == TY_FLOAT) {
              printLn("  # %d字节float结构体%d通过fa%d传递", Sz, I, FP);
              printLn("  # 弹栈，将栈顶的值存入fa%d", FP);
              printLn("  flw fa%d, 0(sp)", FP++);
              printLn("  addi sp, sp, 8");
              Depth--;
            }
            if (Regs[I]->Kind == TY_DOUBLE) {
              printLn("  # %d字节double结构体%d通过fa%d传递", Sz, I, FP);
              popF(FP++);
            }
            if (isInteger(Regs[I])) {
              printLn("  # %d字节浮点结构体%d通过a%d传递", Sz, I, GP);
              pop(GP++);
            }
          }
          break;
        }

        // 其他整型结构体或多字节结构体
        // 9~16字节整型结构体用两个寄存器，其他字节结构体用一个结构体
        int Regs = (8 < Sz && Sz <= 16) ? 2 : 1;
        for (int I = 1; I <= Regs; ++I) {
          if (GP < GP_MAX) {
            printLn("  # %d字节的整型结构体%d通过a%d传递", Sz, I, GP);
            pop(GP++);
          }
        }
        break;
      }
      case TY_FLOAT:
      case TY_DOUBLE:
        if (FP < FP_MAX) {
          printLn("  # fa%d传递浮点参数", FP);
          popF(FP++);
        } else if (GP < GP_MAX) {
          printLn("  # a%d传递浮点参数", GP);
          pop(GP++);
        }
        break;
      case TY_LDOUBLE:
        if (GP == GP_MAX - 1) {
          printLn("  # a%d传递LD一半参数", GP);
          pop(GP++);
        }
        if (GP < GP_MAX - 1) {
          printLn("  # a%d传递long double第%d部分参数", GP, 1);
          pop(GP++);
          pop(GP++);
        }
        break;
      default:
        if (GP < GP_MAX) {
          printLn("  # a%d传递整型参数", GP);
          pop(GP++);
        }
        break;
      }
    }

    // 调用函数
    printLn("  # 调用函数");
    printLn("  jalr t5");

    if (Nd->Ty->Kind == TY_LDOUBLE) {
      printLn("  # 保存Long double类型函数的返回值");
      pushLD();
    }

    // 回收为栈传递的变量开辟的栈空间
    if (StackArgs) {
      // 栈的深度减去栈传递参数的字节数
      Depth -= StackArgs;
      printLn("  # 回收栈传递参数的%d个字节", StackArgs * 8);
      printLn("  addi sp, sp, %d", StackArgs * 8);
      // 清除记录的大结构体的数量
      BSDepth = 0;
    }

    // 清除寄存器中高位无关的数据
    switch (Nd->Ty->Kind) {
    case TY_BOOL:
      printLn("  # 清除bool类型的高位");
      printLn("  slli a0, a0, 63");
      printLn("  srli a0, a0, 63");
      return;
    case TY_CHAR:
      printLn("  # 清除char类型的高位");
      if (Nd->Ty->IsUnsigned) {
        printLn("  slli a0, a0, 56");
        printLn("  srli a0, a0, 56");
      } else {
        printLn("  slli a0, a0, 56");
        printLn("  srai a0, a0, 56");
      }
      return;
    case TY_SHORT:
      printLn("  # 清除short类型的高位");
      if (Nd->Ty->IsUnsigned) {
        printLn("  slli a0, a0, 48");
        printLn("  srli a0, a0, 48");
      } else {
        printLn("  slli a0, a0, 48");
        printLn("  srai a0, a0, 48");
      }
      return;
    default:
      break;
    }

    // 如果返回的结构体小于16字节，直接使用寄存器返回
    if (Nd->RetBuffer && Nd->Ty->Size <= 16) {
      copyRetBuffer(Nd->RetBuffer);
      printLn("  li t0, %d", Nd->RetBuffer->Offset);
      printLn("  add a0, fp, t0");
    }

    return;
  }
  case ND_LABEL_VAL:
    printLn("  # 加载标签%s的值到a0中", Nd->UniqueLabel);
    printLn("  la a0, %s", Nd->UniqueLabel);
    return;
  case ND_CAS: {
    printLn("# =====原子比较交换===============");
    // 当 t1地址中的值t0 与 t3旧值 相同时，将 t1地址中的值 替换为 t4新值
    // 若不同时，将 地址中的值t0 替换掉 旧值
    genExpr(Nd->CasAddr);
    printLn("  mv t1, a0"); // t1地址
    genExpr(Nd->CasOld);
    printLn("  mv t2, a0"); // t2旧值地址
    load(Nd->CasOld->Ty->Base);
    printLn("  mv t3, a0"); // t3旧值
    genExpr(Nd->CasNew);
    printLn("  mv t4, a0"); // t4新值

    // fence用于控制设备、内存的读写顺序
    // iorw：之前的设备输入输出、内存读写指令，不能晚于fence指令
    // ow：之后的设备输出、内存写的指令，不能早于fence指令
    printLn("  fence iorw, ow");
    printLn("1:");
    // 加载地址中的值到t0
    // lr（Load-Reserved）：加载并保留对该内存地址的控制权
    // aq（acquisition）：若设置了aq位，
    // 则此硬件线程中在AMO（原子内存操作）之后的任何内存操作，都不会在AMO之前发生
    printLn("  lr.w.aq t0, (t1)");
    // 地址的值和旧值比较，若不等则退出
    printLn("  bne t0, t3, 2f");
    // 写入新值到地址
    // sc（Store-Conditional）：将寄存器中的值写入指定内存地址。
    // 写入操作只有在该内存地址仍然被处理器保留时才会生效。
    printLn("  sc.w.aq a0, t4, (t1)");
    // 不为0时，写入失败，重新写入
    printLn("  bnez a0, 1b");

    printLn("2:");
    // t0地址中的值 减去 t3旧值，将 差值 存入 t3
    printLn("  subw t3, t0, t3");
    // 判断差值t3，t3为0时 返回值a0为1，t3不为0时 返回值a0为0
    printLn("  seqz a0, t3");
    // 判断差值t3，t3为0时跳转到最后
    printLn("  beqz t3, 3f");
    // 若不同时，将 地址中的值t0 写入 t2旧值的地址，替换掉 旧值
    printLn("  sw t0, (t2)");
    printLn("3:");
    return;
  }
  case ND_EXCH: {
    genExpr(Nd->LHS);
    push();
    genExpr(Nd->RHS);
    pop(1);

    int Sz = Nd->LHS->Ty->Base->Size;
    char *S = (Sz <= 4) ? "w" : "d";
    printLn("  # 原子交换");
    printLn("  amoswap.%s.aq a0, a0, (a1)", S);
    return;
  }
  default:
    break;
  }

  // 处理浮点类型
  switch (Nd->LHS->Ty->Kind) {
  case TY_FLOAT:
  case TY_DOUBLE: {
    // 递归到最右节点
    genExpr(Nd->RHS);
    // 将结果压入栈
    pushF();
    // 递归到左节点
    genExpr(Nd->LHS);
    // 将结果弹栈到fa1
    popF(1);

    // 生成各个二叉树节点
    // float对应s(single)后缀，double对应d(double)后缀
    char *Suffix = (Nd->LHS->Ty->Kind == TY_FLOAT) ? "s" : "d";

    switch (Nd->Kind) {
    case ND_ADD:
      printLn("  # fa0+fa1，结果写入fa0");
      printLn("  fadd.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_SUB:
      printLn("  # fa0-fa1，结果写入fa0");
      printLn("  fsub.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_MUL:
      printLn("  # fa0×fa1，结果写入fa0");
      printLn("  fmul.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_DIV:
      printLn("  # fa0÷fa1，结果写入fa0");
      printLn("  fdiv.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_EQ:
      printLn("  # 判断是否fa0=fa1");
      printLn("  feq.%s a0, fa0, fa1", Suffix);
      return;
    case ND_NE:
      printLn("  # 判断是否fa0≠fa1");
      printLn("  feq.%s a0, fa0, fa1", Suffix);
      printLn("  seqz a0, a0");
      return;
    case ND_LT:
      printLn("  # 判断是否fa0<fa1");
      printLn("  flt.%s a0, fa0, fa1", Suffix);
      return;
    case ND_LE:
      printLn("  # 判断是否fa0≤fa1");
      printLn("  fle.%s a0, fa0, fa1", Suffix);
      return;
    default:
      errorTok(Nd->Tok, "invalid expression");
    }
  }
  case TY_LDOUBLE: {
    genExpr(Nd->LHS);
    genExpr(Nd->RHS);

    popLD(2);
    popLD(0);
    switch (Nd->Kind) {
    case ND_ADD:
      printLn("  # long double加法，从栈顶读取32个字节");
      printLn("  call __addtf3@plt");
      pushLD();
      return;
    case ND_SUB:
      printLn("  # long double减法，从栈顶读取32个字节");
      printLn("  call __subtf3@plt");
      pushLD();
      return;
    case ND_MUL:
      printLn("  # long double乘法，从栈顶读取32个字节");
      printLn("  call __multf3@plt");
      pushLD();
      return;
    case ND_DIV:
      printLn("  # long double除法，从栈顶读取32个字节");
      printLn("  call __divtf3@plt");
      pushLD();
      return;
    case ND_EQ:
      printLn("  # long double相等，从栈顶读取32个字节");
      printLn("  call __eqtf2@plt");
      printLn("  seqz a0, a0");
      return;
    case ND_NE:
      printLn("  # long double不等，从栈顶读取32个字节");
      printLn("  call __netf2@plt");
      printLn("  snez a0, a0");
      return;
    case ND_LT:
      printLn("  # long double小于，从栈顶读取32个字节");
      printLn("  call __lttf2@plt");
      printLn("  slti a0, a0, 0");
      return;
    case ND_LE:
      printLn("  # long double小于等于，从栈顶读取32个字节");
      printLn("  call __letf2@plt");
      printLn("  slti a0, a0, 1");
      return;
    default:
      errorTok(Nd->Tok, "invalid expression");
    }
  }
  default:
    break;
  }

  // 递归到最右节点
  genExpr(Nd->RHS);
  // 将结果压入栈
  push();
  // 递归到左节点
  genExpr(Nd->LHS);
  // 将结果弹栈到a1
  pop(1);

  // 生成各个二叉树节点
  char *Suffix = Nd->LHS->Ty->Kind == TY_LONG || Nd->LHS->Ty->Base ? "" : "w";
  switch (Nd->Kind) {
  case ND_ADD: // + a0=a0+a1
    printLn("  # a0+a1，结果写入a0");
    printLn("  add%s a0, a0, a1", Suffix);
    return;
  case ND_SUB: // - a0=a0-a1
    printLn("  # a0-a1，结果写入a0");
    printLn("  sub%s a0, a0, a1", Suffix);
    return;
  case ND_MUL: // * a0=a0*a1
    printLn("  # a0×a1，结果写入a0");
    printLn("  mul%s a0, a0, a1", Suffix);
    return;
  case ND_DIV: // / a0=a0/a1
    printLn("  # a0÷a1，结果写入a0");
    if (Nd->Ty->IsUnsigned)
      printLn("  divu%s a0, a0, a1", Suffix);
    else
      printLn("  div%s a0, a0, a1", Suffix);
    return;
  case ND_MOD: // % a0=a0%a1
    printLn("  # a0%%a1，结果写入a0");
    if (Nd->Ty->IsUnsigned)
      printLn("  remu%s a0, a0, a1", Suffix);
    else
      printLn("  rem%s a0, a0, a1", Suffix);
    return;
  case ND_BITAND: // & a0=a0&a1
    printLn("  # a0&a1，结果写入a0");
    printLn("  and a0, a0, a1");
    return;
  case ND_BITOR: // | a0=a0|a1
    printLn("  # a0|a1，结果写入a0");
    printLn("  or a0, a0, a1");
    return;
  case ND_BITXOR: // ^ a0=a0^a1
    printLn("  # a0^a1，结果写入a0");
    printLn("  xor a0, a0, a1");
    return;
  case ND_EQ:
  case ND_NE:
    if (Nd->LHS->Ty->IsUnsigned && Nd->LHS->Ty->Kind == TY_INT) {
      printLn("  # 左部是U32类型，需要截断");
      printLn("slli a0, a0, 32");
      printLn("srli a0, a0, 32");
    };
    if (Nd->RHS->Ty->IsUnsigned && Nd->RHS->Ty->Kind == TY_INT) {
      printLn("  # 右部是U32类型，需要截断");
      printLn("slli a1, a1, 32");
      printLn("srli a1, a1, 32");
    };
    // a0=a0^a1，异或指令
    printLn("  # 判断是否a0%sa1", Nd->Kind == ND_EQ ? "=" : "≠");
    printLn("  xor a0, a0, a1");

    if (Nd->Kind == ND_EQ)
      // a0==a1
      // a0=a0^a1, sltiu a0, a0, 1
      // 等于0则置1
      printLn("  seqz a0, a0");
    else
      // a0!=a1
      // a0=a0^a1, sltu a0, x0, a0
      // 不等于0则置1
      printLn("  snez a0, a0");
    return;
  case ND_LT:
    printLn("  # 判断a0<a1");
    if (Nd->LHS->Ty->IsUnsigned)
      printLn("  sltu a0, a0, a1");
    else
      printLn("  slt a0, a0, a1");
    return;
  case ND_LE:
    // a0<=a1等价于
    // a0=a1<a0, a0=a0^1
    printLn("  # 判断是否a0≤a1");
    if (Nd->LHS->Ty->IsUnsigned)
      printLn("  sltu a0, a1, a0");
    else
      printLn("  slt a0, a1, a0");
    printLn("  xori a0, a0, 1");
    return;
  case ND_SHL:
    printLn("  # a0逻辑左移a1位");
    printLn("  sll%s a0, a0, a1", Suffix);
    return;
  case ND_SHR:
    printLn("  # a0算术右移a1位");
    if (Nd->Ty->IsUnsigned)
      printLn("  srl%s a0, a0, a1", Suffix);
    else
      printLn("  sra%s a0, a0, a1", Suffix);
    return;
  default:
    break;
  }

  errorTok(Nd->Tok, "invalid expression");
}

typedef struct
{
    char* str;
    int len;
    int size;
} StringBuilder;

void sb_putc(StringBuilder* self, char c)
{
    if(self->len == 0 && self->size == 0) {
        int new_size = 32;
        self->str = calloc(1, sizeof(char)*new_size);
        self->size = new_size;
    }
    else if(self->len+1 >= self->size) {
        int new_size = (self->size + 1) * 2;
        char* old_str = self->str;
        
        self->str = calloc(1, sizeof(char)*new_size);
        strncpy(self->str, old_str, self->size);
        
        self->size = new_size;
        
        free(old_str);
    }
    
    self->str[self->len] = c;
    self->str[self->len+1] = '\0';
    self->len++;
}

void sb_puts(StringBuilder* self, char* str)
{
    if(self->len == 0 && self->size == 0) {
        int new_size = (strlen(str) + 1) * 2;
        self->str = calloc(1, sizeof(char)*new_size);
        self->size = new_size;
    }
    else if(self->len+strlen(str)+1 >= self->size) {
        int new_size = (self->size + strlen(str) + 1) * 2;
        char* old_str = self->str;
        
        self->str = calloc(1, sizeof(char)*new_size);
        strncpy(self->str, old_str, self->size);
        
        self->size = new_size;
        
        free(old_str);
    }
    
    strncat(self->str, str, self->size);
    self->len+=strlen(str);
}
void sb_putint(StringBuilder* self, int n)
{
    char buf[16];
    snprintf(buf, 16, "%ld", (long)n);
    
    sb_puts(self, buf);
}

char* sb_build(StringBuilder* self)
{
    return self->str;
}

// 生成语句
static void genStmt(Node *Nd) {
  // .loc 文件编号 行号
  if (OptDebug)
    printLn("  .loc %d %d", Nd->Tok->File->FileNo, Nd->Tok->LineNo);

  switch (Nd->Kind) {
  // 生成if语句
  case ND_IF: {
    // 代码段计数
    int C = count();
    printLn("\n# =====分支语句%d==============", C);
    // 生成条件内语句
    printLn("\n# Cond表达式%d", C);
    genExpr(Nd->Cond);
    notZero(Nd->Cond->Ty);
    // 判断结果是否为0，为0则跳转到else标签
    printLn("  # 若a0为0，则跳转到分支%d的.L.else.%d段", C, C);
    printLn("  beqz a0, .L.else.%d", C);
    // 生成符合条件后的语句
    printLn("\n# Then语句%d", C);
    genStmt(Nd->Then);
    // 执行完后跳转到if语句后面的语句
    printLn("  # 跳转到分支%d的.L.end.%d段", C, C);
    printLn("  j .L.end.%d", C);
    // else代码块，else可能为空，故输出标签
    printLn("\n# Else语句%d", C);
    printLn("# 分支%d的.L.else.%d段标签", C, C);
    printLn(".L.else.%d:", C);
    // 生成不符合条件后的语句
    if (Nd->Els)
      genStmt(Nd->Els);
    // 结束if语句，继续执行后面的语句
    printLn("\n# 分支%d的.L.end.%d段标签", C, C);
    printLn(".L.end.%d:", C);
    return;
  }
  // 生成for或while循环语句
  case ND_FOR: {
    // 代码段计数
    int C = count();
    printLn("\n# =====循环语句%d===============", C);
    // 生成初始化语句
    if (Nd->Init) {
      printLn("\n# Init语句%d", C);
      genStmt(Nd->Init);
    }
    // 输出循环头部标签
    printLn("\n# 循环%d的.L.begin.%d段标签", C, C);
    printLn(".L.begin.%d:", C);
    // 处理循环条件语句
    printLn("# Cond表达式%d", C);
    if (Nd->Cond) {
      // 生成条件循环语句
      genExpr(Nd->Cond);
      notZero(Nd->Cond->Ty);
      // 判断结果是否为0，为0则跳转到结束部分
      printLn("  # 若a0为0，则跳转到循环%d的%s段", C, Nd->BrkLabel);
      printLn("  beqz a0, %s", Nd->BrkLabel);
    }
    // 生成循环体语句
    printLn("\n# Then语句%d", C);
    genStmt(Nd->Then);
    // continue标签语句
    printLn("%s:", Nd->ContLabel);
    // 处理循环递增语句
    if (Nd->Inc) {
      printLn("\n# Inc语句%d", C);
      // 生成循环递增语句
      genExpr(Nd->Inc);
    }
    // 跳转到循环头部
    printLn("  # 跳转到循环%d的.L.begin.%d段", C, C);
    printLn("  j .L.begin.%d", C);
    // 输出循环尾部标签
    printLn("\n# 循环%d的%s段标签", C, Nd->BrkLabel);
    printLn("%s:", Nd->BrkLabel);
    return;
  }
  // 生成do while语句
  case ND_DO: {
    int C = count();
    printLn("\n# =====do while语句%d============", C);
    printLn("\n# begin语句%d", C);
    printLn(".L.begin.%d:", C);

    printLn("\n# Then语句%d", C);
    genStmt(Nd->Then);

    printLn("\n# Cond语句%d", C);
    printLn("%s:", Nd->ContLabel);
    genExpr(Nd->Cond);

    notZero(Nd->Cond->Ty);
    printLn("  # 跳转到循环%d的.L.begin.%d段", C, C);
    printLn("  bnez a0, .L.begin.%d", C);

    printLn("\n# 循环%d的%s段标签", C, Nd->BrkLabel);
    printLn("%s:", Nd->BrkLabel);
    return;
  }
  case ND_SWITCH:
    printLn("\n# =====switch语句===============");
    genExpr(Nd->Cond);

    printLn("  # 遍历跳转到值等于a0的case标签");
    for (Node *N = Nd->CaseNext; N; N = N->CaseNext) {
      // 常规case，case范围前后一致
      if (N->Begin == N->End) {
        printLn("  li t0, %ld", N->Begin);
        printLn("  beq a0, t0, %s", N->Label);
        continue;
      }

      printLn("  # 处理case范围值：%ld...%ld", N->Begin, N->End);
      // a0为当前switch中的值
      printLn("  mv t1, a0");
      printLn("  li t0, %ld", N->Begin);
      // t1存储了a0-Begin的值
      printLn("  sub t1, t1, t0");
      // t2存储了End-Begin的值
      printLn("  li t2, %ld", N->End - N->Begin);
      // 如果0<=t1<=t2，那么就说明在范围内
      printLn("  bleu t1, t2, %s", N->Label);
    }

    if (Nd->DefaultCase) {
      printLn("  # 跳转到default标签");
      printLn("  j %s", Nd->DefaultCase->Label);
    }

    printLn("  # 结束switch，跳转break标签");
    printLn("  j %s", Nd->BrkLabel);
    // 生成case标签的语句
    genStmt(Nd->Then);
    printLn("# switch的break标签，结束switch");
    printLn("%s:", Nd->BrkLabel);
    return;
  case ND_CASE:
    printLn("# case标签，值为%ld", Nd->Val);
    printLn("%s:", Nd->Label);
    genStmt(Nd->LHS);
    return;
  // 生成代码块，遍历代码块的语句链表
  case ND_BLOCK:
    for (Node *N = Nd->Body; N; N = N->Next)
      genStmt(N);
    return;
  // goto语句
  case ND_GOTO:
    printLn("  j %s", Nd->UniqueLabel);
    return;
  case ND_GOTO_EXPR:
    printLn("  # GOTO跳转到存储标签的地址");
    genExpr(Nd->LHS);
    printLn("  jr a0");
    return;
  // 标签语句
  case ND_LABEL:
    printLn("%s:", Nd->UniqueLabel);
    genStmt(Nd->LHS);
    return;
  // 生成return语句
  case ND_RETURN:
    printLn("# 返回语句");
    // 不为空返回语句时
    if (Nd->LHS) {
      genExpr(Nd->LHS);

      Type *Ty = Nd->LHS->Ty;
      // 处理结构体作为返回值的情况
      if (Ty->Kind == TY_STRUCT || Ty->Kind == TY_UNION) {
        if (Ty->Size <= 16)
          // 小于16字节拷贝寄存器
          copyStructReg();
        else
          // 大于16字节拷贝内存
          copyStructMem();
      }
      if (Ty->Kind == TY_LDOUBLE) {
        printLn("  # LD类型作为返回值时，需要将LD栈顶元素拷贝到a0，a1中");
        popLD(0);
      }
    }
    // 无条件跳转语句，跳转到.L.return段
    // j offset是 jal x0, offset的别名指令
    printLn("  # 跳转到.L.return.%s段", CurrentFn->Name);
    printLn("  j .L.return.%s", CurrentFn->Name);
    return;
  // 生成表达式语句
  case ND_EXPR_STMT:
    genExpr(Nd->LHS);
    return;
    
  case ND_ASM: {
      // 1) 引数を t0.. に積む
      int idx = 0;
      for (Node *A = Nd->Args; A; A = A->Next, idx++) {
        if (idx > 6) errorTok(Nd->Tok, "asm operands > 7 not supported");
        genExpr(A);
        printLn("  mv t%d, a0", idx);
      }
    
      // 2) 文字列置換
      char *fmt = Nd->AsmStr;
      StringBuilder sb = {0}; // 好きなやり方で実装（あるいは malloc + 手書き）
      for (char *p = fmt; *p; ) {
        if (*p != '%') { sb_putc(&sb, *p++); continue; }
        p++;
        if (*p == '%') { sb_putc(&sb, '%'); p++; continue; } // "%%" エスケープ
    
        bool isImm = false;
        if (*p == 'c') { isImm = true; p++; }
        if (*p < '0' || *p > '6') errorTok(Nd->Tok, "bad asm placeholder");
        int n = *p - '0'; p++;
    
        if (isImm) {
          // Nd->Args の n 番目が ND_NUM か確認して数値を出力
          Node *A = Nd->Args;
          for (int i = 0; i < n; i++) A = A->Next;
          if (!A || A->Kind != ND_NUM) errorTok(Nd->Tok, "%%c%d needs an immediate constant", n);
          sb_putint(&sb, (long)A->Val);
        } else {
          // レジスタ名 t<n>
          sb_puts(&sb, (char*[]){"t0","t1","t2","t3","t4","t5","t6"}[n]);
        }
      }
      char *out = sb_build(&sb);
    
      printLn("  # 插入のASM");
      // out は複数行でも OK：printLn は %s をそのまま出してくれる
      printLn("  %s", out);
      free(out);
      return;
  }
/*
  case ND_ASM:
    printLn("  # 插入的ASM代码片段");
    printLn("  %s", Nd->AsmStr);
    return;
*/
  default:
    break;
  }

  errorTok(Nd->Tok, "invalid statement");
}

// 根据变量的链表计算出偏移量
static void assignLVarOffsets(Obj *Prog) {
  // 为每个函数计算其变量所用的栈空间
  for (Obj *Fn = Prog; Fn; Fn = Fn->Next) {
    // 如果不是函数,则终止
    if (!Fn->IsFunction)
      continue;

    // 反向偏移量
    int ReOffset = 16;

    // 被调用函数将自己的ra、fp也压入栈了，
    // 所以fp+16才是上一级函数的sp顶
    // /             栈保存的N个变量            / N*8
    // /---------------本级函数----------------/ sp
    // /                 ra                  / sp-8
    // /                fp（上一级）           / fp = sp-16

    // 寄存器传递
    int GP = 0, FP = 0;
    // 寄存器传递的参数
    for (Obj *Var = Fn->Params; Var; Var = Var->Next) {
      // 读取形参类型
      Type *Ty = Var->Ty;

      switch (Ty->Kind) {
      case TY_STRUCT:
      case TY_UNION:
        setFloStMemsTy(&Ty, GP, FP);

        // 计算浮点结构体所使用的寄存器
        // 这里一定寄存器可用，所以不判定是否超过寄存器最大值
        if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
          Type *Regs[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
          for (int I = 0; I < 2; ++I) {
            if (isSFloNum(Regs[I]))
              FP++;
            if (isInteger(Regs[I]))
              GP++;
          }
          continue;
        }

        // 9～16字节的结构体要用两个寄存器
        if (8 < Ty->Size && Ty->Size <= 16) {
          // 如果只剩一个寄存器，那么剩余一半通过栈传递
          if (GP == GP_MAX - 1)
            Var->IsHalfByStack = true;
          if (GP < GP_MAX)
            GP++;
        }
        // 所有字节的结构体都在至少使用了一个寄存器（如果可用）
        if (GP < GP_MAX) {
          GP++;
          continue;
        }

        // 没使用寄存器的需要栈传递
        break;
      case TY_FLOAT:
      case TY_DOUBLE:
        if (FP < FP_MAX) {
          printLn(" #  FP%d传递浮点变量%s", FP, Var->Name);
          FP++;
          continue;
        } else if (GP < GP_MAX) {
          printLn(" #  GP%d传递浮点变量%s", GP, Var->Name);
          GP++;
          continue;
        }
        break;
      case TY_LDOUBLE:
        if (GP == GP_MAX - 1) {
          printLn(" #  GP%d传递一半浮点变量%s，另一半栈传递", GP, Var->Name);
          Var->IsHalfByStack = true;
          GP++;
          break;
        }
        if (GP < GP_MAX - 1) {
          printLn(" #  GP%d传递浮点变量%s", GP, Var->Name);
          GP++;
          GP++;
          continue;
        }
        break;
      default:
        if (GP < GP_MAX) {
          printLn(" #  GP%d传递整型变量%s", GP, Var->Name);
          GP++;
          continue;
        }
        break;
      }

      // 栈传递

      // 对齐变量
      ReOffset = alignTo(ReOffset, 8);
      // 为栈传递变量赋一个偏移量，或者说是反向栈地址
      Var->Offset = ReOffset;
      // 栈传递变量计算反向偏移量，传递一半的结构体减去寄存器的部分
      ReOffset += Var->IsHalfByStack ? Var->Ty->Size - 8 : Var->Ty->Size;
      printLn(" #  栈传递变量%s偏移量%d", Var->Name, Var->Offset);
    }

    // 可变参数函数VaArea的偏移量
    if (Fn->VaArea) {
      ReOffset = alignTo(ReOffset, 8);
      Fn->VaArea->Offset = ReOffset;
    }

    // Reserve space at top of the frame for fs0~fs11 spills.
    int Offset = FS_SAVE_BYTES;
    // 读取所有变量
    for (Obj *Var = Fn->Locals; Var; Var = Var->Next) {
      // 栈传递的变量的直接跳过
      if (Var->Offset && !Var->IsHalfByStack)
        continue;

      // 数组超过16字节时，对齐值至少为16字节
      int Align = (Var->Ty->Kind == TY_ARRAY && Var->Ty->Size >= 16)
                      ? MAX(16, Var->Align)
                      : Var->Align;

      // 每个变量分配空间
      Offset += Var->Ty->Size;
      // 对齐变量
      Offset = alignTo(Offset, Align);
      // 为每个变量赋一个偏移量，或者说是栈中地址
      Var->Offset = -Offset;
      printLn(" #  寄存器传递变量%s偏移量%d", Var->Name, Var->Offset);
    }
    // 将栈对齐到16字节
    Fn->StackSize = alignTo(Offset, 16);
  }
}

static void emitData(Obj *Prog) {
  for (Obj *Var = Prog; Var; Var = Var->Next) {
    // 跳过是函数或者无定义的变量
    if (Var->IsFunction || !Var->IsDefinition)
      continue;
      
    static int n = 1;
    ++n;
    if(Var->StringLiteral) {
      printLn("   .globl _g%d", n);
      printLn("_g%d:", n);
      printLn("   .quad %s",  Var->Name);
    }

    if (Var->IsStatic) {
      printLn("\n  # static全局变量%s", Var->Name);
    } else {
      printLn("\n  # 全局变量%s", Var->Name);
      printLn("  .globl %s", Var->Name);
    }

    if (Var->IsTLS)
      error("TLS variables are not supported by the target assembler");
    if (!Var->Align)
      error("Align can not be 0!");

    int Size = Var->Ty->Size;
    printLn("%s:", Var->Name);

    if (OptFCommon && Var->IsTentative) {
      emitZeroBytes(Size);
      continue;
    }

    if (Var->InitData) {
      if (Var->Rel)
        error("Relocations in initializers are not supported by the assembler");

      unsigned char *Data = (unsigned char *)Var->InitData;
      if (Var->Ty->Kind == TY_ARRAY && Var->Ty->Base->Kind == TY_CHAR) {
        int StrLen = limitedStrnlen((char *)Data, Size);
        bool HasTerminator = (StrLen < Size && Data[StrLen] == 0);
        bool OnlyZeroPadding = true;
        if (HasTerminator) {
          for (int I = StrLen + 1; I < Size; I++) {
            if (Data[I] != 0) {
              OnlyZeroPadding = false;
              break;
            }
          }
        }

        if (HasTerminator && OnlyZeroPadding) {
          emitAsciiData(".ascii", Data, StrLen + 1);
          emitZeroBytes(Size - (StrLen + 1));
/*
          if(Var->StringLiteral) {
snprintf(Var->Name, 5, "_g%d", n);
          }
*/
          continue;
        }
      }

      emitAsciiData(".ascii", Data, Size);
      continue;
    }

    emitZeroBytes(Size);
  }
}

// 将浮点寄存器的值存入栈中
static void storeFloat(int Reg, int Offset, int Sz) {
  printLn("  # 将fa%d寄存器的值存入%d(fp)的栈地址", Reg, Offset);
  printLn("  li t0, %d", Offset);
  printLn("  add t0, fp, t0");

  switch (Sz) {
  case 4:
    printLn("  fsw fa%d, 0(t0)", Reg);
    return;
  case 8:
    printLn("  fsd fa%d, 0(t0)", Reg);
    return;
  default:
    unreachable();
  }
}

// 将整形寄存器的值存入栈中
static void storeGeneral(int Reg, int Offset, int Size) {
  printLn("  # 将a%d寄存器的值存入%d(fp)的栈地址", Reg, Offset);
  printLn("  li t0, %d", Offset);
  printLn("  add t0, fp, t0");
  switch (Size) {
  case 1:
    printLn("  sb a%d, 0(t0)", Reg);
    return;
  case 2:
    printLn("  sh a%d, 0(t0)", Reg);
    return;
  case 4:
    printLn("  sw a%d, 0(t0)", Reg);
    return;
  case 8:
    printLn("  sd a%d, 0(t0)", Reg);
    return;
  }
  unreachable();
}

// 存储结构体到栈内开辟的空间
static void storeStruct(int Reg, int Offset, int Size) {
  // t0是结构体的地址，复制t0指向的结构体到栈相应的位置中
  for (int I = 0; I < Size; I++) {
    printLn("  lb t0, %d(a%d)", I, Reg);

    printLn("  li t1, %d", Offset + I);
    printLn("  add t1, fp, t1");
    printLn("  sb t0, 0(t1)");
  }
  return;
}

// 代码生成入口函数，包含代码块的基础信息
void emitText(Obj *Prog) {
  // 为每个函数单独生成代码
  for (Obj *Fn = Prog; Fn; Fn = Fn->Next) {
    if (!Fn->IsFunction || !Fn->IsDefinition)
      continue;

    // 如果未存活，就不生成static inline函数
    if (!Fn->IsLive)
      continue;

    if (Fn->IsStatic) {
      printLn("\n  # 定义局部%s函数", Fn->Name);
    } else {
      printLn("\n  # 定义全局%s函数", Fn->Name);
      printLn("  .globl %s", Fn->Name);
    }

    printLn("  # 代码段标签");
    printLn("  .section .text");
    printLn("# =====%s段开始===============", Fn->Name);
    printLn("# %s段标签", Fn->Name);
    printLn("%s:", Fn->Name);
    CurrentFn = Fn;

    // 栈布局
    // ------------------------------//
    //        上一级函数的栈传递参数
    // ==============================// sp（本级函数）
    //         VaArea(寄存器可用时)
    // ------------------------------// sp = sp（本级函数）-VaArea
    //              ra
    //-------------------------------// ra = sp-8
    //              fp
    //-------------------------------// fp = sp-16
    //             变量
    //-------------------------------// sp = sp-16-StackSize
    //           表达式计算
    //-------------------------------//

    // Prologue, 前言

    // 为剩余的整型寄存器开辟空间，用于存储可变参数
    int VaSize = 0;
    if (Fn->VaArea) {
      // 遍历正常参数所使用的浮点、整型寄存器
      int GPs = 0, FPs = 0;

      // 可变参数函数，非可变的参数使用寄存器
      for (Obj *Var = Fn->Params; Var; Var = Var->Next) {
        // 计算所有类型所使用的寄存器数量
        Type *Ty = Var->Ty;
        switch (Ty->Kind) {
        case TY_STRUCT:
        case TY_UNION:
          // 对寄存器传递的参数
          if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
            // 浮点结构体的第一部分
            isSFloNum(Ty->FSReg1Ty) ? FPs++ : GPs++;
            // 浮点结构体的第二部分
            if (Ty->FSReg2Ty->Kind != TY_VOID)
              isSFloNum(Ty->FSReg2Ty) ? FPs++ : GPs++;
            break;
          }

          // 小于8字节的结构体、大于16字节的结构体
          // 一半寄存器，一半栈传递的结构体
          if (Ty->Size < 8 || Ty->Size > 16 || Var->IsHalfByStack)
            GPs++;
          // 处理大于8字节，小于16字节的结构体
          else
            GPs += 2;
          break;
        case TY_FLOAT:
        case TY_DOUBLE:
          // 可变参数函数中的浮点参数
          FPs < FP_MAX ? FPs++ : GPs++;
          break;
        default:
          // 可变参数函数中的整型参数
          GPs++;
          break;
        }
      }

      // 需确保使用到了整形寄存器，否则不开辟此空间
      if (GPs < GP_MAX) {
        VaSize = (8 - GPs) * 8;
        printLn("  # VaArea的区域，大小为%d", VaSize);
        printLn("  addi sp, sp, -%d", VaSize);
      }
    }

    // 将ra寄存器压栈,保存ra的值
    printLn("  # 将ra寄存器压栈,保存ra的值");
    printLn("  addi sp, sp, -16");
    printLn("  sd ra, 8(sp)");
    printLn("  sd fp, 0(sp)");
    printLn("  mv fp, sp");

    printLn("  li t0, -%d", Fn->StackSize);
    printLn("  add sp, sp, t0");

    for (int I = 0; I < FS_SAVE_COUNT; ++I)
      printLn("  fsd fs%d, %d(fp)", I, -(I + 1) * 8);
    // Alloca函数
    printLn("  # 将当前的sp值，存入到Alloca区域的底部");
    printLn("  li t0, %d", Fn->AllocaBottom->Offset);
    printLn("  add t0, t0, fp");
    printLn("  sd sp, 0(t0)");

    // 正常传递的形参
    // 记录整型寄存器，浮点寄存器使用的数量
    int GP = 0, FP = 0;
    for (Obj *Var = Fn->Params; Var; Var = Var->Next) {
      // 不处理栈传递的形参，栈传递一半的结构体除外
      if (Var->Offset > 0 && !Var->IsHalfByStack)
        continue;

      Type *Ty = Var->Ty;

      // 正常传递的形参
      switch (Ty->Kind) {
      case TY_STRUCT:
      case TY_UNION:
        printLn("  # 对寄存器传递的结构体进行压栈");

        // 处理浮点结构体
        if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
          printLn("  # 浮点结构体的第一部分进行压栈");
          // 浮点结构体的第一部分，偏移量为0
          int Sz1 = Var->Ty->FSReg1Ty->Size;
          if (isSFloNum(Ty->FSReg1Ty))
            storeFloat(FP++, Var->Offset, Sz1);
          else
            storeGeneral(GP++, Var->Offset, Sz1);

          // 浮点结构体的第二部分
          if (Ty->FSReg2Ty->Kind != TY_VOID) {
            printLn("  # 浮点结构体的第二部分进行压栈");
            int Sz2 = Ty->FSReg2Ty->Size;
            // 结构体内偏移量为两个成员间的最大尺寸
            int Off = MAX(Sz1, Sz2);

            if (isSFloNum(Ty->FSReg2Ty))
              storeFloat(FP++, Var->Offset + Off, Sz2);
            else
              storeGeneral(GP++, Var->Offset + Off, Sz2);
          }
          break;
        }

        // 大于16字节的结构体参数，通过访问它的地址，
        // 将原来位置的结构体复制到栈中
        if (Ty->Size > 16) {
          printLn("  # 大于16字节的结构体进行压栈");
          storeStruct(GP++, Var->Offset, Ty->Size);
          break;
        }

        // 一半寄存器、一半栈传递的结构体
        if (Var->IsHalfByStack) {
          printLn("  # 一半寄存器、一半栈传递结构体进行压栈");
          storeGeneral(GP++, Var->Offset, 8);
          // 拷贝栈传递的一半结构体到当前栈中
          for (int I = 0; I != Var->Ty->Size - 8; ++I) {
            printLn("  lb t0, %d(fp)", 16 + I);

            printLn("  li t1, %d", Var->Offset + 8 + I);
            printLn("  add t1, fp, t1");
            printLn("  sb t0, 0(t1)");
          }
          break;
        }

        // 处理小于16字节的结构体
        if (Ty->Size <= 16)
          storeGeneral(GP++, Var->Offset, MIN(8, Ty->Size));
        if (Ty->Size > 8)
          storeGeneral(GP++, Var->Offset + 8, Ty->Size - 8);
        break;
      case TY_FLOAT:
      case TY_DOUBLE:
        // 正常传递的浮点形参
        if (FP < FP_MAX) {
          printLn("  # 将浮点形参%s的寄存器fa%d的值压栈", Var->Name, FP);
          storeFloat(FP++, Var->Offset, Var->Ty->Size);
        } else {
          printLn("  # 将浮点形参%s的寄存器a%d的值压栈", Var->Name, GP);
          storeGeneral(GP++, Var->Offset, Var->Ty->Size);
        }
        break;
      case TY_LDOUBLE:
        if (Var->IsHalfByStack) {
          printLn("  # 将LD形参%s的第一部分a%d的值压栈", Var->Name, GP);
          printLn("  ld t0, 16(fp)");
          printLn("  sd t0, %d(fp)", Var->Offset + 8);
          break;
        }
        if (GP < GP_MAX - 1) {
          printLn("  # 将LD形参%s的第一部分a%d的值压栈", Var->Name, GP);
          storeGeneral(GP++, Var->Offset, 8);
          printLn("  # 将LD形参%s的第二部分a%d的值压栈", Var->Name, GP);
          storeGeneral(GP++, Var->Offset + 8, 8);
        }
        break;
      default:
        // 正常传递的整型形参
        printLn("  # 将整型形参%s的寄存器a%d的值压栈", Var->Name, GP);
        storeGeneral(GP++, Var->Offset, Var->Ty->Size);
        break;
      }
    }

    // 可变参数
    if (Fn->VaArea) {
      // 可变参数位置位于本函数的最上方，即sp的位置，也就是fp+16

      // 可变参数存入__va_area__，注意最多为7个
      int Offset = Fn->VaArea->Offset;
      printLn("  # 可变参数VaArea的偏移量为%d", Fn->VaArea->Offset);
      while (GP < GP_MAX) {
        printLn("  # 可变参数，相对%s的偏移量为%d", Fn->VaArea->Name,
                Offset - Fn->VaArea->Offset);
        storeGeneral(GP++, Offset, 8);
        Offset += 8;
      }
    }

    // 生成语句链表的代码
    printLn("# =====%s段主体===============", Fn->Name);
    genStmt(Fn->Body);
    assert(Depth == 0);

    // main默认返回0
    if (strcmp(Fn->Name, "main") == 0)
        printLn("  li a0, 0");

    // Epilogue，后语
    // 输出return段标签
    printLn("# =====%s段结束===============", Fn->Name);
    printLn("# return段标签");
    printLn(".L.return.%s:", Fn->Name);

    for (int I = 0; I < FS_SAVE_COUNT; ++I)
        printLn("  fld fs%d, %d(fp)", I, -(I + 1) * 8);

    // 将fp的值改写回sp
    printLn("  # 将fp的值写回sp");
    printLn("  mv sp, fp");
    // 将最早fp保存的值弹栈，恢复fp。
    printLn("  # 将最早fp保存的值弹栈，恢复fp和sp");
    printLn("  ld fp, 0(sp)");
    // 将ra寄存器弹栈,恢复ra的值
    printLn("  # 将ra寄存器弹栈,恢复ra的值");
    printLn("  ld ra, 8(sp)");
    printLn("  addi sp, sp, 16");

    // 归还可变参数寄存器压栈的那一部分
    if (Fn->VaArea && VaSize > 0) {
      printLn("  # 归还VaArea的区域，大小为%d", VaSize);
      printLn("  addi sp, sp, %d", VaSize);
    }

    // 返回
    printLn("  # 返回a0值给系统调用");
    printLn("  ret");
  }
}

void codegen(Obj *Prog, FILE *Out) {
  // 设置目标文件的文件流指针
  OutputFile = Out;

  // 在-g启用时输出.file指示
  if (OptDebug) {
    File **Files = getInputFiles();
    for (int I = 0; Files[I]; I++)
      printLn("  .file %d \"%s\"", Files[I]->FileNo, Files[I]->Name);
  }

  // 计算局部变量的偏移量
  assignLVarOffsets(Prog);
  // 生成数据
  emitData(Prog);
  // 生成代码
  emitText(Prog);
}
// 本文件是对开放寻址哈希表（Open Addressing Hash Table）的一种实现。

// 初始哈希表的大小，即哈希表一开始能存储16个键值对
#define INIT_SIZE 16

// 高容量线，超过70%重新进行哈希计算
#define HIGH_WATERMARK 70

// 低容量线，超过后会需要扩充空间
#define LOW_WATERMARK 50

// 表示一个删除掉的哈希键值对
// 插入新元素时，优先选择标记删除的键值对，可以尽量避免增加哈希表的容量
#define TOMBSTONE ((void *)-1)

// 64位FNV-1哈希算法
// 能对字符串进行高效的哈希值计算
static uint64_t fnvHash(char *S, int Len) {
  // FNV初始偏移值（FNV_offset_basis）
  uint64_t Hash = 0xCBF29CE484222325;
  // 遍历字符串中的每个字节进行计算
  for (int I = 0; I < Len; I++) {
    // 哈希值乘以FNV质数（FNV_prime，此处为64位的）
    Hash *= 0x100000001B3;
    // 哈希值与该字节的值进行异或
    Hash ^= (unsigned char)S[I];
  }
  // 返回最后计算出的哈希值
  return Hash;
}

// 通过删除墓碑标记，为新的键值对开辟空间，并有可能拓展桶大小
static void rehash(HashMap *Map) {
  // 计算新哈希表的大小
  // 记录当前哈希表中使用的键值对数量
  int NKeys = 0;
  // 遍历当前哈希表的每个桶
  for (int I = 0; I < Map->Capacity; I++)
    // 如果当前桶中使用的键值对并且未被标记删除
    if (Map->Buckets[I].Key && Map->Buckets[I].Key != TOMBSTONE)
      NKeys++;

  // Cap存储新的容量，初始值为当前哈希表的容量
  int Cap = Map->Capacity;
  // 如果键值对使用数量超过了LOW_WATERMARK，则
  while ((NKeys * 100) / Cap >= LOW_WATERMARK)
    // 将Cap的值乘以2，这样就能翻倍哈希表的容量
    Cap = Cap * 2;
  // 若Cap的值不大于0，则终止程序
  assert(Cap > 0);

  // 定义一个新的哈希表Map2，并拷贝所有的键值对
  HashMap Map2 = {};
  // 为Map2分配足够的内存来存储Cap个桶
  Map2.Buckets = calloc(Cap, sizeof(HashEntry));
  // 设置Map2的容量为Cap
  Map2.Capacity = Cap;

  // 遍历当前哈希表的每个桶
  for (int I = 0; I < Map->Capacity; I++) {
    // 指向当前桶
    HashEntry *Ent = &Map->Buckets[I];
    // 如果当前桶中存在键值对并且未被标记删除
    if (Ent->Key && Ent->Key != TOMBSTONE)
      // 将该键值对放入新的哈希表Map2中
      hashmapPut2(&Map2, Ent->Key, Ent->KeyLen, Ent->Val);
  }

  // 断言Map2中的键值对数量等于NKeys
  assert(Map2.Used == NKeys);
  // 用新的哈希表Map2替换旧的哈希表
  *Map = Map2;
}

// 判断指定键是否匹配给定的键值对
static bool match(HashEntry *Ent, char *Key, int KeyLen) {
  // 键值对不为空，键值对未被标记删除，键值对与指定键长相同
  // 键值对的键与指定键相同
  return Ent->Key && Ent->Key != TOMBSTONE && Ent->KeyLen == KeyLen &&
         memcmp(Ent->Key, Key, KeyLen) == 0;
}

// 获取给定的键在哈希表中的键值对
static HashEntry *getEntry(HashMap *Map, char *Key, int KeyLen) {
  // 如果没有桶，则为空
  if (!Map->Buckets)
    return NULL;

  // 计算键对应的哈希值
  uint64_t Hash = fnvHash(Key, KeyLen);

  // 遍历哈希表中的所有桶
  for (int I = 0; I < Map->Capacity; I++) {
    // 开放寻址，当前位置存不下时，会在相邻位置存储
    // 如果当前位置没有匹配到，则加上I的偏移量，进行测试
    HashEntry *Ent = &Map->Buckets[(Hash + I) % Map->Capacity];
    // 若当前键值对的键，与所查找的键和键长相同
    if (match(Ent, Key, KeyLen))
      return Ent;
    // 所有的键值对都遍历完了，则返回空
    if (Ent->Key == NULL)
      return NULL;
  }
  unreachable();
}

// 若获取到键值对则返回，否则插入键值对后返回
static HashEntry *getOrInsertEntry(HashMap *Map, char *Key, int KeyLen) {
  if (!Map->Buckets) {
    // 如果哈希表没有初始化，则初始化INIT_SIZE个
    Map->Buckets = calloc(INIT_SIZE, sizeof(HashEntry));
    Map->Capacity = INIT_SIZE;
  } else if ((Map->Used * 100) / Map->Capacity >= HIGH_WATERMARK) {
    // 如果哈希表使用量超过了HIGH_WATERMARK，则重新进行哈希计算
    rehash(Map);
  }

  // 计算指定键的哈希值
  uint64_t Hash = fnvHash(Key, KeyLen);

  // 遍历所有的桶
  for (int I = 0; I < Map->Capacity; I++) {
    // 开放寻址，当前位置存不下时，会在相邻位置存储
    // 如果当前位置没有匹配到，则加上I的偏移量，进行测试
    HashEntry *Ent = &Map->Buckets[(Hash + I) % Map->Capacity];

    // 若当前键值对的键，与所查找的键和键长相同
    if (match(Ent, Key, KeyLen))
      return Ent;

    // 若当前键值对的键，被标记删除
    // 则赋值后使用该键值对
    if (Ent->Key == TOMBSTONE) {
      Ent->Key = Key;
      Ent->KeyLen = KeyLen;
      return Ent;
    }

    // 若当前键值对的键，为空
    // 则赋值后使用该键值对
    if (Ent->Key == NULL) {
      Ent->Key = Key;
      Ent->KeyLen = KeyLen;
      // 增加已使用量的计数
      Map->Used++;
      return Ent;
    }
  }
  unreachable();
}

// 查找哈希表中的键值对
void *hashmapGet(HashMap *Map, char *Key) {
  return hashmapGet2(Map, Key, strlen(Key));
}

void *hashmapGet2(HashMap *Map, char *Key, int KeyLen) {
  // 获取键值对
  HashEntry *Ent = getEntry(Map, Key, KeyLen);
  // 如果查找到键值对则返回，否则为空
  return Ent ? Ent->Val : NULL;
}

// 插入指定的键值对
void hashmapPut(HashMap *Map, char *Key, void *Val) {
  hashmapPut2(Map, Key, strlen(Key), Val);
}

void hashmapPut2(HashMap *Map, char *Key, int KeyLen, void *Val) {
  // 返回或创建键值对
  HashEntry *Ent = getOrInsertEntry(Map, Key, KeyLen);
  // 修改键值对的值
  Ent->Val = Val;
}

// 标记删除哈希表中的键值对
void hashmapDelete(HashMap *Map, char *Key) {
  hashmapDelete2(Map, Key, strlen(Key));
}

void hashmapDelete2(HashMap *Map, char *Key, int KeyLen) {
  // 查找指定的键值对
  HashEntry *Ent = getEntry(Map, Key, KeyLen);
  // 若键值对存在，则标记删除
  if (Ent)
    Ent->Key = TOMBSTONE;
}

// 用于哈希功能测试的函数
void hashmapTest(void) {
  // 新建一个容量为0的哈希表
  HashMap *Map = calloc(1, sizeof(HashMap));

  // 0  -  1000  -  1500  -  1600  -  2000  -  5000  -  6000  -  7000
  // ｜ 存在 ｜  删除  ｜  存在  ｜  删除  ｜  存在  ｜   空   ｜  存在   ｜
  for (int I = 0; I < 5000; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);
  for (int I = 1000; I < 2000; I++)
    hashmapDelete(Map, format("key %d", I));
  for (int I = 1500; I < 1600; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);
  for (int I = 6000; I < 7000; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);

  for (int I = 0; I < 1000; I++)
    assert((size_t)hashmapGet(Map, format("key %d", I)) == I);
  for (int I = 1000; I < 1500; I++)
    assert(hashmapGet(Map, "no such key") == NULL);
  for (int I = 1500; I < 1600; I++)
    assert((size_t)hashmapGet(Map, format("key %d", I)) == I);
  for (int I = 1600; I < 2000; I++)
    assert(hashmapGet(Map, "no such key") == NULL);
  for (int I = 2000; I < 5000; I++)
    assert((size_t)hashmapGet(Map, format("key %d", I)) == I);
  for (int I = 5000; I < 6000; I++)
    assert(hashmapGet(Map, "no such key") == NULL);
  for (int I = 6000; I < 7000; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);

  assert(hashmapGet(Map, "no such key") == NULL);
}

// 【注意】
// 如果是交叉编译，请把这个路径改为$RISCV对应的路径
// 注意 ~ 应替换为具体的 /home/用户名 的路径
static char *RVPath = "";

// 文件类型
typedef enum {
  FILE_NONE, // 空类型
  FILE_C,    // C语言源代码类型
  FILE_ASM,  // 汇编代码类型
  FILE_OBJ,  // 可重定位文件类型
  FILE_AR,   // 静态库文件类型
  FILE_DSO,  // 动态库文件类型
} FileType;

// 引入路径区
StringArray IncludePaths;
// common块默认生成
bool OptFCommon = true;
// 位置无关代码的标记
bool OptFPIC;

// -x选项
static FileType OptX;
// -include所引入的文件
static StringArray OptInclude;
// -E选项
static bool OptE;
// -M选项
static bool OptM;
// -MD选项
static bool OptMD;
// -MMD选项
static bool OptMMD;
// -MP选项
static bool OptMP;
// -S选项
static bool OptS;
// -c选项
static bool OptC;
// cc1选项
static bool OptCC1;
// ###选项
static bool OptHashHashHash;
// -g选项
//-static选项
static bool OptStatic;
// -shared选项
static bool OptShared;
// -MF选项
static char *OptMF;
// -MT选项
static char *OptMT;
// 目标文件的路径
static char *OptO;

// 链接器额外参数
static StringArray LdExtraArgs;
// 标准库所引入的路径，用于-MMD选项
static StringArray StdIncludePaths;

// 输入文件名
char *BaseFile;
// 输出文件名
static char *OutputFileName;

// 输入文件区
static StringArray InputPaths;
// 临时文件区
static StringArray TmpFiles;
static bool IncludesAdded;

// 输出程序的使用说明
static void usage(int Status) {
  fprintf(stderr, "rvcc [ -o <path> ] <file>\n");
  exit(Status);
}

// 判断需要一个参数的选项，是否具有一个参数
static bool takeArg(char *Arg) {
  char *X[] = {"-o", "-I",  "-idirafter", "-include",
               "-x", "-MF", "-MT",        "-Xlinker"};

  for (int I = 0; I < sizeof(X) / sizeof(*X); I++)
    if (!strcmp(Arg, X[I]))
      return true;
  return false;
}

// 增加默认引入路径
static void addDefaultIncludePaths(char *Argv0) {
  // 支持标准的引入路径
  strArrayPush(&IncludePaths, "/usr/local/include");
  strArrayPush(&IncludePaths, "/usr/include/riscv64-linux-gnu");
  strArrayPush(&IncludePaths, "/usr/include");

  // 为-MMD选项，复制一份标准库引入路径
  for (int I = 0; I < IncludePaths.Len; I++)
    strArrayPush(&StdIncludePaths, IncludePaths.Data[I]);
}

// 定义宏
static void define(char *Str) {
  char *Eq = strchr(Str, '=');
  if (Eq)
    // 存在赋值，使用该值
    defineMacro(strndup(Str, Eq - Str), Eq + 1);
  else
    // 不存在赋值，则设为1
    defineMacro(Str, "1");
}

// 解析-x选项
static FileType parseOptX(char *S) {
  // -xc，解析为C语言源代码
  if (!strcmp(S, "c"))
    return FILE_C;
  // -xassembler，解析为汇编源代码
  if (!strcmp(S, "assembler"))
    return FILE_ASM;
  // -xnone，解析为空类型
  if (!strcmp(S, "none"))
    return FILE_NONE;
  error("<command line>: unknown argument for -x: %s", S);
}

// 对Make的目标中的特殊字符进行处理
static char *quoteMakefile(char *S) {
  // 新字符串，确保即使S的全部字符都处理，加上'\0'也能够存储下
  char *Buf = calloc(1, strlen(S) * 2 + 1);

  // 遍历字符串，对特殊字符进行处理
  for (int I = 0, J = 0; S[I]; I++) {
    switch (S[I]) {
    case '$':
      Buf[J++] = '$';
      Buf[J++] = '$';
      break;
    case '#':
      Buf[J++] = '\\';
      Buf[J++] = '#';
      break;
    case ' ':
    case '\t':
      // 反向遍历反斜杠字符
      for (int K = I - 1; K >= 0 && S[K] == '\\'; K--)
        Buf[J++] = '\\';
      Buf[J++] = '\\';
      Buf[J++] = S[I];
      break;
    default:
      Buf[J++] = S[I];
      break;
    }
  }
  // 返回新字符串
  return Buf;
}

char OptOFName[32];

// 解析传入程序的参数
static void parseArgs(int Argc, char **Argv) {
  // 确保需要一个参数的选项，存在一个参数
  for (int I = 1; I < Argc; I++)
    // 如果需要一个参数
    if (takeArg(Argv[I]))
      // 如果不存在一个参数，则打印出使用说明
      if (!Argv[++I])
        usage(1);

  // 存储-idirafter的路径参数
  StringArray Idirafter = {};

  // 遍历所有传入程序的参数
  for (int I = 1; I < Argc; I++) {
    // 解析-###
    if (!strcmp(Argv[I], "-###")) {
      OptHashHashHash = true;
      continue;
    }

    // 解析-cc1
    if (!strcmp(Argv[I], "-cc1")) {
      OptCC1 = true;
      continue;
    }

    // 如果存在help，则直接显示用法说明
    if (!strcmp(Argv[I], "--help"))
      usage(0);

    // 解析-o XXX的参数
    if (!strcmp(Argv[I], "-o")) {
      // 目标文件的路径
      OptO = Argv[++I];
      continue;
    }

    // 解析-oXXX的参数
    if (!strncmp(Argv[I], "-o", 2)) {
      // 目标文件的路径
      OptO = Argv[I] + 2;
      continue;
    }

    // 解析-S
    if (!strcmp(Argv[I], "-S")) {
      OptS = true;
      continue;
    }
    OptS = true;

    // // 解析-fcommon
    if (!strcmp(Argv[I], "-fcommon")) {
      OptFCommon = true;
      continue;
    }

    // 解析-fno-common
    if (!strcmp(Argv[I], "-fno-common")) {
      OptFCommon = false;
      continue;
    }

    // 解析-c
    if (!strcmp(Argv[I], "-c")) {
      OptC = true;
      continue;
    }

    // 解析-E
    if (!strcmp(Argv[I], "-E")) {
      OptE = true;
      continue;
    }

    if (!strncmp(Argv[I], "-g", 2)) {
      char *Level = Argv[I] + 2;
      OptDebug = (*Level == '\0' || strcmp(Level, "0") != 0);
      continue;
    }

    // 解析-I
    if (!strncmp(Argv[I], "-I", 2)) {
      strArrayPush(&IncludePaths, Argv[I] + 2);
      continue;
    }

    // 解析-D
    if (!strcmp(Argv[I], "-D")) {
      define(Argv[++I]);
      continue;
    }

    // 解析-D
    if (!strncmp(Argv[I], "-D", 2)) {
      define(Argv[I] + 2);
      continue;
    }

    // 解析-U
    if (!strcmp(Argv[I], "-U")) {
      undefMacro(Argv[++I]);
      continue;
    }

    // 解析-U
    if (!strncmp(Argv[I], "-U", 2)) {
      undefMacro(Argv[I] + 2);
      continue;
    }

    // 解析-include
    if (!strcmp(Argv[I], "-include")) {
      strArrayPush(&OptInclude, Argv[++I]);
      continue;
    }

    // 解析-x
    if (!strcmp(Argv[I], "-x")) {
      OptX = parseOptX(Argv[++I]);
      continue;
    }

    // 解析-x
    if (!strncmp(Argv[I], "-x", 2)) {
      OptX = parseOptX(Argv[I] + 2);
      continue;
    }

    // 解析-l、-Wl,
    if (!strncmp(Argv[I], "-l", 2) || !strncmp(Argv[I], "-Wl,", 4)) {
      strArrayPush(&InputPaths, Argv[I]);
      continue;
    }

    // 解析-Xlinker
    if (!strcmp(Argv[I], "-Xlinker")) {
      strArrayPush(&LdExtraArgs, Argv[++I]);
      continue;
    }

    // 解析-s
    if (!strcmp(Argv[I], "-s")) {
      strArrayPush(&LdExtraArgs, "-s");
      continue;
    }

    // 解析-M
    if (!strcmp(Argv[I], "-M")) {
      OptM = true;
      continue;
    }

    // 解析-MF
    if (!strcmp(Argv[I], "-MF")) {
      OptMF = Argv[++I];
      continue;
    }

    // 解析-MP
    if (!strcmp(Argv[I], "-MP")) {
      OptMP = true;
      continue;
    }

    // 解析-MT
    // `-MT File`，指定File为依赖规则中的目标
    if (!strcmp(Argv[I], "-MT")) {
      if (OptMT == NULL)
        // 无依赖规则中的目标
        OptMT = Argv[++I];
      else
        // 合并依赖规则中的目标
        OptMT = format("%s %s", OptMT, Argv[++I]);
      continue;
    }

    // 解析-MD
    if (!strcmp(Argv[I], "-MD")) {
      OptMD = true;
      continue;
    }

    // 解析-MQ
    if (!strcmp(Argv[I], "-MQ")) {
      if (OptMT == NULL)
        // 无依赖规则中的目标
        OptMT = quoteMakefile(Argv[++I]);
      else
        // 合并依赖规则中的目标
        OptMT = format("%s %s", OptMT, quoteMakefile(Argv[++I]));
      continue;
    }

    // 解析-MMD
    if (!strcmp(Argv[I], "-MMD")) {
      // 同时启用-MD选项
      OptMD = OptMMD = true;
      continue;
    }

    // 解析-fpic或-fPIC
    if (!strcmp(Argv[I], "-fpic") || !strcmp(Argv[I], "-fPIC")) {
      OptFPIC = true;
      continue;
    }

    // 解析-cc1-input
    if (!strcmp(Argv[I], "-cc1-input")) {
      BaseFile = Argv[++I];
      continue;
    }

    // 解析-cc1-output
    if (!strcmp(Argv[I], "-cc1-output")) {
      OutputFileName = Argv[++I];
      continue;
    }

    // 解析-idirafter
    // 将参数存入Idirafter
    if (!strcmp(Argv[I], "-idirafter")) {
      strArrayPush(&Idirafter, Argv[I++]);
      continue;
    }

    // 解析-static
    if (!strcmp(Argv[I], "-static")) {
      OptStatic = true;
      strArrayPush(&LdExtraArgs, "-static");
      continue;
    }

    // 解析-shared
    if (!strcmp(Argv[I], "-shared")) {
      OptShared = true;
      strArrayPush(&LdExtraArgs, "-shared");
      continue;
    }

    // 解析-L
    if (!strcmp(Argv[I], "-L")) {
      strArrayPush(&LdExtraArgs, "-L");
      strArrayPush(&LdExtraArgs, Argv[++I]);
      continue;
    }

    // 解析-L
    if (!strncmp(Argv[I], "-L", 2)) {
      strArrayPush(&LdExtraArgs, "-L");
      strArrayPush(&LdExtraArgs, Argv[I] + 2);
      continue;
    }

    // 哈希表测试
    if (!strcmp(Argv[I], "-hashmap-test")) {
      hashmapTest();
      exit(0);
    }

    // 忽略多个选项
    if (!strncmp(Argv[I], "-O", 2) || !strncmp(Argv[I], "-W", 2) ||
        !strncmp(Argv[I], "-std=", 5) ||
        !strcmp(Argv[I], "-ffreestanding") ||
        !strcmp(Argv[I], "-fno-builtin") ||
        !strcmp(Argv[I], "-fno-omit-frame-pointer") ||
        !strcmp(Argv[I], "-fno-stack-protector") ||
        !strcmp(Argv[I], "-fno-strict-aliasing") || !strcmp(Argv[I], "-m64") ||
        !strcmp(Argv[I], "-mno-red-zone") || !strcmp(Argv[I], "-w") ||
        !strcmp(Argv[I], "-march=native"))
      continue;

    // 解析为-的参数
    if (Argv[I][0] == '-' && Argv[I][1] != '\0')
      error("unknown argument: %s", Argv[I]);

char* p = Argv[I];
bool in_opt_o = false;

while(*p) {
    if(*p == '.' && (p - Argv[I]) < 20) {
        memcpy(OptOFName, Argv[I], p - Argv[I]);
        OptOFName[p - Argv[I]] = '.';
        OptOFName[p - Argv[I]+1] = 's';
        OptOFName[p - Argv[I]+2] = '\0';
        in_opt_o = true;
        OptO = OptOFName;
        break;
    }    
    p++;
}

    // 其他情况则匹配为输入文件
    
    strArrayPush(&InputPaths, Argv[I]);
  }

  // 将所用Idirafter内的路径，都存入引用路径区中
  for (int I = 0; I < Idirafter.Len; I++)
    strArrayPush(&IncludePaths, Idirafter.Data[I]);

  // 不存在输入文件时报错
  if (InputPaths.Len == 0)
    error("no input files");

  // -E隐式包含输入是C语言的宏
  if (OptE)
    OptX = FILE_C;
}

// 打开需要写入的文件
static FILE *openFile(char *Path) {
  if (!Path || strcmp(Path, "-") == 0)
    return stdout;

  // 以写入模式打开文件
  FILE *Out = fopen(Path, "w");
  if (!Out)
    error("cannot open output file: %s: %s", Path, strerror(errno));
  return Out;
}

// 判断字符串P是否以字符串Q结尾
static bool endsWith(char *P, char *Q) {
  int len1 = strlen(P);
  int len2 = strlen(Q);
  // P比Q长且P最后Len2长度的字符和Q相等，则为真
  return (len1 >= len2) && !strcmp(P + len1 - len2, Q);
}

// 替换文件的后缀名
static char *replaceExtn(char *Tmpl, char *Extn) {
  // 去除路径，返回基础文件名
  char *Filename = Tmpl; //basename(strdup(Tmpl));
  //char *Filename = basename(strdup(Tmpl));
  // 最后一次字符出现的位置
  char *Dot = strrchr(Filename, '.');
  // 如果存在'.'，清除此后的内容
  if (Dot)
    *Dot = '\0';
  // 将新后缀写入文件名中
  return format("%s%s", Filename, Extn);
}

// 清理临时文件区
static void cleanup(void) {
  // 遍历删除临时文件
  for (int I = 0; I < TmpFiles.Len; I++)
    unlink(TmpFiles.Data[I]);
}

// 创建临时文件
static char *createTmpFile(void) {
  // 临时文件的路径格式
  char *Path = strdup("rvcc-XXXXXX");
  // 创建临时文件
  int FD = mkstemp(Path);
  // 临时文件创建失败
  if (FD == -1)
    error("mkstemp failed: %s", strerror(errno));
  // 关闭文件
  close(FD);

  // 将文件路径存入临时文件区中
  strArrayPush(&TmpFiles, Path);
  return Path;
}

// 开辟子进程
static void runSubprocess(char **Argv) {
  // 打印出子进程所有的命令行参数
  if (OptHashHashHash) {
    // 程序名
    fprintf(stderr, "%s", Argv[0]);
    // 程序参数
    for (int I = 1; Argv[I]; I++)
      fprintf(stderr, " %s", Argv[I]);
    // 换行
    fprintf(stderr, "\n");
  }
  // fork/exec are disabled on Minux9 environment.
  (void)Argv;
}
static void cc1(void);

// 执行调用cc1程序
// 因为rvcc自身就是cc1程序
// 所以调用自身，并传入-cc1参数作为子进程
static void runCC1(int Argc, char **Argv, char *Input, char *Output) {
  if (!IncludesAdded) {
    addDefaultIncludePaths(Argv[0]);
    IncludesAdded = true;
  }

  char *PrevBase = BaseFile;
  char *PrevOutput = OutputFileName;

  char *OwnedBase = Input ? strdup(Input) : NULL;
  BaseFile = OwnedBase ? OwnedBase : Input;
  OutputFileName = Output ? Output : "-";

  cc1();

  BaseFile = PrevBase;
  OutputFileName = PrevOutput;
  // Note: OwnedBase intentionally leaked to keep File->Name valid.
}

// 当指定-E选项时，打印出所有终结符
static void printTokens(Token *Tok) {
  // 输出文件，默认为stdout
  FILE *Out = openFile(OptO ? OptO : "-");

  // 记录行数
  int Line = 1;
  // 遍历读取终结符
  for (; Tok->Kind != TK_EOF; Tok = Tok->Next) {
    // 位于行首打印出换行符
    if (Line > 1 && Tok->AtBOL)
      fprintf(Out, "\n");
    // 打印出需要空格的位置
    if (Tok->HasSpace && !Tok->AtBOL)
      fprintf(Out, " ");
    // 打印出终结符
    fprintf(Out, "%.*s", Tok->Len, Tok->Loc);
    Line++;
  }
  // 文件以换行符结尾
  fprintf(Out, "\n");
}

// 判断是否为标准库路径
static bool inStdIncludePath(char *Path) {
  for (int I = 0; I < StdIncludePaths.Len; I++) {
    char *Dir = StdIncludePaths.Data[I];
    int Len = strlen(Dir);
    // 与库路径相同，且以斜杠结尾
    if (strncmp(Dir, Path, Len) == 0 && Path[Len] == '/')
      return true;
  }
  return false;
}

// 输出可用于Make的规则，自动化文件依赖管理
static void printDependencies(void) {
  char *Path;
  if (OptMF)
    // 将Make的规则写入`-MF File`的File中
    Path = OptMF;
  else if (OptMD)
    // 相当于`-M -MF File.d`，将Make的规则写入.d文件
    Path = replaceExtn(OptO ? OptO : BaseFile, ".d");
  else if (OptO)
    Path = OptO;
  else
    Path = "-";

  // 输出文件
  FILE *Out = openFile(Path);
  // 如果未指定-MT，默认需要目标名中的特殊字符处理
  if (OptMT)
    fprintf(Out, "%s:", OptMT);
  else
    // -MF指定依赖规则中的目标，否则替换后缀为.o
    fprintf(Out, "%s:", quoteMakefile(replaceExtn(BaseFile, ".o")));

  // 获取输入文件
  File **Files = getInputFiles();

  // 遍历输入文件，并将格式化的结果写入输出文件
  for (int I = 0; Files[I]; I++) {
    // 不输出标准库内的文件
    if (OptMMD && inStdIncludePath(Files[I]->Name))
      continue;
    fprintf(Out, " \\\n  %s", Files[I]->Name);
  }

  fprintf(Out, "\n\n");

  // 如果指定了-MP，则为头文件生成伪目标
  if (OptMP) {
    for (int I = 1; Files[I]; I++) {
      // 不输出标准库内的文件
      if (OptMMD && inStdIncludePath(Files[I]->Name))
        continue;
      // 处理头文件中的特殊字符
      fprintf(Out, "%s:\n\n", quoteMakefile(Files[I]->Name));
    }
  }
}

// 解析文件，生成终结符流
static Token *mustTokenizeFile(char *Path) {
  Token *Tok = tokenizeFile(Path);
  // 终结符流生成失败，对应文件报错
  if (!Tok)
    error("%s: %s", Path, strerror(errno));
  return Tok;
}

// 拼接终结符链表
static Token *appendTokens(Token *Tok1, Token *Tok2) {
  // Tok1为空时直接返回Tok2
  if (!Tok1 || Tok1->Kind == TK_EOF)
    return Tok2;

  // 链表指针T
  Token *T = Tok1;
  // T指向遍历到Tok1链表中最后一个
  while (T->Next->Kind != TK_EOF)
    T = T->Next;
  // T->Next指向Tok2
  T->Next = Tok2;
  // 返回拼接好的Tok1
  return Tok1;
}

// 编译C文件到汇编文件
static void cc1(void) {
  Token *Tok = NULL;

  // 处理-include选项
  for (int I = 0; I < OptInclude.Len; I++) {
    // 需要引入的文件
    char *Incl = OptInclude.Data[I];

    char *Path;
    if (fileExists(Incl)) {
      // 如果文件存在，则直接使用路径
      Path = Incl;
    } else {
      // 否则搜索引入路径区
      Path = searchIncludePaths(Incl);
      if (!Path)
        error("-include: %s: %s", Incl, strerror(errno));
    }

    // 解析文件，生成终结符流
    Token *Tok2 = mustTokenizeFile(Path);
    Tok = appendTokens(Tok, Tok2);
  }

  // 解析文件，生成终结符流
  Token *Tok2 = mustTokenizeFile(BaseFile);
  Tok = appendTokens(Tok, Tok2);

  // 预处理
  Tok = preprocess(Tok);

  // 如果指定了-M，打印出文件的依赖关系
  if (OptM || OptMD) {
    printDependencies();
    if (OptM)
      return;
  }

  // 如果指定了-E那么打印出预处理过的C代码
  if (OptE) {
    printTokens(Tok);
    return;
  }

  // 解析终结符流
  Obj *Prog = parse(Tok);

  // 生成代码

  // 防止编译器在编译途中退出，而只生成了部分的文件
  // 开启临时输出缓冲区
  char *Buf;
  size_t BufLen;
  FILE *OutputBuf = open_memstream(&Buf, &BufLen);

  // 输出汇编到缓冲区中
  codegen(Prog, OutputBuf);
  fclose(OutputBuf);

  // 从缓冲区中写入到文件中
  FILE *Out = openFile(OutputFileName);
  fwrite(Buf, BufLen, 1, Out);
  fclose(Out);
}

// 调用汇编器
static void assemble(char *Input, char *Output) {
  // 选择对应环境内的汇编器
  char *As = strlen(RVPath)
                 ? format("%s/bin/riscv64-unknown-linux-gnu-as", RVPath)
                 : "as";
  char *Cmd[] = {As, "-c", Input, "-o", Output, NULL};
  runSubprocess(Cmd);
}

// 查找文件
static char *findFile(char *Pattern) {
  char *Path = NULL;
  // Linux文件系统中路径名称的模式匹配
  glob_t Buf = {};
  // 参数：用来模式匹配的路径，标记（例如是否排序结果），错误处理函数，结果存放缓冲区
  glob(Pattern, 0, NULL, &Buf);
  // gl_pathc匹配到的路径计数
  // 复制最后的一条匹配结果到Path中
  if (Buf.gl_pathc > 0)
    Path = strdup(Buf.gl_pathv[Buf.gl_pathc - 1]);
  // 释放内存
  globfree(&Buf);
  return Path;
}

// 文件存在时，为真
bool fileExists(char *Path) {
  struct stat St;
  return !stat(Path, &St);
}

// 查找库路径
static char *findLibPath(void) {
  if (fileExists("/usr/lib/riscv64-linux-gnu/crti.o"))
    return "/usr/lib/riscv64-linux-gnu";
  if (fileExists("/usr/lib64/crti.o"))
    return "/usr/lib64";

  if (fileExists(format("%s/sysroot/usr/lib/crti.o", RVPath)))
    return format("%s/sysroot/usr/lib/", RVPath);
  error("library path is not found");
  return NULL;
}

//static char *findGCCLibPath(void) {
//  char *paths[] = {
//      "/usr/lib/gcc/riscv64-linux-gnu/*/crtbegin.o",
//      "/usr/lib/gcc/riscv64-pc-linux-gnu/*/crtbegin.o",
//      "/usr/lib/gcc/riscv64-redhat-linux/*/crtbegin.o",
//      format("%s/lib/gcc/riscv64-unknown-linux-gnu/*/crtbegin.o", RVPath),
//  };
//
//  // 遍历以查找gcc库的路径
//  for (int I = 0; I < sizeof(paths) / sizeof(*paths); I++) {
//    char *path = findFile(paths[I]);
//    if (path)
//      return dirname(path);
//  }
//
//  error("gcc library path is not found");
//  return NULL;
//}

// 运行链接器ld
static void runLinker(StringArray *Inputs, char *Output) {
  // 需要传递ld子进程的参数
  StringArray Arr = {};

  // 链接器
  char *Ld = strlen(RVPath)
                 ? format("%s/bin/riscv64-unknown-linux-gnu-ld", RVPath)
                 : "ld";
  strArrayPush(&Arr, Ld);

  // 输出文件
  strArrayPush(&Arr, "-o");
  strArrayPush(&Arr, Output);
  strArrayPush(&Arr, "-m");
  strArrayPush(&Arr, "elf64lriscv");
  if (!OptStatic) {
    strArrayPush(&Arr, "-dynamic-linker");

    char *LP64D =
        strlen(RVPath)
            ? format("%s/sysroot/lib/ld-linux-riscv64-lp64d.so.1", RVPath)
            : "/lib/ld-linux-riscv64-lp64d.so.1";
    strArrayPush(&Arr, LP64D);
  }

  char *LibPath = findLibPath();
//c  char *GccLibPath = findGCCLibPath();

  if (OptShared) {
    strArrayPush(&Arr, format("%s/crti.o", LibPath));
//    strArrayPush(&Arr, format("%s/crtbeginS.o", GccLibPath));
  } else {
    strArrayPush(&Arr, format("%s/crt1.o", LibPath));
    strArrayPush(&Arr, format("%s/crti.o", LibPath));
//    strArrayPush(&Arr, format("%s/crtbegin.o", GccLibPath));
  }

//  strArrayPush(&Arr, format("-L%s", GccLibPath));

  if (strlen(RVPath)) {
    strArrayPush(&Arr, format("-L%s/sysroot/usr/lib64", RVPath));
    strArrayPush(&Arr, format("-L%s/sysroot/lib64", RVPath));
    strArrayPush(&Arr,
                 format("-L%s/sysroot/usr/lib/riscv64-linux-gnu", RVPath));
    strArrayPush(&Arr,
                 format("-L%s/sysroot/usr/lib/riscv64-pc-linux-gnu", RVPath));
    strArrayPush(&Arr,
                 format("-L%s/sysroot/usr/lib/riscv64-redhat-linux", RVPath));
    strArrayPush(&Arr, format("-L%s/sysroot/usr/lib", RVPath));
    strArrayPush(&Arr, format("-L%s/sysroot/lib", RVPath));
  } else {
    strArrayPush(&Arr, "-L/usr/lib64");
    strArrayPush(&Arr, "-L/lib64");
    strArrayPush(&Arr, "-L/usr/lib/riscv64-linux-gnu");
    strArrayPush(&Arr, "-L/usr/lib/riscv64-pc-linux-gnu");
    strArrayPush(&Arr, "-L/usr/lib/riscv64-redhat-linux");
    strArrayPush(&Arr, "-L/usr/lib");
    strArrayPush(&Arr, "-L/lib");
  }

  // 链接器额外参数存入到链接器参数中
  for (int I = 0; I < LdExtraArgs.Len; I++)
    strArrayPush(&Arr, LdExtraArgs.Data[I]);

  // 输入文件，存入到链接器参数中
  for (int I = 0; I < Inputs->Len; I++)
    strArrayPush(&Arr, Inputs->Data[I]);

  if (OptStatic) {
    strArrayPush(&Arr, "--start-group");
    strArrayPush(&Arr, "-lgcc");
    strArrayPush(&Arr, "-lgcc_eh");
    strArrayPush(&Arr, "-lc");
    strArrayPush(&Arr, "--end-group");
  } else {
    strArrayPush(&Arr, "-lc");
    strArrayPush(&Arr, "-lgcc");
    strArrayPush(&Arr, "--as-needed");
    strArrayPush(&Arr, "-lgcc_s");
    strArrayPush(&Arr, "--no-as-needed");
  }

/*
  if (OptShared)
    strArrayPush(&Arr, format("%s/crtendS.o", GccLibPath));
  else
    strArrayPush(&Arr, format("%s/crtend.o", GccLibPath));
*/
  strArrayPush(&Arr, format("%s/crtn.o", LibPath));
  strArrayPush(&Arr, NULL);

  // 开辟的链接器子进程
  runSubprocess(Arr.Data);
}

// 获取文件的类型
static FileType getFileType(char *Filename) {
  // 若-x指定了不为空的类型，使用该类型
  if (OptX != FILE_NONE)
    return OptX;

  // 以.a结尾的文件，解析为静态库文件类型
  if (endsWith(Filename, ".a"))
    return FILE_AR;
  // 以.so结尾的文件，解析为动态库文件类型
  if (endsWith(Filename, ".so"))
    return FILE_DSO;
  // 以.o结尾的文件，解析为空重定位文件类型
  if (endsWith(Filename, ".o"))
    return FILE_OBJ;
  // 以.c结尾的文件，解析为C语言源代码类型
  if (endsWith(Filename, ".c"))
    return FILE_C;
  // 以.s结尾的文件，解析为汇编类型
  if (endsWith(Filename, ".s"))
    return FILE_ASM;

  error("<command line>: unknown file extension: %s", Filename);
}

// 编译器驱动流程
//
// 源文件
//   ↓
// 预处理器预处理后的文件
//   ↓
// cc1编译为汇编文件
//   ↓
// as编译为可重定位文件
//   ↓
// ld链接为可执行文件

// rvcc的程序入口函数
int main(int Argc, char **Argv) {
  // Register cleanup so that temporary files are removed even on early exits.
//  atexit(cleanup);
  // 初始化预定义的宏
  initMacros();
  // 解析传入程序的参数
  parseArgs(Argc, Argv);

  // 如果指定了-cc1选项
  // 直接编译C文件到汇编文件
  if (OptCC1) {
    // 增加默认引入路径
    addDefaultIncludePaths(Argv[0]);
    cc1();
    return 0;
  }

  // 当前不能指定-c、-S、-E后，将多个输入文件，输出到一个文件中
  if (InputPaths.Len > 1 && OptO && (OptC || OptS || OptE))
    error("cannot specify '-o' with '-c', '-S' or '-E' with multiple files");

  // 遍历每个输入文件
  for (int I = 0; I < InputPaths.Len; I++) {
    // 读取输入文件
    char *Input = InputPaths.Data[I];

    // 输出文件，默认写到标准输出
    char *Output = "-";
    if (OptO && OptS)
      Output = OptO;

    // 获取输入文件的类型
    FileType Ty = getFileType(Input);

    // 处理.o或.a或.so文件
    if (Ty == FILE_OBJ || Ty == FILE_AR || Ty == FILE_DSO)
      continue;

    // 处理.s文件
    if (Ty == FILE_ASM) {
      if (!OptS)
        error("assembler/linker unavailable: please use '-S'");
      continue;
    }

    // 处理.c文件
    assert(Ty == FILE_C);

    // 只进行解析
    if (OptE || OptM) {
      runCC1(Argc, Argv, Input, NULL);
      continue;
    }

    if (!OptS)
      error("assembler/linker unavailable: please use '-S' to emit assembly");

    runCC1(Argc, Argv, Input, Output);
    continue;
  }

  cleanup();
  return 0;
}

// 局部变量，全局变量，typedef，enum常量的域
typedef struct {
  Obj *Var;      // 对应的变量
  Type *Typedef; // 别名
  Type *EnumTy;  // 枚举的类型
  int EnumVal;   // 枚举的值
} VarScope;

// 表示一个块域
typedef struct Scope Scope;
struct Scope {
  Scope *Next; // 指向上一级的域

  // C有两个域：变量（或类型别名）域，结构体（或联合体，枚举）标签域
  HashMap Vars; // 指向当前域内的变量
  HashMap Tags; // 指向当前域内的结构体标签
};

// 变量属性
typedef struct {
  bool IsTypedef; // 是否为类型别名
  bool IsStatic;  // 是否为文件域内
  bool IsExtern;  // 是否为外部变量
  bool IsInline;  // 是否为内联
  bool IsTLS;     // 是否为线程局部存储，Thread Local Storage
  int Align;      // 对齐量
} VarAttr;

// 可变的初始化器。此处为树状结构。
// 因为初始化器可以是嵌套的，
// 类似于 int x[2][2] = {{1, 2}, {3, 4}} ，
typedef struct Initializer Initializer;
struct Initializer {
  Initializer *Next; // 下一个
  Type *Ty;          // 原始类型
  Token *Tok;        // 终结符
  bool IsFlexible;   // 可调整的，表示需要重新构造

  // 如果不是聚合类型，并且有一个初始化器，Expr 有对应的初始化表达式。
  Node *Expr;

  // 如果是聚合类型（如数组或结构体），Children有子节点的初始化器
  Initializer **Children;

  // 联合体中只有一个成员能被初始化，此处用来标记是哪个成员被初始化
  Member *Mem;
};

// 指派初始化，用于局部变量的初始化器
typedef struct InitDesig InitDesig;
struct InitDesig {
  InitDesig *Next; // 下一个
  int Idx;         // 数组中的索引
  Member *Mem;     // 成员变量
  Obj *Var;        // 对应的变量
};

// 在解析时，全部的变量实例都被累加到这个列表里。
Obj *Locals;  // 局部变量
Obj *Globals; // 全局变量

// 所有的域的链表
static Scope *Scp = &(Scope){};

// 指向当前正在解析的函数
static Obj *CurrentFn;

// 当前函数内的goto和标签列表
static Node *Gotos;
static Node *Labels;

// 当前goto跳转的目标
static char *BrkLabel;
// 当前continue跳转的目标
static char *ContLabel;

// 如果我们正在解析switch语句，则指向表示switch的节点。
// 否则为空。
static Node *CurrentSwitch;

// 内建的Alloca函数
static Obj *BuiltinAlloca;

// program = (typedef | functionDefinition | globalVariable)*
// functionDefinition = declspec declarator "{" compoundStmt*
// declspec = ("void" | "_Bool" | char" | "short" | "int" | "long"
//             | "typedef" | "static" | "extern" | "inline"
//             | "_Thread_local" | "__thread"
//             | "_Alignas" ("(" typeName | constExpr ")")
//             | "signed" | "unsigned"
//             | structDecl | unionDecl | typedefName
//             | enumSpecifier | typeofSpecifier
//             | "const" | "volatile" | "auto" | "register" | "restrict"
//             | "__restrict" | "__restrict__" | "_Noreturn")+
// enumSpecifier = ident? "{" enumList? "}"
//                 | ident ("{" enumList? "}")?
// enumList = ident ("=" constExpr)? ("," ident ("=" constExpr)?)* ","?
// declarator = pointers ("(" ident ")" | "(" declarator ")" | ident) typeSuffix
// pointers = ("*" ("const" | "volatile" | "restrict")*)*
// typeSuffix = "(" funcParams | "[" arrayDimensions | ε
// arrayDimensions = ("static" | "restrict")* constExpr? "]" typeSuffix
// funcParams = ("void" | param ("," param)* ("," "...")?)? ")"
// param = declspec declarator

// compoundStmt = (typedef | declaration | stmt)* "}"
// declaration = declspec (declarator ("=" initializer)?
//                         ("," declarator ("=" initializer)?)*)? ";"
// initializer = stringInitializer | arrayInitializer | structInitializer
//             | unionInitializer |assign
// stringInitializer = stringLiteral

// arrayInitializer = arrayInitializer1 | arrayInitializer2
// arrayInitializer1 = "{" initializer ("," initializer)* ","? "}"
// arrayIntializer2 = initializer ("," initializer)* ","?

// structInitializer = structInitializer1 | structInitializer2
// structInitializer1 = "{" initializer ("," initializer)* ","? "}"
// structIntializer2 = initializer ("," initializer)* ","?

// unionInitializer = "{" initializer "}"
// stmt = "return" expr? ";"
//        | "if" "(" expr ")" stmt ("else" stmt)?
//        | "switch" "(" expr ")" stmt
//        | "case" constExpr ("..." constExpr)? ":" stmt
//        | "default" ":" stmt
//        | "for" "(" exprStmt expr? ";" expr? ")" stmt
//        | "while" "(" expr ")" stmt
//        | "do" stmt "while" "(" expr ")" ";"
//        | asmStmt
//        | "goto" (ident | "*" expr) ";"
//        | "break" ";"
//        | "continue" ";"
//        | ident ":" stmt
//        | "{" compoundStmt
//        | exprStmt
// asmStmt = "asm" ("volatile" | "inline")* "(" stringLiteral ")"
// exprStmt = expr? ";"
// expr = assign ("," expr)?
// assign = conditional (assignOp assign)?
// conditional = logOr ("?" expr? ":" conditional)?
// logOr = logAnd ("||" logAnd)*
// logAnd = bitOr ("&&" bitOr)*
// bitOr = bitXor ("|" bitXor)*
// bitXor = bitAnd ("^" bitAnd)*
// bitAnd = equality ("&" equality)*
// assignOp = "=" | "+=" | "-=" | "*=" | "/=" | "%=" | "&=" | "|=" | "^="
//          | "<<=" | ">>="
// equality = relational ("==" relational | "!=" relational)*
// relational = shift ("<" shift | "<=" shift | ">" shift | ">=" shift)*
// shift = add ("<<" add | ">>" add)*
// add = mul ("+" mul | "-" mul)*
// mul = cast ("*" cast | "/" cast | "%" cast)*
// cast = "(" typeName ")" cast | unary
// unary = ("+" | "-" | "*" | "&" | "!" | "~") cast
//       | ("++" | "--") unary
//       | "&&" ident
//       | postfix
// structMembers = (declspec declarator (","  declarator)* ";")*
// structDecl = structUnionDecl
// unionDecl = structUnionDecl
// structUnionDecl = attribute? ident? ("{" structMembers)?
// attribute = ("__attribute__" "(" "(" ("packed")
//                                    | ("aligned" "(" N ")") ")" ")")*
// postfix = "(" typeName ")" "{" initializerList "}"
//         = ident "(" funcArgs ")" postfixTail*
//         | primary postfixTail*
//
// postfixTail = "[" expr "]"
//             | "(" funcArgs ")"
//             | "." ident
//             | "->" ident
//             | "++"
//             | "--"
// primary = "(" "{" stmt+ "}" ")"
//         | "(" expr ")"
//         | "sizeof" "(" typeName ")"
//         | "sizeof" unary
//         | "_Alignof" "(" typeName ")"
//         | "_Alignof" unary
//         | "_Generic" genericSelection
//         | "__builtin_types_compatible_p" "(" typeName, typeName, ")"
//         | ident
//         | str
//         | num
// genericSelection = "(" assign "," genericAssoc ("," genericAssoc)* ")"
// genericAssoc = typeName ":" assign
//              | "default" ":" assign
// typeName = declspec abstractDeclarator
// abstractDeclarator = pointers ("(" abstractDeclarator ")")? typeSuffix

// funcall = (assign ("," assign)*)? ")"
static bool isTypename(Token *Tok);
static Type *declspec(Token **Rest, Token *Tok, VarAttr *Attr);
static Type *typename(Token **Rest, Token *Tok);
static Type *enumSpecifier(Token **Rest, Token *Tok);
static Type *typeofSpecifier(Token **Rest, Token *Tok);
static Type *typeSuffix(Token **Rest, Token *Tok, Type *Ty);
static Type *declarator(Token **Rest, Token *Tok, Type *Ty);
static Node *declaration(Token **Rest, Token *Tok, Type *BaseTy, VarAttr *Attr);
static void arrayInitializer2(Token **Rest, Token *Tok, Initializer *Init,
                               int I);
static void structInitializer2(Token **Rest, Token *Tok, Initializer *Init,
                               Member *Mem);
static void initializer2(Token **Rest, Token *Tok, Initializer *Init);
static Initializer *initializer(Token **Rest, Token *Tok, Type *Ty,
                                Type **NewTy);
static Node *LVarInitializer(Token **Rest, Token *Tok, Obj *Var);
static void GVarInitializer(Token **Rest, Token *Tok, Obj *Var);
static Node *compoundStmt(Token **Rest, Token *Tok);
static Node *stmt(Token **Rest, Token *Tok);
static Node *exprStmt(Token **Rest, Token *Tok);
static Node *expr(Token **Rest, Token *Tok);
static int64_t eval(Node *Nd);
static int64_t eval2(Node *Nd, char ***Label);
static int64_t evalRVal(Node *Nd, char ***Label);
static double evalDouble(Node *Nd);
static bool isConstExpr(Node *Nd);
static Node *assign(Token **Rest, Token *Tok);
static Node *conditional(Token **Rest, Token *Tok);
static Node *logOr(Token **Rest, Token *Tok);
static Node *logAnd(Token **Rest, Token *Tok);
static Node *bitOr(Token **Rest, Token *Tok);
static Node *bitXor(Token **Rest, Token *Tok);
static Node *bitAnd(Token **Rest, Token *Tok);
static Node *equality(Token **Rest, Token *Tok);
static Node *relational(Token **Rest, Token *Tok);
static Node *shift(Token **Rest, Token *Tok);
static Node *add(Token **Rest, Token *Tok);
static Node *newAdd(Node *LHS, Node *RHS, Token *Tok);
static Node *newSub(Node *LHS, Node *RHS, Token *Tok);
static Node *mul(Token **Rest, Token *Tok);
static Node *castToken(Token **Rest, Token *Tok);
static Member *getStructMember(Type *Ty, Token *Tok);
static Type *structDecl(Token **Rest, Token *Tok);
static Type *unionDecl(Token **Rest, Token *Tok);
static Node *unary(Token **Rest, Token *Tok);
static Node *postfix(Token **Rest, Token *Tok);
static Node *funCall(Token **Rest, Token *Tok, Node *Nd);
static Node *primary(Token **Rest, Token *Tok);
static Token *parseTypedef(Token *Tok, Type *BaseTy);
static bool isFunction(Token *Tok);
static Token *function(Token *Tok, Type *BaseTy, VarAttr *Attr);
static Token *globalVariable(Token *Tok, Type *Basety, VarAttr *Attr);

// 向下对齐值
// N % Align != 0 , 即 N 未对齐时,  AlignDown(N) = AlignTo(N) - Align
// N % Align == 0 , 即 N 已对齐时， AlignDown(N) = AlignTo(N)
static int alignDown(int N, int Align) { return alignTo(N - Align + 1, Align); }

// 进入域
static void enterScope(void) {
  Scope *S = calloc(1, sizeof(Scope));
  // 后来的在链表头部
  // 类似于栈的结构，栈顶对应最近的域
  S->Next = Scp;
  Scp = S;
}

// 结束当前域
static void leaveScope(void) { Scp = Scp->Next; }

// 通过名称，查找一个变量
static VarScope *findVar(Token *Tok) {
  // 此处越先匹配的域，越深层
  for (Scope *S = Scp; S; S = S->Next) {
    // 遍历域内的所有变量
    VarScope *S2 = hashmapGet2(&S->Vars, Tok->Loc, Tok->Len);
    if (S2)
      return S2;
  }
  return NULL;
}

// 通过Token查找标签
static Type *findTag(Token *Tok) {
  for (Scope *S = Scp; S; S = S->Next) {
    Type *Ty = hashmapGet2(&S->Tags, Tok->Loc, Tok->Len);
    if (Ty)
      return Ty;
  }
  return NULL;
}

// 新建一个节点
static Node *newNode(NodeKind Kind, Token *Tok) {
  Node *Nd = calloc(1, sizeof(Node));
  Nd->Kind = Kind;
  Nd->Tok = Tok;
  return Nd;
}

// 新建一个单叉树
static Node *newUnary(NodeKind Kind, Node *Expr, Token *Tok) {
  Node *Nd = newNode(Kind, Tok);
  Nd->LHS = Expr;
  return Nd;
}

// 新建一个二叉树节点
static Node *newBinary(NodeKind Kind, Node *LHS, Node *RHS, Token *Tok) {
  Node *Nd = newNode(Kind, Tok);
  Nd->LHS = LHS;
  Nd->RHS = RHS;
  return Nd;
}

// 新建一个数字节点
static Node *newNum(int64_t Val, Token *Tok) {
  Node *Nd = newNode(ND_NUM, Tok);
  Nd->Val = Val;
  return Nd;
}

// 新建一个长整型节点
static Node *newLong(int64_t Val, Token *Tok) {
  Node *Nd = newNode(ND_NUM, Tok);
  Nd->Val = Val;
  Nd->Ty = TyLong;
  return Nd;
}

// 新建一个无符号长整型节点
static Node *newULong(long Val, Token *Tok) {
  Node *node = newNode(ND_NUM, Tok);
  node->Val = Val;
  node->Ty = TyULong;
  return node;
}

// 新变量
static Node *newVarNode(Obj *Var, Token *Tok) {
  Node *Nd = newNode(ND_VAR, Tok);
  Nd->Var = Var;
  return Nd;
}

// VLA指针
static Node *newVLAPtr(Obj *Var, Token *Tok) {
  Node *Nd = newNode(ND_VLA_PTR, Tok);
  Nd->Var = Var;
  return Nd;
}

// 新转换
Node *newCast(Node *Expr, Type *Ty) {
  addType(Expr);

  Node *Nd = calloc(1, sizeof(Node));
  Nd->Kind = ND_CAST;
  Nd->Tok = Expr->Tok;
  Nd->LHS = Expr;
  Nd->Ty = copyType(Ty);
  return Nd;
}

// 将变量存入当前的域中
static VarScope *pushScope(char *Name) {
  VarScope *S = calloc(1, sizeof(VarScope));
  hashmapPut(&Scp->Vars, Name, S);
  return S;
}

// 新建初始化器
static Initializer *newInitializer(Type *Ty, bool IsFlexible) {
  Initializer *Init = calloc(1, sizeof(Initializer));
  // 存储原始类型
  Init->Ty = Ty;

  // 处理数组类型
  if (Ty->Kind == TY_ARRAY) {
    // 判断是否需要调整数组元素数并且数组不完整
    if (IsFlexible && Ty->Size < 0) {
      // 设置初始化器为可调整的，之后进行完数组元素数的计算后，再构造初始化器
      Init->IsFlexible = true;
      return Init;
    }

    // 为数组的最外层的每个元素分配空间
    Init->Children = calloc(Ty->ArrayLen, sizeof(Initializer *));
    // 遍历解析数组最外层的每个元素
    for (int I = 0; I < Ty->ArrayLen; ++I)
      Init->Children[I] = newInitializer(Ty->Base, false);
  }

  // 处理结构体和联合体
  if (Ty->Kind == TY_STRUCT || Ty->Kind == TY_UNION) {
    // 计算结构体成员的数量
    int Len = 0;
    for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next)
      ++Len;

    // 初始化器的子项
    Init->Children = calloc(Len, sizeof(Initializer *));

    // 遍历子项进行赋值
    for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
      // 判断结构体是否是灵活的，同时成员也是灵活的并且是最后一个
      // 在这里直接构造，避免对于灵活数组的解析
      if (IsFlexible && Ty->IsFlexible && !Mem->Next) {
        Initializer *Child = calloc(1, sizeof(Initializer));
        Child->Ty = Mem->Ty;
        Child->IsFlexible = true;
        Init->Children[Mem->Idx] = Child;
      } else {
        // 对非灵活子项进行赋值
        Init->Children[Mem->Idx] = newInitializer(Mem->Ty, false);
      }
    }
    return Init;
  }

  return Init;
}

// 新建变量
static Obj *newVar(char *Name, Type *Ty) {
  Obj *Var = calloc(1, sizeof(Obj));
  Var->Name = Name;
  Var->Ty = Ty;
  // 设置变量默认的对齐量为类型的对齐量
  Var->Align = Ty->Align;
  pushScope(Name)->Var = Var;
  return Var;
}

// 在链表中新增一个局部变量
static Obj *newLVar(char *Name, Type *Ty) {
  Obj *Var = newVar(Name, Ty);
  Var->IsLocal = true;
  // 将变量插入头部
  Var->Next = Locals;
  Locals = Var;
  return Var;
}

// 在链表中新增一个全局变量
static Obj *newGVar(char *Name, Type *Ty) {
  Obj *Var = newVar(Name, Ty);
  Var->Next = Globals;
  // static全局变量
  Var->IsStatic = true;
  // 存在定义
  Var->IsDefinition = true;
  Globals = Var;
  return Var;
}

// 新增唯一名称
static char *newUniqueName(void) {
  static int Id = 0;
  return format(".L..%d", Id++);
}

// 新增匿名全局变量
static Obj *newAnonGVar(Type *Ty) { return newGVar(newUniqueName(), Ty); }

// 新增字符串字面量
static Obj *newStringLiteral(char *Str, Type *Ty) {
  Obj *Var = newAnonGVar(Ty);
  Var->InitData = Str;
  Var->StringLiteral = 1;
  return Var;
}

// 获取标识符
static char *getIdent(Token *Tok) {
  if (Tok->Kind != TK_IDENT)
    errorTok(Tok, "expected an identifier");
  return strndup(Tok->Loc, Tok->Len);
}

// 查找类型别名
static Type *findTypedef(Token *Tok) {
  // 类型别名是个标识符
  if (Tok->Kind == TK_IDENT) {
    // 查找是否存在于变量域内
    VarScope *S = findVar(Tok);
    if (S)
      return S->Typedef;
  }
  return NULL;
}

static void pushTagScope(Token *Tok, Type *Ty) {
  hashmapPut2(&Scp->Tags, Tok->Loc, Tok->Len, Ty);
}

// declspec = ("void" | "_Bool" | char" | "short" | "int" | "long"
//             | "typedef" | "static" | "extern" | "inline"
//             | "_Thread_local" | "__thread"
//             | "_Alignas" ("(" typeName | constExpr ")")
//             | "signed" | "unsigned"
//             | structDecl | unionDecl | typedefName
//             | enumSpecifier | typeofSpecifier
//             | "const" | "volatile" | "auto" | "register" | "restrict"
//             | "__restrict" | "__restrict__" | "_Noreturn")+
// declarator specifier
static Type *declspec(Token **Rest, Token *Tok, VarAttr *Attr) {

  // 类型的组合，被表示为例如：LONG+LONG=1<<9
  // 可知long int和int long是等价的。
  enum {
    VOID = 1 << 0,
    BOOL = 1 << 2,
    CHAR = 1 << 4,
    SHORT = 1 << 6,
    INT = 1 << 8,
    LONG = 1 << 10,
    FLOAT = 1 << 12,
    DOUBLE = 1 << 14,
    OTHER = 1 << 16,
    SIGNED = 1 << 17,
    UNSIGNED = 1 << 18,
  };

  Type *Ty = TyInt;
  int Counter = 0; // 记录类型相加的数值
  bool IsAtomic = false; // 标记是否为原子的

  // 遍历所有类型名的Tok
  while (isTypename(Tok)) {
    // 处理typedef等关键字
    if (equal(Tok, "typedef") || equal(Tok, "static") || equal(Tok, "extern") ||
        equal(Tok, "inline") || equal(Tok, "_Thread_local") ||
        equal(Tok, "__thread")) {
      if (!Attr)
        errorTok(Tok, "storage class specifier is not allowed in this context");

      if (equal(Tok, "typedef"))
        Attr->IsTypedef = true;
      else if (equal(Tok, "static"))
        Attr->IsStatic = true;
      else if (equal(Tok, "extern"))
        Attr->IsExtern = true;
      else if (equal(Tok, "inline"))
        Attr->IsInline = true;
      else
        Attr->IsTLS = true;

      // typedef不应与static/extern/inline/__thread/_Thread_local一起使用
      if (Attr->IsTypedef &&
          (Attr->IsStatic || Attr->IsExtern || Attr->IsInline || Attr->IsTLS))
        errorTok(Tok, "typedef and static/extern/inline/__thread/_Thread_local "
                      "may not be used together");
      Tok = Tok->Next;
      continue;
    }

    // 识别这些关键字并忽略
    if (consume(&Tok, Tok, "const") || consume(&Tok, Tok, "volatile") ||
        consume(&Tok, Tok, "auto") || consume(&Tok, Tok, "register") ||
        consume(&Tok, Tok, "restrict") || consume(&Tok, Tok, "__restrict") ||
        consume(&Tok, Tok, "__restrict__") || consume(&Tok, Tok, "_Noreturn"))
      continue;

    // 匹配是否为原子的
    if (equal(Tok, "_Atomic")) {
      Tok = Tok->Next;
      if (equal(Tok, "(")) {
        Ty = typename(&Tok, Tok->Next);
        Tok = skip(Tok, ")");
      }
      IsAtomic = true;
      continue;
    }

    // _Alignas "(" typeName | constExpr ")"
    if (equal(Tok, "_Alignas")) {
      // 不存在变量属性时，无法设置对齐值
      if (!Attr)
        errorTok(Tok, "_Alignas is not allowed in this context");
      Tok = skip(Tok->Next, "(");

      // 判断是类型名，或者常量表达式
      if (isTypename(Tok))
        Attr->Align = typename(&Tok, Tok)->Align;
      else
        Attr->Align = constExpr(&Tok, Tok);
      Tok = skip(Tok, ")");
      continue;
    }

    // 处理用户定义的类型
    Type *Ty2 = findTypedef(Tok);
    if (equal(Tok, "struct") || equal(Tok, "union") || equal(Tok, "enum") ||
        equal(Tok, "typeof") || Ty2) {
      if (Counter)
        break;

      if (equal(Tok, "struct")) {
        Ty = structDecl(&Tok, Tok->Next);
      } else if (equal(Tok, "union")) {
        Ty = unionDecl(&Tok, Tok->Next);
      } else if (equal(Tok, "enum")) {
        Ty = enumSpecifier(&Tok, Tok->Next);
      } else if (equal(Tok, "typeof")) {
        Ty = typeofSpecifier(&Tok, Tok->Next);
      } else {
        // 将类型设为类型别名指向的类型
        Ty = Ty2;
        Tok = Tok->Next;
      }

      Counter += OTHER;
      continue;
    }

    // 对于出现的类型名加入Counter
    // 每一步的Counter都需要有合法值
    if (equal(Tok, "void"))
      Counter += VOID;
    else if (equal(Tok, "_Bool"))
      Counter += BOOL;
    else if (equal(Tok, "char"))
      Counter += CHAR;
    else if (equal(Tok, "short"))
      Counter += SHORT;
    else if (equal(Tok, "int"))
      Counter += INT;
    else if (equal(Tok, "long"))
      Counter += LONG;
    else if (equal(Tok, "float"))
      Counter += FLOAT;
    else if (equal(Tok, "double"))
      Counter += DOUBLE;
    else if (equal(Tok, "signed"))
      Counter |= SIGNED;
    else if (equal(Tok, "unsigned"))
      Counter |= UNSIGNED;
    else
      unreachable();

    // 根据Counter值映射到对应的Type
    switch (Counter) {
    case VOID:
      Ty = TyVoid;
      break;
    case BOOL:
      Ty = TyBool;
      break;
    case SIGNED + CHAR:
      Ty = TyChar;
      break;
    // RISCV当中char是无符号类型的
    case CHAR:
    case UNSIGNED + CHAR:
      Ty = TyUChar;
      break;
    case SHORT:
    case SHORT + INT:
    case SIGNED + SHORT:
    case SIGNED + SHORT + INT:
      Ty = TyShort;
      break;
    case UNSIGNED + SHORT:
    case UNSIGNED + SHORT + INT:
      Ty = TyUShort;
      break;
    case INT:
    case SIGNED:
    case SIGNED + INT:
      Ty = TyInt;
      break;
    case UNSIGNED:
    case UNSIGNED + INT:
      Ty = TyUInt;
      break;
    case LONG:
    case LONG + INT:
    case LONG + LONG:
    case LONG + LONG + INT:
    case SIGNED + LONG:
    case SIGNED + LONG + INT:
    case SIGNED + LONG + LONG:
    case SIGNED + LONG + LONG + INT:
      Ty = TyLong;
      break;
    case UNSIGNED + LONG:
    case UNSIGNED + LONG + INT:
    case UNSIGNED + LONG + LONG:
    case UNSIGNED + LONG + LONG + INT:
      Ty = TyULong;
      break;
    case FLOAT:
      Ty = TyFloat;
      break;
    case DOUBLE:
      Ty = TyDouble;
      break;
    case LONG + DOUBLE:
      Ty = TyLDouble;
      break;
    default:
      errorTok(Tok, "invalid type");
    }

    Tok = Tok->Next;
  } // while (isTypename(Tok))

  if (IsAtomic) {
    Ty = copyType(Ty);
    // 类型被标记为原子的
    Ty->IsAtomic = true;
  }

  *Rest = Tok;
  return Ty;
}

// funcParams = ("void" | param ("," param)* ("," "...")?)? ")"
// param = declspec declarator
static Type *funcParams(Token **Rest, Token *Tok, Type *Ty) {
  // "void"
  if (equal(Tok, "void") && equal(Tok->Next, ")")) {
    *Rest = Tok->Next->Next;
    return funcType(Ty);
  }

  Type Head = {};
  Type *Cur = &Head;
  bool IsVariadic = false;

  while (!equal(Tok, ")")) {
    // funcParams = param ("," param)*
    // param = declspec declarator
    if (Cur != &Head)
      Tok = skip(Tok, ",");

    // ("," "...")?
    if (equal(Tok, "...")) {
      IsVariadic = true;
      Tok = Tok->Next;
      skip(Tok, ")");
      break;
    }

    Type *Ty2 = declspec(&Tok, Tok, NULL);
    Ty2 = declarator(&Tok, Tok, Ty2);

    // 存储名称
    Token *Name = Ty2->Name;

    // T类型的数组或函数被转换为T*
    if (Ty2->Kind == TY_ARRAY) {
      Ty2 = pointerTo(Ty2->Base);
      Ty2->Name = Name;
    } else if (Ty2->Kind == TY_FUNC) {
      Ty2 = pointerTo(Ty2);
      Ty2->Name = Name;
    }

    // 将类型复制到形参链表一份
    Cur->Next = copyType(Ty2);
    Cur = Cur->Next;
  }

  // 设置空参函数调用为可变的
  if (Cur == &Head)
    IsVariadic = true;

  // 封装一个函数节点
  Ty = funcType(Ty);
  // 传递形参
  Ty->Params = Head.Next;
  // 传递可变参数
  Ty->IsVariadic = IsVariadic;
  *Rest = Tok->Next;
  return Ty;
}

// 数组维数
// arrayDimensions = ("static" | "restrict")* constExpr? "]" typeSuffix
static Type *arrayDimensions(Token **Rest, Token *Tok, Type *Ty) {
  // ("static" | "restrict")*
  while (equal(Tok, "static") || equal(Tok, "restrict"))
    Tok = Tok->Next;

  // "]" 无数组维数的 "[]"
  if (equal(Tok, "]")) {
    Ty = typeSuffix(Rest, Tok->Next, Ty);
    return arrayOf(Ty, -1);
  }

  // 有数组维数的情况
  Node *Expr = conditional(&Tok, Tok);
  Tok = skip(Tok, "]");
  Ty = typeSuffix(Rest, Tok, Ty);

  // 处理可变长度数组
  if (Ty->Kind == TY_VLA || !isConstExpr(Expr))
    return VLAOf(Ty, Expr);
  // 处理固定长度数组
  return arrayOf(Ty, eval(Expr));
}

// typeSuffix = "(" funcParams | "[" arrayDimensions | ε
static Type *typeSuffix(Token **Rest, Token *Tok, Type *Ty) {
  // "(" funcParams
  if (equal(Tok, "("))
    return funcParams(Rest, Tok->Next, Ty);

  // "[" arrayDimensions
  if (equal(Tok, "["))
    return arrayDimensions(Rest, Tok->Next, Ty);

  *Rest = Tok;
  return Ty;
}

// pointers = ("*" ("const" | "volatile" | "restrict")*)*
static Type *pointers(Token **Rest, Token *Tok, Type *Ty) {
  // "*"*
  // 构建所有的（多重）指针
  while (consume(&Tok, Tok, "*")) {
    Ty = pointerTo(Ty);
    // 识别这些关键字并忽略
    while (equal(Tok, "const") || equal(Tok, "volatile") ||
           equal(Tok, "restrict") || equal(Tok, "__restrict") ||
           equal(Tok, "__restrict__"))
      Tok = Tok->Next;
  }
  *Rest = Tok;
  return Ty;
}

// declarator = pointers ("(" ident ")" | "(" declarator ")" | ident) typeSuffix
static Type *declarator(Token **Rest, Token *Tok, Type *Ty) {
  // pointers
  Ty = pointers(&Tok, Tok, Ty);

  // "(" declarator ")"
  if (equal(Tok, "(")) {
    // 记录"("的位置
    Token *Start = Tok;
    Type Dummy = {};
    // 使Tok前进到")"后面的位置
    declarator(&Tok, Start->Next, &Dummy);
    Tok = skip(Tok, ")");
    // 获取到括号后面的类型后缀，Ty为解析完的类型，Rest指向分号
    Ty = typeSuffix(Rest, Tok, Ty);
    // 解析Ty整体作为Base去构造，返回Type的值
    return declarator(&Tok, Start->Next, Ty);
  }

  // 默认名称为空
  Token *Name = NULL;
  // 名称位置指向类型后的区域
  Token *NamePos = Tok;

  // 存在名字则赋值
  if (Tok->Kind == TK_IDENT) {
    Name = Tok;
    Tok = Tok->Next;
  }

  // typeSuffix
  Ty = typeSuffix(Rest, Tok, Ty);
  // ident
  // 变量名 或 函数名
  Ty->Name = Name;
  Ty->NamePos = NamePos;
  return Ty;
}

// abstractDeclarator = pointers ("(" abstractDeclarator ")")? typeSuffix
static Type *abstractDeclarator(Token **Rest, Token *Tok, Type *Ty) {
  // pointers
  Ty = pointers(&Tok, Tok, Ty);

  // ("(" abstractDeclarator ")")?
  if (equal(Tok, "(")) {
    Token *Start = Tok;
    Type Dummy = {};
    // 使Tok前进到")"后面的位置
    abstractDeclarator(&Tok, Start->Next, &Dummy);
    Tok = skip(Tok, ")");
    // 获取到括号后面的类型后缀，Ty为解析完的类型，Rest指向分号
    Ty = typeSuffix(Rest, Tok, Ty);
    // 解析Ty整体作为Base去构造，返回Type的值
    return abstractDeclarator(&Tok, Start->Next, Ty);
  }

  // typeSuffix
  return typeSuffix(Rest, Tok, Ty);
}

// typeName = declspec abstractDeclarator
// 获取类型的相关信息
static Type *typename(Token **Rest, Token *Tok) {
  // declspec
  Type *Ty = declspec(&Tok, Tok, NULL);
  // abstractDeclarator
  return abstractDeclarator(Rest, Tok, Ty);
}

// 判断是否终结符匹配到了结尾
static bool isEnd(Token *Tok) {
  // "}" | ",}"
  return equal(Tok, "}") || (equal(Tok, ",") && equal(Tok->Next, "}"));
}

// 消耗掉结尾的终结符
// "}" | ",}"
static bool consumeEnd(Token **Rest, Token *Tok) {
  // "}"
  if (equal(Tok, "}")) {
    *Rest = Tok->Next;
    return true;
  }

  // ",}"
  if (equal(Tok, ",") && equal(Tok->Next, "}")) {
    *Rest = Tok->Next->Next;
    return true;
  }

  // 没有消耗到指定字符
  return false;
}

// 获取枚举类型信息
// enumSpecifier = ident? "{" enumList? "}"
//               | ident ("{" enumList? "}")?
// enumList      = ident ("=" constExpr)? ("," ident ("=" constExpr)?)* ","?
static Type *enumSpecifier(Token **Rest, Token *Tok) {
  Type *Ty = enumType();

  // 读取标签
  // ident?
  Token *Tag = NULL;
  if (Tok->Kind == TK_IDENT) {
    Tag = Tok;
    Tok = Tok->Next;
  }

  // 处理没有{}的情况
  if (Tag && !equal(Tok, "{")) {
    Type *Ty = findTag(Tag);
    if (!Ty)
      errorTok(Tag, "unknown enum type");
    if (Ty->Kind != TY_ENUM)
      errorTok(Tag, "not an enum tag");
    *Rest = Tok;
    return Ty;
  }

  // "{" enumList? "}"
  Tok = skip(Tok, "{");

  // enumList
  // 读取枚举列表
  int I = 0;   // 第几个枚举常量
  int Val = 0; // 枚举常量的值
  while (!consumeEnd(Rest, Tok)) {
    if (I++ > 0)
      Tok = skip(Tok, ",");

    char *Name = getIdent(Tok);
    Tok = Tok->Next;

    // 判断是否存在赋值
    if (equal(Tok, "="))
      Val = constExpr(&Tok, Tok->Next);

    // 存入枚举常量
    VarScope *S = pushScope(Name);
    S->EnumTy = Ty;
    S->EnumVal = Val++;
  }

  if (Tag)
    pushTagScope(Tag, Ty);
  return Ty;
}

// typeofSpecifier = "(" (expr | typename) ")"
// typeof 获取对应的类型
static Type *typeofSpecifier(Token **Rest, Token *Tok) {
  // "("
  Tok = skip(Tok, "(");

  Type *Ty;
  if (isTypename(Tok)) {
    // typename
    // 匹配到相应的类型
    Ty = typename(&Tok, Tok);
  } else {
    // expr
    // 计算表达式，然后获取表达式的类型
    Node *Nd = expr(&Tok, Tok);
    addType(Nd);
    Ty = Nd->Ty;
  }
  // ")"
  *Rest = skip(Tok, ")");
  // 将获取的类型进行返回
  return Ty;
}

// 生成代码计算VLA的大小
static Node *computeVLASize(Type *Ty, Token *Tok) {
  // 空表达式
  Node *Nd = newNode(ND_NULL_EXPR, Tok);

  // 处理指针的基部
  if (Ty->Base)
    Nd = newBinary(ND_COMMA, Nd, computeVLASize(Ty->Base, Tok), Tok);

  // 如果都不是VLA，则返回空表达式
  if (Ty->Kind != TY_VLA)
    return Nd;

  // 基类的大小
  Node *BaseSz;
  if (Ty->Base->Kind == TY_VLA)
    // 指向的是VLA
    BaseSz = newVarNode(Ty->Base->VLASize, Tok);
  else
    // 本身是VLA
    BaseSz = newNum(Ty->Base->Size, Tok);

  Ty->VLASize = newLVar("", TyULong);
  // VLASize=VLALen*BaseSz，VLA大小=基类个数*基类大小
  Node *Expr = newBinary(ND_ASSIGN, newVarNode(Ty->VLASize, Tok),
                         newBinary(ND_MUL, Ty->VLALen, BaseSz, Tok), Tok);
  return newBinary(ND_COMMA, Nd, Expr, Tok);
}

// 根据相应Sz，新建一个Alloca函数
static Node *newAlloca(Node *Sz) {
  Node *Nd = newUnary(ND_FUNCALL, newVarNode(BuiltinAlloca, Sz->Tok), Sz->Tok);
  Nd->FuncType = BuiltinAlloca->Ty;
  Nd->Ty = BuiltinAlloca->Ty->ReturnTy;
  Nd->Args = Sz;
  addType(Sz);
  return Nd;
}

// declaration = declspec (declarator ("=" initializer)?
//                         ("," declarator ("=" initializer)?)*)? ";"
static Node *declaration(Token **Rest, Token *Tok, Type *BaseTy,
                         VarAttr *Attr) {
  Node Head = {};
  Node *Cur = &Head;
  // 对变量声明次数计数
  int I = 0;

  // (declarator ("=" expr)? ("," declarator ("=" expr)?)*)?
  while (!equal(Tok, ";")) {
    // 第1个变量不必匹配 ","
    if (I++ > 0)
      Tok = skip(Tok, ",");

    // declarator
    // 声明获取到变量类型，包括变量名
    Type *Ty = declarator(&Tok, Tok, BaseTy);
    if (Ty->Kind == TY_VOID)
      errorTok(Tok, "variable declared void");
    if (!Ty->Name)
      errorTok(Ty->NamePos, "variable name omitted");

    if (Attr && Attr->IsStatic) {
      // 静态局部变量
      Obj *Var = newAnonGVar(Ty);
      pushScope(getIdent(Ty->Name))->Var = Var;
      if (equal(Tok, "="))
        GVarInitializer(&Tok, Tok->Next, Var);
      continue;
    }

    // 生成代码计算VLA的大小
    // 在此生成是因为，即使Ty不是VLA，但也可能是一个指向VLA的指针
    Cur->Next = newUnary(ND_EXPR_STMT, computeVLASize(Ty, Tok), Tok);
    Cur = Cur->Next;

    // 处理可变长度数组
    if (Ty->Kind == TY_VLA) {
      if (equal(Tok, "="))
        errorTok(Tok, "variable-sized object may not be initialized");

      // VLA被改写为alloca()调用
      // 例如：`int X[N]`被改写为`Tmp = N, X = alloca(Tmp)`

      // X
      Obj *Var = newLVar(getIdent(Ty->Name), Ty);
      // X的类型名
      Token *Tok = Ty->Name;
      // X = alloca(Tmp)，VLASize对应N
      Node *Expr = newBinary(ND_ASSIGN, newVLAPtr(Var, Tok),
                             newAlloca(newVarNode(Ty->VLASize, Tok)), Tok);

      // 存放在表达式语句中
      Cur->Next = newUnary(ND_EXPR_STMT, Expr, Tok);
      Cur = Cur->Next;
      continue;
    }

    Obj *Var = newLVar(getIdent(Ty->Name), Ty);
    // 读取是否存在变量的对齐值
    if (Attr && Attr->Align)
      Var->Align = Attr->Align;

    // 如果不存在"="则为变量声明，不需要生成节点，已经存储在Locals中了
    if (equal(Tok, "=")) {
      // 解析变量的初始化器
      Node *Expr = LVarInitializer(&Tok, Tok->Next, Var);
      // 存放在表达式语句中
      Cur->Next = newUnary(ND_EXPR_STMT, Expr, Tok);
      Cur = Cur->Next;
    }

    if (Var->Ty->Size < 0)
      errorTok(Ty->Name, "variable has incomplete type");
    if (Var->Ty->Kind == TY_VOID)
      errorTok(Ty->Name, "variable declared void");
  }

  // 将所有表达式语句，存放在代码块中
  Node *Nd = newNode(ND_BLOCK, Tok);
  Nd->Body = Head.Next;
  *Rest = Tok->Next;
  return Nd;
}

// 跳过多余的元素
static Token *skipExcessElement(Token *Tok) {
  if (equal(Tok, "{")) {
    Tok = skipExcessElement(Tok->Next);
    return skip(Tok, "}");
  }

  // 解析并舍弃多余的元素
  assign(&Tok, Tok);
  return Tok;
}

// stringInitializer = stringLiteral
static void stringInitializer(Token **Rest, Token *Tok, Initializer *Init) {
  // 如果是可调整的，就构造一个包含数组的初始化器
  // 字符串字面量在词法解析部分已经增加了'\0'
  if (Init->IsFlexible)
    *Init = *newInitializer(arrayOf(Init->Ty->Base, Tok->Ty->ArrayLen), false);

  // 取数组和字符串的最短长度
  int Len = MIN(Init->Ty->ArrayLen, Tok->Ty->ArrayLen);

  // 获取字符串字面量
  switch (Init->Ty->Base->Size) {
  case 1: {
    // char类型
    char *Str = Tok->Str;
    // 遍历赋值
    for (int I = 0; I < Len; I++)
      Init->Children[I]->Expr = newNum(Str[I], Tok);
    break;
  }
  case 2: {
    // UTF-16类型
    uint16_t *Str = (uint16_t *)Tok->Str;
    for (int I = 0; I < Len; I++)
      Init->Children[I]->Expr = newNum(Str[I], Tok);
    break;
  }
  case 4: {
    // UTF-32类型
    uint32_t *Str = (uint32_t *)Tok->Str;
    for (int I = 0; I < Len; I++)
      Init->Children[I]->Expr = newNum(Str[I], Tok);
    break;
  }
  default:
    unreachable();
  }
  *Rest = Tok->Next;
}

// 数组指派器，用于从指定位置开始初始化
static void arrayDesignator(Token **Rest, Token *Tok, Type *Ty, int *Begin,
                            int *End) {
  // 获取指定位置的索引
  *Begin = constExpr(&Tok, Tok->Next);
  if (*Begin >= Ty->ArrayLen)
    errorTok(Tok, "array designator index exceeds array bounds");

  // 匹配...后面的索引值
  if (equal(Tok, "...")) {
    // ...后面的索引值
    *End = constExpr(&Tok, Tok->Next);
    if (*End >= Ty->ArrayLen)
      errorTok(Tok, "array designator index exceeds array bounds");
    if (*End < *Begin)
      errorTok(Tok, "array designator range [%d, %d] is empty", *Begin, *End);
  } else {
    // 没有...的情况
    *End = *Begin;
  }

  *Rest = skip(Tok, "]");
}

// struct-designator = "." ident
// 结构体指派器
static Member *structDesignator(Token **Rest, Token *Tok, Type *Ty) {
  Token *Start = Tok;
  Tok = skip(Tok, ".");
  if (Tok->Kind != TK_IDENT)
    errorTok(Tok, "expected a field designator");

  for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
    // 匿名结构体成员
    if (Mem->Ty->Kind == TY_STRUCT && !Mem->Name) {
      if (getStructMember(Mem->Ty, Tok)) {
        *Rest = Start;
        return Mem;
      }
      continue;
    }

    // 常规结构体成员
    if (Mem->Name->Len == Tok->Len &&
        !strncmp(Mem->Name->Loc, Tok->Loc, Tok->Len)) {
      *Rest = Tok->Next;
      return Mem;
    }
  }

  errorTok(Tok, "struct has no such member");
}

// designation = ("[" const-expr "]" | "." ident)* "="? initializer
// 进行指派
static void designation(Token **Rest, Token *Tok, Initializer *Init) {
  // 多层[索引]的解析
  if (equal(Tok, "[")) {
    if (Init->Ty->Kind != TY_ARRAY)
      errorTok(Tok, "array index in non-array initializer");

    // 获取索引值
    int Begin, End;
    arrayDesignator(&Tok, Tok, Init->Ty, &Begin, &End);

    // 遍历范围内的值，进行递归指派
    Token *Tok2;
    for (int I = Begin; I <= End; I++)
      designation(&Tok2, Tok, Init->Children[I]);
    // 进行后续初始化
    arrayInitializer2(Rest, Tok2, Init, Begin + 1);
    return;
  }

  // 多层结构体的解析
  if (equal(Tok, ".") && Init->Ty->Kind == TY_STRUCT) {
    // 获取成员
    Member *Mem = structDesignator(&Tok, Tok, Init->Ty);
    // 递归指派
    designation(&Tok, Tok, Init->Children[Mem->Idx]);
    Init->Expr = NULL;
    // 进行后续初始化
    structInitializer2(Rest, Tok, Init, Mem->Next);
    return;
  }

  // 多层联合体的解析
  if (equal(Tok, ".") && Init->Ty->Kind == TY_UNION) {
    // 获取成员
    Member *Mem = structDesignator(&Tok, Tok, Init->Ty);
    Init->Mem = Mem;
    // 递归指派
    designation(Rest, Tok, Init->Children[Mem->Idx]);
    return;
  }

  if (equal(Tok, "."))
    errorTok(Tok, "field name not in struct or union initializer");

  if (equal(Tok, "="))
    Tok = Tok->Next;
  // 对该位置进行初始化
  initializer2(Rest, Tok, Init);
}

// 计算数组初始化元素个数
static int countArrayInitElements(Token *Tok, Type *Ty) {
  bool First = true;
  Initializer *Dummy = newInitializer(Ty->Base, true);

  // 项数，最大项数
  int I = 0, Max = 0;

  // 遍历所有匹配的项
  while (!consumeEnd(&Tok, Tok)) {
    if (!First)
      Tok = skip(Tok, ",");
    First = false;

    // 处理指派
    if (equal(Tok, "[")) {
      I = constExpr(&Tok, Tok->Next);
      if (equal(Tok, "..."))
        I = constExpr(&Tok, Tok->Next);
      Tok = skip(Tok, "]");
      designation(&Tok, Tok, Dummy);
    } else {
      initializer2(&Tok, Tok, Dummy);
    }

    I++;
    // 当前项数与之前最大项数取最大数
    Max = MAX(Max, I);
  }
  return Max;
}

// arrayInitializer1 = "{" initializer ("," initializer)* ","? "}"
static void arrayInitializer1(Token **Rest, Token *Tok, Initializer *Init) {
  Tok = skip(Tok, "{");
  bool First = true;

  // 如果数组是可调整的，那么就计算数组的元素数，然后进行初始化器的构造
  if (Init->IsFlexible) {
    int Len = countArrayInitElements(Tok, Init->Ty);
    // 在这里Ty也被重新构造为了数组
    *Init = *newInitializer(arrayOf(Init->Ty->Base, Len), false);
  }

  // 遍历数组
  for (int I = 0; !consumeEnd(Rest, Tok); I++) {
    if (!First)
      Tok = skip(Tok, ",");
    First = false;

    // 如果存在指派器，那么就解析指派
    if (equal(Tok, "[")) {
      // 获取最外层指派器的所使用的位置
      int Begin, End;
      arrayDesignator(&Tok, Tok, Init->Ty, &Begin, &End);

      // 遍历对范围内的位置进行指派
      Token *Tok2;
      for (int J = Begin; J <= End; J++)
        designation(&Tok2, Tok, Init->Children[J]);
      Tok = Tok2;
      I = End;
      continue;
    }

    // 正常解析元素
    if (I < Init->Ty->ArrayLen)
      initializer2(&Tok, Tok, Init->Children[I]);
    // 跳过多余的元素
    else
      Tok = skipExcessElement(Tok);
  }
}

// arrayIntializer2 = initializer ("," initializer)* ","?
static void arrayInitializer2(Token **Rest, Token *Tok, Initializer *Init,
                              int I) {
  // 如果数组是可调整的，那么就计算数组的元素数，然后进行初始化器的构造
  if (Init->IsFlexible) {
    int Len = countArrayInitElements(Tok, Init->Ty);
    *Init = *newInitializer(arrayOf(Init->Ty->Base, Len), false);
  }

  // 遍历数组
  for (; I < Init->Ty->ArrayLen && !isEnd(Tok); I++) {
    Token *Start = Tok;
    if (I > 0)
      Tok = skip(Tok, ",");

    // 匹配到了指派器，那么就返回到上层函数进行初始化
    if (equal(Tok, "[") || equal(Tok, ".")) {
      *Rest = Start;
      return;
    }

    initializer2(&Tok, Tok, Init->Children[I]);
  }
  *Rest = Tok;
}

// structInitializer1 = "{" initializer ("," initializer)* ","? "}"
static void structInitializer1(Token **Rest, Token *Tok, Initializer *Init) {
  Tok = skip(Tok, "{");

  // 成员变量的链表
  Member *Mem = Init->Ty->Mems;
  bool First = true;

  while (!consumeEnd(Rest, Tok)) {
    // 判断是否为第一个成员
    if (!First)
      Tok = skip(Tok, ",");
    First = false;

    // 匹配指派初始化
    if (equal(Tok, ".")) {
      // 成员进行指派初始化
      Mem = structDesignator(&Tok, Tok, Init->Ty);
      designation(&Tok, Tok, Init->Children[Mem->Idx]);
      Mem = Mem->Next;
      continue;
    }

    if (Mem) {
      // 处理成员
      initializer2(&Tok, Tok, Init->Children[Mem->Idx]);
      Mem = Mem->Next;
    } else {
      // 处理多余的成员
      Tok = skipExcessElement(Tok);
    }
  }
}

// structIntializer2 = initializer ("," initializer)* ","?
static void structInitializer2(Token **Rest, Token *Tok, Initializer *Init,
                               Member *Mem) {
  bool First = true;

  // 遍历所有成员变量
  for (; Mem && !isEnd(Tok); Mem = Mem->Next) {
    Token *Start = Tok;

    if (!First)
      Tok = skip(Tok, ",");
    First = false;

    // 匹配到了指派器，那么就返回到上层函数进行初始化
    if (equal(Tok, "[") || equal(Tok, ".")) {
      *Rest = Start;
      return;
    }

    initializer2(&Tok, Tok, Init->Children[Mem->Idx]);
  }
  *Rest = Tok;
}

// unionInitializer = "{" initializer "}"
static void unionInitializer(Token **Rest, Token *Tok, Initializer *Init) {
  // 联合体只接受一个成员用来初始化，默认为第一个
  // 可以通过指派，使用其他成员进行初始化
  if (equal(Tok, "{") && equal(Tok->Next, ".")) {
    // 获取成员
    Member *Mem = structDesignator(&Tok, Tok->Next, Init->Ty);
    Init->Mem = Mem;
    // 进行指派
    designation(&Tok, Tok, Init->Children[Mem->Idx]);
    *Rest = skip(Tok, "}");
    return;
  }

  // 默认将第一个成员存入初始化器的Mem
  Init->Mem = Init->Ty->Mems;

  if (equal(Tok, "{")) {
    // 存在括号的情况
    initializer2(&Tok, Tok->Next, Init->Children[0]);
    // ","?
    consume(&Tok, Tok, ",");
    *Rest = skip(Tok, "}");
  } else {
    // 不存在括号的情况
    initializer2(Rest, Tok, Init->Children[0]);
  }
}

// initializer = stringInitializer | arrayInitializer | structInitializer
//             | unionInitializer |assign
static void initializer2(Token **Rest, Token *Tok, Initializer *Init) {
  // 字符串字面量的初始化
  if (Init->Ty->Kind == TY_ARRAY && Tok->Kind == TK_STR) {
    stringInitializer(Rest, Tok, Init);
    return;
  }

  // 数组的初始化
  if (Init->Ty->Kind == TY_ARRAY) {
    if (equal(Tok, "{"))
      // 存在括号的情况
      arrayInitializer1(Rest, Tok, Init);
    else
      // 不存在括号的情况
      arrayInitializer2(Rest, Tok, Init, 0);
    return;
  }

  // 结构体的初始化
  if (Init->Ty->Kind == TY_STRUCT) {
    // 匹配使用其他结构体来赋值，其他结构体需要先被解析过
    // 存在括号的情况
    if (equal(Tok, "{")) {
      structInitializer1(Rest, Tok, Init);
      return;
    }

    // 不存在括号的情况
    Node *Expr = assign(Rest, Tok);
    addType(Expr);
    if (Expr->Ty->Kind == TY_STRUCT) {
      Init->Expr = Expr;
      return;
    }

    structInitializer2(Rest, Tok, Init, Init->Ty->Mems);
    return;
  }

  // 联合体的初始化
  if (Init->Ty->Kind == TY_UNION) {
    unionInitializer(Rest, Tok, Init);
    return;
  }

  // 处理标量外的大括号，例如：int x = {3};
  if (equal(Tok, "{")) {
    initializer2(&Tok, Tok->Next, Init);
    *Rest = skip(Tok, "}");
    return;
  }

  // assign
  // 为节点存储对应的表达式
  Init->Expr = assign(Rest, Tok);
}

// 复制结构体的类型
static Type *copyStructType(Type *Ty) {
  // 复制结构体的类型
  Ty = copyType(Ty);

  // 复制结构体成员的类型
  Member Head = {};
  Member *Cur = &Head;
  // 遍历成员
  for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
    Member *M = calloc(1, sizeof(Member));
    *M = *Mem;
    Cur->Next = M;
    Cur = Cur->Next;
  }

  Ty->Mems = Head.Next;
  return Ty;
}

// 初始化器
static Initializer *initializer(Token **Rest, Token *Tok, Type *Ty,
                                Type **NewTy) {
  // 新建一个解析了类型的初始化器
  Initializer *Init = newInitializer(Ty, true);
  // 解析需要赋值到Init中
  initializer2(Rest, Tok, Init);

  if ((Ty->Kind == TY_STRUCT || Ty->Kind == TY_UNION) && Ty->IsFlexible) {
    // 复制结构体类型
    Ty = copyStructType(Ty);

    Member *Mem = Ty->Mems;
    // 遍历到最后一个成员
    while (Mem->Next)
      Mem = Mem->Next;
    // 灵活数组类型替换为实际的数组类型
    Mem->Ty = Init->Children[Mem->Idx]->Ty;
    // 增加结构体的类型大小
    Ty->Size += Mem->Ty->Size;

    // 将新类型传回变量
    *NewTy = Ty;
    return Init;
  }

  // 将新类型传回变量
  *NewTy = Init->Ty;
  return Init;
}

// 指派初始化表达式
static Node *initDesigExpr(InitDesig *Desig, Token *Tok) {
  // 返回Desig中的变量
  if (Desig->Var)
    return newVarNode(Desig->Var, Tok);

  // 返回Desig中的成员变量
  if (Desig->Mem) {
    Node *Nd = newUnary(ND_MEMBER, initDesigExpr(Desig->Next, Tok), Tok);
    Nd->Mem = Desig->Mem;
    return Nd;
  }

  // 需要赋值的变量名
  // 递归到次外层Desig，有此时最外层有Desig->Var或者Desig->Mem
  // 然后逐层计算偏移量
  Node *LHS = initDesigExpr(Desig->Next, Tok);
  // 偏移量
  Node *RHS = newNum(Desig->Idx, Tok);
  // 返回偏移后的变量地址
  return newUnary(ND_DEREF, newAdd(LHS, RHS, Tok), Tok);
}

// 创建局部变量的初始化
static Node *createLVarInit(Initializer *Init, Type *Ty, InitDesig *Desig,
                            Token *Tok) {
  if (Ty->Kind == TY_ARRAY) {
    // 预备空表达式的情况
    Node *Nd = newNode(ND_NULL_EXPR, Tok);
    for (int I = 0; I < Ty->ArrayLen; I++) {
      // 这里next指向了上一级Desig的信息，以及在其中的偏移量。
      InitDesig Desig2 = {Desig, I};
      // 局部变量进行初始化
      Node *RHS = createLVarInit(Init->Children[I], Ty->Base, &Desig2, Tok);
      // 构造一个形如：NULL_EXPR，EXPR1，EXPR2…的二叉树
      Nd = newBinary(ND_COMMA, Nd, RHS, Tok);
    }
    return Nd;
  }

  // 被其他结构体赋过值，则会存在Expr因而不解析
  if (Ty->Kind == TY_STRUCT && !Init->Expr) {
    // 构造结构体的初始化器结构
    Node *Nd = newNode(ND_NULL_EXPR, Tok);

    for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
      // Desig2存储了成员变量
      InitDesig Desig2 = {Desig, 0, Mem};
      Node *RHS =
          createLVarInit(Init->Children[Mem->Idx], Mem->Ty, &Desig2, Tok);
      Nd = newBinary(ND_COMMA, Nd, RHS, Tok);
    }
    return Nd;
  }

  if (Ty->Kind == TY_UNION) {
    // 存在指派初始化的成员则使用，否则默认为第一个成员
    Member *Mem = Init->Mem ? Init->Mem : Ty->Mems;
    // Desig2存储了成员变量
    InitDesig Desig2 = {Desig, 0, Mem};
    // 只处理第一个成员变量
    return createLVarInit(Init->Children[Mem->Idx], Mem->Ty, &Desig2, Tok);
  }

  // 如果需要作为右值的表达式为空，则设为空表达式
  if (!Init->Expr)
    return newNode(ND_NULL_EXPR, Tok);

  // 变量等可以直接赋值的左值
  Node *LHS = initDesigExpr(Desig, Tok);
  return newBinary(ND_ASSIGN, LHS, Init->Expr, Tok);
}

// 局部变量初始化器
static Node *LVarInitializer(Token **Rest, Token *Tok, Obj *Var) {
  // 获取初始化器，将值与数据结构一一对应
  Initializer *Init = initializer(Rest, Tok, Var->Ty, &Var->Ty);
  // 指派初始化
  InitDesig Desig = {NULL, 0, NULL, Var};

  // 我们首先为所有元素赋0，然后有指定值的再进行赋值
  Node *LHS = newNode(ND_MEMZERO, Tok);
  LHS->Var = Var;

  // 创建局部变量的初始化
  Node *RHS = createLVarInit(Init, Var->Ty, &Desig, Tok);
  // 左部为全部清零，右部为需要赋值的部分
  return newBinary(ND_COMMA, LHS, RHS, Tok);
}

// 对临时转换Buf类型读取Sz大小的数值
static uint64_t readBuf(char *Buf, int Sz) {
  if (Sz == 1)
    return *Buf;
  if (Sz == 2)
    return *(uint16_t *)Buf;
  if (Sz == 4)
    return *(uint32_t *)Buf;
  if (Sz == 8)
    return *(uint64_t *)Buf;
  unreachable();
  return -1;
}

// 临时转换Buf类型对Val进行存储
static void writeBuf(char *Buf, uint64_t Val, int Sz) {
  if (Sz == 1)
    *Buf = Val;
  else if (Sz == 2)
    *(uint16_t *)Buf = Val;
  else if (Sz == 4)
    *(uint32_t *)Buf = Val;
  else if (Sz == 8)
    *(uint64_t *)Buf = Val;
  else
    unreachable();
}

// 对全局变量的初始化器写入数据
static Relocation *writeGVarData(Relocation *Cur, Initializer *Init, Type *Ty,
                                 char *Buf, int Offset) {
  // 处理数组
  if (Ty->Kind == TY_ARRAY) {
    int Sz = Ty->Base->Size;
    for (int I = 0; I < Ty->ArrayLen; I++)
      Cur =
          writeGVarData(Cur, Init->Children[I], Ty->Base, Buf, Offset + Sz * I);
    return Cur;
  }

  // 处理结构体
  if (Ty->Kind == TY_STRUCT) {
    for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
      if (Mem->IsBitfield) {
        // 结构体位域成员
        Node *Expr = Init->Children[Mem->Idx]->Expr;
        if (!Expr)
          break;

        // 获取相对于缓冲区的偏移量
        char *Loc = Buf + Offset + Mem->Offset;
        // 读取已经写入的值
        uint64_t OldVal = readBuf(Loc, Mem->Ty->Size);
        // 计算需要写入的新值
        uint64_t NewVal = eval(Expr);
        // 获取位域长度的掩码
        uint64_t Mask = (1L << Mem->BitWidth) - 1;
        // 对新值取交位域长度的位，然后左移到相应的偏移位置
        // 最后与旧值取或，得到合并之后的值
        uint64_t Combined = OldVal | ((NewVal & Mask) << Mem->BitOffset);
        // 写入合并之后的值
        writeBuf(Loc, Combined, Mem->Ty->Size);
      } else {
        // 结构体常规成员
        Cur = writeGVarData(Cur, Init->Children[Mem->Idx], Mem->Ty, Buf,
                            Offset + Mem->Offset);
      }
    }

    return Cur;
  }

  // 处理联合体
  if (Ty->Kind == TY_UNION) {
    if (!Init->Mem)
      return Cur;
    return writeGVarData(Cur, Init->Children[Init->Mem->Idx], Init->Mem->Ty,
                         Buf, Offset);
  }

  // 这里返回，则会使Buf值为0
  if (!Init->Expr)
    return Cur;

  // 处理单精度浮点数
  if (Ty->Kind == TY_FLOAT) {
    // 将缓冲区加上偏移量转换为float*后访问
    *(float *)(Buf + Offset) = evalDouble(Init->Expr);
    return Cur;
  }

  // 处理双精度浮点数
  if (Ty->Kind == TY_DOUBLE) {
    // 将缓冲区加上偏移量转换为double*后访问
    *(double *)(Buf + Offset) = evalDouble(Init->Expr);
    return Cur;
  }

  // 预设使用到的 其他全局变量的名称
  char **Label = NULL;
  uint64_t Val = eval2(Init->Expr, &Label);

  // 如果不存在Label，说明可以直接计算常量表达式的值
  if (!Label) {
    writeBuf(Buf + Offset, Val, Ty->Size);
    return Cur;
  }

  // 存在Label，则表示使用了其他全局变量
  Relocation *Rel = calloc(1, sizeof(Relocation));
  Rel->Offset = Offset;
  Rel->Label = Label;
  Rel->Addend = Val;
  // 压入链表顶部
  Cur->Next = Rel;
  return Cur->Next;
}

// 全局变量在编译时需计算出初始化的值，然后写入.data段。
static void GVarInitializer(Token **Rest, Token *Tok, Obj *Var) {
  // 获取到初始化器
  Initializer *Init = initializer(Rest, Tok, Var->Ty, &Var->Ty);

  // 写入计算过后的数据
  // 新建一个重定向的链表
  Relocation Head = {};
  char *Buf = calloc(1, Var->Ty->Size);
  writeGVarData(&Head, Init, Var->Ty, Buf, 0);
  // 全局变量的数据
  Var->InitData = Buf;
  // Head为空，所以返回Head.Next的数据
  Var->Rel = Head.Next;
}

// 判断是否为类型名
static bool isTypename(Token *Tok) {
  static HashMap Map;

  // 哈希表容量为0，说明还没初始化
  if (Map.Capacity == 0) {
    static char *Kw[] = {
        "void",       "_Bool",        "char",          "short",    "int",
        "long",       "struct",       "union",         "typedef",  "enum",
        "static",     "extern",       "_Alignas",      "signed",   "unsigned",
        "const",      "volatile",     "auto",          "register", "restrict",
        "__restrict", "__restrict__", "_Noreturn",     "float",    "double",
        "typeof",     "inline",       "_Thread_local", "__thread", "_Atomic",
    };

    // 遍历类型名列表插入哈希表
    for (int I = 0; I < sizeof(Kw) / sizeof(*Kw); I++)
      hashmapPut(&Map, Kw[I], (void *)1);
  }
  // 查找是否为类型别名
  return hashmapGet2(&Map, Tok->Loc, Tok->Len) || findTypedef(Tok);
}

// asmStmt = "asm" ("volatile" | "inline")* "(" stringLiteral ")"
static Node *asmStmt(Token **Rest, Token *Tok) {
  Node *Nd = newNode(ND_ASM, Tok);
  Tok = Tok->Next;

  while (equal(Tok, "volatile") || equal(Tok, "inline"))
    Tok = Tok->Next;

  Tok = skip(Tok, "(");

  if (Tok->Kind != TK_STR || Tok->Ty->Base->Kind != TY_CHAR)
    errorTok(Tok, "expected string literal");
  Nd->AsmStr = Tok->Str;
  Tok = Tok->Next;

  // ここから : 引数リスト（任意個）
  Node Head = {};
  Node *Cur = &Head;
  while (equal(Tok, ",")) {
    Tok = Tok->Next;
    Node *Arg = assign(&Tok, Tok); // expr を読む（既存の式パーサを流用）
    addType(Arg);
    Cur = Cur->Next = Arg;
  }
  Nd->Args = Head.Next;

  *Rest = skip(Tok, ")");
  return Nd;
}


// 解析语句
// stmt = "return" expr? ";"
//        | "if" "(" expr ")" stmt ("else" stmt)?
//        | "switch" "(" expr ")" stmt
//        | "case" constExpr ("..." constExpr)? ":" stmt
//        | "default" ":" stmt
//        | "for" "(" exprStmt expr? ";" expr? ")" stmt
//        | "while" "(" expr ")" stmt
//        | "do" stmt "while" "(" expr ")" ";"
//        | asmStmt
//        | "goto" (ident | "*" expr) ";"
//        | "break" ";"
//        | "continue" ";"
//        | ident ":" stmt
//        | "{" compoundStmt
//        | exprStmt
static Node *stmt(Token **Rest, Token *Tok) {
  // "return" expr ";"
  if (equal(Tok, "return")) {
    Node *Nd = newNode(ND_RETURN, Tok);

    // 空返回语句
    if (consume(Rest, Tok->Next, ";"))
      return Nd;

    Node *Exp = expr(&Tok, Tok->Next);
    *Rest = skip(Tok, ";");

    addType(Exp);
    // 对于返回值进行类型转换
    Type *Ty = CurrentFn->Ty->ReturnTy;

    // 对于返回值为结构体时不进行类型转换
    if (Ty->Kind != TY_STRUCT && Ty->Kind != TY_UNION)
      Exp = newCast(Exp, CurrentFn->Ty->ReturnTy);

    Nd->LHS = Exp;
    return Nd;
  }

  // 解析if语句
  // "if" "(" expr ")" stmt ("else" stmt)?
  if (equal(Tok, "if")) {
    Node *Nd = newNode(ND_IF, Tok);
    // "(" expr ")"，条件内语句
    Tok = skip(Tok->Next, "(");
    Nd->Cond = expr(&Tok, Tok);
    Tok = skip(Tok, ")");
    // stmt，符合条件后的语句
    Nd->Then = stmt(&Tok, Tok);
    // ("else" stmt)?，不符合条件后的语句
    if (equal(Tok, "else"))
      Nd->Els = stmt(&Tok, Tok->Next);
    *Rest = Tok;
    return Nd;
  }

  // "switch" "(" expr ")" stmt
  if (equal(Tok, "switch")) {
    Node *Nd = newNode(ND_SWITCH, Tok);
    Tok = skip(Tok->Next, "(");
    Nd->Cond = expr(&Tok, Tok);
    Tok = skip(Tok, ")");

    // 记录此前的CurrentSwitch
    Node *Sw = CurrentSwitch;
    // 设置当前的CurrentSwitch
    CurrentSwitch = Nd;

    // 存储此前break标签的名称
    char *Brk = BrkLabel;
    // 设置break标签的名称
    BrkLabel = Nd->BrkLabel = newUniqueName();

    // 进入解析各个case
    // stmt
    Nd->Then = stmt(Rest, Tok);

    // 恢复此前CurrentSwitch
    CurrentSwitch = Sw;
    // 恢复此前break标签的名称
    BrkLabel = Brk;
    return Nd;
  }

  // "case" constExpr ":" stmt
  if (equal(Tok, "case")) {
    if (!CurrentSwitch)
      errorTok(Tok, "stray case");

    Node *Nd = newNode(ND_CASE, Tok);
    // case后面的数值
    int Begin = constExpr(&Tok, Tok->Next);
    // ...后面的数值
    int End;

    // 存在...
    if (equal(Tok, "...")) {
      // 解析...后面的数值
      End = constExpr(&Tok, Tok->Next);
      if (End < Begin)
        errorTok(Tok, "empty case range specified");
    } else {
      // 不存在...
      End = Begin;
    }

    Tok = skip(Tok, ":");
    Nd->Label = newUniqueName();
    // case中的语句
    Nd->LHS = stmt(Rest, Tok);
    // case对应的数值
    Nd->Begin = Begin;
    Nd->End = End;
    // 将旧的CurrentSwitch链表的头部存入Nd的CaseNext
    Nd->CaseNext = CurrentSwitch->CaseNext;
    // 将Nd存入CurrentSwitch的CaseNext
    CurrentSwitch->CaseNext = Nd;
    return Nd;
  }

  // "default" ":" stmt
  if (equal(Tok, "default")) {
    if (!CurrentSwitch)
      errorTok(Tok, "stray default");

    Node *Nd = newNode(ND_CASE, Tok);
    Tok = skip(Tok->Next, ":");
    Nd->Label = newUniqueName();
    Nd->LHS = stmt(Rest, Tok);
    // 存入CurrentSwitch->DefaultCase的默认标签
    CurrentSwitch->DefaultCase = Nd;
    return Nd;
  }

  // "for" "(" exprStmt expr? ";" expr? ")" stmt
  if (equal(Tok, "for")) {
    Node *Nd = newNode(ND_FOR, Tok);
    // "("
    Tok = skip(Tok->Next, "(");

    // 进入for循环域
    enterScope();

    // 存储此前break和continue标签的名称
    char *Brk = BrkLabel;
    char *Cont = ContLabel;
    // 设置break和continue标签的名称
    BrkLabel = Nd->BrkLabel = newUniqueName();
    ContLabel = Nd->ContLabel = newUniqueName();

    // exprStmt
    if (isTypename(Tok)) {
      // 初始化循环变量
      Type *BaseTy = declspec(&Tok, Tok, NULL);
      Nd->Init = declaration(&Tok, Tok, BaseTy, NULL);
    } else {
      // 初始化语句
      Nd->Init = exprStmt(&Tok, Tok);
    }

    // expr?
    if (!equal(Tok, ";"))
      Nd->Cond = expr(&Tok, Tok);
    // ";"
    Tok = skip(Tok, ";");

    // expr?
    if (!equal(Tok, ")"))
      Nd->Inc = expr(&Tok, Tok);
    // ")"
    Tok = skip(Tok, ")");

    // stmt
    Nd->Then = stmt(Rest, Tok);
    // 退出for循环域
    leaveScope();
    // 恢复此前的break和continue标签
    BrkLabel = Brk;
    ContLabel = Cont;
    return Nd;
  }

  // "while" "(" expr ")" stmt
  if (equal(Tok, "while")) {
    Node *Nd = newNode(ND_FOR, Tok);
    // "("
    Tok = skip(Tok->Next, "(");
    // expr
    Nd->Cond = expr(&Tok, Tok);
    // ")"
    Tok = skip(Tok, ")");

    // 存储此前break和continue标签的名称
    char *Brk = BrkLabel;
    char *Cont = ContLabel;
    // 设置break和continue标签的名称
    BrkLabel = Nd->BrkLabel = newUniqueName();
    ContLabel = Nd->ContLabel = newUniqueName();
    // stmt
    Nd->Then = stmt(Rest, Tok);
    // 恢复此前的break和continue标签
    BrkLabel = Brk;
    ContLabel = Cont;
    return Nd;
  }

  // asmStmt
  if (equal(Tok, "asm"))
    return asmStmt(Rest, Tok);

  // "goto" ident ";"
  if (equal(Tok, "goto")) {
    if (equal(Tok->Next, "*")) {
      // `goto *Ptr`跳转到Ptr指向的地址
      Node *Nd = newNode(ND_GOTO_EXPR, Tok);
      Nd->LHS = expr(&Tok, Tok->Next->Next);
      *Rest = skip(Tok, ";");
      return Nd;
    }

    Node *Nd = newNode(ND_GOTO, Tok);
    Nd->Label = getIdent(Tok->Next);
    // 将Nd同时存入Gotos，最后用于解析UniqueLabel
    Nd->GotoNext = Gotos;
    Gotos = Nd;
    *Rest = skip(Tok->Next->Next, ";");
    return Nd;
  }

  // "do" stmt "while" "(" expr ")" ";"
  if (equal(Tok, "do")) {
    Node *Nd = newNode(ND_DO, Tok);

    // 存储此前break和continue标签的名称
    char *Brk = BrkLabel;
    char *Cont = ContLabel;
    // 设置break和continue标签的名称
    BrkLabel = Nd->BrkLabel = newUniqueName();
    ContLabel = Nd->ContLabel = newUniqueName();

    // stmt
    // do代码块内的语句
    Nd->Then = stmt(&Tok, Tok->Next);

    // 恢复此前的break和continue标签
    BrkLabel = Brk;
    ContLabel = Cont;

    // "while" "(" expr ")" ";"
    Tok = skip(Tok, "while");
    Tok = skip(Tok, "(");
    // expr
    // while使用的条件表达式
    Nd->Cond = expr(&Tok, Tok);
    Tok = skip(Tok, ")");
    *Rest = skip(Tok, ";");
    return Nd;
  }

  // "break" ";"
  if (equal(Tok, "break")) {
    if (!BrkLabel)
      errorTok(Tok, "stray break");
    // 跳转到break标签的位置
    Node *Nd = newNode(ND_GOTO, Tok);
    Nd->UniqueLabel = BrkLabel;
    *Rest = skip(Tok->Next, ";");
    return Nd;
  }

  // "continue" ";"
  if (equal(Tok, "continue")) {
    if (!ContLabel)
      errorTok(Tok, "stray continue");
    // 跳转到continue标签的位置
    Node *Nd = newNode(ND_GOTO, Tok);
    Nd->UniqueLabel = ContLabel;
    *Rest = skip(Tok->Next, ";");
    return Nd;
  }

  // ident ":" stmt
  if (Tok->Kind == TK_IDENT && equal(Tok->Next, ":")) {
    Node *Nd = newNode(ND_LABEL, Tok);
    Nd->Label = strndup(Tok->Loc, Tok->Len);
    Nd->UniqueLabel = newUniqueName();
    Nd->LHS = stmt(Rest, Tok->Next->Next);
    // 将Nd同时存入Labels，最后用于goto解析UniqueLabel
    Nd->GotoNext = Labels;
    Labels = Nd;
    return Nd;
  }

  // "{" compoundStmt
  if (equal(Tok, "{"))
    return compoundStmt(Rest, Tok->Next);

  // exprStmt
  return exprStmt(Rest, Tok);
}

// 解析复合语句
// compoundStmt = (typedef | declaration | stmt)* "}"
static Node *compoundStmt(Token **Rest, Token *Tok) {
  Node *Nd = newNode(ND_BLOCK, Tok);

  // 这里使用了和词法分析类似的单向链表结构
  Node Head = {};
  Node *Cur = &Head;

  // 进入新的域
  enterScope();

  // (declaration | stmt)* "}"
  while (!equal(Tok, "}")) {
    // declaration
    if (isTypename(Tok) && !equal(Tok->Next, ":")) {
      VarAttr Attr = {};
      Type *BaseTy = declspec(&Tok, Tok, &Attr);

      // 解析typedef的语句
      if (Attr.IsTypedef) {
        Tok = parseTypedef(Tok, BaseTy);
        continue;
      }

      // 解析函数
      if (isFunction(Tok)) {
        Tok = function(Tok, BaseTy, &Attr);
        continue;
      }

      // 解析外部全局变量
      if (Attr.IsExtern) {
        Tok = globalVariable(Tok, BaseTy, &Attr);
        continue;
      }

      // 解析变量声明语句
      Cur->Next = declaration(&Tok, Tok, BaseTy, &Attr);
    }
    // stmt
    else {
      Cur->Next = stmt(&Tok, Tok);
    }
    Cur = Cur->Next;
    // 构造完AST后，为节点添加类型信息
    addType(Cur);
  }

  // 结束当前的域
  leaveScope();

  // Nd的Body存储了{}内解析的语句
  Nd->Body = Head.Next;
  *Rest = Tok->Next;
  return Nd;
}

// 解析表达式语句
// exprStmt = expr? ";"
static Node *exprStmt(Token **Rest, Token *Tok) {
  // ";"
  if (equal(Tok, ";")) {
    *Rest = Tok->Next;
    return newNode(ND_BLOCK, Tok);
  }

  // expr ";"
  Node *Nd = newNode(ND_EXPR_STMT, Tok);
  Nd->LHS = expr(&Tok, Tok);
  *Rest = skip(Tok, ";");
  return Nd;
}

// 解析表达式
// expr = assign ("," expr)?
static Node *expr(Token **Rest, Token *Tok) {
  Node *Nd = assign(&Tok, Tok);

  if (equal(Tok, ","))
    return newBinary(ND_COMMA, Nd, expr(Rest, Tok->Next), Tok);

  *Rest = Tok;
  return Nd;
}

static int64_t eval(Node *Nd) { return eval2(Nd, NULL); }

// 计算给定节点的常量表达式计算
// 常量表达式可以是数字或者是 ptr±n，ptr是指向全局变量的指针，n是偏移量。
static int64_t eval2(Node *Nd, char ***Label) {
  addType(Nd);

  // 处理浮点数
  if (isFloNum(Nd->Ty))
    return evalDouble(Nd);

  switch (Nd->Kind) {
  case ND_ADD:
    return eval2(Nd->LHS, Label) + eval(Nd->RHS);
  case ND_SUB:
    return eval2(Nd->LHS, Label) - eval(Nd->RHS);
  case ND_MUL:
    return eval(Nd->LHS) * eval(Nd->RHS);
  case ND_DIV:
    if (Nd->Ty->IsUnsigned)
      return (uint64_t)eval(Nd->LHS) / eval(Nd->RHS);
    return eval(Nd->LHS) / eval(Nd->RHS);
  case ND_NEG:
    return -eval(Nd->LHS);
  case ND_MOD:
    if (Nd->Ty->IsUnsigned)
      return (uint64_t)eval(Nd->LHS) % eval(Nd->RHS);
    return eval(Nd->LHS) % eval(Nd->RHS);
  case ND_BITAND:
    return eval(Nd->LHS) & eval(Nd->RHS);
  case ND_BITOR:
    return eval(Nd->LHS) | eval(Nd->RHS);
  case ND_BITXOR:
    return eval(Nd->LHS) ^ eval(Nd->RHS);
  case ND_SHL:
    return eval(Nd->LHS) << eval(Nd->RHS);
  case ND_SHR:
    if (Nd->Ty->IsUnsigned && Nd->Ty->Size == 8)
      return (uint64_t)eval(Nd->LHS) >> eval(Nd->RHS);
    return eval(Nd->LHS) >> eval(Nd->RHS);
  case ND_EQ:
    return eval(Nd->LHS) == eval(Nd->RHS);
  case ND_NE:
    return eval(Nd->LHS) != eval(Nd->RHS);
  case ND_LT:
    if (Nd->LHS->Ty->IsUnsigned)
      return (uint64_t)eval(Nd->LHS) < eval(Nd->RHS);
    return eval(Nd->LHS) < eval(Nd->RHS);
  case ND_LE:
    if (Nd->LHS->Ty->IsUnsigned)
      return (uint64_t)eval(Nd->LHS) <= eval(Nd->RHS);
    return eval(Nd->LHS) <= eval(Nd->RHS);
  case ND_COND:
    return eval(Nd->Cond) ? eval2(Nd->Then, Label) : eval2(Nd->Els, Label);
  case ND_COMMA:
    return eval2(Nd->RHS, Label);
  case ND_NOT:
    return !eval(Nd->LHS);
  case ND_BITNOT:
    return ~eval(Nd->LHS);
  case ND_LOGAND:
    return eval(Nd->LHS) && eval(Nd->RHS);
  case ND_LOGOR:
    return eval(Nd->LHS) || eval(Nd->RHS);
  case ND_CAST: {
    int64_t Val = eval2(Nd->LHS, Label);
    if (isInteger(Nd->Ty)) {
      switch (Nd->Ty->Size) {
      case 1:
        return Nd->Ty->IsUnsigned ? (uint8_t)Val : (int8_t)Val;
      case 2:
        return Nd->Ty->IsUnsigned ? (uint16_t)Val : (int16_t)Val;
      case 4:
        return Nd->Ty->IsUnsigned ? (uint32_t)Val : (int32_t)Val;
      }
    }
    return Val;
  }
  case ND_ADDR:
    return evalRVal(Nd->LHS, Label);
  case ND_LABEL_VAL:
    // 将标签值也作为常量
    *Label = &Nd->UniqueLabel;
    return 0;
  case ND_MEMBER:
    // 未开辟Label的地址，则表明不是表达式常量
    if (!Label)
      errorTok(Nd->Tok, "not a compile-time constant");
    // 不能为数组
    if (Nd->Ty->Kind != TY_ARRAY)
      errorTok(Nd->Tok, "invalid initializer");
    // 返回左部的值（并解析Label），加上成员变量的偏移量
    return evalRVal(Nd->LHS, Label) + Nd->Mem->Offset;
  case ND_VAR:
    // 未开辟Label的地址，则表明不是表达式常量
    if (!Label)
      errorTok(Nd->Tok, "not a compile-time constant");
    // 不能为数组或者函数
    if (Nd->Var->Ty->Kind != TY_ARRAY && Nd->Var->Ty->Kind != TY_FUNC)
      errorTok(Nd->Tok, "invalid initializer");
    // 将标签值也作为常量
    *Label = &Nd->Var->Name;
    return 0;
  case ND_NUM:
    return Nd->Val;
  default:
    break;
  }

  errorTok(Nd->Tok, "not a compile-time constant");
  return -1;
}

// 计算重定位变量
static int64_t evalRVal(Node *Nd, char ***Label) {
  switch (Nd->Kind) {
  case ND_VAR:
    // 局部变量不能参与全局变量的初始化
    if (Nd->Var->IsLocal)
      errorTok(Nd->Tok, "not a compile-time constant");
    // 将标签值也作为常量
    *Label = &Nd->Var->Name;
    return 0;
  case ND_DEREF:
    // 直接进入到解引用的地址
    return eval2(Nd->LHS, Label);
  case ND_MEMBER:
    // 加上成员变量的偏移量
    return evalRVal(Nd->LHS, Label) + Nd->Mem->Offset;
  default:
    break;
  }

  errorTok(Nd->Tok, "invalid initializer");
  return -1;
}

// 判断是否为常量表达式
static bool isConstExpr(Node *Nd) {
  addType(Nd);

  switch (Nd->Kind) {
  case ND_ADD:
  case ND_SUB:
  case ND_MUL:
  case ND_DIV:
  case ND_BITAND:
  case ND_BITOR:
  case ND_BITXOR:
  case ND_SHL:
  case ND_SHR:
  case ND_EQ:
  case ND_NE:
  case ND_LT:
  case ND_LE:
  case ND_LOGAND:
  case ND_LOGOR:
    // 左部右部 都为常量表达式时 为真
    return isConstExpr(Nd->LHS) && isConstExpr(Nd->RHS);
  case ND_COND:
    // 条件不为常量表达式时 为假
    if (!isConstExpr(Nd->Cond))
      return false;
    // 条件为常量表达式时，判断相应分支语句是否为真
    return isConstExpr(eval(Nd->Cond) ? Nd->Then : Nd->Els);
  case ND_COMMA:
    // 判断逗号最右表达式是否为 常量表达式
    return isConstExpr(Nd->RHS);
  case ND_NEG:
  case ND_NOT:
  case ND_BITNOT:
  case ND_CAST:
    // 判断左部是否为常量表达式
    return isConstExpr(Nd->LHS);
  case ND_NUM:
    // 数字恒为常量表达式
    return true;
  default:
    // 其他情况默认为假
    return false;
  }
}

// 解析常量表达式
int64_t constExpr(Token **Rest, Token *Tok) {
  // 进行常量表达式的构造
  Node *Nd = conditional(Rest, Tok);
  // 进行常量表达式的计算
  return eval(Nd);
}

// 解析浮点表达式
static double evalDouble(Node *Nd) {
  addType(Nd);

  // 处理是整型的情况
  if (isInteger(Nd->Ty)) {
    if (Nd->Ty->IsUnsigned)
      return (unsigned long)eval(Nd);
    return eval(Nd);
  }

  switch (Nd->Kind) {
  case ND_ADD:
    return evalDouble(Nd->LHS) + evalDouble(Nd->RHS);
  case ND_SUB:
    return evalDouble(Nd->LHS) - evalDouble(Nd->RHS);
  case ND_MUL:
    return evalDouble(Nd->LHS) * evalDouble(Nd->RHS);
  case ND_DIV:
    return evalDouble(Nd->LHS) / evalDouble(Nd->RHS);
  case ND_NEG:
    return -evalDouble(Nd->LHS);
  case ND_COND:
    return evalDouble(Nd->Cond) ? evalDouble(Nd->Then) : evalDouble(Nd->Els);
  case ND_COMMA:
    return evalDouble(Nd->RHS);
  case ND_CAST:
    if (isFloNum(Nd->LHS->Ty))
      return evalDouble(Nd->LHS);
    return eval(Nd->LHS);
  case ND_NUM:
    return Nd->FVal;
  default:
    errorTok(Nd->Tok, "not a compile-time constant");
    return -1;
  }
}

// 转换 A op= B为 TMP = &A, *TMP = *TMP op B
// 结构体需要特殊处理
static Node *toAssign(Node *Binary) {
  // A
  addType(Binary->LHS);
  // B
  addType(Binary->RHS);
  Token *Tok = Binary->Tok;

  // 转换 A.X op= B 为 TMP = &A, (*TMP).X = (*TMP).X op B
  if (Binary->LHS->Kind == ND_MEMBER) {
    // TMP
    Obj *Var = newLVar("", pointerTo(Binary->LHS->LHS->Ty));

    // TMP = &A
    Node *Expr1 = newBinary(ND_ASSIGN, newVarNode(Var, Tok),
                            newUnary(ND_ADDR, Binary->LHS->LHS, Tok), Tok);

    // (*TMP).X ，op=左边的
    Node *Expr2 =
        newUnary(ND_MEMBER, newUnary(ND_DEREF, newVarNode(Var, Tok), Tok), Tok);
    Expr2->Mem = Binary->LHS->Mem;

    // (*TMP).X ，op=右边的
    Node *Expr3 =
        newUnary(ND_MEMBER, newUnary(ND_DEREF, newVarNode(Var, Tok), Tok), Tok);
    Expr3->Mem = Binary->LHS->Mem;

    // (*TMP).X = (*TMP).X op B
    Node *Expr4 =
        newBinary(ND_ASSIGN, Expr2,
                  newBinary(Binary->Kind, Expr3, Binary->RHS, Tok), Tok);

    // TMP = &A, (*TMP).X = (*TMP).X op B
    return newBinary(ND_COMMA, Expr1, Expr4, Tok);
  }

  // 如果 A 是原子的类型，那么 `A op= B` 被转换为
  //
  // ({
  //   T1 *Addr = &A; T2 Val = (B); T1 Old = *Addr; T1 New;
  //   do {
  //     New = Old op Val;
  //   } while (!atomic_compare_exchange_strong(Addr, &Old, New));
  //   New;
  // })
  if (Binary->LHS->Ty->IsAtomic) {
    Node Head = {};
    Node *Cur = &Head;

    Obj *Addr = newLVar("", pointerTo(Binary->LHS->Ty));
    Obj *Val = newLVar("", Binary->RHS->Ty);
    Obj *Old = newLVar("", Binary->LHS->Ty);
    Obj *New = newLVar("", Binary->LHS->Ty);

    // T1 *Addr = &A;
    Cur = Cur->Next =
        newUnary(ND_EXPR_STMT,
                 newBinary(ND_ASSIGN, newVarNode(Addr, Tok),
                           newUnary(ND_ADDR, Binary->LHS, Tok), Tok),
                 Tok);

    // T2 Val = (B);
    Cur = Cur->Next = newUnary(
        ND_EXPR_STMT,
        newBinary(ND_ASSIGN, newVarNode(Val, Tok), Binary->RHS, Tok), Tok);

    // T1 Old = *Addr;
    Cur = Cur->Next =
        newUnary(ND_EXPR_STMT,
                 newBinary(ND_ASSIGN, newVarNode(Old, Tok),
                           newUnary(ND_DEREF, newVarNode(Addr, Tok), Tok), Tok),
                 Tok);

    //   do {
    //     New = Old op Val;
    //   }
    Node *Loop = newNode(ND_DO, Tok);
    Loop->BrkLabel = newUniqueName();
    Loop->ContLabel = newUniqueName();

    // New = Old op Val;
    Node *Body = newBinary(ND_ASSIGN, newVarNode(New, Tok),
                           newBinary(Binary->Kind, newVarNode(Old, Tok),
                                     newVarNode(Val, Tok), Tok),
                           Tok);

    Loop->Then = newNode(ND_BLOCK, Tok);
    Loop->Then->Body = newUnary(ND_EXPR_STMT, Body, Tok);

    // !atomic_compare_exchange_strong(Addr, &Old, New)
    Node *Cas = newNode(ND_CAS, Tok);
    Cas->CasAddr = newVarNode(Addr, Tok);
    Cas->CasOld = newUnary(ND_ADDR, newVarNode(Old, Tok), Tok);
    Cas->CasNew = newVarNode(New, Tok);
    Loop->Cond = newUnary(ND_NOT, Cas, Tok);

    // while (!atomic_compare_exchange_strong(Addr, &Old, New));
    Cur = Cur->Next = Loop;
    Cur = Cur->Next = newUnary(ND_EXPR_STMT, newVarNode(New, Tok), Tok);

    Node *Nd = newNode(ND_STMT_EXPR, Tok);
    Nd->Body = Head.Next;
    return Nd;
  }

  // 转换 A op= B为 TMP = &A, *TMP = *TMP op B
  // TMP
  Obj *Var = newLVar("", pointerTo(Binary->LHS->Ty));

  // TMP = &A
  Node *Expr1 = newBinary(ND_ASSIGN, newVarNode(Var, Tok),
                          newUnary(ND_ADDR, Binary->LHS, Tok), Tok);

  // *TMP = *TMP op B
  Node *Expr2 = newBinary(
      ND_ASSIGN, newUnary(ND_DEREF, newVarNode(Var, Tok), Tok),
      newBinary(Binary->Kind, newUnary(ND_DEREF, newVarNode(Var, Tok), Tok),
                Binary->RHS, Tok),
      Tok);

  // TMP = &A, *TMP = *TMP op B
  return newBinary(ND_COMMA, Expr1, Expr2, Tok);
}

// 解析赋值
// assign = conditional (assignOp assign)?
// assignOp = "=" | "+=" | "-=" | "*=" | "/=" | "%=" | "&=" | "|=" | "^="
//          | "<<=" | ">>="
static Node *assign(Token **Rest, Token *Tok) {
  // conditional
  Node *Nd = conditional(&Tok, Tok);

  // 可能存在递归赋值，如a=b=1
  // ("=" assign)?
  if (equal(Tok, "="))
    return Nd = newBinary(ND_ASSIGN, Nd, assign(Rest, Tok->Next), Tok);

  // ("+=" assign)?
  if (equal(Tok, "+="))
    return toAssign(newAdd(Nd, assign(Rest, Tok->Next), Tok));

  // ("-=" assign)?
  if (equal(Tok, "-="))
    return toAssign(newSub(Nd, assign(Rest, Tok->Next), Tok));

  // ("*=" assign)?
  if (equal(Tok, "*="))
    return toAssign(newBinary(ND_MUL, Nd, assign(Rest, Tok->Next), Tok));

  // ("/=" assign)?
  if (equal(Tok, "/="))
    return toAssign(newBinary(ND_DIV, Nd, assign(Rest, Tok->Next), Tok));

  // ("%=" assign)?
  if (equal(Tok, "%="))
    return toAssign(newBinary(ND_MOD, Nd, assign(Rest, Tok->Next), Tok));

  // ("&=" assign)?
  if (equal(Tok, "&="))
    return toAssign(newBinary(ND_BITAND, Nd, assign(Rest, Tok->Next), Tok));

  // ("|=" assign)?
  if (equal(Tok, "|="))
    return toAssign(newBinary(ND_BITOR, Nd, assign(Rest, Tok->Next), Tok));

  // ("^=" assign)?
  if (equal(Tok, "^="))
    return toAssign(newBinary(ND_BITXOR, Nd, assign(Rest, Tok->Next), Tok));

  // ("<<=" assign)?
  if (equal(Tok, "<<="))
    return toAssign(newBinary(ND_SHL, Nd, assign(Rest, Tok->Next), Tok));

  // (">>=" assign)?
  if (equal(Tok, ">>="))
    return toAssign(newBinary(ND_SHR, Nd, assign(Rest, Tok->Next), Tok));

  *Rest = Tok;
  return Nd;
}

// 解析条件运算符
// conditional = logOr ("?" expr? ":" conditional)?
static Node *conditional(Token **Rest, Token *Tok) {
  // logOr
  Node *Cond = logOr(&Tok, Tok);

  // "?"
  if (!equal(Tok, "?")) {
    *Rest = Tok;
    return Cond;
  }

  // "?" ":"
  if (equal(Tok->Next, ":")) {
    // `A ?: B` 等价于 `Tmp = A, Tmp ? Tmp : B`
    addType(Cond);
    // Tmp
    Obj *Var = newLVar("", Cond->Ty);
    // Tmp = A
    Node *LHS = newBinary(ND_ASSIGN, newVarNode(Var, Tok), Cond, Tok);
    // Tmp ? Tmp : B
    Node *RHS = newNode(ND_COND, Tok);
    RHS->Cond = newVarNode(Var, Tok);
    RHS->Then = newVarNode(Var, Tok);
    RHS->Els = conditional(Rest, Tok->Next->Next);
    // Tmp = A, Tmp ? Tmp : B
    return newBinary(ND_COMMA, LHS, RHS, Tok);
  }

  // expr ":" conditional
  Node *Nd = newNode(ND_COND, Tok);
  Nd->Cond = Cond;
  // expr ":"
  Nd->Then = expr(&Tok, Tok->Next);
  Tok = skip(Tok, ":");
  // conditional，这里不能被解析为赋值式
  Nd->Els = conditional(Rest, Tok);
  return Nd;
}

// 逻辑或
// logOr = logAnd ("||" logAnd)*
static Node *logOr(Token **Rest, Token *Tok) {
  Node *Nd = logAnd(&Tok, Tok);
  while (equal(Tok, "||")) {
    Token *Start = Tok;
    Nd = newBinary(ND_LOGOR, Nd, logAnd(&Tok, Tok->Next), Start);
  }
  *Rest = Tok;
  return Nd;
}

// 逻辑与
// logAnd = bitOr ("&&" bitOr)*
static Node *logAnd(Token **Rest, Token *Tok) {
  Node *Nd = bitOr(&Tok, Tok);
  while (equal(Tok, "&&")) {
    Token *Start = Tok;
    Nd = newBinary(ND_LOGAND, Nd, bitOr(&Tok, Tok->Next), Start);
  }
  *Rest = Tok;
  return Nd;
}

// 按位或
// bitOr = bitXor ("|" bitXor)*
static Node *bitOr(Token **Rest, Token *Tok) {
  Node *Nd = bitXor(&Tok, Tok);
  while (equal(Tok, "|")) {
    Token *Start = Tok;
    Nd = newBinary(ND_BITOR, Nd, bitXor(&Tok, Tok->Next), Start);
  }
  *Rest = Tok;
  return Nd;
}

// 按位异或
// bitXor = bitAnd ("^" bitAnd)*
static Node *bitXor(Token **Rest, Token *Tok) {
  Node *Nd = bitAnd(&Tok, Tok);
  while (equal(Tok, "^")) {
    Token *Start = Tok;
    Nd = newBinary(ND_BITXOR, Nd, bitAnd(&Tok, Tok->Next), Start);
  }
  *Rest = Tok;
  return Nd;
}

// 按位与
// bitAnd = equality ("&" equality)*
static Node *bitAnd(Token **Rest, Token *Tok) {
  Node *Nd = equality(&Tok, Tok);
  while (equal(Tok, "&")) {
    Token *Start = Tok;
    Nd = newBinary(ND_BITAND, Nd, equality(&Tok, Tok->Next), Start);
  }
  *Rest = Tok;
  return Nd;
}

// 解析相等性
// equality = relational ("==" relational | "!=" relational)*
static Node *equality(Token **Rest, Token *Tok) {
  // relational
  Node *Nd = relational(&Tok, Tok);

  // ("==" relational | "!=" relational)*
  while (true) {
    Token *Start = Tok;

    // "==" relational
    if (equal(Tok, "==")) {
      Nd = newBinary(ND_EQ, Nd, relational(&Tok, Tok->Next), Start);
      continue;
    }

    // "!=" relational
    if (equal(Tok, "!=")) {
      Nd = newBinary(ND_NE, Nd, relational(&Tok, Tok->Next), Start);
      continue;
    }

    *Rest = Tok;
    return Nd;
  }
}

// 解析比较关系
// relational = shift ("<" shift | "<=" shift | ">" shift | ">=" shift)*
static Node *relational(Token **Rest, Token *Tok) {
  // shift
  Node *Nd = shift(&Tok, Tok);

  // ("<" shift | "<=" shift | ">" shift | ">=" shift)*
  while (true) {
    Token *Start = Tok;

    // "<" shift
    if (equal(Tok, "<")) {
      Nd = newBinary(ND_LT, Nd, shift(&Tok, Tok->Next), Start);
      continue;
    }

    // "<=" shift
    if (equal(Tok, "<=")) {
      Nd = newBinary(ND_LE, Nd, shift(&Tok, Tok->Next), Start);
      continue;
    }

    // ">" shift
    // X>Y等价于Y<X
    if (equal(Tok, ">")) {
      Nd = newBinary(ND_LT, shift(&Tok, Tok->Next), Nd, Start);
      continue;
    }

    // ">=" shift
    // X>=Y等价于Y<=X
    if (equal(Tok, ">=")) {
      Nd = newBinary(ND_LE, shift(&Tok, Tok->Next), Nd, Start);
      continue;
    }

    *Rest = Tok;
    return Nd;
  }
}

// 解析位移
// shift = add ("<<" add | ">>" add)*
static Node *shift(Token **Rest, Token *Tok) {
  // add
  Node *Nd = add(&Tok, Tok);

  while (true) {
    Token *Start = Tok;

    // "<<" add
    if (equal(Tok, "<<")) {
      Nd = newBinary(ND_SHL, Nd, add(&Tok, Tok->Next), Start);
      continue;
    }

    // ">>" add
    if (equal(Tok, ">>")) {
      Nd = newBinary(ND_SHR, Nd, add(&Tok, Tok->Next), Start);
      continue;
    }

    *Rest = Tok;
    return Nd;
  }
}

// 解析各种加法
static Node *newAdd(Node *LHS, Node *RHS, Token *Tok) {
  // 为左右部添加类型
  addType(LHS);
  addType(RHS);

  // num + num
  if (isNumeric(LHS->Ty) && isNumeric(RHS->Ty))
    return newBinary(ND_ADD, LHS, RHS, Tok);

  // 不能解析 ptr + ptr
  if (LHS->Ty->Base && RHS->Ty->Base)
    errorTok(Tok, "invalid operands");

  // 将 num + ptr 转换为 ptr + num
  if (!LHS->Ty->Base && RHS->Ty->Base) {
    Node *Tmp = LHS;
    LHS = RHS;
    RHS = Tmp;
  }

  // VLA + num
  // 指针加法，需要num×VLASize操作
  if (LHS->Ty->Base->Kind == TY_VLA) {
    RHS = newBinary(ND_MUL, RHS, newVarNode(LHS->Ty->Base->VLASize, Tok), Tok);
    return newBinary(ND_ADD, LHS, RHS, Tok);
  }

  // ptr + num
  // 指针加法，ptr+1，1不是1个字节而是1个元素的空间，所以需要×Size操作
  // 指针用long类型存储
  RHS = newBinary(ND_MUL, RHS, newLong(LHS->Ty->Base->Size, Tok), Tok);
  return newBinary(ND_ADD, LHS, RHS, Tok);
}

// 解析各种减法
static Node *newSub(Node *LHS, Node *RHS, Token *Tok) {
  // 为左右部添加类型
  addType(LHS);
  addType(RHS);

  // num - num
  if (isNumeric(LHS->Ty) && isNumeric(RHS->Ty))
    return newBinary(ND_SUB, LHS, RHS, Tok);

  // ptr - num
  if (LHS->Ty->Base && isInteger(RHS->Ty)) {
    // 指针用long类型存储
    RHS = newBinary(ND_MUL, RHS, newLong(LHS->Ty->Base->Size, Tok), Tok);
    addType(RHS);
    Node *Nd = newBinary(ND_SUB, LHS, RHS, Tok);
    // 节点类型为指针
    Nd->Ty = LHS->Ty;
    return Nd;
  }

  // ptr - ptr，返回两指针间有多少元素
  if (LHS->Ty->Base && RHS->Ty->Base) {
    Node *Nd = newBinary(ND_SUB, LHS, RHS, Tok);
    Nd->Ty = TyLong;
    return newBinary(ND_DIV, Nd, newNum(LHS->Ty->Base->Size, Tok), Tok);
  }

  errorTok(Tok, "invalid operands");
  return NULL;
}

// 解析加减
// add = mul ("+" mul | "-" mul)*
static Node *add(Token **Rest, Token *Tok) {
  // mul
  Node *Nd = mul(&Tok, Tok);

  // ("+" mul | "-" mul)*
  while (true) {
    Token *Start = Tok;

    // "+" mul
    if (equal(Tok, "+")) {
      Nd = newAdd(Nd, mul(&Tok, Tok->Next), Start);
      continue;
    }

    // "-" mul
    if (equal(Tok, "-")) {
      Nd = newSub(Nd, mul(&Tok, Tok->Next), Start);
      continue;
    }

    *Rest = Tok;
    return Nd;
  }
}

// 解析乘除
// mul = cast ("*" cast | "/" cast | "%" cast)*
static Node *mul(Token **Rest, Token *Tok) {
  // cast
  Node *Nd = castToken(&Tok, Tok);

  // ("*" cast | "/" cast | "%" cast)*
  while (true) {
    Token *Start = Tok;

    // "*" cast
    if (equal(Tok, "*")) {
      Nd = newBinary(ND_MUL, Nd, castToken(&Tok, Tok->Next), Start);
      continue;
    }

    // "/" cast
    if (equal(Tok, "/")) {
      Nd = newBinary(ND_DIV, Nd, castToken(&Tok, Tok->Next), Start);
      continue;
    }

    // "%" cast
    if (equal(Tok, "%")) {
      Nd = newBinary(ND_MOD, Nd, castToken(&Tok, Tok->Next), Start);
      continue;
    }

    *Rest = Tok;
    return Nd;
  }
}

// 解析类型转换
// cast = "(" typeName ")" cast | unary
static Node *castToken(Token **Rest, Token *Tok) {
  // cast = "(" typeName ")" cast
  if (equal(Tok, "(") && isTypename(Tok->Next)) {
    Token *Start = Tok;
    Type *Ty = typename(&Tok, Tok->Next);
    Tok = skip(Tok, ")");

    // 复合字面量
    if (equal(Tok, "{"))
      return unary(Rest, Start);

    // 解析嵌套的类型转换
    Node *Nd = newCast(castToken(Rest, Tok), Ty);
    Nd->Tok = Start;
    return Nd;
  }

  // unary
  return unary(Rest, Tok);
}

// 解析一元运算
// unary = ("+" | "-" | "*" | "&" | "!" | "~") cast
//       | ("++" | "--") unary
//       | "&&" ident
//       | postfix
static Node *unary(Token **Rest, Token *Tok) {
  // "+" cast
  if (equal(Tok, "+"))
    return castToken(Rest, Tok->Next);

  // "-" cast
  if (equal(Tok, "-"))
    return newUnary(ND_NEG, castToken(Rest, Tok->Next), Tok);

  // "&" cast
  if (equal(Tok, "&")) {
    Node *LHS = castToken(Rest, Tok->Next);
    addType(LHS);
    // 不能够获取位域的地址
    if (LHS->Kind == ND_MEMBER && LHS->Mem->IsBitfield)
      errorTok(Tok, "cannot take address of bitfield");
    return newUnary(ND_ADDR, LHS, Tok);
  }

  // "*" cast
  if (equal(Tok, "*")) {
    Node *Nd = castToken(Rest, Tok->Next);
    addType(Nd);
    // 如果func是函数，那么*func等价于func
    if (Nd->Ty->Kind == TY_FUNC)
      return Nd;
    return newUnary(ND_DEREF, Nd, Tok);
  }

  // "!" cast
  if (equal(Tok, "!"))
    return newUnary(ND_NOT, castToken(Rest, Tok->Next), Tok);

  // "~" cast
  if (equal(Tok, "~"))
    return newUnary(ND_BITNOT, castToken(Rest, Tok->Next), Tok);

  // 转换 ++i 为 i+=1
  // "++" unary
  if (equal(Tok, "++"))
    return toAssign(newAdd(unary(Rest, Tok->Next), newNum(1, Tok), Tok));

  // 转换 +-i 为 i-=1
  // "--" unary
  if (equal(Tok, "--"))
    return toAssign(newSub(unary(Rest, Tok->Next), newNum(1, Tok), Tok));

  // GOTO的标签作为值
  if (equal(Tok, "&&")) {
    Node *Nd = newNode(ND_LABEL_VAL, Tok);
    Nd->Label = getIdent(Tok->Next);
    // 将Nd同时存入Gotos，最后用于解析UniqueLabel
    Nd->GotoNext = Gotos;
    Gotos = Nd;
    *Rest = Tok->Next->Next;
    return Nd;
  }

  // postfix
  return postfix(Rest, Tok);
}

// structMembers = (declspec declarator (","  declarator)* ";")*
static void structMembers(Token **Rest, Token *Tok, Type *Ty) {
  Member Head = {};
  Member *Cur = &Head;
  // 记录成员变量的索引值
  int Idx = 0;

  while (!equal(Tok, "}")) {
    // declspec
    VarAttr Attr = {};
    Type *BaseTy = declspec(&Tok, Tok, &Attr);
    int First = true;

    // 匿名的结构体成员
    if ((BaseTy->Kind == TY_STRUCT || BaseTy->Kind == TY_UNION) &&
        consume(&Tok, Tok, ";")) {
      Member *Mem = calloc(1, sizeof(Member));
      Mem->Ty = BaseTy;
      Mem->Idx = Idx++;
      // 如果对齐值不存在，则使用匿名成员的对齐值
      Mem->Align = Attr.Align ? Attr.Align : Mem->Ty->Align;
      Cur = Cur->Next = Mem;
      continue;
    }

    // 常规结构体成员
    while (!consume(&Tok, Tok, ";")) {
      if (!First)
        Tok = skip(Tok, ",");
      First = false;

      Member *Mem = calloc(1, sizeof(Member));
      // declarator
      Mem->Ty = declarator(&Tok, Tok, BaseTy);
      Mem->Name = Mem->Ty->Name;
      // 成员变量对应的索引值
      Mem->Idx = Idx++;
      // 设置对齐值
      Mem->Align = Attr.Align ? Attr.Align : Mem->Ty->Align;

      // 位域成员赋值
      if (consume(&Tok, Tok, ":")) {
        Mem->IsBitfield = true;
        Mem->BitWidth = constExpr(&Tok, Tok);
      }

      Cur = Cur->Next = Mem;
    }
  }

  // 解析灵活数组成员，数组大小设为0
  if (Cur != &Head && Cur->Ty->Kind == TY_ARRAY && Cur->Ty->ArrayLen < 0) {
    Cur->Ty = arrayOf(Cur->Ty->Base, 0);
    // 设置类型为灵活的
    Ty->IsFlexible = true;
  }

  *Rest = Tok->Next;
  Ty->Mems = Head.Next;
}

// attribute = ("__attribute__" "(" "(" ("packed")
//                                    | ("aligned" "(" N ")") ")" ")")*
static Token *attributeList(Token *Tok, Type *Ty) {
  // 解析__attribute__相关的属性
  while (consume(&Tok, Tok, "__attribute__")) {
    Tok = skip(Tok, "(");
    Tok = skip(Tok, "(");

    bool First = true;

    while (!consume(&Tok, Tok, ")")) {
      if (!First)
        Tok = skip(Tok, ",");
      First = false;

      // "packed"
      if (consume(&Tok, Tok, "packed")) {
        Ty->IsPacked = true;
        continue;
      }

      // "aligned" "(" N ")"
      if (consume(&Tok, Tok, "aligned")) {
        Tok = skip(Tok, "(");
        Ty->Align = constExpr(&Tok, Tok);
        Tok = skip(Tok, ")");
        continue;
      }

      errorTok(Tok, "unknown attribute");
    }

    Tok = skip(Tok, ")");
  }

  return Tok;
}

// structUnionDecl = attribute? ident? ("{" structMembers)?
static Type *structUnionDecl(Token **Rest, Token *Tok) {
  // 构造结构体类型
  Type *Ty = structType();
  // 设置相关属性
  Tok = attributeList(Tok, Ty);

  // 读取标签
  Token *Tag = NULL;
  if (Tok->Kind == TK_IDENT) {
    Tag = Tok;
    Tok = Tok->Next;
  }

  // 构造不完整结构体
  if (Tag && !equal(Tok, "{")) {
    *Rest = Tok;

    Type *Ty2 = findTag(Tag);
    if (Ty2)
      return Ty2;

    Ty->Size = -1;
    pushTagScope(Tag, Ty);
    return Ty;
  }

  // ("{" structMembers)?
  Tok = skip(Tok, "{");

  // 构造一个结构体
  structMembers(&Tok, Tok, Ty);
  *Rest = attributeList(Tok, Ty);

  // 如果是重复定义，就覆盖之前的定义。否则有名称就注册结构体类型
  if (Tag) {
    Type *Ty2 = hashmapGet2(&Scp->Tags, Tag->Loc, Tag->Len);
    if (Ty2) {
      *Ty2 = *Ty;
      return Ty2;
    }

    pushTagScope(Tag, Ty);
  }
  return Ty;
}

// structDecl = structUnionDecl
static Type *structDecl(Token **Rest, Token *Tok) {
  Type *Ty = structUnionDecl(Rest, Tok);
  Ty->Kind = TY_STRUCT;

  // 不完整结构体
  if (Ty->Size < 0)
    return Ty;

  // 计算结构体内成员的偏移量
  int Bits = 0;

  // 遍历成员
  for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
    if (Mem->IsBitfield && Mem->BitWidth == 0) {
      // 零宽度的位域有特殊含义，仅作用于对齐
      Bits = alignTo(Bits, Mem->Ty->Size * 8);
    } else if (Mem->IsBitfield) {
      // 位域成员变量
      int Sz = Mem->Ty->Size;
      // Bits此时对应成员最低位，Bits + Mem->BitWidth - 1对应成员最高位
      // 二者若不相等，则说明当前这个类型剩余的空间存不下，需要新开辟空间
      if (Bits / (Sz * 8) != (Bits + Mem->BitWidth - 1) / (Sz * 8))
        // 新开辟一个当前当前类型的空间
        Bits = alignTo(Bits, Sz * 8);

      // 若当前字节能够存下，则向下对齐，得到成员变量的偏移量
      Mem->Offset = alignDown(Bits / 8, Sz);
      Mem->BitOffset = Bits % (Sz * 8);
      Bits += Mem->BitWidth;
    } else {
      // 常规结构体成员变量
      if (!Ty->IsPacked)
        Bits = alignTo(Bits, Mem->Align * 8);
      Mem->Offset = Bits / 8;
      Bits += Mem->Ty->Size * 8;
    }

    // 类型的对齐值，不小于当前成员变量的对齐值
    if (!Ty->IsPacked && Ty->Align < Mem->Align)
      Ty->Align = Mem->Align;
  }
  // 结构体的大小
  Ty->Size = alignTo(Bits, Ty->Align * 8) / 8;

  return Ty;
}

// unionDecl = structUnionDecl
static Type *unionDecl(Token **Rest, Token *Tok) {
  Type *Ty = structUnionDecl(Rest, Tok);
  Ty->Kind = TY_UNION;

  // 联合体需要设置为最大的对齐量与大小，变量偏移量都默认为0
  for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
    if (Ty->Align < Mem->Align)
      Ty->Align = Mem->Align;
    if (Ty->Size < Mem->Ty->Size)
      Ty->Size = Mem->Ty->Size;
  }
  // 将大小对齐
  Ty->Size = alignTo(Ty->Size, Ty->Align);
  return Ty;
}

// 获取结构体成员
static Member *getStructMember(Type *Ty, Token *Tok) {
  for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next) {
    // 匿名结构体成员，可以由上一级的结构体进行访问
    if ((Mem->Ty->Kind == TY_STRUCT || Mem->Ty->Kind == TY_UNION) &&
        !Mem->Name) {
      if (getStructMember(Mem->Ty, Tok))
        return Mem;
      continue;
    }

    // 常规结构体成员
    if (Mem->Name->Len == Tok->Len &&
        !strncmp(Mem->Name->Loc, Tok->Loc, Tok->Len))
      return Mem;
  }
  return NULL;
}

// 构建结构体成员的节点
// 匿名结构体成员，可以由上一级的结构体进行访问
static Node *structRef(Node *Nd, Token *Tok) {
  addType(Nd);
  if (Nd->Ty->Kind != TY_STRUCT && Nd->Ty->Kind != TY_UNION)
    errorTok(Nd->Tok, "not a struct nor a union");

  // 节点类型
  Type *Ty = Nd->Ty;

  // 遍历匿名的成员，直到匹配到具名的
  while (true) {
    // 获取结构体成员
    Member *Mem = getStructMember(Ty, Tok);
    if (!Mem)
      errorTok(Tok, "no such member");
    // 构造成员节点
    Nd = newUnary(ND_MEMBER, Nd, Tok);
    Nd->Mem = Mem;
    // 判断是否具名
    if (Mem->Name)
      break;
    // 继续遍历匿名成员的成员
    Ty = Mem->Ty;
  }
  return Nd;
}

// 转换 A++ 为 `(typeof A)((A += 1) - 1)`
// Increase Decrease
static Node *newIncDec(Node *Nd, Token *Tok, int Addend) {
  addType(Nd);
  return newCast(newAdd(toAssign(newAdd(Nd, newNum(Addend, Tok), Tok)),
                        newNum(-Addend, Tok), Tok),
                 Nd->Ty);
}

// postfix = "(" typeName ")" "{" initializerList "}"
//         = ident "(" funcArgs ")" postfixTail*
//         | primary postfixTail*
//
// postfixTail = "[" expr "]"
//             | "(" funcArgs ")"
//             | "." ident
//             | "->" ident
//             | "++"
//             | "--"
static Node *postfix(Token **Rest, Token *Tok) {
  // "(" typeName ")" "{" initializerList "}"
  if (equal(Tok, "(") && isTypename(Tok->Next)) {
    // 复合字面量
    Token *Start = Tok;
    Type *Ty = typename(&Tok, Tok->Next);
    Tok = skip(Tok, ")");

    if (Scp->Next == NULL) {
      Obj *Var = newAnonGVar(Ty);
      GVarInitializer(Rest, Tok, Var);
      return newVarNode(Var, Start);
    }

    Obj *Var = newLVar("", Ty);
    Node *LHS = LVarInitializer(Rest, Tok, Var);
    Node *RHS = newVarNode(Var, Tok);
    return newBinary(ND_COMMA, LHS, RHS, Start);
  }

  // primary
  Node *Nd = primary(&Tok, Tok);

  // ("[" expr "]")*
  while (true) {
    // ident "(" funcArgs ")"
    // 匹配到函数调用
    if (equal(Tok, "(")) {
      Nd = funCall(&Tok, Tok->Next, Nd);
      continue;
    }

    if (equal(Tok, "[")) {
      // x[y] 等价于 *(x+y)
      Token *Start = Tok;
      Node *Idx = expr(&Tok, Tok->Next);
      Tok = skip(Tok, "]");
      Nd = newUnary(ND_DEREF, newAdd(Nd, Idx, Start), Start);
      continue;
    }

    // "." ident
    if (equal(Tok, ".")) {
      Nd = structRef(Nd, Tok->Next);
      Tok = Tok->Next->Next;
      continue;
    }

    // "->" ident
    if (equal(Tok, "->")) {
      // x->y 等价于 (*x).y
      Nd = newUnary(ND_DEREF, Nd, Tok);
      Nd = structRef(Nd, Tok->Next);
      Tok = Tok->Next->Next;
      continue;
    }

    if (equal(Tok, "++")) {
      Nd = newIncDec(Nd, Tok, 1);
      Tok = Tok->Next;
      continue;
    }

    if (equal(Tok, "--")) {
      Nd = newIncDec(Nd, Tok, -1);
      Tok = Tok->Next;
      continue;
    }

    *Rest = Tok;
    return Nd;
  }
}

// 解析函数调用
// funcall = (assign ("," assign)*)? ")"
static Node *funCall(Token **Rest, Token *Tok, Node *Fn) {
  addType(Fn);

  // 检查函数指针
  if (Fn->Ty->Kind != TY_FUNC &&
      (Fn->Ty->Kind != TY_PTR || Fn->Ty->Base->Kind != TY_FUNC))
    errorTok(Fn->Tok, "not a function");

  // 处理函数的类型设为非指针的类型
  Type *Ty = (Fn->Ty->Kind == TY_FUNC) ? Fn->Ty : Fn->Ty->Base;
  // 函数形参的类型
  Type *ParamTy = Ty->Params;

  Node Head = {};
  Node *Cur = &Head;

  while (!equal(Tok, ")")) {
    if (Cur != &Head)
      Tok = skip(Tok, ",");
    // assign
    Node *Arg = assign(&Tok, Tok);
    addType(Arg);

    if (ParamTy) {
      if (ParamTy->Kind != TY_STRUCT && ParamTy->Kind != TY_UNION)
        // 将参数节点的类型进行转换
        Arg = newCast(Arg, ParamTy);
      // 前进到下一个形参类型
      ParamTy = ParamTy->Next;
    } else if (Arg->Ty->Kind == TY_FLOAT) {
      // 若无形参类型，浮点数会被提升为double
      Arg = newCast(Arg, TyDouble);
    }
    // 对参数进行存储
    Cur->Next = Arg;
    Cur = Cur->Next;
    addType(Cur);
  }

  *Rest = skip(Tok, ")");

  // 构造一个函数调用的节点
  Node *Nd = newUnary(ND_FUNCALL, Fn, Tok);

  // 函数类型
  Nd->FuncType = Ty;
  // 读取的返回类型
  Nd->Ty = Ty->ReturnTy;
  Nd->Args = Head.Next;

  // 如果函数返回值是结构体，那么调用者需为返回值开辟一块空间
  if (Nd->Ty->Kind == TY_STRUCT || Nd->Ty->Kind == TY_UNION)
    Nd->RetBuffer = newLVar("", Nd->Ty);

  return Nd;
}

// genericSelection = "(" assign "," genericAssoc ("," genericAssoc)* ")"
//
// genericAssoc = typeName ":" assign
//              | "default" ":" assign
// 泛型选择
static Node *genericSelection(Token **Rest, Token *Tok) {
  Token *Start = Tok;
  // "("
  Tok = skip(Tok, "(");

  // assign
  // 泛型控制选择的值
  Node *Ctrl = assign(&Tok, Tok);
  addType(Ctrl);

  // 获取控制选择的值类型
  Type *T1 = Ctrl->Ty;
  // 函数转换为函数指针
  if (T1->Kind == TY_FUNC)
    T1 = pointerTo(T1);
  // 数组转换为数组指针
  else if (T1->Kind == TY_ARRAY)
    T1 = pointerTo(T1->Base);

  // 泛型返回的结果值
  Node *Ret = NULL;

  // "," genericAssoc ("," genericAssoc)*
  while (!consume(Rest, Tok, ")")) {
    Tok = skip(Tok, ",");

    // 默认类型及其对应的值
    // "default" ":" assign
    if (equal(Tok, "default")) {
      Tok = skip(Tok->Next, ":");
      Node *Nd = assign(&Tok, Tok);
      if (!Ret)
        Ret = Nd;
      continue;
    }

    // 各个类型及其对应的值
    // typeName ":" assign
    Type *T2 = typename(&Tok, Tok);
    Tok = skip(Tok, ":");
    Node *Nd = assign(&Tok, Tok);
    // 判断类型是否与控制选择的值类型相同
    if (isCompatible(T1, T2))
      Ret = Nd;
  }

  if (!Ret)
    errorTok(Start, "controlling expression type not compatible with"
                    " any generic association type");
  // 返回泛型最后的值
  return Ret;
}

// 解析括号、数字、变量
// primary = "(" "{" stmt+ "}" ")"
//         | "(" expr ")"
//         | "sizeof" "(" typeName ")"
//         | "sizeof" unary
//         | "_Alignof" "(" typeName ")"
//         | "_Alignof" unary
//         | "_Generic" genericSelection
//         | "__builtin_types_compatible_p" "(" typeName, typeName, ")"
//         | ident
//         | str
//         | num
static Node *primary(Token **Rest, Token *Tok) {
  Token *Start = Tok;

  // "(" "{" stmt+ "}" ")"
  if (equal(Tok, "(") && equal(Tok->Next, "{")) {
    // This is a GNU statement expresssion.
    Node *Nd = newNode(ND_STMT_EXPR, Tok);
    Nd->Body = compoundStmt(&Tok, Tok->Next->Next)->Body;
    *Rest = skip(Tok, ")");
    return Nd;
  }

  // "(" expr ")"
  if (equal(Tok, "(")) {
    Node *Nd = expr(&Tok, Tok->Next);
    *Rest = skip(Tok, ")");
    return Nd;
  }

  // "sizeof" "(" typeName ")"
  if (equal(Tok, "sizeof") && equal(Tok->Next, "(") &&
      isTypename(Tok->Next->Next)) {
    Type *Ty = typename(&Tok, Tok->Next->Next);
    *Rest = skip(Tok, ")");
    // sizeof 可变长度数组的大小
    if (Ty->Kind == TY_VLA) {
      // 对于变量的sizeof操作
      if (Ty->VLASize)
        return newVarNode(Ty->VLASize, Tok);

      // 对于VLA类型的sizeof操作
      // 获取VLA类型的VLASize
      Node *LHS = computeVLASize(Ty, Tok);
      Node *RHS = newVarNode(Ty->VLASize, Tok);
      return newBinary(ND_COMMA, LHS, RHS, Tok);
    }
    return newULong(Ty->Size, Start);
  }

  // "sizeof" unary
  if (equal(Tok, "sizeof")) {
    Node *Nd = unary(Rest, Tok->Next);
    addType(Nd);
    // sizeof 可变长度数组的大小
    if (Nd->Ty->Kind == TY_VLA)
      return newVarNode(Nd->Ty->VLASize, Tok);
    return newULong(Nd->Ty->Size, Tok);
  }

  // "_Alignof" "(" typeName ")"
  // 读取类型的对齐值
  if (equal(Tok, "_Alignof") && equal(Tok->Next, "(") &&
      isTypename(Tok->Next->Next)) {
    Type *Ty = typename(&Tok, Tok->Next->Next);
    *Rest = skip(Tok, ")");
    return newULong(Ty->Align, Tok);
  }

  // "_Alignof" unary
  // 读取变量的对齐值
  if (equal(Tok, "_Alignof")) {
    Node *Nd = unary(Rest, Tok->Next);
    addType(Nd);
    return newULong(Nd->Ty->Align, Tok);
  }

  // "_Generic" genericSelection
  // 进入到泛型的解析
  if (equal(Tok, "_Generic"))
    return genericSelection(Rest, Tok->Next);

  // "__builtin_types_compatible_p" "(" typeName, typeName, ")"
  // 匹配内建的类型兼容性函数
  if (equal(Tok, "__builtin_types_compatible_p")) {
    Tok = skip(Tok->Next, "(");
    // 类型1
    Type *T1 = typename(&Tok, Tok);
    Tok = skip(Tok, ",");
    // 类型2
    Type *T2 = typename(&Tok, Tok);
    *Rest = skip(Tok, ")");
    // 返回二者兼容检查函数的结果
    return newNum(isCompatible(T1, T2), Start);
  }

  // 原子比较交换
  if (equal(Tok, "__builtin_compare_and_swap")) {
    Node *Nd = newNode(ND_CAS, Tok);
    Tok = skip(Tok->Next, "(");
    Nd->CasAddr = assign(&Tok, Tok);
    Tok = skip(Tok, ",");
    Nd->CasOld = assign(&Tok, Tok);
    Tok = skip(Tok, ",");
    Nd->CasNew = assign(&Tok, Tok);
    *Rest = skip(Tok, ")");
    return Nd;
  }

  // 原子交换
  if (equal(Tok, "__builtin_atomic_exchange")) {
    Node *Nd = newNode(ND_EXCH, Tok);
    Tok = skip(Tok->Next, "(");
    Nd->LHS = assign(&Tok, Tok);
    Tok = skip(Tok, ",");
    Nd->RHS = assign(&Tok, Tok);
    *Rest = skip(Tok, ")");
    return Nd;
  }

  // __func__和__FUNCTION__
  if (Tok->Kind == TK_IDENT &&
      (equal(Tok, "__func__") || equal(Tok, "__FUNCTION__"))) {
    if (!CurrentFn)
      errorTok(Tok, "__func__ is only available inside functions");
    Obj *Var =
        newStringLiteral(CurrentFn->Name,
                         arrayOf(TyChar, strlen(CurrentFn->Name) + 1));
    *Rest = Tok->Next;
    return newVarNode(Var, Tok);
  }

  // ident
  if (Tok->Kind == TK_IDENT) {
    // 查找变量（或枚举常量）
    VarScope *S = findVar(Tok);
    *Rest = Tok->Next;

    // 用于static inline函数
    // 变量存在且为函数
    if (S && S->Var && S->Var->IsFunction) {
      if (CurrentFn)
        // 如果函数体内存在其他函数，则记录引用的其他函数
        strArrayPush(&CurrentFn->Refs, S->Var->Name);
      else
        // 标记为根函数
        S->Var->IsRoot = true;
    }

    if (S) {
      // 是否为变量
      if (S->Var)
        return newVarNode(S->Var, Tok);
      // 否则为枚举常量
      if (S->EnumTy)
        return newNum(S->EnumVal, Tok);
    }

    if (equal(Tok->Next, "("))
      errorTok(Tok, "implicit declaration of a function");
    errorTok(Tok, "undefined variable");
  }

  // str
  if (Tok->Kind == TK_STR) {
    Obj *Var = newStringLiteral(Tok->Str, Tok->Ty);
    *Rest = Tok->Next;
    return newVarNode(Var, Tok);
  }

  // num
  if (Tok->Kind == TK_NUM) {
    Node *Nd;
    if (isFloNum(Tok->Ty)) {
      // 浮点数节点
      Nd = newNode(ND_NUM, Tok);
      Nd->FVal = Tok->FVal;
    } else {
      // 整型节点
      Nd = newNum(Tok->Val, Tok);
    }

    // 设置类型为终结符的类型
    Nd->Ty = Tok->Ty;
    *Rest = Tok->Next;
    return Nd;
  }

  errorTok(Tok, "expected an expression");
  return NULL;
}

// 解析类型别名
static Token *parseTypedef(Token *Tok, Type *BaseTy) {
  bool First = true;

  while (!consume(&Tok, Tok, ";")) {
    if (!First)
      Tok = skip(Tok, ",");
    First = false;

    Type *Ty = declarator(&Tok, Tok, BaseTy);
    if (!Ty->Name)
      errorTok(Ty->NamePos, "typedef name omitted");
    // 类型别名的变量名存入变量域中，并设置类型
    pushScope(getIdent(Ty->Name))->Typedef = Ty;
  }
  return Tok;
}

// 将形参添加到Locals
static void createParamLVars(Type *Param) {
  if (Param) {
    // 递归到形参最底部
    // 先将最底部的加入Locals中，之后的都逐个加入到顶部，保持顺序不变
    createParamLVars(Param->Next);
    if (!Param->Name)
      errorTok(Param->NamePos, "parameter name omitted");
    // 添加到Locals中
    newLVar(getIdent(Param->Name), Param);
  }
}

// 匹配goto和标签
// 因为标签可能会出现在goto后面，所以要在解析完函数后再进行goto和标签的解析
static void resolveGotoLabels(void) {
  // 遍历使goto对应上label
  for (Node *X = Gotos; X; X = X->GotoNext) {
    for (Node *Y = Labels; Y; Y = Y->GotoNext) {
      if (!strcmp(X->Label, Y->Label)) {
        X->UniqueLabel = Y->UniqueLabel;
        break;
      }
    }

    if (X->UniqueLabel == NULL)
      errorTok(X->Tok->Next, "use of undeclared label");
  }

  Gotos = NULL;
  Labels = NULL;
}

// 查找是否存在函数
static Obj *findFunc(char *Name) {
  Scope *Sc = Scp;
  // 递归到最内层域
  while (Sc->Next)
    Sc = Sc->Next;

  // 遍历查找函数是否存在
  VarScope *Sc2 = hashmapGet(&Sc->Vars, Name);
  if (Sc2 && Sc2->Var && Sc2->Var->IsFunction)
    return Sc2->Var;
  return NULL;
}

// 将函数标记为存活状态
static void markLive(Obj *Var) {
  // 如果不是函数或已存活，直接返回
  if (!Var->IsFunction || Var->IsLive)
    return;
  // 将函数设置为存活状态
  Var->IsLive = true;

  // 遍历该函数的所有引用过的函数，将它们也设为存活状态
  for (int I = 0; I < Var->Refs.Len; I++) {
    Obj *Fn = findFunc(Var->Refs.Data[I]);
    if (Fn)
      markLive(Fn);
  }
}

// functionDefinition = declspec declarator "{" compoundStmt*
static Token *function(Token *Tok, Type *BaseTy, VarAttr *Attr) {
  Type *Ty = declarator(&Tok, Tok, BaseTy);
  if (!Ty->Name)
    errorTok(Ty->NamePos, "function name omitted");

  // 函数名称
  char *NameStr = getIdent(Ty->Name);

  Obj *Fn = findFunc(NameStr);
  if (Fn) {
    // 重复定义的函数
    if (!Fn->IsFunction)
      errorTok(Tok, "redeclared as a different kind of symbol");
    if (Fn->IsDefinition && equal(Tok, "{"))
      errorTok(Tok, "redefinition of %s", NameStr);
    if (!Fn->IsStatic && Attr->IsStatic)
      errorTok(Tok, "static declaration follows a non-static declaration");
    Fn->IsDefinition = Fn->IsDefinition || equal(Tok, "{");
  } else {
    Fn = newGVar(NameStr, Ty);
    Fn->IsFunction = true;
    Fn->IsDefinition = equal(Tok, "{");
    Fn->IsStatic = Attr->IsStatic || (Attr->IsInline && !Attr->IsExtern);
    Fn->IsInline = Attr->IsInline;
  }

  // 非static inline函数标记为根函数
  Fn->IsRoot = !(Fn->IsStatic && Fn->IsInline);

  // 判断是否没有函数定义
  if (consume(&Tok, Tok, ";"))
    return Tok;

  CurrentFn = Fn;
  // 清空全局变量Locals
  Locals = NULL;
  // 进入新的域
  enterScope();
  // 函数参数
  createParamLVars(Ty->Params);

  // 有大于16字节的结构体返回值的函数
  Type *RTy = Ty->ReturnTy;
  if ((RTy->Kind == TY_STRUCT || RTy->Kind == TY_UNION) && RTy->Size > 16)
    // 第一个形参是隐式的，包含了结构体的地址
    newLVar("", pointerTo(RTy));

  Fn->Params = Locals;

  // 判断是否为可变参数
  if (Ty->IsVariadic)
    Fn->VaArea = newLVar("__va_area__", arrayOf(TyChar, 0));
  // 记录Alloca区域底部
  Fn->AllocaBottom = newLVar("__alloca_size__", pointerTo(TyChar));

  Tok = skip(Tok, "{");

  // 函数体存储语句的AST，Locals存储变量
  Fn->Body = compoundStmt(&Tok, Tok);
  Fn->Locals = Locals;
  // 结束当前域
  leaveScope();
  // 处理goto和标签
  resolveGotoLabels();
  return Tok;
}

// 构造全局变量
static Token *globalVariable(Token *Tok, Type *Basety, VarAttr *Attr) {
  bool First = true;

  while (!consume(&Tok, Tok, ";")) {
    if (!First)
      Tok = skip(Tok, ",");
    First = false;

    Type *Ty = declarator(&Tok, Tok, Basety);
    if (!Ty->Name)
      errorTok(Ty->NamePos, "variable name omitted");
    // 全局变量初始化
    Obj *Var = newGVar(getIdent(Ty->Name), Ty);
    // 是否具有定义
    Var->IsDefinition = !Attr->IsExtern;
    // 传递是否为static
    Var->IsStatic = Attr->IsStatic;
    // 传递是否为TLS
    Var->IsTLS = Attr->IsTLS;
    // 若有设置，则覆盖全局变量的对齐值
    if (Attr->Align)
      Var->Align = Attr->Align;

    if (equal(Tok, "="))
      GVarInitializer(&Tok, Tok->Next, Var);
    else if (!Attr->IsExtern && !Attr->IsTLS)
      // 没有初始化器的全局变量设为试探性的
      Var->IsTentative = true;
  }
  return Tok;
}

// 区分 函数还是全局变量
static bool isFunction(Token *Tok) {
  if (equal(Tok, ";"))
    return false;

  // 虚设变量，用于调用declarator
  Type Dummy = {};
  Type *Ty = declarator(&Tok, Tok, &Dummy);
  return Ty->Kind == TY_FUNC;
}

// 删除冗余的试探性定义
static void scanGlobals(void) {
  // 新的全局变量的链表
  Obj Head;
  Obj *Cur = &Head;

  // 遍历全局变量，删除冗余的试探性定义
  for (Obj *Var = Globals; Var; Var = Var->Next) {
    // 不是试探性定义，直接加入到新链表中
    if (!Var->IsTentative) {
      Cur = Cur->Next = Var;
      continue;
    }

    // 查找其他具有定义的同名标志符
    // 从头遍历
    Obj *Var2 = Globals;
    for (; Var2; Var2 = Var2->Next)
      // 判断 不是同一个变量，变量具有定义，二者同名
      if (Var != Var2 && Var2->IsDefinition && !strcmp(Var->Name, Var2->Name))
        break;

    // 如果Var2为空，说明需要生成代码，加入到新链表中
    // 如果Var2不为空，说明存在定义，那么就不需要生成试探性定义
    if (!Var2)
      Cur = Cur->Next = Var;
  }

  // 替换为新的全局变量链表
  Cur->Next = NULL;
  Globals = Head.Next;
}

// 声明内建函数
static void declareBuiltinFunctions(void) {
  // 处理alloca函数
  Type *Ty = funcType(pointerTo(TyVoid));
  Ty->Params = copyType(TyInt);
  BuiltinAlloca = newGVar("alloca", Ty);
  BuiltinAlloca->IsDefinition = false;
}

// 语法解析入口函数
// program = (typedef | functionDefinition | globalVariable)*
Obj *parse(Token *Tok) {
  // 声明内建函数
  declareBuiltinFunctions();
  Globals = NULL;

  while (Tok->Kind != TK_EOF) {
    VarAttr Attr = {};
    Type *BaseTy = declspec(&Tok, Tok, &Attr);

    // typedef
    if (Attr.IsTypedef) {
      Tok = parseTypedef(Tok, BaseTy);
      continue;
    }

    // 函数
    if (isFunction(Tok)) {
      Tok = function(Tok, BaseTy, &Attr);
      continue;
    }

    // 全局变量
    Tok = globalVariable(Tok, BaseTy, &Attr);
  }

  // 遍历所有的函数
  for (Obj *Var = Globals; Var; Var = Var->Next)
    // 如果为根函数，则设置为存活状态
    if (Var->IsRoot)
      markLive(Var);

  // 删除冗余的试探性定义
  scanGlobals();
  return Globals;
}

// 宏函数形参
typedef struct MacroParam MacroParam;
struct MacroParam {
  MacroParam *Next; // 下一个
  char *Name;       // 名称
};

// 宏函数实参
typedef struct MacroArg MacroArg;
struct MacroArg {
  MacroArg *Next; // 下一个
  char *Name;     // 名称
  bool IsVaArg;   // 是否为可变参数
  Token *Tok;     // 对应的终结符链表
};

// 宏处理函数
typedef Token *macroHandlerFn(Token *);

// 定义的宏变量
typedef struct Macro Macro;
struct Macro {
  char *Name;              // 名称
  bool IsObjlike;          // 宏变量为真，或者宏函数为假
  MacroParam *Params;      // 宏函数参数
  char *VaArgsName;        // 可变参数
  Token *Body;             // 对应的终结符
  macroHandlerFn *Handler; // 宏处理函数
};

// 宏变量栈
static HashMap Macros;

// #if可以嵌套，所以使用栈来保存嵌套的#if
typedef struct CondIncl CondIncl;
struct CondIncl {
  CondIncl *Next;                         // 下一个
  enum { IN_THEN, IN_ELIF, IN_ELSE } Ctx; // 类型
  Token *Tok;                             // 对应的终结符
  bool Included;                          // 是否被包含
};

// 预处理语言的设计方式使得即使存在递归宏也可以保证停止。
// 一个宏只对每个终结符应用一次。
//
// 宏展开时的隐藏集
typedef struct Hideset Hideset;
struct Hideset {
  Hideset *Next; // 下一个
  char *Name;    // 名称
};

// 全局的#if保存栈
static CondIncl *CondIncls;
// 记录含有 #pragma once 的文件
static HashMap PragmaOnce;
// 记录 #include_next 开始的索引值
static int IncludeNextIdx;

// 处理所有的宏和指示
static Token *preprocess2(Token *Tok);
// 查找宏
static Macro *findMacro(Token *tok);

// 是否行首是#号
static bool isHash(Token *Tok) { return Tok->AtBOL && equal(Tok, "#"); }

// 一些预处理器允许#include等指示，在换行前有多余的终结符
// 此函数跳过这些终结符
static Token *skipLine(Token *Tok) {
  // 在行首，正常情况
  if (Tok->AtBOL)
    return Tok;
  // 提示多余的字符
  warnTok(Tok, "extra token");
  // 跳过终结符，直到行首
  while (!Tok->AtBOL)
    Tok = Tok->Next;
  return Tok;
}

static Token *copyToken(Token *Tok) {
  Token *T = calloc(1, sizeof(Token));
  *T = *Tok;
  T->Next = NULL;
  return T;
}

// 新建一个EOF终结符
static Token *newEOF(Token *Tok) {
  Token *T = copyToken(Tok);
  T->Kind = TK_EOF;
  T->Len = 0;
  return T;
}

// 新建一个隐藏集
static Hideset *newHideset(char *Name) {
  Hideset *Hs = calloc(1, sizeof(Hideset));
  Hs->Name = Name;
  return Hs;
}

// 连接两个隐藏集
static Hideset *hidesetUnion(Hideset *Hs1, Hideset *Hs2) {
  Hideset Head = {};
  Hideset *Cur = &Head;

  for (; Hs1; Hs1 = Hs1->Next)
    Cur = Cur->Next = newHideset(Hs1->Name);
  Cur->Next = Hs2;
  return Head.Next;
}

// 是否已经处于宏变量当中
static bool hidesetContains(Hideset *Hs, char *S, int Len) {
  // 遍历隐藏集
  for (; Hs; Hs = Hs->Next)
    if (strlen(Hs->Name) == Len && !strncmp(Hs->Name, S, Len))
      return true;
  return false;
}

// 取两个隐藏集的交集
static Hideset *hidesetIntersection(Hideset *Hs1, Hideset *Hs2) {
  Hideset Head = {};
  Hideset *Cur = &Head;

  // 遍历Hs1，如果Hs2也有，那么就加入链表当中
  for (; Hs1; Hs1 = Hs1->Next)
    if (hidesetContains(Hs2, Hs1->Name, strlen(Hs1->Name)))
      Cur = Cur->Next = newHideset(Hs1->Name);
  return Head.Next;
}

// 遍历Tok之后的所有终结符，将隐藏集Hs都赋给每个终结符
static Token *addHideset(Token *Tok, Hideset *Hs) {
  Token Head = {};
  Token *Cur = &Head;

  for (; Tok; Tok = Tok->Next) {
    Token *T = copyToken(Tok);
    T->Hideset = hidesetUnion(T->Hideset, Hs);
    Cur = Cur->Next = T;
  }
  return Head.Next;
}

// 将Tok2放入Tok1的尾部
static Token *append(Token *Tok1, Token *Tok2) {
  // Tok1为空时，直接返回Tok2
  if (Tok1->Kind == TK_EOF)
    return Tok2;

  Token Head = {};
  Token *Cur = &Head;

  // 遍历Tok1，存入链表
  for (; Tok1->Kind != TK_EOF; Tok1 = Tok1->Next)
    Cur = Cur->Next = copyToken(Tok1);

  // 链表后接Tok2
  Cur->Next = Tok2;
  // 返回下一个
  return Head.Next;
}

// 跳过#if和#endif
static Token *skipCondIncl2(Token *Tok) {
  while (Tok->Kind != TK_EOF) {
    if (isHash(Tok) && (equal(Tok->Next, "if") || equal(Tok->Next, "ifdef") ||
                        equal(Tok->Next, "ifndef"))) {
      Tok = skipCondIncl2(Tok->Next->Next);
      continue;
    }
    if (isHash(Tok) && equal(Tok->Next, "endif"))
      return Tok->Next->Next;
    Tok = Tok->Next;
  }
  return Tok;
}

// #if为空时，一直跳过到#endif
// 其中嵌套的#if语句也一起跳过
static Token *skipCondIncl(Token *Tok) {
  while (Tok->Kind != TK_EOF) {
    // 跳过#if语句
    if (isHash(Tok) && (equal(Tok->Next, "if") || equal(Tok->Next, "ifdef") ||
                        equal(Tok->Next, "ifndef"))) {
      Tok = skipCondIncl2(Tok->Next->Next);
      continue;
    }

    // #elif，#else和#endif
    if (isHash(Tok) && (equal(Tok->Next, "elif") || equal(Tok->Next, "else") ||
                        equal(Tok->Next, "endif")))
      break;
    Tok = Tok->Next;
  }
  return Tok;
}

// 将给定的字符串用双引号包住
static char *quoteString(char *Str) {
  // 两个引号，一个\0
  int BufSize = 3;
  // 如果有 \ 或 " 那么需要多留一个位置，存储转义用的 \ 符号
  for (int I = 0; Str[I]; I++) {
    if (Str[I] == '\\' || Str[I] == '"')
      BufSize++;
    BufSize++;
  }

  // 分配相应的空间
  char *Buf = calloc(1, BufSize);

  char *P = Buf;
  // 开头的"
  *P++ = '"';
  for (int I = 0; Str[I]; I++) {
    if (Str[I] == '\\' || Str[I] == '"')
      // 加上转义用的 \ 符号
      *P++ = '\\';
    *P++ = Str[I];
  }
  // 结尾的"\0
  *P++ = '"';
  *P++ = '\0';
  return Buf;
}

// 构建一个新的字符串的终结符
static Token *newStrToken(char *Str, Token *Tmpl) {
  // 将字符串加上双引号
  char *Buf = quoteString(Str);
  // 将字符串和相应的宏名称传入词法分析，去进行解析
  return tokenize(newFile(Tmpl->File->Name, Tmpl->File->FileNo, Buf));
}

static Token *copyLine(Token **Rest, Token *Tok) {
  Token head = {};
  Token *Cur = &head;

  // 遍历复制终结符
  for (; !Tok->AtBOL; Tok = Tok->Next)
    Cur = Cur->Next = copyToken(Tok);

  // 以EOF终结符结尾
  Cur->Next = newEOF(Tok);
  *Rest = Tok;
  return head.Next;
}

// 构造数字终结符
static Token *newNumToken(int Val, Token *Tmpl) {
  char *Buf = format("%d\n", Val);
  return tokenize(newFile(Tmpl->File->Name, Tmpl->File->FileNo, Buf));
}

// 读取常量表达式
static Token *readConstExpr(Token **Rest, Token *Tok) {
  // 复制当前行
  Tok = copyLine(Rest, Tok);

  Token Head = {};
  Token *Cur = &Head;

  // 遍历终结符
  while (Tok->Kind != TK_EOF) {
    // "defined(foo)" 或 "defined foo"如果存在foo为1否则为0
    if (equal(Tok, "defined")) {
      Token *Start = Tok;
      // 消耗掉(
      bool HasParen = consume(&Tok, Tok->Next, "(");

      if (Tok->Kind != TK_IDENT)
        errorTok(Start, "macro name must be an identifier");
      // 查找宏
      Macro *M = findMacro(Tok);
      Tok = Tok->Next;

      // 对应着的)
      if (HasParen)
        Tok = skip(Tok, ")");

      // 构造一个相应的数字终结符
      Cur = Cur->Next = newNumToken(M ? 1 : 0, Start);
      continue;
    }

    // 将剩余的终结符存入链表
    Cur = Cur->Next = Tok;
    // 终结符前进
    Tok = Tok->Next;
  }

  // 将剩余的终结符存入链表
  Cur->Next = Tok;
  return Head.Next;
}

// 读取并计算常量表达式
static long evalConstExpr(Token **Rest, Token *Tok) {
  Token *Start = Tok;
  // 解析#if后的常量表达式
  Token *Expr = readConstExpr(Rest, Tok->Next);
  // 对于宏变量进行解析
  Expr = preprocess2(Expr);

  // 空表达式报错
  if (Expr->Kind == TK_EOF)
    errorTok(Start, "no expression");

  // 在计算常量表达式前，将遗留的标识符替换为0
  for (Token *T = Expr; T->Kind != TK_EOF; T = T->Next) {
    if (T->Kind == TK_IDENT) {
      Token *Next = T->Next;
      *T = *newNumToken(0, T);
      T->Next = Next;
    }
  }

  // 转换预处理数值到正常数值
  convertPPTokens(Expr);

  // 计算常量表达式的值
  Token *Rest2;
  long Val = constExpr(&Rest2, Expr);
  // 计算后还有多余的终结符，则报错
  if (Rest2->Kind != TK_EOF)
    errorTok(Rest2, "extra token");
  // 返回计算的值
  return Val;
}

// 压入#if栈中
static CondIncl *pushCondIncl(Token *Tok, bool Included) {
  CondIncl *CI = calloc(1, sizeof(CondIncl));
  CI->Next = CondIncls;
  CI->Ctx = IN_THEN;
  CI->Tok = Tok;
  CI->Included = Included;
  CondIncls = CI;
  return CI;
}

// 查找相应的宏变量
static Macro *findMacro(Token *Tok) {
  // 如果不是标识符，直接报错
  if (Tok->Kind != TK_IDENT)
    return NULL;

  // 如果匹配则返回相应的宏变量
  return hashmapGet2(&Macros, Tok->Loc, Tok->Len);
}

// 新增宏变量，压入宏变量栈中
static Macro *addMacro(char *Name, bool IsObjlike, Token *Body) {
  Macro *M = calloc(1, sizeof(Macro));
  M->Name = Name;
  M->IsObjlike = IsObjlike;
  M->Body = Body;
  // 插入宏变量
  hashmapPut(&Macros, Name, M);
  return M;
}

static MacroParam *readMacroParams(Token **Rest, Token *Tok,
                                   char **VaArgsName) {
  MacroParam Head = {};
  MacroParam *Cur = &Head;

  while (!equal(Tok, ")")) {
    if (Cur != &Head)
      Tok = skip(Tok, ",");

    // 处理可变参数
    if (equal(Tok, "...")) {
      *VaArgsName = "__VA_ARGS__";
      // "..."应为最后一个参数
      *Rest = skip(Tok->Next, ")");
      return Head.Next;
    }

    // 如果不是标识符报错
    if (Tok->Kind != TK_IDENT)
      errorTok(Tok, "expected an identifier");

    // 处理GNU风格的可变参数
    if (equal(Tok->Next, "...")) {
      // 设置参数的名称
      *VaArgsName = strndup(Tok->Loc, Tok->Len);
      // "..."应为最后一个参数
      *Rest = skip(Tok->Next->Next, ")");
      return Head.Next;
    }

    // 开辟空间
    MacroParam *M = calloc(1, sizeof(MacroParam));
    // 设置名称
    M->Name = strndup(Tok->Loc, Tok->Len);
    // 加入链表
    Cur = Cur->Next = M;
    Tok = Tok->Next;
  }
  *Rest = Tok->Next;
  return Head.Next;
}

// 读取宏定义
static void readMacroDefinition(Token **Rest, Token *Tok) {
  // 如果匹配到的不是标识符就报错
  if (Tok->Kind != TK_IDENT)
    errorTok(Tok, "macro name must be an identifier");
  // 复制名字
  char *Name = strndup(Tok->Loc, Tok->Len);
  Tok = Tok->Next;

  // 判断是宏变量还是宏函数，括号前没有空格则为宏函数
  if (!Tok->HasSpace && equal(Tok, "(")) {
    // 构造形参
    char *VaArgsName = NULL;
    MacroParam *Params = readMacroParams(&Tok, Tok->Next, &VaArgsName);

    // 增加宏函数
    Macro *M = addMacro(Name, false, copyLine(Rest, Tok));
    M->Params = Params;
    // 传递是否为可变参数的值
    M->VaArgsName = VaArgsName;
  } else {
    // 增加宏变量
    addMacro(Name, true, copyLine(Rest, Tok));
  }
}

// 读取单个宏实参
static MacroArg *readMacroArgOne(Token **Rest, Token *Tok, bool ReadRest) {
  Token Head = {};
  Token *Cur = &Head;
  int Level = 0;

  // 读取实参对应的终结符
  while (true) {
    // 终止条件
    if (Level == 0 && equal(Tok, ")"))
      break;
    // 在这里ReadRest为真时，则可以读取多个终结符
    if (Level == 0 && !ReadRest && equal(Tok, ","))
      break;

    if (Tok->Kind == TK_EOF)
      errorTok(Tok, "premature end of input");

    if (equal(Tok, "("))
      Level++;
    else if (equal(Tok, ")"))
      Level--;

    // 将标识符加入到链表中
    Cur = Cur->Next = copyToken(Tok);
    Tok = Tok->Next;
  }

  // 加入EOF终结
  Cur->Next = newEOF(Tok);

  MacroArg *Arg = calloc(1, sizeof(MacroArg));
  // 赋值实参的终结符链表
  Arg->Tok = Head.Next;
  *Rest = Tok;
  return Arg;
}

// 读取宏实参
static MacroArg *readMacroArgs(Token **Rest, Token *Tok, MacroParam *Params,
                               char *VaArgsName) {
  Token *Start = Tok;
  Tok = Tok->Next->Next;

  MacroArg Head = {};
  MacroArg *Cur = &Head;

  // 遍历形参，然后对应着加入到实参链表中
  MacroParam *PP = Params;
  for (; PP; PP = PP->Next) {
    if (Cur != &Head)
      Tok = skip(Tok, ",");
    // 读取单个实参
    Cur = Cur->Next = readMacroArgOne(&Tok, Tok, false);
    // 设置为对应的形参名称
    Cur->Name = PP->Name;
  }

  // 剩余未匹配的实参，如果为可变参数
  if (VaArgsName) {
    MacroArg *Arg;
    // 剩余实参为空
    if (equal(Tok, ")")) {
      Arg = calloc(1, sizeof(MacroArg));
      Arg->Tok = newEOF(Tok);
    } else {
      // 处理对应可变参数的实参
      // 跳过","
      if (PP != Params)
        Tok = skip(Tok, ",");
      Arg = readMacroArgOne(&Tok, Tok, true);
    }
    Arg->Name = VaArgsName;
    Arg->IsVaArg = true;
    Cur = Cur->Next = Arg;
  }
  // 如果形参没有遍历完，就报错
  else if (PP) {
    errorTok(Start, "too many arguments");
  }

  skip(Tok, ")");
  // 这里返回右括号
  *Rest = Tok;
  return Head.Next;
}

// 遍历查找实参
static MacroArg *findArg(MacroArg *Args, Token *Tok) {
  for (MacroArg *AP = Args; AP; AP = AP->Next)
    if (Tok->Len == strlen(AP->Name) && !strncmp(Tok->Loc, AP->Name, Tok->Len))
      return AP;
  return NULL;
}

// 将终结符链表中的所有终结符都连接起来，然后返回一个新的字符串
static char *joinTokens(Token *Tok, Token *End) {
  // 计算最终终结符的长度
  int Len = 1;
  for (Token *T = Tok; T != End && T->Kind != TK_EOF; T = T->Next) {
    // 非第一个，且前面有空格，计数加一
    if (T != Tok && T->HasSpace)
      Len++;
    // 加上终结符的长度
    Len += T->Len;
  }

  // 开辟相应的空间
  char *Buf = calloc(1, Len);

  // 复制终结符的文本
  int Pos = 0;
  for (Token *T = Tok; T != End && T->Kind != TK_EOF; T = T->Next) {
    // 非第一个，且前面有空格，设为空格
    if (T != Tok && T->HasSpace)
      Buf[Pos++] = ' ';
    // 拷贝相应的内容
    strncpy(Buf + Pos, T->Loc, T->Len);
    Pos += T->Len;
  }
  // 以'\0'结尾
  Buf[Pos] = '\0';
  return Buf;
}

// 将所有实参中的终结符连接起来，然后返回一个字符串的终结符
static Token *stringize(Token *Hash, Token *Arg) {
  // 创建一个字符串的终结符
  char *S = joinTokens(Arg, NULL);
  // 我们需要一个位置用来报错，所以使用了宏的名字
  return newStrToken(S, Hash);
}

// 拼接两个终结符构建一个新的终结符
static Token *paste(Token *LHS, Token *RHS) {
  // 合并两个终结符
  char *Buf = format("%.*s%.*s", LHS->Len, LHS->Loc, RHS->Len, RHS->Loc);

  // 词法解析生成的字符串，转换为相应的终结符
  Token *Tok = tokenize(newFile(LHS->File->Name, LHS->File->FileNo, Buf));
  if (Tok->Next->Kind != TK_EOF)
    errorTok(LHS, "pasting forms '%s', an invalid token", Buf);
  return Tok;
}

// 判断是否具有预处理的可变参数
static bool hasVarArgs(MacroArg *Args) {
  for (MacroArg *AP = Args; AP; AP = AP->Next)
    // 判断是否存在__VA_ARGS__
    if (!strcmp(AP->Name, "__VA_ARGS__"))
      // 判断可变参数是否为空
      return AP->Tok->Kind != TK_EOF;
  return false;
}

// 将宏函数形参替换为指定的实参
static Token *subst(Token *Tok, MacroArg *Args) {
  Token Head = {};
  Token *Cur = &Head;

  // 遍历将形参替换为实参的终结符链表
  while (Tok->Kind != TK_EOF) {
    // #宏实参 会被替换为相应的字符串
    if (equal(Tok, "#")) {
      // 查找实参
      MacroArg *Arg = findArg(Args, Tok->Next);
      if (!Arg)
        errorTok(Tok->Next, "'#' is not followed by a macro parameter");
      // 将实参的终结符字符化
      Cur = Cur->Next = stringize(Tok, Arg->Tok);
      Tok = Tok->Next->Next;
      continue;
    }

    // 若__VA_ARGS__为空，  则 `,##__VA_ARGS__` 展开为空
    // 若__VA_ARGS__不为空，则 `,##__VA_ARGS__` 展开为 `,` 和 __VA_ARGS__
    if (equal(Tok, ",") && equal(Tok->Next, "##")) {
      // 匹配__VA_ARGS__
      MacroArg *Arg = findArg(Args, Tok->Next->Next);
      if (Arg && Arg->IsVaArg) {
        if (Arg->Tok->Kind == TK_EOF) {
          // 如果__VA_ARGS__为空
          Tok = Tok->Next->Next->Next;
        } else {
          // 若__VA_ARGS__不为空，则展开
          Cur = Cur->Next = copyToken(Tok);
          Tok = Tok->Next->Next;
        }
        continue;
      }
    }

    // ##及右边，用于连接终结符
    if (equal(Tok, "##")) {
      if (Cur == &Head)
        errorTok(Tok, "'##' cannot appear at start of macro expansion");

      if (Tok->Next->Kind == TK_EOF)
        errorTok(Tok, "'##' cannot appear at end of macro expansion");

      // 查找下一个终结符
      // 如果是（##右边）宏实参
      MacroArg *Arg = findArg(Args, Tok->Next);
      if (Arg) {
        if (Arg->Tok->Kind != TK_EOF) {
          // 拼接当前终结符和（##右边）实参
          *Cur = *paste(Cur, Arg->Tok);
          // 将（##右边）实参未参与拼接的剩余部分加入到链表当中
          for (Token *T = Arg->Tok->Next; T->Kind != TK_EOF; T = T->Next)
            Cur = Cur->Next = copyToken(T);
        }
        // 指向（##右边）实参的下一个
        Tok = Tok->Next->Next;
        continue;
      }

      // 如果不是（##右边）宏实参
      // 直接拼接
      *Cur = *paste(Cur, Tok->Next);
      Tok = Tok->Next->Next;
      continue;
    }

    // 查找实参
    MacroArg *Arg = findArg(Args, Tok);

    // 左边及##，用于连接终结符
    if (Arg && equal(Tok->Next, "##")) {
      // 读取##右边的终结符
      Token *RHS = Tok->Next->Next;

      // 实参（##左边）为空的情况
      if (Arg->Tok->Kind == TK_EOF) {
        // 查找（##右边）实参
        MacroArg *Arg2 = findArg(Args, RHS);
        if (Arg2) {
          // 如果是实参，那么逐个遍历实参对应的终结符
          for (Token *T = Arg2->Tok; T->Kind != TK_EOF; T = T->Next)
            Cur = Cur->Next = copyToken(T);
        } else {
          // 如果不是实参，那么直接复制进链表
          Cur = Cur->Next = copyToken(RHS);
        }
        // 指向（##右边）实参的下一个
        Tok = RHS->Next;
        continue;
      }

      // 实参（##左边）不为空的情况
      for (Token *T = Arg->Tok; T->Kind != TK_EOF; T = T->Next)
        // 复制此终结符
        Cur = Cur->Next = copyToken(T);
      Tok = Tok->Next;
      continue;
    }

    // 如果__VA_ARGS__为空，则__VA_OPT__(x)也为空
    // 如果__VA_ARGS__不为空，则__VA_OPT__(x)展开为x
    if (equal(Tok, "__VA_OPT__") && equal(Tok->Next, "(")) {
      // 读取__VA_OPT__(x)的参数x
      MacroArg *Arg = readMacroArgOne(&Tok, Tok->Next->Next, true);
      // 如果预处理的可变参数不为空
      if (hasVarArgs(Args))
        // 则__VA_OPT__(x)展开为x
        for (Token *T = Arg->Tok; T->Kind != TK_EOF; T = T->Next)
          Cur = Cur->Next = T;
      Tok = skip(Tok, ")");
      continue;
    }

    // 处理宏终结符，宏实参在被替换之前已经被展开了
    if (Arg) {
      // 解析实参对应的终结符链表
      Token *T = preprocess2(Arg->Tok);
      // 传递 是否为行首 和 前面是否有空格 的信息
      T->AtBOL = Tok->AtBOL;
      T->HasSpace = Tok->HasSpace;
      for (; T->Kind != TK_EOF; T = T->Next)
        Cur = Cur->Next = copyToken(T);
      Tok = Tok->Next;
      continue;
    }

    // 处理非宏的终结符
    Cur = Cur->Next = copyToken(Tok);
    Tok = Tok->Next;
    continue;
  }

  Cur->Next = Tok;
  // 将宏链表返回
  return Head.Next;
}

// 如果是宏变量并展开成功，返回真
static bool expandMacro(Token **Rest, Token *Tok) {
  // 判断是否处于隐藏集之中
  if (hidesetContains(Tok->Hideset, Tok->Loc, Tok->Len))
    return false;

  // 判断是否为宏变量
  Macro *M = findMacro(Tok);
  if (!M)
    return false;

  // 如果宏设置了相应的处理函数，例如__LINE__
  if (M->Handler) {
    // 就使用相应的处理函数解析当前的宏
    *Rest = M->Handler(Tok);
    // 紧接着处理后续终结符
    (*Rest)->Next = Tok->Next;
    return true;
  }

  // 为宏变量时
  if (M->IsObjlike) {
    // 展开过一次的宏变量，就加入到隐藏集当中
    Hideset *Hs = hidesetUnion(Tok->Hideset, newHideset(M->Name));
    // 处理此宏变量之后，传递隐藏集给之后的终结符
    Token *Body = addHideset(M->Body, Hs);
    // 记录展开前的宏
    for (Token *T = Body; T->Kind != TK_EOF; T = T->Next)
      T->Origin = Tok;
    *Rest = append(Body, Tok->Next);
    // 传递 是否为行首 和 前面是否有空格 的信息
    (*Rest)->AtBOL = Tok->AtBOL;
    (*Rest)->HasSpace = Tok->HasSpace;
    return true;
  }

  // 如果宏函数后面没有参数列表，就处理为正常的标识符
  if (!equal(Tok->Next, "("))
    return false;

  // 处理宏函数，并连接到Tok之后
  // 读取宏函数实参，这里是宏函数的隐藏集
  Token *MacroToken = Tok;
  MacroArg *Args = readMacroArgs(&Tok, Tok, M->Params, M->VaArgsName);
  // 这里返回的是右括号，这里是宏参数的隐藏集
  Token *RParen = Tok;
  // 宏函数间可能具有不同的隐藏集，新的终结符就不知道应该使用哪个隐藏集。
  // 我们取宏终结符和右括号的交集，并将其用作新的隐藏集。
  Hideset *Hs = hidesetIntersection(MacroToken->Hideset, RParen->Hideset);

  // 将当前函数名加入隐藏集
  Hs = hidesetUnion(Hs, newHideset(M->Name));
  // 替换宏函数内的形参为实参
  Token *Body = subst(M->Body, Args);
  // 为宏函数内部设置隐藏集
  Body = addHideset(Body, Hs);
  // 记录展开前的宏函数
  for (Token *T = Body; T->Kind != TK_EOF; T = T->Next)
    T->Origin = MacroToken;
  // 将设置好的宏函数内部连接到终结符链表中
  *Rest = append(Body, Tok->Next);
  // 传递 是否为行首 和 前面是否有空格 的信息
  (*Rest)->AtBOL = MacroToken->AtBOL;
  (*Rest)->HasSpace = MacroToken->HasSpace;
  return true;
}

// 搜索引入路径区
char *searchIncludePaths(char *Filename) {
  // 以"/"开头的视为绝对路径
  if (Filename[0] == '/')
    return Filename;

  // 文件搜索的缓存，被搜索的文件都会存入这里，方便快速查找
  static HashMap Cache;
  char *Cached = hashmapGet(&Cache, Filename);
  if (Cached)
    return Cached;

  // 从引入路径区查找文件
  for (int I = 0; I < IncludePaths.Len; I++) {
    char *Path = format("%s/%s", IncludePaths.Data[I], Filename);
    if (!fileExists(Path))
      continue;
    // 将搜索到的结果顺带存入文件搜索的缓存
    hashmapPut(&Cache, Filename, Path);
    // #include_next应从#include未遍历的路径开始
    IncludeNextIdx = I + 1;
    return Path;
  }
  return NULL;
}

// 搜索 #include_next 的文件路径
static char *searchIncludeNext(char *Filename) {
  // #include_next 从 IncludeNextIdx 开始遍历
  for (; IncludeNextIdx < IncludePaths.Len; IncludeNextIdx++) {
    // 拼接路径和文件名
    char *Path = format("%s/%s", IncludePaths.Data[IncludeNextIdx], Filename);
    // 如果文件存在
    if (fileExists(Path))
      // 返回该路径
      return Path;
  }
  // 否则返回空
  return NULL;
}

// 读取#include参数
static char *readIncludeFilename(Token **Rest, Token *Tok, bool *IsDquote) {
  // 匹配样式1: #include "foo.h"
  if (Tok->Kind == TK_STR) {
    // #include 的双引号文件名是一种特殊的终结符
    // 不能转义其中的任何转义字符。
    // 例如，“C:\foo”中的“\f”不是换页符，而是\和f。
    // 所以此处不使用token->str。
    *IsDquote = true;
    *Rest = skipLine(Tok->Next);
    return strndup(Tok->Loc + 1, Tok->Len - 2);
  }

  // 匹配样式2: #include <foo.h>
  if (equal(Tok, "<")) {
    // 从"<"和">"间构建文件名.
    Token *Start = Tok;

    // 查找">"
    for (; !equal(Tok, ">"); Tok = Tok->Next)
      if (Tok->AtBOL || Tok->Kind == TK_EOF)
        errorTok(Tok, "expected '>'");

    // 没有引号
    *IsDquote = false;
    // 跳到行首
    *Rest = skipLine(Tok->Next);
    // "<"到">"前拼接为字符串
    return joinTokens(Start->Next, Tok);
  }

  // 匹配样式3: #include FOO
  if (Tok->Kind == TK_IDENT) {
    // FOO 必须宏展开为单个字符串标记或 "<" ... ">" 序列
    Token *Tok2 = preprocess2(copyLine(Rest, Tok));
    // 然后读取引入的文件名
    return readIncludeFilename(&Tok2, Tok2, IsDquote);
  }

  errorTok(Tok, "expected a filename");
  return NULL;
}

// 检测类似于下述的 引用防护（Include Guard） 优化
//
//   #ifndef FOO_H
//   #define FOO_H
//   ...
//   #endif
static char *detectIncludeGuard(Token *Tok) {
  // 匹配 #ifndef
  if (!isHash(Tok) || !equal(Tok->Next, "ifndef"))
    return NULL;
  Tok = Tok->Next->Next;

  // 判断 FOO_H 是否为标识符
  if (Tok->Kind != TK_IDENT)
    return NULL;

  // 复制 FOO_H 作为宏名称
  char *Macro = strndup(Tok->Loc, Tok->Len);
  Tok = Tok->Next;

  // 匹配 #define FOO_H
  if (!isHash(Tok) || !equal(Tok->Next, "define") ||
      !equal(Tok->Next->Next, Macro))
    return NULL;

  // 读取到 文件结束
  while (Tok->Kind != TK_EOF) {
    // 如果不是 宏 相关的，则前进Tok
    if (!isHash(Tok)) {
      Tok = Tok->Next;
      continue;
    }

    // 匹配 #endif 以及 TK_EOF ，之后返回宏名称
    if (equal(Tok->Next, "endif") && Tok->Next->Next->Kind == TK_EOF)
      return Macro;

    // 匹配 #if 或 #ifdef 或 #ifndef，跳过其中不满足 宏条件 的语句
    if (equal(Tok, "if") || equal(Tok, "ifdef") || equal(Tok, "ifndef"))
      Tok = skipCondIncl(Tok->Next);
    else
      Tok = Tok->Next;
  }
  return NULL;
}

// 引入文件
static Token *includeFile(Token *Tok, char *Path, Token *FilenameTok) {
  // 如果含有 "#pragma once"，已经被读取过，那么就跳过文件
  if (hashmapGet(&PragmaOnce, Path))
    return Tok;

  // 如果引用防护的文件，已经被读取过，那么就跳过文件
  static HashMap IncludeGuards;
  char *GuardName = hashmapGet(&IncludeGuards, Path);
  if (GuardName && hashmapGet(&Macros, GuardName))
    return Tok;

  // 词法分析文件
  Token *Tok2 = tokenizeFile(Path);
  if (!Tok2)
    errorTok(FilenameTok, "%s: cannot open file: %s", Path, strerror(errno));

  // 判断文件是否使用了 引用防护
  GuardName = detectIncludeGuard(Tok2);
  if (GuardName)
    hashmapPut(&IncludeGuards, Path, GuardName);

  return append(Tok2, Tok);
}

// 读取#line的参数
static void readLineMarker(Token **Rest, Token *Tok) {
  Token *Start = Tok;
  // 对参数进行解析
  Tok = preprocess(copyLine(Rest, Tok));

  // 标记的行号
  if (Tok->Kind != TK_NUM || Tok->Ty->Kind != TY_INT)
    errorTok(Tok, "invalid line marker");
  // 获取行标记的行号与原先的行号相减，设定二者间的差值
  Start->File->LineDelta = Tok->Val - Start->LineNo;

  Tok = Tok->Next;
  // 处理无标记的文件名的情况
  if (Tok->Kind == TK_EOF)
    return;

  if (Tok->Kind != TK_STR)
    errorTok(Tok, "filename expected");
  // 处理标记的文件名
  Start->File->DisplayName = Tok->Str;
}

// 遍历终结符，处理宏和指示
static Token *preprocess2(Token *Tok) {
  Token Head = {};
  Token *Cur = &Head;

  // 遍历终结符
  while (Tok->Kind != TK_EOF) {
    // 如果是个宏变量，那么就展开
    if (expandMacro(&Tok, Tok))
      continue;

    // 如果不是#号开头则前进
    if (!isHash(Tok)) {
      // 设定标记的行号差值
      Tok->LineDelta = Tok->File->LineDelta;
      // 设定标记的文件名
      Tok->Filename = Tok->File->DisplayName;
      Cur->Next = Tok;
      Cur = Cur->Next;
      Tok = Tok->Next;
      continue;
    }

    // 记录开始的终结符
    Token *Start = Tok;
    // 下一终结符
    Tok = Tok->Next;

    // 匹配#include
    if (equal(Tok, "include")) {
      // 是否有双引号
      bool IsDquote;
      // 获取引入的文件名
      char *Filename = readIncludeFilename(&Tok, Tok->Next, &IsDquote);

      // 不以"/"开头的视为相对路径
/*
      if (Filename[0] != '/' && IsDquote) {
        // 以当前文件所在目录为起点
        // 路径为：终结符文件名所在的文件夹路径/当前终结符名
        char *Path =
            format("%s/%s", dirname(strdup(Start->File->Name)), Filename);
        // 路径存在时引入文件
        if (fileExists(Path)) {
          Tok = includeFile(Tok, Path, Start->Next->Next);
          continue;
        }
      }
*/

      // 直接引入文件，搜索引入路径
      char *Path = searchIncludePaths(Filename);
      Tok = includeFile(Tok, Path ? Path : Filename, Start->Next->Next);
      continue;
    }

    // 匹配#include_include
    if (equal(Tok, "include_next")) {
      bool Ignore;
      // 读取引入的文件名
      char *Filename = readIncludeFilename(&Tok, Tok->Next, &Ignore);
      // 查找文件名的路径
      char *Path = searchIncludeNext(Filename);
      // 引入该路径（若存在时）或文件
      Tok = includeFile(Tok, Path ? Path : Filename, Start->Next->Next);
      continue;
    }

    // 匹配#define
    if (equal(Tok, "define")) {
      // 读取宏定义
      readMacroDefinition(&Tok, Tok->Next);
      continue;
    }

    // 匹配#undef
    if (equal(Tok, "undef")) {
      Tok = Tok->Next;
      // 如果匹配到的不是标识符就报错
      if (Tok->Kind != TK_IDENT)
        errorTok(Tok, "macro name must be an identifier");
      // 将宏变量设为删除状态
      undefMacro(strndup(Tok->Loc, Tok->Len));
      // 跳到行首
      Tok = skipLine(Tok->Next);
      continue;
    }

    // 匹配#if
    if (equal(Tok, "if")) {
      // 计算常量表达式
      long Val = evalConstExpr(&Tok, Tok);
      // 将Tok压入#if栈中
      pushCondIncl(Start, Val);
      // 处理#if后值为假的情况，全部跳过
      if (!Val)
        Tok = skipCondIncl(Tok);
      continue;
    }

    // 匹配#ifdef
    if (equal(Tok, "ifdef")) {
      // 查找宏变量
      bool Defined = findMacro(Tok->Next);
      // 压入#if栈
      pushCondIncl(Tok, Defined);
      // 跳到行首
      Tok = skipLine(Tok->Next->Next);
      // 如果没被定义，那么应该跳过这个部分
      if (!Defined)
        Tok = skipCondIncl(Tok);
      continue;
    }

    // 匹配#ifndef
    if (equal(Tok, "ifndef")) {
      // 查找宏变量
      bool Defined = findMacro(Tok->Next);
      // 压入#if栈，此时不存在时则设为真
      pushCondIncl(Tok, !Defined);
      // 跳到行首
      Tok = skipLine(Tok->Next->Next);
      // 如果被定义了，那么应该跳过这个部分
      if (Defined)
        Tok = skipCondIncl(Tok);
      continue;
    }

    // 匹配#elif
    if (equal(Tok, "elif")) {
      if (!CondIncls || CondIncls->Ctx == IN_ELSE)
        errorTok(Start, "stray #elif");
      CondIncls->Ctx = IN_ELIF;

      if (!CondIncls->Included && evalConstExpr(&Tok, Tok))
        // 处理之前的值都为假且当前#elif为真的情况
        CondIncls->Included = true;
      else
        // 否则其他的情况，全部跳过
        Tok = skipCondIncl(Tok);
      continue;
    }

    // 匹配#else
    if (equal(Tok, "else")) {
      if (!CondIncls || CondIncls->Ctx == IN_ELSE)
        errorTok(Start, "stray #else");
      CondIncls->Ctx = IN_ELSE;
      // 走到行首
      Tok = skipLine(Tok->Next);

      // 处理之前有值为真的情况，则#else全部跳过
      if (CondIncls->Included)
        Tok = skipCondIncl(Tok);
      continue;
    }

    // 匹配#endif
    if (equal(Tok, "endif")) {
      // 弹栈，失败报错
      if (!CondIncls)
        errorTok(Start, "stray #endif");
      CondIncls = CondIncls->Next;
      // 走到行首
      Tok = skipLine(Tok->Next);
      continue;
    }

    // 匹配#line
    if (equal(Tok, "line")) {
      // 进入到对行标记的读取
      readLineMarker(&Tok, Tok->Next);
      continue;
    }

    // 匹配#
    if (Tok->Kind == TK_PP_NUM) {
      // 进入到对行标记的读取
      readLineMarker(&Tok, Tok);
      continue;
    }

    // 匹配#pragma once
    if (equal(Tok, "pragma") && equal(Tok->Next, "once")) {
      // 存储含有#pragma once 的文件名
      hashmapPut(&PragmaOnce, Tok->File->Name, (void *)1);
      Tok = skipLine(Tok->Next->Next);
      continue;
    }

    // 匹配#pragma
    if (equal(Tok, "pragma")) {
      do {
        Tok = Tok->Next;
      } while (!Tok->AtBOL);
      continue;
    }

    // 匹配#error
    if (equal(Tok, "error"))
      errorTok(Tok, "error");

    // 支持空指示
    if (Tok->AtBOL)
      continue;

    errorTok(Tok, "invalid preprocessor directive");
  }

  Cur->Next = Tok;
  return Head.Next;
}

// 定义预定义的宏
void defineMacro(char *Name, char *Buf) {
  Token *Tok = tokenize(newFile("<built-in>", 1, Buf));
  addMacro(Name, true, Tok);
}

// 取消定义宏
void undefMacro(char *Name) {
  // 将宏变量设为删除状态
  hashmapDelete(&Macros, Name);
}

// 增加内建的宏和相应的宏处理函数
static Macro *addBuiltin(char *Name, macroHandlerFn *Fn) {
  // 增加宏
  Macro *M = addMacro(Name, true, NULL);
  // 设置相应的处理函数
  M->Handler = Fn;
  return M;
}

// 文件标号函数
static Token *fileMacro(Token *Tmpl) {
  // 如果存在原始的宏，则遍历后使用原始的宏
  while (Tmpl->Origin)
    Tmpl = Tmpl->Origin;
  // 根据原始宏的文件名构建字符串终结符
  return newStrToken(Tmpl->File->DisplayName, Tmpl);
}

// 行标号函数
static Token *lineMacro(Token *Tmpl) {
  // 如果存在原始的宏，则遍历后使用原始的宏
  while (Tmpl->Origin)
    Tmpl = Tmpl->Origin;
  // 根据原始的宏的行号构建数值终结符
  // 原有行号加上标记的行号差值，即为新行号
  int I = Tmpl->LineNo + Tmpl->File->LineDelta;
  return newNumToken(I, Tmpl);
}

// __COUNTER__被展开为从0开始的连续值
static Token *counterMacro(Token *Tmpl) {
  static int I = 0;
  return newNumToken(I++, Tmpl);
}

// 时间戳描述了当前文件的最后修改时间，示例为：
// "Fri Jul 24 01:32:50 2020"
static Token *timestampMacro(Token *Tmpl) {
  struct stat St;
  // 如果文件打开失败，则不显示具体时间
  if (stat(Tmpl->File->Name, &St) != 0)
    return newStrToken("??? ??? ?? ??:??:?? ????", Tmpl);

  char Buf[30];
  // 将文件最后修改时间写入Buf
  //ctime_r(&St.st_mtime, Buf);
  Buf[24] = '\0';
  return newStrToken(Buf, Tmpl);
}

// 主输入文件名
static Token *baseFileMacro(Token *Tmpl) {
  // 将输入文件的名称进行返回
  return newStrToken(BaseFile, Tmpl);
}

// 为__DATE__设置为当前日期，例如："May 17 2020"
static char *formatDate(struct tm *Tm) {
  static char Mon[][4] = {
      "Jan", "Feb", "Mar", "Apr", "May", "Jun",
      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
  };

  // 月，日，年
  return format("\"%s %2d %d\"", Mon[Tm->tm_mon], Tm->tm_mday,
                Tm->tm_year + 1900);
}

// 为__TIME__设置为当前时间，例如："10:23:45"
static char *formatTime(struct tm *Tm) {
  // 时，分，秒
  return format("\"%02d:%02d:%02d\"", Tm->tm_hour, Tm->tm_min, Tm->tm_sec);
}

// 初始化预定义的宏
void initMacros(void) {
  defineMacro("_LP64", "1");
  defineMacro("__C99_MACRO_WITH_VA_ARGS", "1");
  defineMacro("__ELF__", "1");
  defineMacro("__LP64__", "1");
  defineMacro("__SIZEOF_DOUBLE__", "8");
  defineMacro("__SIZEOF_FLOAT__", "4");
  defineMacro("__SIZEOF_INT__", "4");
  defineMacro("__SIZEOF_LONG_DOUBLE__", "8");
  defineMacro("__SIZEOF_LONG_LONG__", "8");
  defineMacro("__SIZEOF_LONG__", "8");
  defineMacro("__SIZEOF_POINTER__", "8");
  defineMacro("__SIZEOF_PTRDIFF_T__", "8");
  defineMacro("__SIZEOF_SHORT__", "2");
  defineMacro("__SIZEOF_SIZE_T__", "8");
  defineMacro("__SIZE_TYPE__", "unsigned long");
  defineMacro("__STDC_HOSTED__", "1");
  defineMacro("__STDC_NO_COMPLEX__", "1");
  defineMacro("__STDC_UTF_16__", "1");
  defineMacro("__STDC_UTF_32__", "1");
  defineMacro("__STDC_VERSION__", "201112L");
  defineMacro("__STDC__", "1");
  defineMacro("__USER_LABEL_PREFIX__", "");
  defineMacro("__alignof__", "_Alignof");
  defineMacro("__rvcc__", "1");
  defineMacro("__const__", "const");
  defineMacro("__gnu_linux__", "1");
  defineMacro("__inline__", "inline");
  defineMacro("__linux", "1");
  defineMacro("__linux__", "1");
  defineMacro("__signed__", "signed");
  defineMacro("__typeof__", "typeof");
  defineMacro("__unix", "1");
  defineMacro("__unix__", "1");
  defineMacro("__volatile__", "volatile");
  defineMacro("linux", "1");
  defineMacro("unix", "1");
  defineMacro("__riscv_mul", "1");
  defineMacro("__riscv_muldiv", "1");
  defineMacro("__riscv_fdiv", "1");
  defineMacro("__riscv_xlen", "64");
  defineMacro("__riscv", "1");
  defineMacro("__riscv64", "1");
  defineMacro("__riscv_div", "1");
  defineMacro("__riscv_float_abi_double", "1");
  defineMacro("__riscv_flen", "64");

  addBuiltin("__FILE__", fileMacro);
  addBuiltin("__LINE__", lineMacro);
  // 支持__COUNTER__
  addBuiltin("__COUNTER__", counterMacro);
  // 支持__TIMESTAMP__
  addBuiltin("__TIMESTAMP__", timestampMacro);
  // 支持__BASE_FILE__
  addBuiltin("__BASE_FILE__", baseFileMacro);

  // 支持__DATE__和__TIME__
  time_t Now = time(NULL);
  // 获取当前的本地时区的时间
  struct tm *Tm = localtime(&Now);
  // 定义__DATE__为当前日期
  formatDate(Tm);
  defineMacro("__DATE__", formatDate(Tm));
  // 定义__DATE__为当前时间
  defineMacro("__TIME__", formatTime(Tm));
}

// 字符串类型
typedef enum {
  STR_NONE,
  STR_UTF8,
  STR_UTF16,
  STR_UTF32,
  STR_WIDE,
} StringKind;

// 获取字符串类型
static StringKind getStringKind(Token *Tok) {
  if (!strcmp(Tok->Loc, "u8"))
    return STR_UTF8;

  switch (Tok->Loc[0]) {
  case '"':
    return STR_NONE;
  case 'u':
    return STR_UTF16;
  case 'U':
    return STR_UTF32;
  case 'L':
    return STR_WIDE;
  default:
    unreachable();
    return -1;
  }
}

// 拼接相邻的字符串
static void joinAdjacentStringLiterals(Token *Tok) {
  // 第一遍：如果常规字符串字面量与宽相邻字符串字面量相邻，
  // 常规字符串字面量在连接之前转换为宽类型。
  for (Token *Tok1 = Tok; Tok1->Kind != TK_EOF;) {
    // 判断相邻两个终结符是否都为字符串
    if (Tok1->Kind != TK_STR || Tok1->Next->Kind != TK_STR) {
      Tok1 = Tok1->Next;
      continue;
    }

    // 获取第一个字符串的类型
    StringKind Kind = getStringKind(Tok1);
    Type *BaseTy = Tok1->Ty->Base;

    // 遍历第二个及后面所有字符串
    for (Token *T = Tok1->Next; T->Kind == TK_STR; T = T->Next) {
      // 获取字符串的类型
      StringKind K = getStringKind(T);
      if (Kind == STR_NONE) {
        // 如果之前字符串没有类型，那么就设置为当前类型
        Kind = K;
        BaseTy = T->Ty->Base;
      } else if (K != STR_NONE && Kind != K) {
        // 如果之前字符串有类型，且和现在类型冲突
        errorTok(T,
                 "unsupported non-standard concatenation of string literals");
      }
    }

    // 如果字符串的类型不是char
    if (BaseTy->Size > 1)
      for (Token *T = Tok1; T->Kind == TK_STR; T = T->Next)
        // 如果当前字符串类型为char
        if (T->Ty->Base->Size == 1)
          // 则设置为连接后的字符串的类型
          *T = *tokenizeStringLiteral(T, BaseTy);

    // 跳过遍历过的字符串
    while (Tok1->Kind == TK_STR)
      Tok1 = Tok1->Next;
  }

  // 第二遍：拼接相邻的字符串字面量
  // 遍历直到终止符
  for (Token *Tok1 = Tok; Tok1->Kind != TK_EOF;) {
    // 判断是否为两个字符串终结符在一起
    if (Tok1->Kind != TK_STR || Tok1->Next->Kind != TK_STR) {
      Tok1 = Tok1->Next;
      continue;
    }

    // 指向相邻字符串的下一个
    Token *Tok2 = Tok1->Next;
    while (Tok2->Kind == TK_STR)
      Tok2 = Tok2->Next;

    // 遍历记录所有拼接字符串的长度
    int Len = Tok1->Ty->ArrayLen;
    for (Token *T = Tok1->Next; T != Tok2; T = T->Next)
      // 去除'\0'后的长度
      Len = Len + T->Ty->ArrayLen - 1;

    // 开辟Len个字符长度的空间
    char *Buf = calloc(Tok1->Ty->Base->Size, Len);

    // 遍历写入每个字符串的内容
    int I = 0;
    for (Token *T = Tok1; T != Tok2; T = T->Next) {
      memcpy(Buf + I, T->Str, T->Ty->Size);
      // 去除'\0'后的长度
      I = I + T->Ty->Size - T->Ty->Base->Size;
    }

    // 为新建的字符串构建终结符
    *Tok1 = *copyToken(Tok1);
    Tok1->Ty = arrayOf(Tok1->Ty->Base, Len);
    Tok1->Str = Buf;
    // 指向下一个终结符Tok2
    Tok1->Next = Tok2;
    Tok1 = Tok2;
  }
}

// 预处理器入口函数
Token *preprocess(Token *Tok) {
  // 处理宏和指示
  Tok = preprocess2(Tok);
  // 此时#if应该都被清空了，否则报错
  if (CondIncls)
    errorTok(CondIncls->Tok, "unterminated conditional directive");
  // 将所有关键字的终结符，都标记为KEYWORD
  convertPPTokens(Tok);
  // 拼接相邻的字符串字面量
  joinAdjacentStringLiterals(Tok);

  // 原有行号加上标记的行号差值，即为新行号
  for (Token *T = Tok; T; T = T->Next)
    T->LineNo += T->LineDelta;
  return Tok;
}

// 压入字符串数组
void strArrayPush(StringArray *Arr, char *S) {
  // 如果为空，没有数据
  if (!Arr->Data) {
    // 开辟8个字符串的位置
    Arr->Data = calloc(8, sizeof(char *));
    // 将容量设为8
    Arr->Capacity = 8;
  }

  // 如果存满了，开辟一倍的空间
  if (Arr->Capacity == Arr->Len) {
    // 再开辟当前容量一倍的空间
    Arr->Data = realloc(Arr->Data, sizeof(char *) * Arr->Capacity * 2);
    // 容量翻倍
    Arr->Capacity *= 2;
    // 清空新开辟的空间
    for (int I = Arr->Len; I < Arr->Capacity; I++)
      Arr->Data[I] = NULL;
  }

  // 存入字符串
  Arr->Data[Arr->Len++] = S;
}

// 格式化后返回字符串
char *format(char *Fmt, ...) {
  char *Buf;
  size_t BufLen;
  // 将字符串对应的内存作为I/O流
  FILE *Out = open_memstream(&Buf, &BufLen);

  va_list VA;
  va_start(VA, Fmt);
  vfprintf(Out, Fmt, VA);
  va_end(VA);

  fclose(Out);
  return Buf;
}

// 输入文件
static File *CurrentFile;

// 输入文件列表
static File **InputFiles;

// 位于行首时为真
static bool AtBOL;

// 终结符前是有空格时为真
static bool HasSpace;

// 输出错误信息
// static文件内可以访问的函数
// Fmt为传入的字符串， ... 为可变参数，表示Fmt后面所有的参数
void error(char *Fmt, ...) {
  // 定义一个va_list变量
  va_list VA;
  // VA获取Fmt后面的所有参数
  va_start(VA, Fmt);
  // vfprintf可以输出va_list类型的参数
  vfprintf(stderr, Fmt, VA);
  // 在结尾加上一个换行符
  fprintf(stderr, "\n");
  // 清除VA
  va_end(VA);
  // 终止程序
  exit(1);
}

// 输出例如下面的错误，并退出
// foo.c:10: x = y + 1;
//               ^ <错误信息>
static void verrorAt(char *Filename, char *Input, int LineNo, char *Loc,
                     char *Fmt, va_list VA) {
  // 查找包含loc的行
  char *Line = Loc;
  // Line递减到当前行的最开始的位置
  // Line<CurrentInput, 判断是否读取到文件最开始的位置
  // Line[-1] != '\n'，Line字符串前一个字符是否为换行符（上一行末尾）
  while (Input < Line && Line[-1] != '\n')
    Line--;

  // End递增到行尾的换行符
  char *End = Loc;
  while (*End != '\n')
    End++;

  // 输出 文件名:错误行
  // Indent记录输出了多少个字符
  int Indent = fprintf(stderr, "%s:%d: ", Filename, LineNo);
  // 输出Line的行内所有字符（不含换行符）
  fprintf(stderr, "%.*s\n", (int)(End - Line), Line);

  // 计算错误信息位置，在当前行内的偏移量+前面输出了多少个字符
  int Pos = displayWidth(Line, Loc - Line) + Indent;

  // 将字符串补齐为Pos位，因为是空字符串，所以填充Pos个空格。
  fprintf(stderr, "%*s", Pos, "");
  fprintf(stderr, "^ ");
  vfprintf(stderr, Fmt, VA);
  fprintf(stderr, "\n");
  va_end(VA);
}

// 字符解析出错
void errorAt(char *Loc, char *Fmt, ...) {
  int LineNo = 1;
  for (char *P = CurrentFile->Contents; P < Loc; P++)
    if (*P == '\n')
      LineNo++;

  va_list VA;
  va_start(VA, Fmt);
  verrorAt(CurrentFile->Name, CurrentFile->Contents, LineNo, Loc, Fmt, VA);
  exit(1);
}

// Tok解析出错
void errorTok(Token *Tok, char *Fmt, ...) {
  va_list VA;
  va_start(VA, Fmt);
  verrorAt(Tok->File->Name, Tok->File->Contents, Tok->LineNo, Tok->Loc, Fmt,
           VA);
  exit(1);
}

// Tok解析警告
void warnTok(Token *Tok, char *Fmt, ...) {
  va_list VA;
  va_start(VA, Fmt);
  verrorAt(Tok->File->Name, Tok->File->Contents, Tok->LineNo, Tok->Loc, Fmt,
           VA);
  va_end(VA);
}

// 判断Tok的值是否等于指定值，没有用char，是为了后续拓展
bool equal(Token *Tok, char *Str) {
  // 比较字符串LHS（左部），RHS（右部）的前N位，S2的长度应大于等于N.
  // 比较按照字典序，LHS<RHS回负值，LHS=RHS返回0，LHS>RHS返回正值
  // 同时确保，此处的Op位数=N
  return memcmp(Tok->Loc, Str, Tok->Len) == 0 && Str[Tok->Len] == '\0';
}

// 跳过指定的Str
Token *skip(Token *Tok, char *Str) {
  if (!equal(Tok, Str))
    errorTok(Tok, "expect '%s'", Str);
  return Tok->Next;
}

// 消耗掉指定Token
bool consume(Token **Rest, Token *Tok, char *Str) {
  // 存在
  if (equal(Tok, Str)) {
    *Rest = Tok->Next;
    return true;
  }
  // 不存在
  *Rest = Tok;
  return false;
}

// 生成新的Token
static Token *newToken(TokenKind Kind, char *Start, char *End) {
  // 分配1个Token的内存空间
  Token *Tok = calloc(1, sizeof(Token));
  Tok->Kind = Kind;
  Tok->Loc = Start;
  Tok->Len = End - Start;
  // 输入文件
  Tok->File = CurrentFile;
  Tok->Filename = CurrentFile->DisplayName;
  // 读取是否为行首，然后设置为false
  Tok->AtBOL = AtBOL;
  AtBOL = false;
  // 读取是否为前面是空格，然后设置为false
  Tok->HasSpace = HasSpace;
  HasSpace = false;
  return Tok;
}

// 判断Str是否以SubStr开头
static bool startsWith(char *Str, char *SubStr) {
  // 比较LHS和RHS的N个字符是否相等
  return strncmp(Str, SubStr, strlen(SubStr)) == 0;
}

// 判断标记符的首字母规则
// [a-zA-Z_]
bool isIdent1(char C) {
  // a-z与A-Z在ASCII中不相连，所以需要分别判断
  return ('a' <= C && C <= 'z') || ('A' <= C && C <= 'Z') || C == '_';
}

// 判断标记符的非首字母的规则
// [a-zA-Z0-9_]
bool isIdent2(char C) { return isIdent1(C) || ('0' <= C && C <= '9'); }

// 读取标识符，并返回其长度
static int readIdent(char *Start) {
  char *P = Start;
  uint32_t C = decodeUTF8(&P, P);
  // 如果不是标识符，返回0
  if (!isIdent1_1(C))
    return 0;

  // 遍历标识符所有字符
  while (true) {
    char *Q;
    C = decodeUTF8(&Q, P);
    if (!isIdent2_1(C))
      // 返回标识符长度
      return P - Start;
    P = Q;
  }
}

// 返回一位十六进制转十进制
// hexDigit = [0-9a-fA-F]
// 16: 0 1 2 3 4 5 6 7 8 9  A  B  C  D  E  F
// 10: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
static int fromHex(char C) {
  if ('0' <= C && C <= '9')
    return C - '0';
  if ('a' <= C && C <= 'f')
    return C - 'a' + 10;
  return C - 'A' + 10;
}

// 读取操作符
static int readPunct(char *Ptr) {
  // 判断多字节的操作符
  static char *Kw[] = {"<<=", ">>=", "...", "==", "!=", "<=", ">=", "->",
                       "+=",  "-=",  "*=",  "/=", "++", "--", "%=", "&=",
                       "|=",  "^=",  "&&",  "||", "<<", ">>", "##",
  };

  // 遍历列表匹配Ptr字符串
  for (int I = 0; I < sizeof(Kw) / sizeof(*Kw); ++I) {
    if (startsWith(Ptr, Kw[I]))
      return strlen(Kw[I]);
  }

  // 判断1字节的操作符
  return ispunct(*Ptr) ? 1 : 0;
}

// 判断是否为关键字
static bool isKeyword(Token *Tok) {
  static HashMap Map;

  // 哈希表容量为0，说明还没初始化
  if (Map.Capacity == 0) {
    static char *Kw[] = {
        "return",    "if",         "else",
        "for",       "while",      "int",
        "sizeof",    "char",       "struct",
        "union",     "long",       "short",
        "void",      "typedef",    "_Bool",
        "enum",      "static",     "goto",
        "break",     "continue",   "switch",
        "case",      "default",    "extern",
        "_Alignof",  "_Alignas",   "do",
        "signed",    "unsigned",   "const",
        "volatile",  "auto",       "register",
        "restrict",  "__restrict", "__restrict__",
        "_Noreturn", "float",      "double",
        "typeof",    "asm",        "_Thread_local",
        "__thread",  "_Atomic",    "__attribute__",
    };

    // 遍历关键字列表插入哈希表
    for (int I = 0; I < sizeof(Kw) / sizeof(*Kw); I++)
      hashmapPut(&Map, Kw[I], (void *)1);
  }

  return hashmapGet2(&Map, Tok->Loc, Tok->Len);
}

// 读取转义字符
static int readEscapedChar(char **NewPos, char *P) {
  if ('0' <= *P && *P <= '7') {
    // 读取一个八进制数字，不能长于三位
    // \abc = (a*8+b)*8+c
    int C = *P++ - '0';
    if ('0' <= *P && *P <= '7') {
      C = (C << 3) + (*P++ - '0');
      if ('0' <= *P && *P <= '7')
        C = (C << 3) + (*P++ - '0');
    }
    *NewPos = P;
    return C;
  }

  if (*P == 'x') {
    P++;
    // 判断是否为十六进制数字
    if (!isxdigit(*P))
      errorAt(P, "invalid hex escape sequence");

    int C = 0;
    // 读取一位或多位十六进制数字
    // \xWXYZ = ((W*16+X)*16+Y)*16+Z
    for (; isxdigit(*P); P++)
      C = (C << 4) + fromHex(*P);
    *NewPos = P;
    return C;
  }

  *NewPos = P + 1;

  switch (*P) {
  case 'a': // 响铃（警报）
    return '\a';
  case 'b': // 退格
    return '\b';
  case 't': // 水平制表符，tab
    return '\t';
  case 'n': // 换行
    return '\n';
  case 'v': // 垂直制表符
    return '\v';
  case 'f': // 换页
    return '\f';
  case 'r': // 回车
    return '\r';
  // 属于GNU C拓展
  case 'e': // 转义符
    return 27;
  default: // 默认将原字符返回
    return *P;
  }
}

// 读取到字符串字面量结尾
static char *stringLiteralEnd(char *P) {
  char *Start = P;
  for (; *P != '"'; P++) {
    if (*P == '\n' || *P == '\0')
      errorAt(Start, "unclosed string literal");
    if (*P == '\\')
      P++;
  }
  return P;
}

// 读取字符串字面量：字符串开始的位置，左引号的位置
static Token *readStringLiteral(char *Start, char *Quote) {
  // 读取到字符串字面量的右引号
  char *End = stringLiteralEnd(Quote + 1);
  // 定义一个与字符串字面量内字符数+1的Buf
  // 用来存储最大位数的字符串字面量
  char *Buf = calloc(1, End - Quote);
  // 实际的字符位数，一个转义字符为1位
  int Len = 0;

  // 将读取后的结果写入Buf
  for (char *P = Quote + 1; P < End;) {
    if (*P == '\\') {
      Buf[Len++] = readEscapedChar(&P, P + 1);
    } else {
      Buf[Len++] = *P++;
    }
  }

  // Token这里需要包含带双引号的字符串字面量
  Token *Tok = newToken(TK_STR, Start, End + 1);
  // 为\0增加一位
  Tok->Ty = arrayOf(TyChar, Len + 1);
  Tok->Str = Buf;
  return Tok;
}

// 解码UTF-8的字符串并将其转码为UTF-16
//
// UTF-16 使用2字节或4字节对字符进行编码。
// 小于U+10000的码点，使用2字节。
// 大于U+10000的码点，使用4字节（每2个字节被称为代理项，即前导代理和后尾代理）。
static Token *readUTF16StringLiteral(char *Start, char *Quote) {
  char *End = stringLiteralEnd(Quote + 1);
  uint16_t *Buf = calloc(2, End - Start);
  int Len = 0;

  // 遍历引号内的字符
  for (char *P = Quote + 1; P < End;) {
    // 处理转义字符
    if (*P == '\\') {
      Buf[Len++] = readEscapedChar(&P, P + 1);
      continue;
    }

    // 解码UTF-8的字符串文字
    uint32_t C = decodeUTF8(&P, P);
    if (C < 0x10000) {
      // 用2字节存储码点
      Buf[Len++] = C;
    } else {
      // 用2字节存储码点
      C -= 0x10000;
      // 前导代理
      Buf[Len++] = 0xd800 + ((C >> 10) & 0x3ff);
      // 后尾代理
      Buf[Len++] = 0xdc00 + (C & 0x3ff);
    }
  }

  // 构建UTF-16编码的字符串终结符
  Token *Tok = newToken(TK_STR, Start, End + 1);
  Tok->Ty = arrayOf(TyUShort, Len + 1);
  Tok->Str = (char *)Buf;
  return Tok;
}

// 解码UTF-8的字符串并将其转码为UTF-32
//
// UTF-32是4字节编码
static Token *readUTF32StringLiteral(char *Start, char *Quote, Type *Ty) {
  char *End = stringLiteralEnd(Quote + 1);
  uint32_t *Buf = calloc(4, End - Quote);
  int Len = 0;

  // 解码UTF-8的字符串文字
  for (char *P = Quote + 1; P < End;) {
    if (*P == '\\')
      // 处理转义字符
      Buf[Len++] = readEscapedChar(&P, P + 1);
    else
      // 解码UTF-8
      Buf[Len++] = decodeUTF8(&P, P);
  }

  // 构建UTF-32编码的字符串终结符
  Token *Tok = newToken(TK_STR, Start, End + 1);
  Tok->Ty = arrayOf(Ty, Len + 1);
  Tok->Str = (char *)Buf;
  return Tok;
}

// 读取字符字面量
static Token *readCharLiteral(char *Start, char *Quote, Type *Ty) {
  char *P = Quote + 1;
  // 解析字符为 \0 的情况
  if (*P == '\0')
    errorAt(Start, "unclosed char literal");

  // 解析字符
  int C;
  // 转义
  if (*P == '\\')
    C = readEscapedChar(&P, P + 1);
  else
    // 对于其他字符进行解码
    C = decodeUTF8(&P, P);

  // strchr返回以 ' 开头的字符串，若无则为NULL
  char *End = strchr(P, '\'');
  if (!End)
    errorAt(P, "unclosed char literal");

  // 构造一个NUM的终结符，值为C的数值
  Token *Tok = newToken(TK_NUM, Start, End + 1);
  Tok->Val = C;
  Tok->Ty = Ty;
  return Tok;
}

// 转换预处理数值
static bool convertPPInt(Token *Tok) {
  // 获取终结符对应的字符串
  char *P = Tok->Loc;

  // 读取二、八、十、十六进制
  // 默认为十进制
  int Base = 10;
  // 比较两个字符串前2个字符，忽略大小写，并判断是否为数字
  if (!strncasecmp(P, "0x", 2) && isxdigit(P[2])) {
    // 十六进制
    P += 2;
    Base = 16;
  } else if (!strncasecmp(P, "0b", 2) && (P[2] == '0' || P[2] == '1')) {
    // 二进制
    P += 2;
    Base = 2;
  } else if (*P == '0') {
    // 八进制
    Base = 8;
  }

  // 将字符串转换为Base进制的数字
  int64_t Val = strtoul(P, &P, Base);

  // 读取U L LL后缀
  bool L = false;
  bool U = false;

  // LLU
  if (startsWith(P, "LLU") || startsWith(P, "LLu") || startsWith(P, "llU") ||
      startsWith(P, "llu") || startsWith(P, "ULL") || startsWith(P, "Ull") ||
      startsWith(P, "uLL") || startsWith(P, "ull")) {
    P += 3;
    L = U = true;
  } else if (!strncasecmp(P, "lu", 2) || !strncasecmp(P, "ul", 2)) {
    // LU
    P += 2;
    L = U = true;
  } else if (startsWith(P, "LL") || startsWith(P, "ll")) {
    // LL
    P += 2;
    L = true;
  } else if (*P == 'L' || *P == 'l') {
    // L
    P++;
    L = true;
  } else if (*P == 'U' || *P == 'u') {
    // U
    P++;
    U = true;
  }

  // 不能作为整型进行解析
  if (P != Tok->Loc + Tok->Len)
    return false;

  // 推断出类型，采用能存下当前数值的类型
  Type *Ty;
  if (Base == 10) {
    if (L && U)
      Ty = TyULong;
    else if (L)
      Ty = TyLong;
    else if (U)
      Ty = (Val >> 32) ? TyULong : TyUInt;
    else
      Ty = (Val >> 31) ? TyLong : TyInt;
  } else {
    if (L && U)
      Ty = TyULong;
    else if (L)
      Ty = (Val >> 63) ? TyULong : TyLong;
    else if (U)
      Ty = (Val >> 32) ? TyULong : TyUInt;
    else if (Val >> 63)
      Ty = TyULong;
    else if (Val >> 32)
      Ty = TyLong;
    else if (Val >> 31)
      Ty = TyUInt;
    else
      Ty = TyInt;
  }

  // 构造NUM的终结符
  Tok->Kind = TK_NUM;
  Tok->Val = Val;
  Tok->Ty = Ty;
  return true;
}

// 预处理阶段的数字字面量比后面阶段的定义更宽泛
// 因而先将数字字面量标记为pp-number，随后再转为常规数值终结符
//
// 转换预处理数值终结符为常规数值终结符
static void convertPPNumber(Token *Tok) {
  // 尝试作为整型常量解析
  if (convertPPInt(Tok))
    return;

  // 如果不是整型，那么一定是浮点数
  char *End;
  long double Val = strtod(Tok->Loc, &End);

  // 处理浮点数后缀
  Type *Ty;
  if (*End == 'f' || *End == 'F') {
    Ty = TyFloat;
    End++;
  } else if (*End == 'l' || *End == 'L') {
    Ty = TyLDouble;
    End++;
  } else {
    Ty = TyDouble;
  }

  // 构建浮点数终结符
  if (Tok->Loc + Tok->Len != End)
    errorTok(Tok, "invalid numeric constant");

  Tok->Kind = TK_NUM;
  Tok->FVal = Val;
  Tok->Ty = Ty;
}

// 转换预处理终结符
void convertPPTokens(Token *Tok) {
  for (Token *T = Tok; T->Kind != TK_EOF; T = T->Next) {
    if (isKeyword(T))
      // 将关键字的终结符设为为TK_KEYWORD
      T->Kind = TK_KEYWORD;
    else if (T->Kind == TK_PP_NUM)
      // 转换预处理数值
      convertPPNumber(T);
  }
}

// 为所有Token添加行号
static void addLineNumbers(Token *Tok) {
  // 读取当前文件的内容
  char *P = CurrentFile->Contents;
  int N = 1;

  do {
    if (P == Tok->Loc) {
      Tok->LineNo = N;
      Tok = Tok->Next;
    }
    if (*P == '\n')
      N++;
  } while (*P++);
}

// 词法解析字符串字面量
Token *tokenizeStringLiteral(Token *Tok, Type *BaseTy) {
  Token *T;
  if (BaseTy->Size == 2)
    // UTF-16
    T = readUTF16StringLiteral(Tok->Loc, Tok->Loc);
  else
    // UTF-32
    T = readUTF32StringLiteral(Tok->Loc, Tok->Loc, BaseTy);
  T->Next = Tok->Next;
  return T;
}

// 终结符解析，文件名，文件内容
Token *tokenize(File *FP) {
  // 设定当前文件
  CurrentFile = FP;

  // 读取相应的内容
  char *P = FP->Contents;

  Token Head = {};
  Token *Cur = &Head;

  // 文件开始设置为行首
  AtBOL = true;
  // 文件开始设置为前面没有空格
  HasSpace = false;

  while (*P) {
    // 跳过行注释
    if (startsWith(P, "//")) {
      P += 2;
      while (*P != '\n')
        P++;
      HasSpace = true;
      continue;
    }

    // 跳过块注释
    if (startsWith(P, "/*")) {
      // 查找第一个"*/"的位置
      char *Q = strstr(P + 2, "*/");
      if (!Q)
        errorAt(P, "unclosed block comment");
      P = Q + 2;
      HasSpace = true;
      continue;
    }

    // 匹配换行符，设置为行首
    if (*P == '\n') {
      P++;
      AtBOL = true;
      HasSpace = true;
      continue;
    }

    // 跳过所有空白符如：空格、回车
    if (isspace(*P)) {
      ++P;
      HasSpace = true;
      continue;
    }

    // 解析整型和浮点数
    if (isdigit(*P) || (*P == '.' && isdigit(P[1]))) {
      char *Q = P++;
      while (true) {
        if (P[0] && P[1] && strchr("eEpP", P[0]) && strchr("+-", P[1]))
          P += 2;
        else if (isalnum(*P) || *P == '.')
          P++;
        else
          break;
      }
      Cur = Cur->Next = newToken(TK_PP_NUM, Q, P);
      continue;
    }

    // 解析字符串字面量
    if (*P == '"') {
      Cur->Next = readStringLiteral(P, P);
      Cur = Cur->Next;
      P += Cur->Len;
      continue;
    }

    // UTF-8字符串字面量
    if (startsWith(P, "u8\"")) {
      Cur = Cur->Next = readStringLiteral(P, P + 2);
      P += Cur->Len;
      continue;
    }

    // UTF-16字符串字面量
    if (startsWith(P, "u\"")) {
      Cur = Cur->Next = readUTF16StringLiteral(P, P + 1);
      P += Cur->Len;
      continue;
    }

    // 宽字符串字面量
    if (startsWith(P, "L\"")) {
      Cur = Cur->Next = readUTF32StringLiteral(P, P + 1, TyInt);
      P += Cur->Len;
      continue;
    }

    // UTF-32字符串字面量
    if (startsWith(P, "U\"")) {
      Cur = Cur->Next = readUTF32StringLiteral(P, P + 1, TyUInt);
      P += Cur->Len;
      continue;
    }

    // 解析字符字面量
    if (*P == '\'') {
      Cur->Next = readCharLiteral(P, P, TyInt);
      // 单字节字符
      Cur->Val = (char)Cur->Val;
      Cur = Cur->Next;
      P += Cur->Len;
      continue;
    }

    // UTF-16字符字面量
    if (startsWith(P, "u'")) {
      // 使用两个字节
      Cur = Cur->Next = readCharLiteral(P, P + 1, TyUShort);
      Cur->Val &= 0xffff;
      P += Cur->Len;
      continue;
    }

    // 宽字符字面量，占两个字节
    if (startsWith(P, "L'")) {
      Cur = Cur->Next = readCharLiteral(P, P + 1, TyInt);
      P += Cur->Len;
      continue;
    }

    // UTF-32 字符字面量
    if (startsWith(P, "U'")) {
      // 使用四个字节
      Cur = Cur->Next = readCharLiteral(P, P + 1, TyUInt);
      P += Cur->Len;
      continue;
    }

    // 解析标记符或关键字
    // [a-zA-Z_][a-zA-Z0-9_]*
    int IdentLen = readIdent(P);
    if (IdentLen) {
      Cur->Next = newToken(TK_IDENT, P, P + IdentLen);
      Cur = Cur->Next;
      P += Cur->Len;
      continue;
    }

    // 解析操作符
    int PunctLen = readPunct(P);
    if (PunctLen) {
      Cur->Next = newToken(TK_PUNCT, P, P + PunctLen);
      Cur = Cur->Next;
      // 指针前进Punct的长度位
      P += PunctLen;
      continue;
    }

    // 处理无法识别的字符
    errorAt(P, "invalid token");
  }

  // 解析结束，增加一个EOF，表示终止符。
  Cur->Next = newToken(TK_EOF, P, P);
  // 为所有Token添加行号
  addLineNumbers(Head.Next);
  // Head无内容，所以直接返回Next
  return Head.Next;
}

// 返回指定文件的内容
static char *readFile(char *Path) {
  FILE *FP;

  if (strcmp(Path, "-") == 0) {
    // 如果文件名是"-"，那么就从输入中读取
    FP = stdin;
  } else {
    FP = fopen(Path, "r");
    // 文件读取失败
    if (!FP)
      return NULL;
  }

  // 要返回的字符串
  char *Buf;
  size_t BufLen;
  FILE *Out = open_memstream(&Buf, &BufLen);

  // 读取整个文件
  while (true) {
    char Buf2[4096];
    // fread从文件流中读取数据到数组中
    // 数组指针Buf2，数组元素大小1，数组元素个数4096，文件流指针
    int N = fread(Buf2, 1, sizeof(Buf2), FP);
    if (N == 0)
      break;
    // 数组指针Buf2，数组元素大小1，实际元素个数N，文件流指针
    fwrite(Buf2, 1, N, Out);
  }

  // 对文件完成了读取
  if (FP != stdin)
    fclose(FP);

  // 刷新流的输出缓冲区，确保内容都被输出到流中
  fflush(Out);
  // 确保最后一行以'\n'结尾
  if (BufLen == 0 || Buf[BufLen - 1] != '\n')
    // 将字符输出到流中
    fputc('\n', Out);
  fputc('\0', Out);
  fclose(Out);
  return Buf;
}

// 获取输入文件
File **getInputFiles(void) { return InputFiles; }

// 新建一个File
File *newFile(char *Name, int FileNo, char *Contents) {
  File *FP = calloc(1, sizeof(File));
  FP->Name = Name;
  FP->DisplayName = FP->Name;
  FP->FileNo = FileNo;
  FP->Contents = Contents;
  return FP;
}

// 替换 \r 或 \r\n 为 \n
static void canonicalizeNewline(char *P) {
  int I = 0, J = 0;

  while (P[I]) {
    if (P[I] == '\r' && P[I + 1] == '\n') {
      // 替换\r\n
      I += 2;
      P[J++] = '\n';
    } else if (P[I] == '\r') {
      // 替换\r
      I++;
      P[J++] = '\n';
    } else {
      P[J++] = P[I++];
    }
  }

  P[J] = '\0';
}

// 移除续行，即反斜杠+换行符的形式
static void removeBackslashNewline(char *P) {
  // 旧字符串的索引I（从0开始）
  // 新字符串的索引J（从0开始）
  // 因为J始终<=I，所以二者共用空间，不会有问题
  int I = 0, J = 0;

  // 为了维持行号不变，这里记录了删除的行数
  int N = 0;

  // 如果指向的字符存在
  while (P[I]) {
    // 如果是 '\\'和'\n'
    if (P[I] == '\\' && P[I + 1] == '\n') {
      // I跳过这两个字符
      I += 2;
      // 删除的行数+1
      N++;
    }
    // 如果是换行符
    else if (P[I] == '\n') {
      // P[J]='\n'
      // I、J都+1
      P[J++] = P[I++];
      // 如果删除过N个续行，那么在这里增加N个换行
      // 以保证行号不变
      for (; N > 0; N--)
        P[J++] = '\n';
    }
    // 其他情况，P[J]=P[I]
    // I、J都+1
    else {
      P[J++] = P[I++];
    }
  }

  // 如果最后还删除过N个续行，那么在这里增加N个换行
  for (; N > 0; N--)
    P[J++] = '\n';
  // 以'\0'结束
  P[J] = '\0';
}

// 读取unicode字符
static uint32_t readUniversalChar(char *P, int Len) {
  uint32_t C = 0;
  for (int I = 0; I < Len; I++) {
    if (!isxdigit(P[I]))
      return 0;
    // 左移（十六进制数的）4位，然后存入当前十六进制数
    C = (C << 4) | fromHex(P[I]);
  }
  return C;
}

// 替换\u或\U转义序列为相应的UTF-8编码
static void convertUniversalChars(char *P) {
  char *Q = P;

  while (*P) {
    if (startsWith(P, "\\u")) {
      // 16位(4个十六进制数字)宽字符串字面量
      uint32_t C = readUniversalChar(P + 2, 4);
      if (C) {
        P += 6;
        Q += encodeUTF8(Q, C);
      } else {
        *Q++ = *P++;
      }
    } else if (startsWith(P, "\\U")) {
      // 32位(8个十六进制数字)宽字符串字面量
      uint32_t C = readUniversalChar(P + 2, 8);
      if (C) {
        P += 10;
        Q += encodeUTF8(Q, C);
      } else {
        *Q++ = *P++;
      }
    } else if (P[0] == '\\') {
      // 反斜杠 \ 的匹配
      *Q++ = *P++;
      *Q++ = *P++;
    } else {
      // 其他字符
      *Q++ = *P++;
    }
  }

  *Q = '\0';
}

// 词法分析文件
Token *tokenizeFile(char *Path) {
  // 读取文件内容
  char *P = readFile(Path);
  if (!P)
    return NULL;

  // 读取UTF-8的BOM标记
  if (!memcmp(P, "\xef\xbb\xbf", 3))
    P += 3;

  // 规范化换行符
  canonicalizeNewline(P);
  // 移除续行
  removeBackslashNewline(P);
  // 转换unicode字符为UTF-8编码
  convertUniversalChars(P);

  // 文件编号
  static int FileNo;
  // 文件路径，文件编号从1开始，文件内容
  File *FP = newFile(Path, FileNo + 1, P);

  // 为汇编的.file指示保存文件名
  // 最后字符串为空，作为结尾。
  // realloc根据(FileNo + 2)重新分配给定的内存区域
  InputFiles = realloc(InputFiles, sizeof(char *) * (FileNo + 2));
  // 当前文件存入字符串对应编号-1位置
  InputFiles[FileNo] = FP;
  // 最后字符串为空，作为结尾。
  InputFiles[FileNo + 1] = NULL;
  // 文件编号加1
  FileNo++;

  // 词法分析文件
  return tokenize(FP);
}

// (Type){...}构造了一个复合字面量，相当于Type的匿名变量。
Type *TyVoid = &(Type){TY_VOID, 1, 1};
Type *TyBool = &(Type){TY_BOOL, 1, 1};

Type *TyChar = &(Type){TY_CHAR, 1, 1};
Type *TyShort = &(Type){TY_SHORT, 2, 2};
Type *TyInt = &(Type){TY_INT, 4, 4};
Type *TyLong = &(Type){TY_LONG, 8, 8};

Type *TyUChar = &(Type){TY_CHAR, 1, 1, true};
Type *TyUShort = &(Type){TY_SHORT, 2, 2, true};
Type *TyUInt = &(Type){TY_INT, 4, 4, true};
Type *TyULong = &(Type){TY_LONG, 8, 8, true};

Type *TyFloat = &(Type){TY_FLOAT, 4, 4};
Type *TyDouble = &(Type){TY_DOUBLE, 8, 8};
Type *TyLDouble = &(Type){TY_LDOUBLE, 16, 16};

static Type *newType(TypeKind Kind, int Size, int Align) {
  Type *Ty = calloc(1, sizeof(Type));
  Ty->Kind = Kind;
  Ty->Size = Size;
  Ty->Align = Align;
  return Ty;
}

// 判断Type是否为整数
bool isInteger(Type *Ty) {
  TypeKind K = Ty->Kind;
  return K == TY_BOOL || K == TY_CHAR || K == TY_SHORT || K == TY_INT ||
         K == TY_LONG || K == TY_ENUM;
}

// 判断Type是否为浮点数
bool isFloNum(Type *Ty) {
  return Ty->Kind == TY_FLOAT || Ty->Kind == TY_DOUBLE ||
         Ty->Kind == TY_LDOUBLE;
}

// 判断是否为float或double，而非long double
bool isSFloNum(Type *Ty) {
  return Ty->Kind == TY_FLOAT || Ty->Kind == TY_DOUBLE;
}

// 判断是否为数字
bool isNumeric(Type *Ty) { return isInteger(Ty) || isFloNum(Ty); }

// 类型兼容检测函数
bool isCompatible(Type *T1, Type *T2) {
  // 类型1、2完全相同，则直接返回true
  if (T1 == T2)
    return true;

  // 类型1存在原始类型，则检测该原始类型和类型2的兼容性
  if (T1->Origin)
    return isCompatible(T1->Origin, T2);

  // 类型2存在原始类型，则检测该原始类型和类型1的兼容性
  if (T2->Origin)
    return isCompatible(T1, T2->Origin);

  // 不存在原始类型时，二类型不相等则直接返回false
  if (T1->Kind != T2->Kind)
    return false;

  // 遍历类型1（此时，与类型2相同）
  switch (T1->Kind) {
  case TY_CHAR:
  case TY_SHORT:
  case TY_INT:
  case TY_LONG:
    // 二者 都为 或 都不为 无符号类型，则为真
    return T1->IsUnsigned == T2->IsUnsigned;
  case TY_FLOAT:
  case TY_DOUBLE:
  case TY_LDOUBLE:
    // 浮点类型直接返回真
    return true;
  case TY_PTR:
    // 指针，则比较二者所指向的基础类型
    return isCompatible(T1->Base, T2->Base);
  case TY_FUNC: {
    // 比较二者的返回类型，有异则为假
    if (!isCompatible(T1->ReturnTy, T2->ReturnTy))
      return false;
    // 比较二者是否 都为 或 都不为 可变参数函数，有异则为假
    if (T1->IsVariadic != T2->IsVariadic)
      return false;

    Type *P1 = T1->Params;
    Type *P2 = T2->Params;
    // 遍历两个函数的参数，有异则为假
    for (; P1 && P2; P1 = P1->Next, P2 = P2->Next)
      if (!isCompatible(P1, P2))
        return false;
    // 比较两个函数的参数个数，有异则为假，无异则为真
    return P1 == NULL && P2 == NULL;
  }
  case TY_ARRAY:
    // 比较数组的基础类型，有异则为假
    if (!isCompatible(T1->Base, T2->Base))
      return false;
    // 比较数组的个数，有异则为假，无异则为真
    return T1->ArrayLen < 0 && T2->ArrayLen < 0 && T1->ArrayLen == T2->ArrayLen;
  default:
    return false;
  }
}

// 复制类型
Type *copyType(Type *Ty) {
  Type *Ret = calloc(1, sizeof(Type));
  *Ret = *Ty;
  // 记录原始类型
  Ret->Origin = Ty;
  return Ret;
}

// 指针类型，并且指向基类
Type *pointerTo(Type *Base) {
  Type *Ty = newType(TY_PTR, 8, 8);
  Ty->Base = Base;
  // 将指针作为无符号类型进行比较
  Ty->IsUnsigned = true;
  return Ty;
}

// 函数类型，并赋返回类型
Type *funcType(Type *ReturnTy) {
  // C语言标准不允许sizeof(<function type>)，但GCC允许计算为1
  Type *Ty = newType(TY_FUNC, 1, 1);
  Ty->ReturnTy = ReturnTy;
  return Ty;
}

// 构造数组类型, 传入 数组基类, 元素个数
Type *arrayOf(Type *Base, int Len) {
  Type *Ty = newType(TY_ARRAY, Base->Size * Len, Base->Align);
  Ty->Base = Base;
  Ty->ArrayLen = Len;
  return Ty;
}

// 构造可变长数组类型
Type *VLAOf(Type *Base, Node *Len) {
  Type *Ty = newType(TY_VLA, 8, 8);
  Ty->Base = Base;
  Ty->VLALen = Len;
  return Ty;
}

// 构造枚举类型
Type *enumType(void) { return newType(TY_ENUM, 4, 4); }

// 构造结构体类型
Type *structType(void) { return newType(TY_STRUCT, 0, 1); }

// 获取容纳左右部的类型
static Type *getCommonType(Type *Ty1, Type *Ty2) {
  if (Ty1->Base)
    return pointerTo(Ty1->Base);

  // 为函数指针进行常规算术转换
  if (Ty1->Kind == TY_FUNC)
    return pointerTo(Ty1);
  if (Ty2->Kind == TY_FUNC)
    return pointerTo(Ty2);

  // 处理浮点类型
  // 优先使用long double类型
  if (Ty1->Kind == TY_LDOUBLE || Ty2->Kind == TY_LDOUBLE)
    return TyLDouble;
  // 其次使用double类型
  if (Ty1->Kind == TY_DOUBLE || Ty2->Kind == TY_DOUBLE)
    return TyDouble;
  // 其次使用float类型
  if (Ty1->Kind == TY_FLOAT || Ty2->Kind == TY_FLOAT)
    return TyFloat;

  // 小于四字节则为int
  if (Ty1->Size < 4)
    Ty1 = TyInt;
  if (Ty2->Size < 4)
    Ty2 = TyInt;

  // 选择二者中更大的类型
  if (Ty1->Size != Ty2->Size)
    return (Ty1->Size < Ty2->Size) ? Ty2 : Ty1;

  // 优先返回无符号类型（更大）
  if (Ty2->IsUnsigned)
    return Ty2;
  return Ty1;
}

// 进行常规的算术转换
static void usualArithConv(Node **LHS, Node **RHS) {
  Type *Ty = getCommonType((*LHS)->Ty, (*RHS)->Ty);
  // 将左右部转换到兼容的类型
  *LHS = newCast(*LHS, Ty);
  *RHS = newCast(*RHS, Ty);
}

// 为节点内的所有节点添加类型
void addType(Node *Nd) {
  // 判断 节点是否为空 或者 节点类型已经有值，那么就直接返回
  if (!Nd || Nd->Ty)
    return;

  // 递归访问所有节点以增加类型
  addType(Nd->LHS);
  addType(Nd->RHS);
  addType(Nd->Cond);
  addType(Nd->Then);
  addType(Nd->Els);
  addType(Nd->Init);
  addType(Nd->Inc);

  // 访问链表内的所有节点以增加类型
  for (Node *N = Nd->Body; N; N = N->Next)
    addType(N);
  // 访问链表内的所有参数节点以增加类型
  for (Node *N = Nd->Args; N; N = N->Next)
    addType(N);

  switch (Nd->Kind) {
  // 将节点类型设为 int
  case ND_NUM:
    Nd->Ty = TyInt;
    return;
  // 将节点类型设为 节点左部的类型
  case ND_ADD:
  case ND_SUB:
  case ND_MUL:
  case ND_DIV:
  case ND_MOD:
  case ND_BITAND:
  case ND_BITOR:
  case ND_BITXOR:
    // 对左右部转换
    usualArithConv(&Nd->LHS, &Nd->RHS);
    Nd->Ty = Nd->LHS->Ty;
    return;
  case ND_NEG: {
    // 对左部转换
    Type *Ty = getCommonType(TyInt, Nd->LHS->Ty);
    Nd->LHS = newCast(Nd->LHS, Ty);
    Nd->Ty = Ty;
    return;
  }
    // 将节点类型设为 节点左部的类型
    // 左部不能是数组节点
  case ND_ASSIGN:
    if (Nd->LHS->Ty->Kind == TY_ARRAY)
      errorTok(Nd->LHS->Tok, "not an lvalue");
    if (Nd->LHS->Ty->Kind != TY_STRUCT)
      // 对右部转换
      Nd->RHS = newCast(Nd->RHS, Nd->LHS->Ty);
    Nd->Ty = Nd->LHS->Ty;
    return;
  // 将节点类型设为 int
  case ND_EQ:
  case ND_NE:
  case ND_LT:
  case ND_LE:
    // 对左右部转换
    usualArithConv(&Nd->LHS, &Nd->RHS);
    Nd->Ty = TyInt;
    return;
  case ND_FUNCALL:
    Nd->Ty = Nd->FuncType->ReturnTy;
    return;
  // 将节点类型设为 int
  case ND_NOT:
  case ND_LOGOR:
  case ND_LOGAND:
    Nd->Ty = TyInt;
    return;
  // 将节点类型设为 左部的类型
  case ND_BITNOT:
  case ND_SHL:
  case ND_SHR:
    Nd->Ty = Nd->LHS->Ty;
    return;
  // 将节点类型设为 变量的类型
  case ND_VAR:
  case ND_VLA_PTR:
    Nd->Ty = Nd->Var->Ty;
    return;
  // 如果:左或右部为void则为void，否则为二者兼容的类型
  case ND_COND:
    if (Nd->Then->Ty->Kind == TY_VOID || Nd->Els->Ty->Kind == TY_VOID) {
      Nd->Ty = TyVoid;
    } else {
      usualArithConv(&Nd->Then, &Nd->Els);
      Nd->Ty = Nd->Then->Ty;
    }
    return;
  // 将节点类型设为 右部的类型
  case ND_COMMA:
    Nd->Ty = Nd->RHS->Ty;
    return;
  // 将节点类型设为 成员的类型
  case ND_MEMBER:
    Nd->Ty = Nd->Mem->Ty;
    return;
  // 将节点类型设为 指针，并指向左部的类型
  case ND_ADDR: {
    Type *Ty = Nd->LHS->Ty;
    // 左部如果是数组, 则为指向数组基类的指针
    if (Ty->Kind == TY_ARRAY)
      Nd->Ty = pointerTo(Ty->Base);
    else
      Nd->Ty = pointerTo(Ty);
    return;
  }
  // 节点类型：如果解引用指向的是指针，则为指针指向的类型；否则报错
  case ND_DEREF:
    // 如果不存在基类, 则无法解引用
    if (!Nd->LHS->Ty->Base)
      errorTok(Nd->Tok, "invalid pointer dereference");
    if (Nd->LHS->Ty->Base->Kind == TY_VOID)
      errorTok(Nd->Tok, "dereferencing a void pointer");

    Nd->Ty = Nd->LHS->Ty->Base;
    return;
  // 节点类型为 最后的表达式语句的类型
  case ND_STMT_EXPR:
    if (Nd->Body) {
      Node *Stmt = Nd->Body;
      while (Stmt->Next)
        Stmt = Stmt->Next;
      if (Stmt->Kind == ND_EXPR_STMT) {
        Nd->Ty = Stmt->LHS->Ty;
        return;
      }
    }
    errorTok(Nd->Tok, "statement expression returning void is not supported");
    return;
  case ND_LABEL_VAL:
    Nd->Ty = pointerTo(TyVoid);
    return;
  // 节点类型为 布尔类型
  case ND_CAS:
    addType(Nd->CasAddr);
    addType(Nd->CasOld);
    addType(Nd->CasNew);
    Nd->Ty = TyBool;

    if (Nd->CasAddr->Ty->Kind != TY_PTR)
      errorTok(Nd->CasAddr->Tok, "pointer expected");
    if (Nd->CasOld->Ty->Kind != TY_PTR)
      errorTok(Nd->CasOld->Tok, "pointer expected");
    return;
  // 节点类型为 左部所指向的类型
  case ND_EXCH:
    if (Nd->LHS->Ty->Kind != TY_PTR)
      errorTok(Nd->CasAddr->Tok, "pointer expected");
    Nd->Ty = Nd->LHS->Ty->Base;
    return;
  default:
    break;
  }
}

// 将unicode字符编码为UTF8的格式
int encodeUTF8(char *Buf, uint32_t C) {
  // 1字节UTF8编码，可用7位，0~127，与ASCII码兼容
  // 0x7F=0b01111111=127
  if (C <= 0x7F) {
    // 首字节内容为：0xxxxxxx
    Buf[0] = C;
    return 1;
  }

  // 2字节UTF8编码，可用11位，128~2047
  // 0x7FF=0b111 11111111=2047
  if (C <= 0x7FF) {
    // 首字节内容为：110xxxxx
    Buf[0] = 0b11000000 | (C >> 6);
    // 后续字节都为：10xxxxxx
    Buf[1] = 0b10000000 | (C & 0b00111111);
    return 2;
  }

  // 3字节UTF8编码，可用16位，2048~65535
  // 0xFFFF=0b11111111 11111111=65535
  if (C <= 0xFFFF) {
    // 首字节内容为：1110xxxx
    Buf[0] = 0b11100000 | (C >> 12);
    // 后续字节都为：10xxxxxx
    Buf[1] = 0b10000000 | ((C >> 6) & 0b00111111);
    Buf[2] = 0b10000000 | (C & 0b00111111);
    return 3;
  }

  // 4字节UTF8编码，可用21位，65536~1114111
  // 0x10FFFF=1114111
  //
  // 首字节内容为：11110xxx
  Buf[0] = 0b11110000 | (C >> 18);
  // 后续字节都为：10xxxxxx
  Buf[1] = 0b10000000 | ((C >> 12) & 0b00111111);
  Buf[2] = 0b10000000 | ((C >> 6) & 0b00111111);
  Buf[3] = 0b10000000 | (C & 0b00111111);
  return 4;
}

// 将UTF-8的格式解码为unicode字符
uint32_t decodeUTF8(char **NewPos, char *P) {
  // 1字节UTF8编码，0~127，与ASCII码兼容
  if ((unsigned char)*P < 128) {
    *NewPos = P + 1;
    return *P;
  }

  char *Start = P;
  int Len;
  uint32_t C;

  if ((unsigned char)*P >= 0b11110000) {
    // 4字节UTF8编码，首字节内容为：11110xxx
    Len = 4;
    C = *P & 0b111;
  } else if ((unsigned char)*P >= 0b11100000) {
    // 3字节UTF8编码，首字节内容为：1110xxxx
    Len = 3;
    C = *P & 0b1111;
  } else if ((unsigned char)*P >= 0b11000000) {
    // 2字节UTF8编码，首字节内容为：110xxxxx
    Len = 2;
    C = *P & 0b11111;
  } else {
    errorAt(Start, "invalid UTF-8 sequence");
  }

  // 后续字节都为：10xxxxxx
  for (int I = 1; I < Len; I++) {
    if ((unsigned char)P[I] >> 6 != 0b10)
      errorAt(Start, "invalid UTF-8 sequence");
    C = (C << 6) | (P[I] & 0b111111);
  }

  // 前进Len字节
  *NewPos = P + Len;
  // 返回获取到的值
  return C;
}

// 判断字符C是否在Range内
static bool inRange(uint32_t *Range, uint32_t C) {
  for (int I = 0; Range[I] != -1; I += 2)
    if (Range[I] <= C && C <= Range[I + 1])
      return true;
  return false;
}

// C是否可以为 标识符的首字符
bool isIdent1_1(uint32_t C) {
  // C11允许除ASCII字符外的一些字符用于标识符
  static uint32_t Range[] = {
      '_',     '_',     'a',     'z',     'A',     'Z',     '$',     '$',
      0x00A8,  0x00A8,  0x00AA,  0x00AA,  0x00AD,  0x00AD,  0x00AF,  0x00AF,
      0x00B2,  0x00B5,  0x00B7,  0x00BA,  0x00BC,  0x00BE,  0x00C0,  0x00D6,
      0x00D8,  0x00F6,  0x00F8,  0x00FF,  0x0100,  0x02FF,  0x0370,  0x167F,
      0x1681,  0x180D,  0x180F,  0x1DBF,  0x1E00,  0x1FFF,  0x200B,  0x200D,
      0x202A,  0x202E,  0x203F,  0x2040,  0x2054,  0x2054,  0x2060,  0x206F,
      0x2070,  0x20CF,  0x2100,  0x218F,  0x2460,  0x24FF,  0x2776,  0x2793,
      0x2C00,  0x2DFF,  0x2E80,  0x2FFF,  0x3004,  0x3007,  0x3021,  0x302F,
      0x3031,  0x303F,  0x3040,  0xD7FF,  0xF900,  0xFD3D,  0xFD40,  0xFDCF,
      0xFDF0,  0xFE1F,  0xFE30,  0xFE44,  0xFE47,  0xFFFD,  0x10000, 0x1FFFD,
      0x20000, 0x2FFFD, 0x30000, 0x3FFFD, 0x40000, 0x4FFFD, 0x50000, 0x5FFFD,
      0x60000, 0x6FFFD, 0x70000, 0x7FFFD, 0x80000, 0x8FFFD, 0x90000, 0x9FFFD,
      0xA0000, 0xAFFFD, 0xB0000, 0xBFFFD, 0xC0000, 0xCFFFD, 0xD0000, 0xDFFFD,
      0xE0000, 0xEFFFD, -1,
  };

  return inRange(Range, C);
}

// C是否可以为 标识符的非首字符
bool isIdent2_1(uint32_t C) {
  // 这里是用于非首位的字符
  static uint32_t Range[] = {
      '0',    '9',    '$',    '$',    0x0300, 0x036F, 0x1DC0,
      0x1DFF, 0x20D0, 0x20FF, 0xFE20, 0xFE2F, -1,
  };

  return isIdent1_1(C) || inRange(Range, C);
}

// 返回在固定宽度字体中需要多少列来显示给定字符
static int charWidth(uint32_t C) {
  // 此范围内的字符具有零个列宽
  static uint32_t Range1[] = {
      0x0000,  0x001F,  0x007f,  0x00a0,  0x0300,  0x036F,  0x0483,  0x0486,
      0x0488,  0x0489,  0x0591,  0x05BD,  0x05BF,  0x05BF,  0x05C1,  0x05C2,
      0x05C4,  0x05C5,  0x05C7,  0x05C7,  0x0600,  0x0603,  0x0610,  0x0615,
      0x064B,  0x065E,  0x0670,  0x0670,  0x06D6,  0x06E4,  0x06E7,  0x06E8,
      0x06EA,  0x06ED,  0x070F,  0x070F,  0x0711,  0x0711,  0x0730,  0x074A,
      0x07A6,  0x07B0,  0x07EB,  0x07F3,  0x0901,  0x0902,  0x093C,  0x093C,
      0x0941,  0x0948,  0x094D,  0x094D,  0x0951,  0x0954,  0x0962,  0x0963,
      0x0981,  0x0981,  0x09BC,  0x09BC,  0x09C1,  0x09C4,  0x09CD,  0x09CD,
      0x09E2,  0x09E3,  0x0A01,  0x0A02,  0x0A3C,  0x0A3C,  0x0A41,  0x0A42,
      0x0A47,  0x0A48,  0x0A4B,  0x0A4D,  0x0A70,  0x0A71,  0x0A81,  0x0A82,
      0x0ABC,  0x0ABC,  0x0AC1,  0x0AC5,  0x0AC7,  0x0AC8,  0x0ACD,  0x0ACD,
      0x0AE2,  0x0AE3,  0x0B01,  0x0B01,  0x0B3C,  0x0B3C,  0x0B3F,  0x0B3F,
      0x0B41,  0x0B43,  0x0B4D,  0x0B4D,  0x0B56,  0x0B56,  0x0B82,  0x0B82,
      0x0BC0,  0x0BC0,  0x0BCD,  0x0BCD,  0x0C3E,  0x0C40,  0x0C46,  0x0C48,
      0x0C4A,  0x0C4D,  0x0C55,  0x0C56,  0x0CBC,  0x0CBC,  0x0CBF,  0x0CBF,
      0x0CC6,  0x0CC6,  0x0CCC,  0x0CCD,  0x0CE2,  0x0CE3,  0x0D41,  0x0D43,
      0x0D4D,  0x0D4D,  0x0DCA,  0x0DCA,  0x0DD2,  0x0DD4,  0x0DD6,  0x0DD6,
      0x0E31,  0x0E31,  0x0E34,  0x0E3A,  0x0E47,  0x0E4E,  0x0EB1,  0x0EB1,
      0x0EB4,  0x0EB9,  0x0EBB,  0x0EBC,  0x0EC8,  0x0ECD,  0x0F18,  0x0F19,
      0x0F35,  0x0F35,  0x0F37,  0x0F37,  0x0F39,  0x0F39,  0x0F71,  0x0F7E,
      0x0F80,  0x0F84,  0x0F86,  0x0F87,  0x0F90,  0x0F97,  0x0F99,  0x0FBC,
      0x0FC6,  0x0FC6,  0x102D,  0x1030,  0x1032,  0x1032,  0x1036,  0x1037,
      0x1039,  0x1039,  0x1058,  0x1059,  0x1160,  0x11FF,  0x135F,  0x135F,
      0x1712,  0x1714,  0x1732,  0x1734,  0x1752,  0x1753,  0x1772,  0x1773,
      0x17B4,  0x17B5,  0x17B7,  0x17BD,  0x17C6,  0x17C6,  0x17C9,  0x17D3,
      0x17DD,  0x17DD,  0x180B,  0x180D,  0x18A9,  0x18A9,  0x1920,  0x1922,
      0x1927,  0x1928,  0x1932,  0x1932,  0x1939,  0x193B,  0x1A17,  0x1A18,
      0x1B00,  0x1B03,  0x1B34,  0x1B34,  0x1B36,  0x1B3A,  0x1B3C,  0x1B3C,
      0x1B42,  0x1B42,  0x1B6B,  0x1B73,  0x1DC0,  0x1DCA,  0x1DFE,  0x1DFF,
      0x200B,  0x200F,  0x202A,  0x202E,  0x2060,  0x2063,  0x206A,  0x206F,
      0x20D0,  0x20EF,  0x302A,  0x302F,  0x3099,  0x309A,  0xA806,  0xA806,
      0xA80B,  0xA80B,  0xA825,  0xA826,  0xFB1E,  0xFB1E,  0xFE00,  0xFE0F,
      0xFE20,  0xFE23,  0xFEFF,  0xFEFF,  0xFFF9,  0xFFFB,  0x10A01, 0x10A03,
      0x10A05, 0x10A06, 0x10A0C, 0x10A0F, 0x10A38, 0x10A3A, 0x10A3F, 0x10A3F,
      0x1D167, 0x1D169, 0x1D173, 0x1D182, 0x1D185, 0x1D18B, 0x1D1AA, 0x1D1AD,
      0x1D242, 0x1D244, 0xE0001, 0xE0001, 0xE0020, 0xE007F, 0xE0100, 0xE01EF,
      -1,
  };

  // 若为零列宽字符则返回0
  if (inRange(Range1, C))
    return 0;

  // 此范围内的字符具有两个列宽
  static uint32_t Range2[] = {
      0x1100,  0x115F,  0x2329,  0x2329,  0x232A, 0x232A, 0x2E80,  0x303E,
      0x3040,  0xA4CF,  0xAC00,  0xD7A3,  0xF900, 0xFAFF, 0xFE10,  0xFE19,
      0xFE30,  0xFE6F,  0xFF00,  0xFF60,  0xFFE0, 0xFFE6, 0x1F000, 0x1F644,
      0x20000, 0x2FFFD, 0x30000, 0x3FFFD, -1,
  };

  // 若为二列宽字符则返回2
  if (inRange(Range2, C))
    return 2;
  // 其他作为一列宽字符返回1
  return 1;
}

// 返回在固定宽度字体中需要多少列来显示给定字符串
int displayWidth(char *P, int Len) {
  char *Start = P;
  // 字符串的总宽度
  int W = 0;
  // 遍历字符串内的所有字符
  while (P - Start < Len) {
    // 对字符进行解码
    uint32_t C = decodeUTF8(&P, P);
    // 累加上字符的宽度
    W += charWidth(C);
  }
  return W;
}
