add_library(algo_common_lib STATIC
    DummyClass.cpp)

target_include_directories(algo_common_lib
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

add_library(HY::COMMON ALIAS algo_common_lib)