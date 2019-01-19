#include <iostream>
#include <cstdlib>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/exponential_distribution.hpp>
#include <boost/random/uniform_01.hpp>
#include <boost/random/variate_generator.hpp>
#include "HelperFunctions.hpp"
#include "ArraysFunctions.hpp"

int main()
{
    // -------------------------------------------------------------------------
    // 0. prepare random number generators for later use
    boost::random::mt19937 mt_rng = boost::random::mt19937(100);
    boost::random::normal_distribution<> distrib_normal(0, 1);

    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>>
                                     U(mt_rng, distrib_normal);


    // -------------------------------------------------------------------------
    // 1. array on stack
    std::cout << "---------- array1 ----------" << std::endl;
    unsigned int array1[6];
    for (int k = 0; k < 6; ++k) { array1[k] = random() % 100 + 1; }
    std::cout << "\tarray1 = " << array1 << std::endl;
    for (int k = 0; k < 6; ++k) {
        std::cout << "\tarray1[" << k << "] = " << array1[k] << std::endl;
        std::cout << "\t&array1[" << k << "] = " << &array1[k] << std::endl;
    }
    std::cout << std::endl << std::endl << std::endl << std::endl;


    // -------------------------------------------------------------------------
    // 2. array of pointers
    std::cout << "---------- array2 ----------" << std::endl;
    double* array2[10];
    for (int k = 0; k < 10; ++k) { array2[k] = new double(U()); }
    std::cout << "\tarray2 = " << array1 << std::endl;
    for (int k = 0; k < 6; ++k) {
        std::cout << "\tarray2[" << k << "] = " << array2[k] << std::endl;
        std::cout << "\t&array2[" << k << "] = " << &array2[k] << std::endl;
        std::cout << "\t*array2[" << k << "] = " << *array2[k] << std::endl;
    }
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // -------------------------------------------------------------------------
    // 3. array in the heap
    std::cout << "---------- array3 ----------" << std::endl;
    double* array3 = new double[10];
    for (int k = 0; k < 10; ++k) { array3[k] = U(); }
    std::cout << "\tarray3 = " << array1 << std::endl;
    for (int k = 0; k < 6; ++k) {
        std::cout << "\tarray3[" << k << "] = " << array3[k] << std::endl;
        std::cout << "\t&array3[" << k << "] = " << &array3[k] << std::endl;
    }
    std::cout << std::endl << std::endl << std::endl << std::endl;


    // -------------------------------------------------------------------------
    // 4. passing stack arrays to and from functions
    int MyArray[] = {1, 2, 3, 4};
    PrintIntsArray(MyArray, 4);

    double MyDoubleArray[] = {1.02, 1.32, 43.3, 323.2};
    PrintDoublesArray(MyDoubleArray, 4);

    PrintArray<double>(MyDoubleArray, 4);

    // -------------------------------------------------------------------------
    // passing array of pointers to a function
    int* TestArray[4];
    TestArray[0] = new int(-12);
    TestArray[1] = new int(123);
    TestArray[2] = new int(1);
    TestArray[3] = new int(100);
    PrintArrayOfIntsPointers(TestArray, 4);

    // -------------------------------------------------------------------------
    // tidy up the memory
    // a. array2
    for (int k = 0; k < 10; ++k) { delete array2[k]; }
    // b. array3
    delete[] array3;




    return 0;
}
