cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(led_project)

pico_sdk_init()

add_executable(led led2.c)

# 必要なライブラリをリンク
target_link_libraries(led pico_stdlib hardware_gpio)

target_include_directories(led PRIVATE $ENV{PICO_SDK_PATH}/src/common/pico_include)


# フラッシュ設定
pico_enable_stdio_usb(led 1)
pico_enable_stdio_uart(led 1)
pico_add_extra_outputs(led)


