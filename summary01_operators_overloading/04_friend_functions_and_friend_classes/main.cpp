#include <iostream>
#include <cstdlib>

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/chi_squared_distribution.hpp>
#include <boost/random/gamma_distribution.hpp>

#include "MyFunctions.hpp"

using namespace boost;

int main() {

    /* ############################################ */
    /* ##########   TABLE OF CONTENTS   ########### */
    /* 0. */
    /* 1. */
    /* 2. */
    /* 3. */
    /* ############################################ */

    /* ====================================================================== */
    /* 0. Prepare random number generators */
    /* ====================================================================== */
    /* 0.0. prepare Mersenne twisters  */
    random::mt19937 mt_gauss = random::mt19937(111);
    random::mt19937 mt_gamma = random::mt19937(333);
    random::mt19937 mt_chisq = random::mt19937(555);
    /* 0.1. Standard normal distribution */
    random::normal_distribution<> dist_gauss = random::normal_distribution<>(0.0, 1.0);
    random::variate_generator<random::mt19937, random::normal_distribution<>> rng_gauss =
        random::variate_generator<random::mt19937,
                        random::normal_distribution<>>(mt_gauss, dist_gauss);
    /* 0.2. Gamma distribution (scale = 4.0, shape = 1.0) */
    random::gamma_distribution<> dist_gamma = random::gamma_distribution<>(4.0, 1.0);
    random::variate_generator<random::mt19937, random::gamma_distribution<>> rng_gamma =
        random::variate_generator<random::mt19937,
                        random::gamma_distribution<>>(mt_gamma, dist_gamma);
    /* 0.3. Chi-square distribution with 7 degrees of freedom */
    random::chi_squared_distribution<> dist_chisq =
        random::chi_squared_distribution<>(7.0);
    random::variate_generator<random::mt19937,
                    random::chi_squared_distribution<>> rng_chisq =
        random::variate_generator<random::mt19937,
                        random::chi_squared_distribution<>>(mt_chisq, dist_chisq);
    /* ====================================================================== */





    /* ====================================================================== */
    /* ================        1. Testing MyFunctions        ================ */
    /* ====================================================================== */



    /* ===== 1.1. stack arrays ===== */
    std::cout << "\n\n\n" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "=============       1.1.        ===============" << std::endl;
    std::cout << "===============================================" << std::endl;
    /* 1.1.1. array of ints */
    int StackArray[5];
    for (unsigned int k = 0; k < 5; ++k) { StackArray[k] = (int) rng_chisq(); }
    PrintIntArray(StackArray, 5);
    /* 1.1.2. array of doubles */
    double StackArray2[6];
    CreateArrayNormalStdNumbers(StackArray2, 6, rng_gauss);
    std::cout << "StackArray2 - before: " << std::endl;
    PrintDoubleArray(StackArray2, 6);
    CreateArrayNormalStdNumbers(StackArray2, 6, rng_gauss);
    std::cout << "StackArray2 - after: " << std::endl;
    PrintDoubleArray(StackArray2, 6);


    /* ===== 1.2. heap arrays ===== */
    std::cout << "\n\n\n" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "=============       1.2.        ===============" << std::endl;
    std::cout << "===============================================" << std::endl;
    /* 1.2.1. Printing heap arrays */
    int* HeapArray = new int[10];
    PrintIntArray(HeapArray, 10);
    TemplatePrintArray<int>(HeapArray, 10);
    /* 1.2.2. Creating random numbers in functions */
    std::cout << "Gaussian: " << std::endl;
    double* ArrayGauss1 = MakeNormalStdRandomNumbers(5, rng_gauss);
    TemplatePrintArray<double>(ArrayGauss1, 5);
    double* ArrayChisq1 = MakeChisqRandomNumbers(4, rng_chisq);
    TemplatePrintArray<double>(ArrayChisq1, 4);

    /* ===== 1.3. arrays of pointers ===== */
    std::cout << "\n\n\n" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "=============       1.3.        ===============" << std::endl;
    std::cout << "===============================================" << std::endl;
    int* *ArrayOfPointers = new int*[10];



    /* ====================================================================== */





    return 0;
}
