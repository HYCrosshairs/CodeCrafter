#pragma once

#include "SortBase.hpp"

namespace app::algo::sort
{
class SelectionSort : public SortBase<SelectionSort>
{
public:
    template<typename T>
    void sort(T in[], size_t length)
    {
        for (int idx = 0; idx < length - 1; ++idx)
        {
            int jdxmin = idx;
            for (int jdx = idx + 1; jdx < length; ++jdx)
            {
                if(in[jdxmin] > in[jdx])
                {
                    jdxmin = jdx;
                }
            }
            if (jdxmin != idx)
                std::swap(in[idx], in[jdxmin]);
        }
    }
};
} // namespace app::algo::sort
