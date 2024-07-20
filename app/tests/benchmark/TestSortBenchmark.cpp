#include <benchmark/benchmark.h>

#include "SelectionSort.hpp"
#include "BubbleSort.hpp"

static void BM_SelectionSort(benchmark::State& state)
{
    const size_t length = 10;

    int data[length] = {8, -1, 7, 0, -5, 77, -10, -77, 0, 777};

    app::algo::sort::SelectionSort selectionSort;
    // Perform setup here
    for (auto _ : state)
    {
        selectionSort.sort(data, length);
    }
}

static void BM_BubbleSort(benchmark::State& state)
{
    const size_t length = 10;

    int data[length] = {8, -1, 7, 0, -5, 77, -10, -77, 0, 777};

    app::algo::sort::BubbleSort bubbleSort;
    // Perform setup here
    for (auto _ : state)
    {
        bubbleSort.sort(data, length);
    }
}

BENCHMARK(BM_SelectionSort);
BENCHMARK(BM_BubbleSort);

// Run the benchmark
BENCHMARK_MAIN();