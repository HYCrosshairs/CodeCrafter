add_executable(TEST_SortAlgos
    TestSortAlgos.cpp)

target_link_libraries(TEST_SortAlgos
    PRIVATE
        CppUTest::CppUTest
        CppUTest::CppUTestExt
        HY::Sort
)
