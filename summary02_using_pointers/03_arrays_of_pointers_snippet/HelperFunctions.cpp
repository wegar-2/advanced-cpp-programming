#include "HelperFunctions.hpp"
#include <iostream>

void PrintArrayOfIntsPointers(int** pArrayOfPointers, const unsigned int Length) {
    std::cout << "Inside PrintArrayOfIntsPointers. Starting printing: " <<
    std::endl;
    for (unsigned int j = 0; j < Length; ++j) {
        std::cout << "pArrayOfPointers[" << j << " ] = " <<
        pArrayOfPointers[j] << std::endl;
        std::cout << "*pArrayOfPointers[" << j << " ] = " <<
        *pArrayOfPointers[j] << std::endl;
    }
    std::cout << "Printing completed." << std::endl;
}


int** GetMeIntPointersArray(unsigned int N) {
    int* *pArrayOfPointers = new int*[N];
    for (unsigned int k = 0; k < N; ++k) {
        pArrayOfPointers[k] = new int(rand() % 100 + 1);
    }
    return pArrayOfPointers;
}
