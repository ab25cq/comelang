// ランナー: 有効なリテラルのテストは成功すること、
// 無効な 0888 を含むソースはコンパイルに失敗することを確認し、
// すべて満たせば "OK" を表示します。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(int argc, char **argv) {
    char basedir[1024];
    dir_from_argv0(argv[0], basedir, sizeof(basedir));

    const char *cc = "comelang";
    if (!cc || !*cc) cc = "cc";

    char valid_src[1200];
    char invalid_src[1200];
    char valid_bin[1200];
    char invalid_bin[1200];

    snprintf(valid_src, sizeof(valid_src), "%s/test_valid.c", basedir);
    snprintf(invalid_src, sizeof(invalid_src), "%s/test_invalid_0888.c", basedir);
    snprintf(valid_bin, sizeof(valid_bin), "%s/.valid_bin", basedir);
    snprintf(invalid_bin, sizeof(invalid_bin), "%s/.invalid_bin", basedir);

    char cmd[4096];
    int rc;

    // 1) 有効ソースをビルド
    snprintf(cmd, sizeof(cmd), "%s -std=c11 -Wall -Wextra -s -o '%s' '%s' -lm", cc, valid_bin, valid_src);
    rc = run_cmd(cmd);
    if (rc != 0) {
        fprintf(stderr, "build(valid) failed: rc=%d\n", rc);
        puts("NG");
        return 1;
    }

    // 2) 実行して終了コード 0 を期待
    snprintf(cmd, sizeof(cmd), "'%s'", valid_bin);
    rc = run_cmd(cmd);
    if (rc != 0) {
        fprintf(stderr, "run(valid) failed: rc=%d\n", rc);
        puts("NG");
        return 1;
    }

    // 3) 無効ソースはビルドが失敗することを期待
    snprintf(cmd, sizeof(cmd), "%s -std=c11 -Wall -Wextra -Werror -o '%s' '%s'", cc, invalid_bin, invalid_src);
    rc = run_cmd(cmd);
    if (rc == 0) {
        // もし通ってしまったら NG
        fprintf(stderr, "build(invalid) unexpectedly succeeded\n");
        puts("NG");
        return 1;
    }

    // すべて期待通り
    puts("OK");
    return 0;
}

