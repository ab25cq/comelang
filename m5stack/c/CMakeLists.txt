cmake_minimum_required(VERSION 3.5)

# プロジェクト名
project(m5stack_uart)

# ESP-IDFを使用する
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# プロジェクトのメインソース
set(PROJECT_SRCS main.c)

# プロジェクト名
set(PROJECT_NAME "m5stack_uart")

# プロジェクトを登録
project(m5stack_uart)

