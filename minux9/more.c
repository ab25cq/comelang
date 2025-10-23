#include "minux.h"

static int strlen_(const char* s) { int n=0; while (s && s[n]) n++; return n; }
static void prints(const char* s) { if (s) write(1, s, strlen_(s)); }
static int min_(int a,int b){return a<b?a:b;}

static int find_pattern_in(const char* prev, int prev_len, const char* buf, int len, const char* pat, int patlen)
{
    if (!pat || patlen <= 0) return -1;
    char tmp[256 + 64]; // 256 chunk + up to 63 overlap
    int tlen = 0;
    if (prev && prev_len > 0) {
        int k = min_(prev_len, (int)sizeof(tmp));
        for (int i=0;i<k;i++) tmp[tlen++] = prev[i];
    }
    int room = (int)sizeof(tmp) - tlen;
    int k2 = (len < room) ? len : room;
    for (int i=0;i<k2;i++) tmp[tlen++] = buf[i];
    for (int i=0; i+patlen <= tlen; i++) {
        int j=0; while (j<patlen && tmp[i+j]==pat[j]) j++;
        if (j==patlen) {
            int pos_in_buf = i - prev_len;
            if (pos_in_buf < 0) pos_in_buf = 0; // match crossing boundary
            return pos_in_buf;
        }
    }
    return -1;
}

static int read_line_ctrl(int ctrl_fd, char* out, int max)
{
    int n=0; char c;
    while (n < max-1) {
        int r = read(ctrl_fd, &c, 1);
        if (r <= 0) break;
        if (c == '\r' || c == '\n') break;
        out[n++] = c;
    }
    out[n] = '\0';
    return n;
}

static int show_stream(int data_fd, int interactive, int ctrl_fd, int page_lines, const char* init_pat)
{
    char buf[256];
    int lines = 0;
    int n;
    int quit = 0;
    char pattern[64]; int have_pat = 0; int patlen = 0;
    if (init_pat && init_pat[0]) {
        int i=0; while (init_pat[i] && i < (int)sizeof(pattern)-1) { pattern[i]=init_pat[i]; i++; }
        pattern[i]='\0'; have_pat=1; patlen=i;
    }
    int seeking = have_pat;
    char tail[64]; int tail_len = 0;

    while (!quit && (n = read(data_fd, buf, sizeof(buf))) > 0) {
        if (seeking && have_pat) {
            int pos = find_pattern_in(tail, tail_len, buf, n, pattern, patlen);
            if (pos >= 0) {
                for (int i=pos; i<n; i++) {
                    char c = buf[i];
                    write(1, &c, 1);
                    if (c == '\n' && interactive) {
                        lines++;
                        if (lines >= page_lines) {
                            prints("-- More -- (SPACE:page, ENTER:line, /:search, n:next, q:quit)\r\n");
                            char k; int r = read(ctrl_fd, &k, 1);
                            if (r <= 0) { quit=1; break; }
                            if (k == 'q' || k == 'Q') { quit=1; break; }
                            if (k == '\r' || k == '\n') { lines = page_lines - 1; }
                            else if (k == '/') {
                                prints("pattern: ");
                                patlen = read_line_ctrl(ctrl_fd, pattern, sizeof(pattern));
                                have_pat = (patlen > 0);
                                seeking = have_pat;
                                lines = 0;
                            } else if (k == 'n' || k == 'N') {
                                if (have_pat) seeking = 1;
                                lines = 0;
                            } else { lines = 0; }
                        }
                    }
                }
                seeking = 0;
            }
            int keep = (patlen>1)?(patlen-1):0;
            if (keep > n) keep = n;
            tail_len = keep;
            for (int i=0;i<keep;i++) tail[i] = buf[n-keep+i];
            if (seeking) continue;
        }
        for (int i = 0; i < n; i++) {
            char c = buf[i];
            write(1, &c, 1);
            if (c == '\n') {
                lines++;
                if (interactive && lines >= page_lines) {
                    prints("-- More -- (SPACE:page, ENTER:line, /:search, n:next, q:quit)\r\n");
                    char k;
                    int r = read(ctrl_fd, &k, 1);
                    if (r <= 0) { quit = 1; break; }
                    if (k == 'q' || k == 'Q') { quit = 1; break; }
                    if (k == '\r' || k == '\n') {
                        lines = page_lines - 1;
                    } else if (k == '/') {
                        prints("pattern: ");
                        patlen = read_line_ctrl(ctrl_fd, pattern, sizeof(pattern));
                        have_pat = (patlen > 0);
                        seeking = have_pat;
                        lines = 0;
                    } else if (k == 'n' || k == 'N') {
                        if (have_pat) seeking = 1;
                        lines = 0;
                    } else {
                        lines = 0;
                    }
                }
            }
        }
        int keep = (patlen>1)?(patlen-1):0;
        if (keep > n) keep = n;
        tail_len = keep;
        for (int i=0;i<keep;i++) tail[i] = buf[n-keep+i];
    }
    return 0;
}

int main(int argc, char** argv, char** envp)
{
    int page_lines = 22; // default
    const char* init_pat = 0;

    int argi = 1;
    while (argi < argc) {
        const char* a = argv[argi];
        if (a[0] == '-' && a[1] == 'n') {
            int num = 0;
            if (a[2]) {
                for (int i=2; a[i]>='0'&&a[i]<='9'; i++) num = num*10 + (a[i]-'0');
                if (num > 0) page_lines = num;
                argi++;
                continue;
            } else if (argi+1 < argc) {
                const char* b = argv[argi+1];
                for (int i=0; b[i]>='0'&&b[i]<='9'; i++) num = num*10 + (b[i]-'0');
                if (num > 0) page_lines = num;
                argi += 2;
                continue;
            } else { argi++; continue; }
        } else if (a[0] == '/' && a[1]) {
            init_pat = a+1; argi++; continue;
        } else {
            break;
        }
    }

    int interactive = isatty(1);
    int ctrl_fd = isatty(0) ? 0 : open("/dev/tty", O_RDONLY, 0);
    if (argc - argi <= 0) {
        show_stream(0, interactive, ctrl_fd >= 0 ? ctrl_fd : 0, page_lines, init_pat);
        exit(0);
    }

    for (int i = argi; i < argc; i++) {
        const char* path = argv[i];
        int fd = open(path, O_RDONLY, 0);
        if (fd < 0) { prints("more: cannot open "); prints(path); prints("\r\n"); continue; }
        if (argc - argi > 1) { prints("==> "); prints(path); prints(" <==\r\n"); }
        show_stream(fd, interactive, ctrl_fd >= 0 ? ctrl_fd : 0, page_lines, init_pat);
        close(fd);
        if (i+1 < argc && argc - argi > 1) prints("\r\n");
    }
    exit(0);
}
