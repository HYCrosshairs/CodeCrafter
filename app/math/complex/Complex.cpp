#include "Complex.hpp"

#include <cmath>
#include <iostream>

namespace math::complex::lib
{
Complex::Complex(double real, double imaginary) : re(real), im(imaginary)
{

}

Complex::Complex(const Complex& complex)
{
    this->re = complex.re;
    this->im = complex.im;

    std::cout << "copy constructor\n";
}

double Complex::magnitude() const
{
    return std::sqrt(re * re + im * im);
}

double Complex::real() const { return this->re; }
double Complex::imaginary() const { return this->im; }

Complex Complex::conjugate() const { return {re, -im}; }

} // namespace math::complex::lib
