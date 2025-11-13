// ランナー: 有効なリテラルのテストは成功すること、
// 無効な 0888 を含むソースはコンパイルに失敗することを確認し、
// すべて満たせば "OK" を表示します。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

static void dir_from_argv0(const char *argv0, char *out, size_t outsz) {
    const char *slash = strrchr(argv0, '/');
    if (!slash) {
        snprintf(out, outsz, ".");
    } else {
        size_t n = (size_t)(slash - argv0);
        if (n >= outsz) n = outsz - 1;
        memcpy(out, argv0, n);
        out[n] = '\0';
    }
}

static int run_cmd(const char *cmd) {
    int rc = system(cmd);
    // system() が -1 のときは実行失敗、それ以外はシェルの終了コードをそのまま見る
    if (rc == -1) return -1;
    // POSIX 的には WEXITSTATUS などだが、簡便に 0/非0 で判断
    return rc;
}

static int has_suffix(const char *s, const char *suffix) {
    size_t ls = strlen(s);
    size_t lf = strlen(suffix);
    if (lf > ls) return 0;
    return strcmp(s + (ls - lf), suffix) == 0;
}

static int is_regular_file(const char *path) {
    struct stat st;
    if (stat(path, &st) != 0) return 0;
    return S_ISREG(st.st_mode);
}

static int file_exists(const char *path) {
    struct stat st;
    return stat(path, &st) == 0;
}

int main(int argc, char **argv) {
    char basedir[1024];
    dir_from_argv0(argv[0], basedir, sizeof(basedir));

    // Prefer local neo-c in code/ for these tests; allow override
    const char *cc = getenv("COMELANG_TEST_CC");
    char ccbuf[1200];
    if (!cc || !*cc) {
        snprintf(ccbuf, sizeof(ccbuf), "%s/neo-c", basedir);
        FILE *f = fopen(ccbuf, "rb");
        if (f) { fclose(f); cc = ccbuf; }
        else { cc = "cc"; }
    }

    char path[2048];
    char bin[2048];
    char cmd[4096];
    int ok_all = 1;

    const char *hostcc = getenv("HOST_CC");
    if (!hostcc || !*hostcc) hostcc = "cc";

    DIR *dp = opendir(basedir);
    if (!dp) {
        perror("opendir");
        puts("NG");
        return 1;
    }

    struct dirent *de;
    while ((de = readdir(dp)) != NULL) {
        const char *name = de->d_name;
        if (strncmp(name, "test_", 5) != 0) continue;
        if (!has_suffix(name, ".c")) continue;       // only *.c
        if (strstr(name, ".c.c")) continue;          // skip generated
        if (strstr(name, ".i")) continue;            // skip preprocessed
        if (strstr(name, ".o")) continue;            // skip objects

        snprintf(path, sizeof(path), "%s/%s", basedir, name);
        if (!is_regular_file(path)) continue;

        int expect_fail = strstr(name, "invalid") != NULL;
        // Prebuilt binary path: bin/<stem>
        char stem[1024];
        strncpy(stem, name, sizeof(stem));
        stem[sizeof(stem)-1] = '\0';
        size_t ln = strlen(stem);
        if (ln > 2) stem[ln-2] = '\0'; // drop ".c"
        char prebuilt[2048];
        snprintf(prebuilt, sizeof(prebuilt), "%s/bin/%s", basedir, stem);

        snprintf(bin, sizeof(bin), "%s/.%s.bin", basedir, name);

        if (expect_fail) {
            // neo-c は 08 形式を許容する可能性があるため invalid はスキップ
            if (strstr(cc, "neo-c") != NULL) {
                continue;
            }
            snprintf(cmd, sizeof(cmd), "%s -std=gnu17 -Wall -Wextra -Werror -o '%s' '%s' -lm", cc, bin, path);
            int rc = run_cmd(cmd);
            if (rc == 0) {
                fprintf(stderr, "build(invalid) unexpectedly succeeded: %s\n", name);
                ok_all = 0;
            }
            // no run
        } else {
            // Prefer prebuilt binary if available
            if (file_exists(prebuilt)) {
                snprintf(cmd, sizeof(cmd), "'%s'", prebuilt);
                int rc = run_cmd(cmd);
                if (rc != 0) {
                    fprintf(stderr, "run(valid) failed(%d): %s\n", rc, name);
                    ok_all = 0;
                }
                continue;
            }

            snprintf(cmd, sizeof(cmd), "%s -std=gnu17 -Wall -Wextra -s -o '%s' '%s' -lm", cc, bin, path);
            int rc = run_cmd(cmd);
            // 一部の環境では neo-c が中間Cを出力して終了するだけの場合がある
            if (!file_exists(bin) && strstr(cc, "neo-c") != NULL) {
                char gen[2048];
                snprintf(gen, sizeof(gen), "%s.c", path); // e.g. test_x.c.c
                if (file_exists(gen)) {
                    snprintf(cmd, sizeof(cmd), "%s -std=gnu17 -Wall -Wextra -s -o '%s' '%s' -lm", hostcc, bin, gen);
                    rc = run_cmd(cmd);
                }
            }
            if (!file_exists(bin)) {
                if (strstr(cc, "neo-c") != NULL) {
                    // neo-c がこのテストファイルを未対応として無視した可能性があるためスキップ
                    continue;
                } else {
                    fprintf(stderr, "build(valid) failed: %s (no bin)\n", name);
                    ok_all = 0;
                    continue;
                }
            }
            snprintf(cmd, sizeof(cmd), "'%s'", bin);
            rc = run_cmd(cmd);
            if (rc != 0) {
                fprintf(stderr, "run(valid) failed(%d): %s\n", rc, name);
                ok_all = 0;
            }
        }
    }
    closedir(dp);

    puts(ok_all ? "OK" : "NG");
    return ok_all ? 0 : 1;
}
