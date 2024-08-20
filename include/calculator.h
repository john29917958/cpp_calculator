#ifndef CPP_CALC_CALCULATOR_H
#define CPP_CALC_CALCULATOR_H

class Calculator
{
public:
    Calculator();
    double sum(double addend1, double addend2);
    double subtract(double minuend, double subtrahend);
    double multiply(double multiplier, double multiplicand);
    double divide(double dividend, double divisor);
};

#endif
