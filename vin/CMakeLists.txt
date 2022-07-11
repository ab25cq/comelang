cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(vin VERSION 1.0.5)

set(CMAKE_C_COMPILER "comelang" CACHE string "comelang compiler" FORCE)

add_executable(vin src/01init.c src/02base.c src/03insert_mode.c src/04word.c src/05undo.c src/06file.c src/07yank.c src/08visual.c src/09search.c src/10edit.c src/11move.c src/12command.c src/13completion.c src/14dot.c src/16mark.c src/17hvisual.c src/18vvisual.c src/19rewrite_mode.c src/20completion-comelang.c src/main.c)


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

install(TARGETS vin DESTINATION bin)
install(FILES build/README.md DESTINATION share/doc/vin)

