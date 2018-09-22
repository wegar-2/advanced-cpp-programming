#include <iostream>
#include "MyFunctions.hpp"
#include <cstdlib>
#include <string>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/variate_generator.hpp>


int main()
{
    /* ====================================================================== */
    // 1. passing stack array to a function
    int my_array[25];
    for (int k=0; k<25; ++k) {
        my_array[k] = rand() % 100 + 1;
    }
    DisplayIntsArray(my_array, 25, std::string("array1"));

    // 2. pass array of pointers to a function
    unsigned int* pointers_array[10];
    for (int k=0; k<10; ++k) {
        pointers_array[k] =
                    new unsigned int(static_cast<unsigned int>(rand() % 30 + 1));
    }
    DisplayArrayOfIntsPointers(pointers_array, 10);

    // 3. pass heap array to function
    int* heap_array = new int[15];
    for (int k = 0; k<15; ++k) {
        heap_array[k] = rand() % 100 + 1;
    }
    DisplayHeapArrayElements(heap_array, 15);

    /* ====================================================================== */
    // RNG object
    boost::random::mt19937 mt_rng;
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>>
                                     gen(mt_rng, boost::random::normal_distribution<>());
    // 4. sum

    // 5. average

    // 6. sum of squares

    // 7. biased standard deviation

    return 0;
}
