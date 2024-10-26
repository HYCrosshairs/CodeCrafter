#include "CppUTest/CommandLineTestRunner.h"

#include "Complex.hpp"

#include <iostream>

using namespace math::complex::lib;

TEST_GROUP(TestComplex)
{
    Complex z1 = Complex(3, 4);
    Complex z2 = Complex(2, 7);

    const Complex zAddRef = Complex(5, 11);
    const Complex zProductRef = Complex(-22, 29);
    const Complex zDivisionRef = Complex(35.0/53.0, -13.0/53.0);

    Complex zConjRef = Complex(2, -7);

    const double magnitudeRef = 5;
};

TEST(TestComplex, addComplexTest)
{
    Complex zResult = z1 + z2;

    CHECK_EQUAL(zAddRef.real(), zResult.real());
    CHECK_EQUAL(zAddRef.imaginary(), zResult.imaginary());
}

TEST(TestComplex, productComplexTest)
{
    Complex zResult = z1 * z2;

    CHECK_EQUAL(zProductRef.real(), zResult.real());
    CHECK_EQUAL(zProductRef.imaginary(), zResult.imaginary());
}

TEST(TestComplex, divisionComplexTest)
{
    Complex zResult = z1 / z2;

    CHECK_EQUAL(zDivisionRef.real(), zResult.real());
    CHECK_EQUAL(zDivisionRef.imaginary(), zResult.imaginary());
}

TEST(TestComplex, magnitudeComplexTest)
{
    CHECK_EQUAL(magnitudeRef, z1.magnitude());
}

TEST(TestComplex, conjugateComplexTest)
{
    Complex zResult = z2.conjugate();
    CHECK_EQUAL(zConjRef.real(), zResult.real());
    CHECK_EQUAL(zConjRef.imaginary(), zResult.imaginary());
}

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}
