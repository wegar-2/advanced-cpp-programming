#include <iostream>
#include <cstdlib>
#include "HelperFunctions.hpp"

const int GlobalModulo = 100;

int main()
{
    // 1. working with stack arrays
    std::cout << "--------------- 1. ---------------" <<  std::endl;
    int StackArray[10];
    for (int k = 0; k < 10; ++k) {
        StackArray[k] = random() % GlobalModulo + 1;
    }
    PrintIntArray(StackArray, 10);


    // 2. working with stack arrays: passing to and from functions
    std::cout << "--------------- 2. ---------------" <<  std::endl;
    double DoublesArray[5] = {0, 0, 0, 0, 0};
    // 2.1. passing stack array to function
    PrintDoubleArray(DoublesArray, 5);
    RandomizeDoublesArray(DoublesArray, 5);
    PrintDoubleArray(DoublesArray, 5);
    // 2.2. creating stack array in function: do NOT do this!!!
    /*
        WHY?: suppose that you have a function function1 that creates a stack
        array inside itself. This means that the Array will be returned to the
        memory after the function exits -- even if you return the pointer that
        is pointing at the beginning of the array, the array's content will be
        erased!
    */
    // 2.3. modifying a stack array inside a function - O.K.
    double AnotherDoublesArray[6] = {0, 0, 0, 0, 0, 0};
    std::cout << "Working with AnotherDoublesArray: " << std::endl;
    PrintDoubleArray(AnotherDoublesArray, 6);
    double* pAnotherDoublesArray = RandomizeDoublesArray(AnotherDoublesArray, 6,
                                                         true);
    std::cout << "pAnotherDoublesArray: " << std::endl;
    PrintDoubleArray(pAnotherDoublesArray, 6);
    std::cout << "AnotherDoublesArray: " << std::endl;
    PrintDoubleArray(AnotherDoublesArray, 6);
    /*
    NOTE:
    If you have a stack array and you want to modify inside the function two
    approaches come to mind to start with:
    1) use a void function to change an array MyArray inside it and stick to
        using the MyArray
    2) if you want to, you can return a pointer to the first element of the
        array that had been passed to the modifying function
    */


    // 3. working with heap arrays: passing to and from functions
    std::cout << "--------------- 3. ---------------" <<  std::endl;



    // 4. working with arrays of pointers: passing to and from functions
    std::cout << "--------------- 4. ---------------" <<  std::endl;



    return 0;
}
