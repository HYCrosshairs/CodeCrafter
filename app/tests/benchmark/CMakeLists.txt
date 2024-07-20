add_executable(TEST_SortBenchmark
    TestSortBenchmark.cpp)

target_link_libraries(TEST_SortBenchmark
    PRIVATE
        benchmark::benchmark
        HY::Sort
)