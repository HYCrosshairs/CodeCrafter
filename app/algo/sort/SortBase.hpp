#pragma once

#include <cstddef>

namespace app::algo::sort
{

template <typename self>
class SortBase
{
public:
    template <typename T>
    void sort(T in[], size_t length)
    {
        static_cast<self*>(this)->sort(in, length);
    };
};

} // namespace app::algo::sort
