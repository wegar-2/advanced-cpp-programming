#include "MyFunctions.hpp"
#include <iostream>


/* ===================================== */
/* ========  PRINTER FUNCTIONS  ======== */
void PrintIntArray(int* ArrayIn, unsigned int ArrayLen) {
    std::cout << "Printing array of integers inside PrintIntArray: " << std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "\tarray[" << k << "] = " << ArrayIn[k] << std::endl;
    }
    std::cout << "Finished printing array of integers. " << std::endl;
}

void PrintDoubleArray(double* ArrayIn, unsigned int ArrayLen) {
    std::cout << "Printing array of doubles inside PrintDoubleArray: " << std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "\tarray[" << k << "] = " << ArrayIn[k] << std::endl;
    }
    std::cout << "Finished printing array of doubles. " << std::endl;
}

template <typename T>
void TemplatePrintArray(T* ArrayIn, unsigned int ArrayLen) {
    std::cout << "Printing an array in TemplatePrintArray: " << std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "\t\tarray[" << k << "] = " << ArrayIn[k] << std::endl;
    }
    std::cout << "Finished printing an array." << std::endl;
}

// explicit instantiation of the template function TemplatePrintArray for the
// selected types
template void TemplatePrintArray<int>(int* ArrayIn, unsigned int ArrayLen);
template void TemplatePrintArray<unsigned int>(unsigned int* ArrayIn,
                                               unsigned int ArrayLen);
template void TemplatePrintArray<double>(double* ArrayIn,
                                         unsigned int ArrayLen);


/* ========================================================================== */
void PrintPointersArrayObjs(int** PointersArrayIn, unsigned int ArrayLen) {
    std::cout << "Printing inside the PrintPointersArrayObjs: " << std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "PointersArray[" << k << "] = " << PointersArrayIn[k] <<
        std::endl;
        std::cout << "*PointersArray[" << k << "] = " << *PointersArrayIn[k] <<
        std::endl;
    }
    std::cout << "Printing inside the PrintPointersArrayObjs: " << std::endl;
}


/* ************************************************************************** */
/* Other simple functions */
double CalcDoubleArraySum(double* ArrayIn, unsigned int ArrayLen) {
    double sum = 0;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        sum += ArrayIn[k];
    }
    return sum;
}


/* ************************************************************************** */
/* **********        Functions for random numbers generation     **********   */
double* CreateArrayNormalStdNumbers(double* pArrayIn, unsigned int ArrayLen,
                                    variate_generator<mt19937,
                                    normal_distribution<>> rng_gauss) {
    for (unsigned int k = 0; k < ArrayLen; ++k) { pArrayIn[k] = rng_gauss(); }
    return pArrayIn;
}


double* MakeNormalStdRandomNumbers(unsigned int ArrayLen,
                                   variate_generator<mt19937,
                                        normal_distribution<>> rng_gauss) {
    double* pArrayOut = new double[ArrayLen];
    for (unsigned int k = 0; k < ArrayLen; ++k) { pArrayOut[k] = rng_gauss(); }
    return pArrayOut;
}

double* MakeChisqRandomNumbers(unsigned int ArrayLen,
                               variate_generator<mt19937,
                                    chi_squared_distribution<>> rng_chisq) {
    double* pArrayOut = new double[ArrayLen];
    for (unsigned int k = 0; k < ArrayLen; ++k) { pArrayOut[k] = rng_chisq(); }
    return pArrayOut;
}
