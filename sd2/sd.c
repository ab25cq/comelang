#include <stdio.h>
#include "ff.h"

int main() {
    FATFS fs;
    FRESULT fr;

    fr = f_mount(&fs, "", 1);
    if (fr != FR_OK) {
        printf("SDカードのマウントに失敗しました: %d\n", fr);
    } else {
        printf("SDカードのマウントに成功しました。\n");
    }

    return 0;
}

