#ifndef ELF_H
#define ELF_H

// ELFヘッダマジック
#define ELF_MAGIC 0x464C457F  // "\x7FELF" (リトルエンディアンで逆順)

// ELFヘッダ（最初の52バイト程度）
struct elfhdr {
    uint32_t magic;   // ELF_MAGIC
    uint8_t  elf[12]; // ELF識別子（無視してよい）
    uint16_t type;
    uint16_t machine;
    uint32_t version;
    uint64_t entry;   // エントリポイント
    uint64_t phoff;   // プログラムヘッダテーブルのオフセット
    uint64_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;   // プログラムヘッダの数
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
};

// プログラムヘッダ（LOADセグメントなど）
struct proghdr {
    uint32_t type;
    uint32_t flags;
    uint64_t off;     // ファイル中の位置
    uint64_t vaddr;   // 仮想アドレス
    uint64_t paddr;
    uint64_t filesz;  // ファイル中のサイズ
    uint64_t memsz;   // メモリ上のサイズ（BSS含む）
    uint64_t align;
};

// セグメント種別
#define ELF_PROG_LOAD 1

#endif

