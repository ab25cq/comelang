#include <stdint.h>
#include "mmu.h"

typedef uint64_t* pagetable_t;

// グローバルで共通のページテーブルを確保
pagetable_t kernel_pagetable;
pagetable_t l1 = (pagetable_t)(0x81001000);
pagetable_t l0_kernel = (pagetable_t)(0x81002000);
pagetable_t l0_uart = (pagetable_t)(0x81003000);

void map_page(pagetable_t pt, uint64_t va, uint64_t pa, pagetable_t l0) {
    int vpn2 = (va >> 30) & 0x1FF;
    int vpn1 = (va >> 21) & 0x1FF;
    int vpn0 = (va >> 12) & 0x1FF;

    // L2 → L1（1回だけでOKなので if チェック入れても良い）
    pt[vpn2] = ((uint64_t)l1 >> 12 << 10) | PTE_V;

    // L1 → L0（vaによって別テーブル使える）
    l1[vpn1] = ((uint64_t)l0 >> 12 << 10) | PTE_V;

    // L0 → PA
    l0[vpn0] = ((pa >> 12) << 10) | PTE_V | PTE_R | PTE_W;
}

void init_mmu() {
    kernel_pagetable = (pagetable_t)(0x81000000);

    // ゼロ初期化
    for (int i = 0; i < 512; i++) {
        kernel_pagetable[i] = 0;
        l1[i] = 0;
        l0_kernel[i] = 0;
        l0_uart[i] = 0;
    }

    // カーネルコード: 仮想0x80000000 → 物理0x80000000
    map_page(kernel_pagetable, 0x80000000, 0x80000000, l0_kernel);

    // UART: 仮想0xffffffe000000000 → 物理0x10000000
    map_page(kernel_pagetable, 0xffffffe000000000, 0x10000000, l0_uart);

    w_satp(MAKE_SATP(kernel_pagetable));
    sfence_vma();
}
