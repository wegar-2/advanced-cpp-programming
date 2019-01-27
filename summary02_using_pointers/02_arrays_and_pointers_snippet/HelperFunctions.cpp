#include "HelperFunctions.hpp"
#include <iostream>
#include <boost/random/variate_generator.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <cstdlib>



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
    if (ArrayLen == 0) {
        std::cout << "Warning: you have indicated that array has zero length" <<
        std::endl;
    } else {
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
}

double* RandomizeDoublesArray(double* pArrayIn, const unsigned int ArrayLen,
                              bool flag) {
    if (ArrayLen == 0) {
        std::cout << "Warning: you have indicated that array has zero length" <<
        std::endl;
        return 0;
    } else {
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
}


/* ========================================================================== */
/* heap arrays creators */
double* GenerateGaussianStandardValues(const unsigned int N) {
    if (N == 0) {
        std::cout << "Function has been asked to create array of-length zero..." <<
        std::endl;
        std::cout << "Returning an array of length 1 instead..." << std::endl;
        double* ersatz = new double[1];
        return ersatz;
    }
    // prepare the random number generators
    boost::random::mt19937 mt = boost::random::mt19937(1123);
    boost::random::normal_distribution<> nd =
            boost::random::normal_distribution<>(0, 1);
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>> nd_rng =
        boost::random::variate_generator<boost::random::mt19937,
                    boost::random::normal_distribution<>>(mt, nd);
    // build the heap array
    double* pHeapArray = new double[N];
    for (unsigned int k = 0; k < N; ++k) { pHeapArray[k] = nd_rng(); }
    return pHeapArray; // returns pointer to the first element of an array
}

void GenerateGaussianStandardValues(double* ArrayIn, const unsigned int N) {
    if (N == 0) {
        std::cout << "Function has been asked to fill-in array of-length zero..." <<
        std::endl;
        std::cout << "Returning the obtained array unchanged..." << std::endl;
    }
    // prepare the random number generators
    boost::random::mt19937 mt = boost::random::mt19937(1123);
    boost::random::normal_distribution<> nd =
            boost::random::normal_distribution<>(0, 1);
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>> nd_rng =
        boost::random::variate_generator<boost::random::mt19937,
                    boost::random::normal_distribution<>>(mt, nd);
    // fill-in the obtained heap array
    for (unsigned int k = 0; k < N; ++k) { ArrayIn[k] = nd_rng(); }
}


/* ========================================================================== */
/* template functions */
template <typename T1>
void TemplatedArrayPrinter(T1* pArray, const unsigned int ArrayLen) {
    if (ArrayLen == 0) {
        std::cout << "Warning: you have indicated that array has zero length" <<
        std::endl;
    } else {
        std::cout << "Inside TemplatedArrayPrinter function..." << std::endl;
        for (unsigned int k = 0; k < ArrayLen; ++k) {
            std::cout << "array[" << k << "] = " << pArray[k] << std::endl;
        }
    }
}


/* ========================================================================== */
/* explicit instantiation of template functions */
template void TemplatedArrayPrinter<int>(int* pArray, const unsigned int ArrayLen);
template void TemplatedArrayPrinter<double>(double* pArray, const unsigned int ArrayLen);
template void TemplatedArrayPrinter<unsigned int>(unsigned int* pArray,
                                                  const unsigned int ArrayLen);

