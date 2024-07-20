#include "CppUTest/CommandLineTestRunner.h"

#include "BubbleSort.hpp"
#include "SelectionSort.hpp"

using namespace app::algo::sort;

TEST_GROUP(TestSort)
{
    BubbleSort bubbleSort;

    SelectionSort selectionSort;

    static const size_t length = 5;

    int data[length] = {8, -1, 7, 0, -5};

    int expect[length] = {-5, -1, 0, 7, 8};

};

TEST(TestSort, bubbleSortTest)
{
    bubbleSort.sort(data, length);

    for (int idx = 0; idx < length; ++idx)
    {
        CHECK_EQUAL(expect[idx], data[idx]);
    }
}

TEST(TestSort, selectionSortTest)
{
    selectionSort.sort(data, length);

    for (int idx = 0; idx < length; ++idx)
    {
        CHECK_EQUAL(expect[idx], data[idx]);
    }
}

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}
