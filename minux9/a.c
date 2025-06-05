#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define NDIRECT      12

struct dinode {
    uint16_t type;              // T_DIR, T_FILE, 0=unused
    uint16_t major;             // 未使用（デバイス用）
    uint16_t minor;             // 未使用
    uint16_t nlink;             // リンク数
    uint32_t size;              // ファイルサイズ（バイト）
    uint32_t addrs[NDIRECT+1];  // [0..NDIRECT-1]: 直接, [NDIRECT]: 間接
};

int main()
{
    printf("%d\n", sizeof(struct dinode));
    
    exit(0);
}
