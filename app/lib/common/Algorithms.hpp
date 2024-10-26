#pragma once

namespace algo::common::lib
{

template <typename T>
T minmax(T min, T max, T value)
{
    if (value > max)
        return max;
    else if (value < min)
        return min;
    else
        return value;
}

} // namespace algo::common::lib
