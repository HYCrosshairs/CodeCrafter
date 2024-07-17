#include <iostream>

#include "fibonacci.hpp"

using namespace algorithms::maths;

void Fibonacci::fibonacci(int steps)
{
    int firstFib = 0;
    int secondFib = 1;
    int fibonacci = firstFib + secondFib;

    std::cout << fibonacci << std::endl;

    for (int i = 2; i < steps; i++)
    {
        fibonacci = firstFib + secondFib;
        std::cout << fibonacci << std::endl;
        firstFib = secondFib;
        secondFib = fibonacci;
    }
}