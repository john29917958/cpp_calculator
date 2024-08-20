#include "calculator.h"

Calculator::Calculator()
{
}

double Calculator::sum(double addend1, double addend2)
{
    double sum = addend1 + addend2;
    return sum;
}

double Calculator::subtract(double minuend, double subtrahend)
{
    double difference = minuend - subtrahend;
    return difference;
}

double Calculator::multiply(double multiplier, double multiplicand)
{
    double product = multiplier * multiplicand;
    return product;
}

double Calculator::divide(double dividend, double divisor)
{
    double quotient = dividend / divisor;
    return quotient;
}
