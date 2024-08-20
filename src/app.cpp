#include "app.h"
#include <iostream>

App::App()
{
    this->calculator = new Calculator();
}

void App::run()
{
    std::cout << "Welcome to simple C++ Console Calculator!" << std::endl;
    this->printHelpMessage();
    Calculator *calculator = new Calculator();
    bool isQuit = false;
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
            std::cout << "Sorry, this function has not been implemented." << std::endl;
        }
        else if (input == "3")
        {
            std::cout << "Sorry, this function has not been implemented." << std::endl;
        }
        else if (input == "4")
        {
            std::cout << "Sorry, this function has not been implemented." << std::endl;
        }
        else if (input == "h")
        {
            this->printHelpMessage();
        }
        else if (input == "q")
        {
            isQuit = true;
            std::cout << "Thanks for using Simple Console C++ Calculator." << std::endl;
        }
        else
        {
            std::cout << "We don't have this option \"" << input << "\"!" << std::endl;
        }
    } while (!isQuit);
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