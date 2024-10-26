add_executable(TEST_MathLib
        TestMathLib.cpp)

target_link_libraries(TEST_MathLib
    PRIVATE
        CppUTest::CppUTest
        CppUTest::CppUTestExt
        HY::COMPLEX
)
