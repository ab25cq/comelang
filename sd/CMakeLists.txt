cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(sd-test)

pico_sdk_init()

add_executable(sd-test
    main.c
    ff.c
    ffsystem.c
    ffunicode.c
    mmc_pico_spi.c
        )

target_compile_options(sd-test PRIVATE -mthumb -mcpu=cortex-m0plus -O0 -fomit-frame-pointer)

# 必要なライブラリをリンク
target_link_libraries(sd-test pico_stdlib hardware_gpio pico_malloc hardware_timer hardware_spi)

# フラッシュ設定
pico_enable_stdio_usb(sd-test 1)
#pico_enable_stdio_uart(sd-test 0)

pico_add_extra_outputs(sd-test)


