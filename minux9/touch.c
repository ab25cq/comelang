#include "minux.h"

static int ustrlen(const char* s){ int n=0; if(!s) return 0; while(s[n]) n++; return n; }
static void prints(const char* s){ write(1, s, ustrlen(s)); }

int main(int argc, char** argv)
{
    if (argc < 2) {
        prints("usage: touch FILE...\n");
        exit(1);
    }
    for (int i=1;i<argc;i++) {
        const char* path = argv[i];
        if (!path || !path[0]) continue;
        int fd = open(path, O_WRONLY | O_CREAT, 0644);
        if (fd < 0) {
            prints("touch: failed: "); prints(path); prints("\n");
            continue;
        }
        close(fd);
        // update atime/mtime to now
        utimes(path, 0xFFFFFFFFU, 0xFFFFFFFFU);
    }
    exit(0);
}

