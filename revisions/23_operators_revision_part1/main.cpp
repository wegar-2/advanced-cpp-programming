#include <iostream>
#include "Fraction.hpp"
#include "MyFunctions.hpp"

int main()
{
    std::cout << "---------- 0. ----------" << std::endl;
    std::cout << "Testing the functions that are used..." << std::endl;

    // MySwapFunction
    unsigned int value1 = 123;
    unsigned int value2 = 323;
    std::cout << "Before swapping: " << std::endl;
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    MySwapFunction(value1, value1);
    std::cout << "After swapping: " << std::endl;
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;

    // findGCD
    unsigned int number1 = 601;
    unsigned int number2 = 232;
    std::cout << "gcd(" << number1 << ", " << number2 << ") = "
    << findGCD(number1, number2) << std::endl << std::endl << std::endl;

    std::cout << "---------- 1. ----------" << std::endl;
    std::cout << "Copy constructor vs assignment operator" << std::endl;

    // class constructor called
    Fraction frac1 = Fraction(123, 33);
    // class copy constructor called
    Fraction frac2(frac1);
    // class copy constructor called, too
    Fraction frac3 = frac2;
    // class assignment operator called
    frac3 = frac1;

    std::cout << "---------- 2. ----------" << std::endl;
    std::cout << "Working with class operators..." << std::endl;

    std::cout << "Current frac1 value: " << std::endl;
    frac1.PrintFraction();

    std::cout << "Pre-incrementating..." << std::endl;
    ++frac1;
    frac1.PrintFraction();

    std::cout << "Post-incrementating..." << std::endl;
    frac1++;
    frac1.PrintFraction();

    std::cout << "Pre-decrementing..." << std::endl;
    --frac1;
    frac1.PrintFraction();

    std::cout << "Pre-decrementing..." << std::endl;
    frac1--;
    frac1.PrintFraction();

    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl;

    std::cout << "addition and subtraction..." << std::endl;
    frac1 = Fraction(10, 3);
    frac2 = Fraction(2, 5);
    std::cout << "frac1, frac2: " << std::endl;
    frac1.PrintFraction();
    frac2.PrintFraction();

    Fraction frac_add = frac1 + frac2;
    Fraction frac_subtr = frac1 - frac2;
    std::cout << "frac_add, frac_subtr: " << std::endl;
    frac_add.PrintFraction();
    frac_subtr.PrintFraction();

    return 0;
}
