#include <stdint.h>



void* memcpy(void *dst, const void *src, unsigned int n);

// 仮想アドレス va に対応する物理アドレスを返す。
// 対応するPTEが存在しない or 有効でない or Uビットなし → NULLを返す。

void panic();


