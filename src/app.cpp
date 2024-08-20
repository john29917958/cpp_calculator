#include "app.h"
#include <iostream>

App::App()
{
    this->calculator = new Calculator();
    this->isQuit = false;
}

void App::run()
{
    std::cout << "Welcome to simple C++ Console Calculator!" << std::endl;
    this->printHelpMessage();
    Calculator *calculator = new Calculator();
    do
    {
        std::cout << "Please input a function number for calculation, h for help, and q to quit: " << std::endl;
        std::string input;
        std::cin >> input;
        if (input == "1")
        {
            this->runSumCalculation();
        }
        else if (input == "2")
        {
            this->runSubtractionCalculation();
        }
        else if (input == "3")
        {
            this->runMultiplicationCalculation();
        }
        else if (input == "4")
        {
            this->runDivisionCalculation();
        }
        else if (input == "h")
        {
            this->printHelpMessage();
        }
        else if (input == "q")
        {
            this->isQuit = true;
            std::cout << "Thanks for using Simple Console C++ Calculator." << std::endl;
        }
        else
        {
            std::cout << "We don't have this option \"" << input << "\"!" << std::endl;
        }
    } while (!this->isQuit);
}

void App::printHelpMessage()
{
    std::cout << "Available functions:" << std::endl
              << "1: Add two numbers" << std::endl
              << "2: Subtract a value from a number" << std::endl
              << "3: Multiply two numbers" << std::endl
              << "4: Divide two numbers" << std::endl;
}

void App::runSumCalculation()
{
    std::cout << "Please enter the first number as an addend: ";
    double addend1;
    std::cin >> addend1;
    std::cout << "Please enter the second number as an addend: ";
    double addend2;
    std::cin >> addend2;
    double sum = this->calculator->sum(addend1, addend2);
    std::cout << "The result of " << addend1 << " + " << addend2 << " is " << sum << std::endl;
}

void App::runSubtractionCalculation()
{
    std::cout << "Please enter the first number as an minuend: ";
    double minuend;
    std::cin >> minuend;
    std::cout << "Please enter the second number as an subtrahend: ";
    double subtrahend;
    std::cin >> subtrahend;
    double difference = this->calculator->subtract(minuend, subtrahend);
    std::cout << "The result of " << minuend << " - " << subtrahend << " is " << difference << std::endl;
}

void App::runMultiplicationCalculation()
{
    std::cout << "Please enter the first number as an multiplier: ";
    double multiplier;
    std::cin >> multiplier;
    std::cout << "Please enter the second number as an multiplicand: ";
    double multiplicand;
    std::cin >> multiplicand;
    double product = this->calculator->multiply(multiplier, multiplicand);
    std::cout << "The result of " << multiplier << " x " << multiplicand << " is " << product << std::endl;
}

void App::runDivisionCalculation()
{
    std::cout << "Please enter the first number as an dividend: ";
    double dividend;
    std::cin >> dividend;
    std::cout << "Please enter the second number as an divisor: ";
    double divisor;
    std::cin >> divisor;
    double quotient = this->calculator->divide(dividend, divisor);
    std::cout << "The result of " << dividend << " / " << divisor << " is " << quotient << std::endl;
}