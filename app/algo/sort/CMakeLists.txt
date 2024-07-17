add_library(app_algo_sort_lib INTERFACE)

target_include_directories(app_algo_sort_lib
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(app_algo_sort_lib
    INTERFACE
)

add_library(HY::Sort ALIAS app_algo_sort_lib)
