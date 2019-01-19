#include <iostream>
#include "ArraysFunctions.hpp"

void PrintIntsArray(int* pArrayIn, unsigned int ArrayLen) {
    std::cout << "Inside PrintIntsArray: " << std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "\t\t" << "array[" << k << "] = " << *(pArrayIn + k) <<
        std::endl;
    }
}


void PrintDoublesArray(double* pArrayIn, unsigned int ArrayLen) {
    std::cout << "Inside PrintDoublesArray: " << std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "\t\t" << "array[" << k << "] = " << *(pArrayIn + k) <<
        std::endl;
    }
}


template <typename T>
void PrintArray(T* pArrayIn, unsigned int ArrayLen) {
    std::cout << "Inside PrintArray: " << std::endl;
        for (unsigned int k = 0; k < ArrayLen; ++k) {
            std::cout << "\t\t" << "array[" << k << "] = " <<
            *(pArrayIn + k) << std::endl;
        }
}

template void PrintArray<int>(int* pArrayIn, unsigned int ArrayLen);
template void PrintArray<double>(double* pArrayIn, unsigned int ArrayLen);


void PrintArrayOfIntsPointers(int** ppArray, unsigned int ArrayLen) {
    std::cout << "Inside PrintArrayOfIntsPointers: " << std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
            std::cout << "\t\t" << "array[" << k << "] = " << ppArray[k] << std::endl;
        std::cout << "\t\t" << "*array[" << k << "] = " << *ppArray[k] << std::endl;
    }
}

