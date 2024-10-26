add_library(algo_math_complex_lib STATIC
    Complex.cpp
)

target_include_directories(algo_math_complex_lib
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

add_library(HY::COMPLEX ALIAS algo_math_complex_lib)