cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(comalang VERSION 2.2.1)

find_package(LLVM REQUIRED CONFIG)

find_library(GC gc)
find_library(PCRE pcre)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${PCRE_INCLUDE_DIR})
include_directories(${LLVM_INCLUDE_DIR})

add_definitions(${LLVM_DEFINITIONS})

llvm_map_components_to_libnames(llvm_libs support core irreader)

add_executable(comelang src/main.c src/parser_value.c src/parser_lib.c src/parser_type.c src/parser_function.c src/parser_loop.c src/parser_var.c src/parser_exp.c src/parser_op.c src/alignment.c src/buffer.c src/xfunc.c src/node.c src/node_function_call.c src/node_function_lib.c src/node_function.c src/node_function_come.c src/node_compile.c src/node_loop.c src/node_op.c src/node_value.c src/node_var.c src/vtable.c src/node_type.c src/klass.c src/node_block.c src/typedef.c src/compiler.c src/macro.c)

target_link_libraries(comelang ${llvm_libs})
target_link_libraries(comelang ${GC})
target_link_libraries(comelang ${PCRE})

execute_process (
    COMMAND which llvm-config-11
    OUTPUTVARIABLE clnagVersion11
)
    
execute_process (
    COMMAND echo LLVM_VERSION
    COMMAND llvm-config --version | sed 's/\\([0-9]*\\).[0-9]*.[0-9]*/\\1/'
    OUTPUTVARIABLE llvmVersion
)


if(clangVersion11)
    ADD_DEFINITIONS(-DCLANG="clang-11")
else()
    ADD_DEFINITIONS(-DCLANG="clang")
endif()

add_compile_definitions(LLVM_VERSION llvmVersion)

#ADD_DEFINITIONS(-DLLVM_VERSION=${llvmVersion})

if(DEFINED CMAKE_INSTALL_PREFIX)
    set(CMAKE_INSTALL_PREFIX /usr/local)
endif()

ADD_DEFINITIONS(-DPREFIX="/usr/local")

if(${CMAKE_SYSTEM} MATCHES Darwin)
    add_compile_definitions(__DARWIN__)
    ADD_DEFINITIONS(-Isrc/ -I.  $CFLAGS -I/usr/local/opt/boehmgc/include -I/usr/local/opt/llvm/include)
elseif(${CMAKE_SYSTEM} MATCHES Darwin)
    ADD_DEFINITIONS(-Isrc/ -I.  $CFLAGS -I/usr/local/opt/boehmgc/include -I/usr/local/opt/llvm/include)
    add_compile_definitions(__DARWIN__)
endif()

add_custom_target(comelang.o
    COMMAND cp ../README.md .
    COMMAND cp ../comelang.h .
    COMMAND cp ../comelang.c .
    COMMAND cp ../comelang2.c .
    COMMAND cp ../comelang3.c .
    COMMAND cp ../comelang4.c .
    COMMAND cp ../comelang5.c .
    COMMAND cp ../comelang6.c .
    COMMAND  ./comelang -o comelang.o -c -no-gc comelang.c 
    COMMAND  ./comelang -o comelang2.o -c -no-gc comelang2.c 
    COMMAND  ./comelang -o comelang3.o -c -no-gc comelang3.c 
    COMMAND  ./comelang -o comelang4.o -c -no-gc comelang4.c 
    COMMAND  ./comelang -o comelang5.o -c -no-gc comelang5.c 
    COMMAND  ./comelang -o comelang-gc.o -c -gc comelang.c 
    COMMAND  ./comelang -o comelang2-gc.o -c -gc comelang2.c 
    COMMAND  ./comelang -o comelang3-gc.o -c -gc comelang3.c 
    COMMAND  ./comelang -o comelang4-gc.o -c -gc comelang4.c 
    COMMAND  ./comelang -o comelang5-gc.o -c -gc comelang5.c 
    COMMAND  clang -o comelang6.o -c comelang6.c 
)

add_custom_target(test DEPENDS debug-test gc-test gc-debug-test
    COMMAND cp -a ../code .
    COMMAND echo "Compile to gc test code..."
    COMMAND ./comelang -no-gc -clang code/HelloWorld.c
    COMMAND ./code/HelloWorld
    COMMAND ./comelang -no-gc code/HelloWorld3.c
    COMMAND ./code/HelloWorld3
    COMMAND ./comelang -no-gc code/HelloWorld4.c
    COMMAND ./code/HelloWorld4
    COMMAND ./comelang -no-gc code/HelloWorld8.c
    COMMAND ./code/HelloWorld8
    COMMAND ./comelang -no-gc code/HelloWorld9.c
    COMMAND ./code/HelloWorld9
    COMMAND ./comelang -no-gc code/HelloWorld10.c
    COMMAND ./code/HelloWorld10
    COMMAND ./comelang -no-gc code/HelloWorld11.c
    COMMAND ./code/HelloWorld11
    COMMAND ./comelang -no-gc code/HelloWorld12.c
    COMMAND ./code/HelloWorld12
    COMMAND ./comelang -no-gc code/HelloWorld13.c
    COMMAND ./code/HelloWorld13
)

add_custom_target(debug-test 
    COMMAND cp -a ../code .
    COMMAND echo "Compile to gc test code..."
    COMMAND ./comelang -no-gc -clang -g code/HelloWorld.c
    COMMAND ./code/HelloWorld
    COMMAND ./comelang -no-gc -g code/HelloWorld3.c
    COMMAND ./code/HelloWorld3
    COMMAND ./comelang -no-gc -g code/HelloWorld4.c
    COMMAND ./code/HelloWorld4
    COMMAND ./comelang -no-gc -g code/HelloWorld8.c
    COMMAND ./code/HelloWorld8
    COMMAND ./comelang -no-gc -g code/HelloWorld9.c
    COMMAND ./code/HelloWorld9
    COMMAND ./comelang -no-gc -g code/HelloWorld10.c
    COMMAND ./code/HelloWorld10
    COMMAND ./comelang -no-gc -g code/HelloWorld11.c
    COMMAND ./code/HelloWorld11
    COMMAND ./comelang -no-gc -g code/HelloWorld12.c
    COMMAND ./code/HelloWorld12
    COMMAND ./comelang -no-gc -g code/HelloWorld13.c
    COMMAND ./code/HelloWorld13
)

add_custom_target(gc-test 
    COMMAND cp -a ../code .
    COMMAND echo "Compile to gc test code..."
    COMMAND ./comelang -no-gc -clang code/HelloWorld.c
    COMMAND ./code/HelloWorld
    COMMAND ./comelang -gc code/HelloWorld3.c
    COMMAND ./code/HelloWorld3
    COMMAND ./comelang -gc code/HelloWorld4.c
    COMMAND ./code/HelloWorld4
    COMMAND ./comelang -gc code/HelloWorld8.c
    COMMAND ./code/HelloWorld8
    COMMAND ./comelang -gc code/HelloWorld9.c
    COMMAND ./code/HelloWorld9
    COMMAND ./comelang -gc code/HelloWorld10.c
    COMMAND ./code/HelloWorld10
    COMMAND ./comelang -gc code/HelloWorld11.c
    COMMAND ./code/HelloWorld11
    COMMAND ./comelang -gc code/HelloWorld12.c
    COMMAND ./code/HelloWorld12
    COMMAND ./comelang -gc code/HelloWorld13.c
    COMMAND ./code/HelloWorld13
)

add_custom_target(gc-debug-test 
    COMMAND cp -a ../code .
    COMMAND echo "Compile to gc test code..."
    COMMAND ./comelang -no-gc -clang -g code/HelloWorld.c
    COMMAND ./code/HelloWorld
    COMMAND ./comelang -gc -g code/HelloWorld3.c
    COMMAND ./code/HelloWorld3
    COMMAND ./comelang -gc -g code/HelloWorld4.c
    COMMAND ./code/HelloWorld4
    COMMAND ./comelang -gc -g code/HelloWorld8.c
    COMMAND ./code/HelloWorld8
    COMMAND ./comelang -gc -g code/HelloWorld9.c
    COMMAND ./code/HelloWorld9
    COMMAND ./comelang -gc -g code/HelloWorld10.c
    COMMAND ./code/HelloWorld10
    COMMAND ./comelang -gc -g code/HelloWorld11.c
    COMMAND ./code/HelloWorld11
    COMMAND ./comelang -gc -g code/HelloWorld12.c
    COMMAND ./code/HelloWorld12
    COMMAND ./comelang -gc -g code/HelloWorld13.c
    COMMAND ./code/HelloWorld13
)

install(TARGETS comelang DESTINATION bin)
install(FILES build/comelang.h DESTINATION include)
install(FILES build/comelang.o DESTINATION lib)
install(FILES build/comelang2.o DESTINATION lib)
install(FILES build/comelang3.o DESTINATION lib)
install(FILES build/comelang4.o DESTINATION lib)
install(FILES build/comelang5.o DESTINATION lib)
install(FILES build/comelang6.o DESTINATION lib)
install(FILES build/comelang-gc.o DESTINATION lib)
install(FILES build/comelang2-gc.o DESTINATION lib)
install(FILES build/comelang3-gc.o DESTINATION lib)
install(FILES build/comelang4-gc.o DESTINATION lib)
install(FILES build/comelang5-gc.o DESTINATION lib)
install(FILES build/README.md DESTINATION share/doc/comelang)
