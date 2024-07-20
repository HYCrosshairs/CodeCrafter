#include "CppUTest/CommandLineTestRunner.h"

#include "Algorithms.hpp"

using namespace algo::common::lib;

TEST_GROUP(TestCommonLib)
{

};

TEST(TestCommonLib, minmaxTest)
{
    int min = -10;
    int max = 10;
    int value = 7;

    int expectMin = -10;
    int expectMax = 10;
    int expectValue = value;


    int result = minmax(min, max, value);

    CHECK_EQUAL(expectValue, result);

    result = minmax(min, max, -77);

    CHECK_EQUAL(expectMin, result);

    result = minmax(min, max, 77);

    CHECK_EQUAL(expectMax, result);
}

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}