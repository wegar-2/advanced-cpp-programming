#include "HelperFunctions.hpp"
#include <iostream>
#include <boost/random/variate_generator.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>

/* ========================================================================== */
/* Arrays' printers */
void PrintIntArray(const int* const pArray, const unsigned int ArrayLen) {
    std::cout << "Inside PrintIntArray function. Printing the array: " <<
    std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "array[" << k << "] = " << pArray[k] << std::endl;
    }
    std::cout << "Finished printing the array of ints. " << std::endl;
}

void PrintDoubleArray(const double* const pArray, const unsigned ArrayLen) {
    std::cout << "Inside PrintDoubleArray function. Printing the array: " <<
    std::endl;
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        std::cout << "array[" << k << "] = " << pArray[k] << std::endl;
    }
    std::cout << "Finished printing the array of doubles. " << std::endl;
}


/* ========================================================================== */
/* Randomizing methods */
void RandomizeDoublesArray(double* pArrayIn, const unsigned int ArrayLen) {
    // prepare random number generator
    boost::random::mt19937* pmt = new boost::random::mt19937(100);
    boost::random::normal_distribution<>* pnrd =
                        new boost::random::normal_distribution<>(0, 1);
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>>* pndgen =
      new boost::random::variate_generator<boost::random::mt19937,
                                boost::random::normal_distribution<>>(*pmt, *pnrd);
    // fill-in the array
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        pArrayIn[k] = (*pndgen)();
    }
    // tidy up the heap objects
    delete pmt;
    delete pnrd;
    delete pndgen;
}

double* RandomizeDoublesArray(double* pArrayIn, const unsigned int ArrayLen,
                              bool flag) {
    // prepare random number generator
    boost::random::mt19937* pmt = new boost::random::mt19937(100);
    boost::random::normal_distribution<>* pnrd =
                        new boost::random::normal_distribution<>(0, 1);
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>>* pndgen =
      new boost::random::variate_generator<boost::random::mt19937,
                                boost::random::normal_distribution<>>(*pmt, *pnrd);
    // fill-in the array
    for (unsigned int k = 0; k < ArrayLen; ++k) {
        pArrayIn[k] = (*pndgen)();
    }
    // tidy up the heap objects
    delete pmt;
    delete pnrd;
    delete pndgen;
    return pArrayIn;
}
