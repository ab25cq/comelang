cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(zed VERSION 1.0.5)

set(CMAKE_C_COMPILER "comelang" CACHE string "comelang compiler" FORCE)

add_executable(zed  src/01int.c src/02str.c src/03var.c src/04if.c src/05loop.c src/06print.c src/07regex.c src/08list.c src/09fun.c src/main.c )


if(DEFINED CMAKE_INSTALL_PREFIX)
    set(CMAKE_INSTALL_PREFIX /usr/local)
endif()

ADD_DEFINITIONS(-DPREFIX="/usr/local")

if(${CMAKE_SYSTEM} MATCHES Darwin)
    add_compile_definitions(__DARWIN__)
elseif(${CMAKE_SYSTEM} MATCHES Darwin)
    add_compile_definitions(__DARWIN__)
endif()

add_custom_target(readme
    COMMAND cp ../README.md .
)

install(TARGETS zed DESTINATION bin)
install(FILES build/README.md DESTINATION share/doc/zed)
