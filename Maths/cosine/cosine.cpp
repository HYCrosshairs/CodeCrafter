#include "cosine.hpp"

using namespace maths;


cosine::cosine(double number, unsigned int precision) : _number{number}, _precision{precision}
{
}

cosine::~cosine()
{
}

double cosine::showResultPower()
{
    return power(_number, _precision);
}

unsigned int cosine::showResultFacto()
{
    return facto(_precision);
}

double cosine::power(double base, unsigned int n)
{
    double result{1};

    for (unsigned int i = 1; i <= n; i++)
    {
        result *= base;
    }
    return result;
}

unsigned int cosine::facto(unsigned int fct)
{
    unsigned int result{1};

    for (unsigned int i = 2; i <= fct; i++)
    {
        result = result * i;
    }

    return result;    
}

double cosine::calculateCosineTaylorSeries()
{
    double some{0};

    for (unsigned int i = 0; i <= _precision; i++)
    {
        some += power(-1, i) * (power(_number, 2 * i) / facto(2 * i));
    }

    return some;    
}