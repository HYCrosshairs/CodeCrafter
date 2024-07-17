#pragma once

#include "SortBase.hpp"

//#include <algorithm>

namespace app::algo::sort
{
class BubbleSort : public SortBase<BubbleSort>
{
public:
    template<typename T>
    void sort(T in[], size_t length)
    {
        for (int idx = 0; idx < length; ++idx)
        {
            for (int jdx = 0; jdx < length - idx - 1; ++jdx)
            {
                if (in[jdx] > in[jdx + 1])
                    std::swap(in[jdx], in[jdx + 1]);
            }
        }
    }
};
} // namespace app::algo::sort
