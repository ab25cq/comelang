#ifndef _ELF_H
#define _ELF_H

#include <stdint.h>

// ELFヘッダのマジックナンバー (リトルエンディアン)
#define ELF_MAGIC 0x464C457F  // "\x7FELF"

// ELFヘッダ (64-bit)
struct elfhdr {
    uint32_t magic;      // ELF_MAGIC である必要がある
    uint8_t  elf[12];    // ELF識別情報
    uint16_t type;       // オブジェクトファイルの種類
    uint16_t machine;    // アーキテクチャ
    uint32_t version;    // オブジェクトファイルのバージョン
    uint64_t entry;      // エントリポイントの仮想アドレス
    uint64_t phoff;      // プログラムヘッダテーブルのファイルオフセット
    uint64_t shoff;      // セクションヘッダテーブルのファイルオフセット
    uint32_t flags;      // プロセッサ固有のフラグ
    uint16_t ehsize;     // ELFヘッダのサイズ
    uint16_t phentsize;  // プログラムヘッダテーブルのエントリサイズ
    uint16_t phnum;      // プログラヘッダテーブルのエントリ数
    uint16_t shentsize;  // セクションヘッダテーブルのエントリサイズ
    uint16_t shnum;      // セクションヘッダテーブルのエントリ数
    uint16_t shstrndx;   // セクション名文字列テーブルのインデックス
};

// プログラムヘッダ (64-bit)
struct proghdr {
    uint32_t type;       // セグメントの種類
    uint32_t flags;      // セグメントのフラグ
    uint64_t off;        // ファイル先頭からセグメントまでのオフセット
    uint64_t vaddr;      // セグメントの仮想アドレス
    uint64_t paddr;      // セグメントの物理アドレス (通常は無視)
    uint64_t filesz;     // ファイルイメージ内のセグメントサイズ
    uint64_t memsz;      // メモリイメージ内のセグメントサイズ (BSS対応)
    uint64_t align;      // セグメントのアライメント
};

// プログラムヘッダの `type` フィールドの値
#define ELF_PROG_LOAD    1 // ロード可能なセグメント

// プログラムヘッダの `flags` フィールドのビットマスク
#define ELF_PROG_FLAG_EXEC  1 // 実行可能
#define ELF_PROG_FLAG_WRITE 2 // 書き込み可能
#define ELF_PROG_FLAG_READ  4 // 読み込み可能

// セクションヘッダ (64-bit)
struct elfshdr {
    uint32_t name;       // セクション名 (文字列テーブルへのインデックス)
    uint32_t type;       // セクションの種類
    uint64_t flags;      // セクションのフラグ
    uint64_t addr;       // メモリ上のアドレス (もしあれば)
    uint64_t offset;     // ファイル先頭からのオフセット
    uint64_t size;       // セクションのサイズ
    uint32_t link;       // 他のセクションへのリンク
    uint32_t info;       // 追加情報
    uint64_t addralign;  // アライメント
    uint64_t entsize;    // テーブルエントリのサイズ
};

// セクションヘッダの `type` フィールドの
#define SHT_NULL     0
#define SHT_PROGBITS 1
#define SHT_SYMTAB   2
#define SHT_STRTAB   3
#define SHT_RELA     4
#define SHT_HASH     5
#define SHT_DYNAMIC  6
#define SHT_NOTE     7
#define SHT_NOBITS   8 // .bss のようなセクション
#define SHT_REL      9
#define SHT_SHLIB    10
#define SHT_DYNSYM   11

// シンボルテーブルエントリ (64-bit)
struct elfsym {
    uint32_t name;       // シンボル名 (文字列テーブルへのインデックス)
    uint8_t  info;       // シンボルの種類とバインディング属性
    uint8_t  other;      // 予約
    uint16_t shndx;      // 関連するセクションのインデックス
    uint64_t value;      // シンボルの値 (アドレスなど)
    uint64_t size;       // シンボルのサイズ
};

#endif // _ELF_H

