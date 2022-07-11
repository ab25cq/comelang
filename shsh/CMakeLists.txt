cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(shsh VERSION 1.0.5)

find_library(READLINE readline)

set(CMAKE_C_COMPILER "comelang" CACHE string "comelang compiler" FORCE)

add_executable(shsh src/main.c)

target_link_libraries(shsh ${READLINE})


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

install(TARGETS shsh DESTINATION bin)
install(FILES build/README.md DESTINATION share/doc/shsh)
