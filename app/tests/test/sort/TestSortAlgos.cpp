#include "CppUTest/CommandLineTestRunner.h"

#include "BubbleSort.hpp"

using namespace app::algo::sort;

TEST_GROUP(TestSort)
{
    SortBase<BubbleSort>* bubbleSort = new BubbleSort();

    static const size_t length = 5;

    int data[length] = {8, -1, 7, 0, -5};

    int expect[length] = {-5, -1, 0, 7, 8};

};

TEST(TestSort, bubbleSortTest)
{
    bubbleSort->sort(data, length);

    for (int idx = 0; idx < length; ++idx)
    {
        CHECK_EQUAL(expect[idx], data[idx]);
    }

    delete bubbleSort;
}

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}
