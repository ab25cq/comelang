cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(led)

pico_sdk_init()

add_executable(led main.c)

target_compile_options(led PRIVATE -mthumb -mcpu=cortex-m0plus)

# 必要なライブラリをリンク
target_link_libraries(led pico_stdlib hardware_gpio pico_malloc)

# フラッシュ設定
#pico_enable_stdio_usb(led 1)
#pico_enable_stdio_uart(led 0)

pico_add_extra_outputs(led)


