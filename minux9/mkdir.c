#include "minux.h"

static int ustrlen(const char* s) { int n=0; if(!s) return 0; while(s[n]) n++; return n; }
static void putc1(char c) { write(1, &c, 1); }
static void prints(const char* s) { write(1, s, ustrlen(s)); }

static int isdir(const char* path) {
    struct stat st; if (stat(path, &st) < 0) return 0; return st.type == T_DIR;
}

// mkdir -p implementation
static int mkdir_p(const char* path, int mode)
{
    if (!path || !path[0]) return -1;
    char accum[256]; int ap = 0; accum[0] = '\0';
    const char* s = path;
    if (*s == '/') { accum[ap++] = '/'; accum[ap] = '\0'; while (*s=='/') s++; }
    while (*s) {
        char name[64]; int ni=0;
        while (s[0] && s[0] != '/' && ni < (int)sizeof(name)-1) { name[ni++] = *s++; }
        name[ni] = '\0';
        while (*s == '/') s++;
        if (ni == 0) continue;
        if (!(ap==1 && accum[0]=='/')) { if (ap < (int)sizeof(accum)-1) accum[ap++] = '/'; }
        for (int k=0; k<ni && ap < (int)sizeof(accum)-1; k++) accum[ap++] = name[k];
        accum[ap] = '\0';
        if (isdir(accum)) continue;
        if (mkdir(accum, mode) < 0) return -1;
    }
    return 0;
}

int main(int argc, char** argv)
{
    int parents = 0; int first_path = 1; int errs = 0;
    for (int i=1; i<argc; i++) {
        if (argv[i] && argv[i][0]=='-' && argv[i][1]) {
            for (int k=1; argv[i][k]; k++) {
                if (argv[i][k]=='p') parents = 1;
                else { prints("mkdir: invalid option\n"); return 1; }
            }
        } else {
            first_path = i; break;
        }
    }
    if (argc <= first_path) { prints("mkdir: missing operand\n"); return 1; }

    for (int i = first_path; i < argc; i++) {
        const char* path = argv[i];
        if (!path || !path[0]) { prints("mkdir: invalid path\n"); errs = 1; continue; }
        int rc = parents ? mkdir_p(path, 0755) : mkdir(path, 0755);
        if (rc < 0) { prints("mkdir: failed\n"); errs = 1; }
    }
    return errs ? 1 : 0;
}

