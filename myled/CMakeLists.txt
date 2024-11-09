cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(led_project)

pico_sdk_init()

add_executable(led led.c)

# 必要なライブラリをリンク
target_link_libraries(led pico_stdlib)

# フラッシュ設定
pico_enable_stdio_usb(led 1)
pico_enable_stdio_uart(led 1)
pico_add_extra_outputs(led)


