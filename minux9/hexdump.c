// hexdump_min.c - tiny hex+ASCII dumper for Minux9
#include "minux.h"
#include <stdint.h>

/* Fallbacks (Minux9 may not define these) */
#ifndef SEEK_SET
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#endif

/* Simple strtoull supporting dec/hex (0x...) */
static unsigned long long parse_ull(const char* s) {
  if (!s || !*s) return 0;
  unsigned long long v = 0;
  int base = 10, i = 0;
  if (s[0]=='0' && (s[1]=='x' || s[1]=='X')) { base = 16; i = 2; }
  for (; s[i]; i++) {
    char c = s[i];
    int d = -1;
    if (c>='0' && c<='9') d = c - '0';
    else if (base==16 && c>='a' && c<='f') d = 10 + (c - 'a');
    else if (base==16 && c>='A' && c<='F') d = 10 + (c - 'A');
    else break;
    v = v * base + (unsigned long long)d;
  }
  return v;
}

static int is_print(unsigned char c) { return (c >= 32 && c <= 126); }

static void usage(void) {
  printf("usage: hexdump_min [-o OUT] [-s OFF] [-n LEN] [-w WIDTH] FILE\n");
  printf("  -o OUT   : write dump to OUT (default: stdout)\n");
  printf("  -s OFF   : start offset (dec or 0x... hex), default 0\n");
  printf("  -n LEN   : dump length  (dec or 0x... hex), default: to EOF\n");
  printf("  -w WIDTH : bytes per line (8..32), default 16\n");
}

/* write all helper */
static int write_all(int fd, const char* buf, int len) {
  int off = 0;
  while (off < len) {
    int n = write(fd, buf + off, len - off);
    if (n <= 0) return -1;
    off += n;
  }
  return 0;
}

int main(int argc, char** argv) {
  const char* in_path = 0;
  const char* out_path = 0;
  unsigned long long opt_off = 0;
  unsigned long long opt_len = (unsigned long long)-1; /* until EOF */
  int width = 16;

  /* parse args */
  int i = 1;
  while (i < argc && argv[i][0]=='-') {
    const char* a = argv[i];
    if (a[1]=='o' && a[2]==0 && i+1 < argc) { out_path = argv[i+1]; i += 2; }
    else if (a[1]=='s' && a[2]==0 && i+1 < argc) { opt_off = parse_ull(argv[i+1]); i += 2; }
    else if (a[1]=='n' && a[2]==0 && i+1 < argc) { opt_len = parse_ull(argv[i+1]); i += 2; }
    else if (a[1]=='w' && a[2]==0 && i+1 < argc) {
      width = (int)parse_ull(argv[i+1]); if (width < 8) width=8; if (width > 32) width=32; i += 2;
    } else { usage(); return 1; }
  }
  if (i >= argc) { usage(); return 1; }
  in_path = argv[i];

  /* open input and stat */
  struct stat st;
  if (stat(in_path, &st) < 0) { printf("stat failed: %s\n", in_path); return 1; }
  int fd_in = open(in_path, O_RDONLY, 0);
  if (fd_in < 0) { printf("open failed: %s\n", in_path); return 1; }

  /* open output */
  int fd_out = 1; /* stdout */
  if (out_path) {
    fd_out = open(out_path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_out < 0) { printf("open failed: %s\n", out_path); close(fd_in); return 1; }
  }

  /* seek to start offset */
  unsigned long long file_size = (unsigned long long)st.size;
  if (opt_off > file_size) opt_off = file_size;
  /* Minux9's lseek syscall exists now */
  long sr = lseek(fd_in, (long)opt_off, SEEK_SET);
  if (sr < 0) { printf("lseek failed\n"); if (fd_out!=1) close(fd_out); close(fd_in); return 1; }

  /* buffer for reading and line formatting */
  int rbuf_sz = 4096;
  unsigned char* rbuf = (unsigned char*)malloc(rbuf_sz);
  if (!rbuf) { printf("malloc failed\n"); if (fd_out!=1) close(fd_out); close(fd_in); return 1; }

  /* line buffer: each byte "xx " -> 3*width + extra spaces, ascii width + addr */
  int line_cap = 128 + (3*32) + 32;
  char* line = (char*)malloc(line_cap);
  if (!line) { printf("malloc failed\n"); free(rbuf); if (fd_out!=1) close(fd_out); close(fd_in); return 1; }

  unsigned long long abs_off = opt_off;
  unsigned long long remain = (opt_len == (unsigned long long)-1) ? (file_size - opt_off) : opt_len;

  while (remain > 0) {
    int chunk = rbuf_sz;
    if ((unsigned long long)chunk > remain) chunk = (int)remain;
    int n = read(fd_in, rbuf, chunk);
    if (n <= 0) break;

    int pos = 0;
    while (pos < n) {
      int line_bytes = width;
      if (pos + line_bytes > n) line_bytes = n - pos;

      /* build one line: "AAAAAAAA  " + hex + " |ascii|" + "\n" */
      int p = 0;
      /* 64-bit offset */
      p += snprintf(line + p, line_cap - p, "%08llx  ", (unsigned long long)(abs_off));

      /* hex bytes */
      for (int k=0; k<width; k++) {
        if (k < line_bytes) p += snprintf(line + p, line_cap - p, "%02x ", (unsigned)rbuf[pos+k]);
        else                p += snprintf(line + p, line_cap - p, "   ");
        if (k == 7) p += snprintf(line + p, line_cap - p, " ");
      }

      /* ascii */
      p += snprintf(line + p, line_cap - p, " |");
      for (int k=0; k<line_bytes; k++) {
        unsigned char c = rbuf[pos+k];
        line[p++] = (char)(is_print(c) ? c : '.');
      }
      line[p++] = '|';
      line[p++] = '\n';

      if (write_all(fd_out, line, p) < 0) { printf("write failed\n"); goto out; }

      abs_off += (unsigned long long)line_bytes;
      pos += line_bytes;
      if (abs_off - opt_off >= remain) { remain = 0; break; }
    }
    if ((unsigned) n < (unsigned)chunk) break;
    remain -= (unsigned long long)n;
  }

out:
  if (fd_out != 1) close(fd_out);
  close(fd_in);
  free(line);
  free(rbuf);
  return 0;
}

