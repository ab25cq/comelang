cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(minux)

pico_sdk_init()

add_executable(minux main.c.c)

target_compile_options(minux PRIVATE -mthumb -mcpu=cortex-m0plus -O0 -fomit-frame-pointer)

# 必要なライブラリをリンク
target_link_libraries(minux pico_stdlib hardware_gpio pico_malloc hardware_timer)

# フラッシュ設定
pico_enable_stdio_usb(minux 1)
#pico_enable_stdio_uart(minux 0)

pico_add_extra_outputs(minux)


