cmake_minimum_required(VERSION 3.10)

project(algorithms C CXX CUDA ASM)

set(CMAKE_CXX_STANDARD 23)

option(BUILD_TESTS "Build tests" ON)

enable_testing()

if (ENABLE_X86)
    add_compile_options(-DDEBUG_X86)
endif ()

add_subdirectory(algo)
add_subdirectory(lib)
add_subdirectory(math)

if (BUILD_TESTS)
    add_subdirectory(tests)
endif ()