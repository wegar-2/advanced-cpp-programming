#include <iostream>
#include <cstdlib>
#include "HelperFunctions.hpp"

int main()
{
    /* ====================================================================== */
    // A. create arrays/arrays of pointers
    // 1. create an array of 10 integers on the heap
    int* pArray = new int[10];
    // 2. create an array of 10 pointers to integers on the heap
    int* *pArrayOfPointers1 = new int*[10];
    // 3. create array of ten pointers to integers
    int* pArrayOfPointers2[10];
    // 2. and 3. are equivalent!!

    /* ====================================================================== */
    // B. fill in the arrays
    // 1.
    for (int k = 0; k < 10; ++k) {
        pArray[k] = rand() % 100 + 1;
    }
    // 2.
    for (int k = 0; k < 10; ++k) {
        pArrayOfPointers1[k] = new int(rand() % 100 + 1);
    }
    // 3.
    for (int k = 0; k < 10; ++k) {
        pArrayOfPointers2[k] = new int(rand() % 100 + 1);
    }


    /* ====================================================================== */
    // C. some printing to come to terms with the notation/syntax...
    std::cout << "First elements: " << std::endl;
    std::cout << "pArray = " << pArray << std::endl;
    std::cout << "&pArray[0] = " << &pArray[0] << std::endl;
    std::cout << "pArrayOfPointers1 = " << pArrayOfPointers1 << std::endl;
    std::cout << "&pArrayOfPointers1[0] = " << &pArrayOfPointers1[0] << std::endl;
    std::cout << "pArrayOfPointers1[0] = " << pArrayOfPointers1[0] << std::endl;
    std::cout << std::endl << std::endl << std::endl << std::endl;
    std::cout << "Whole arrays: " << std::endl;
    PrintArrayOfIntsPointers(pArrayOfPointers1, 10);
    PrintArrayOfIntsPointers(pArrayOfPointers2, 10);


    /* ====================================================================== */
    // D. passing array of pointers from a function
    int** MyPointersArray = GetMeIntPointersArray(10);
    PrintArrayOfIntsPointers(MyPointersArray, 10);
    return 0;
}
