#include "calculator.h"

#ifndef CPP_CALC_APP_H
#define CPP_CALC_APP_H

class App
{
public:
    App();
    void run();

private:
    Calculator *calculator;
    bool isQuit;
    void printHelpMessage();
    void runSumCalculation();
    void runSubtractionCalculation();
    void runMultiplicationCalculation();
    void runDivisionCalculation();
};

#endif
