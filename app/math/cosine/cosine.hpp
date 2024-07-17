#pragma once

namespace maths
{
class cosine
{
public:
    explicit cosine(double number, unsigned int precision);
    ~cosine();

    unsigned int showResultFacto();
    double showResultPower();

    double calculateCosineTaylorSeries();

private:
    unsigned int facto(unsigned int fct);
    double power(double base, unsigned int n);

private:
    double _number;
    unsigned int _precision;
};
} // namespace maths
