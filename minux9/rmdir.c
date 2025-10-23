#include "minux.h"

static int ustrlen(const char* s) { int n=0; if(!s) return 0; while(s[n]) n++; return n; }
static void prints(const char* s) { write(1, s, ustrlen(s)); }

static void strip_trailing_slashes(char* path) {
    int n = 0; while (path[n]) n++;
    while (n > 1 && path[n-1] == '/') { path[--n] = '\0'; }
}

static void dirname_buf(const char* path, char* out, int outsz) {
    // Copy and strip trailing
    int n=0; while (path[n] && n<outsz-1) { out[n]=path[n]; n++; } out[n]='\0';
    strip_trailing_slashes(out);
    // find last '/'
    int i=n-1; while (i>0 && out[i] != '/') i--;
    if (i==0) { out[1]='\0'; return; }
    out[i] = '\0';
}

int main(int argc, char** argv)
{
    int parents = 0; int first_path = 1; int errs = 0;
    for (int i=1; i<argc; i++) {
        if (argv[i] && argv[i][0]=='-' && argv[i][1]) {
            for (int k=1; argv[i][k]; k++) {
                if (argv[i][k]=='p') parents = 1; // POSIX rmdir -p
                else { prints("rmdir: invalid option\n"); return 1; }
            }
        } else { first_path = i; break; }
    }
    if (argc <= first_path) { prints("rmdir: missing operand\n"); return 1; }

    for (int i = first_path; i < argc; i++) {
        const char* path = argv[i];
        if (!path || !path[0]) { prints("rmdir: invalid path\n"); errs=1; continue; }

        // Try to remove the exact path
        if (rmdir(path) < 0) { prints("rmdir: failed\n"); errs = 1; continue; }

        if (parents) {
            // remove parent components while possible
            char cur[256]; int n=0; while(path[n]&&n<(int)sizeof(cur)-1){cur[n]=path[n];n++;} cur[n]='\0';
            while (1) {
                strip_trailing_slashes(cur);
                if (cur[0]=='/' && cur[1]=='\0') break; // reached root
                dirname_buf(cur, cur, sizeof(cur));
                if (cur[0]=='/' && cur[1]=='\0') break; // don't remove root
                if (rmdir(cur) < 0) break; // stop when non-empty or error
            }
        }
    }

    return errs ? 1 : 0;
}

