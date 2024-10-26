#pragma once

namespace math::complex::lib
{

class Complex
{
public:
    Complex(double real, double imaginary);
    ~Complex() = default;
    Complex(const Complex& complex);

    Complex operator+(const Complex& complex) const
    {
        return {this->re + complex.re,
                this->im + complex.im};
    }

    Complex operator*(const Complex& complex) const
    {
        return {this->re * complex.re - this->im * complex.im,
                this->re * complex.im + complex.re * this->im};
    }

    Complex operator/(const Complex& complex) const
    {
        return {(this->re * complex.re + this->im * complex.im) / (complex.re * complex.re + complex.im * complex.re), (this->re * complex.im -
                this->im * complex.re)/(complex.re * complex.re + complex.im * complex.re)};
    }

    [[nodiscard]] double magnitude() const;

    [[nodiscard]] double real() const;
    [[nodiscard]] double imaginary() const;

    [[nodiscard]] Complex conjugate() const;
    
private:
    double re;
    double im;
};

} // namespace math::complex::lib
