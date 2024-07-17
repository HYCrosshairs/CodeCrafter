#include <iostream>

#include "cosine.hpp"

using namespace maths;

int main(int argc, char const *argv[])
{
    cosine cos(5, 8);

    std::cout << "Facto : " << cos.showResultFacto() << std::endl;
    std::cout << "Power : " << cos.showResultPower() << std::endl;
    std::cout << "cosine : " << cos.calculateCosineTaylorSeries() << std::endl;
    return 0;
}
