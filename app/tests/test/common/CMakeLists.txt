add_executable(TEST_Common_lib
    TestCommonLib.cpp)

target_link_libraries(TEST_Common_lib
    PRIVATE
        CppUTest::CppUTest
        CppUTest::CppUTestExt
        HY::COMMON
)
