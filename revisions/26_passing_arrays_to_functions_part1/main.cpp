#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/random/exponential_distribution.hpp>
#include <boost/random/gamma_distribution.hpp>
#include "MyFunctions.hpp"


using std::endl;
using std::cout;

int main()
{
    /* ====================================================================== */
    // 0. prepare an RNG
    boost::random::mt19937 rng_engine_mt = boost::random::mt19937(123);
    boost::random::normal_distribution<> ndist(10, 3);

    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>>
                   norm_gen(rng_engine_mt, ndist);


    /* ====================================================================== */
    // 1. stack array
    double array1[10];
    for (int k=0; k<10; ++k)
        array1[k] = norm_gen();
    // using a range-based loop to walk through the elements of an array
    // NOTE: reference is used to avoid copying
    cout << "Displaying stack array's elements: " << endl;
    for (auto& iter_array : array1)
        cout << iter_array << endl;
    cout << "\n\n\n\n\n" << endl;
    DisplayArrayElements(array1, 10);


    /* ====================================================================== */
    // 2. heap array

    // 2.1. generate numbers from exponential distribution
    boost::random::mt19937 rng_exp_mt(111);
    boost::random::exponential_distribution<> exp_dist(100);
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::exponential_distribution<>>
                                     exp_generator(rng_exp_mt, exp_dist);
    // 2.2.
    double* heap_array = new double[30];
    for (int k=0; k<30; ++k)
        heap_array[k] = exp_generator();
    cout << "Displaying a heap array: " << endl;
    for (int k=0; k<30; ++k)
        cout << "heap_array[" << k << "] = " << heap_array[k] << endl;
    cout << "Displaying a heap array - using the DisplayArrayElements(): "
    << endl;
    DisplayArrayElements(heap_array, 30);


    /* ====================================================================== */
    // 3. array of pointers

    // 3.1.
    boost::random::mt19937 mt_for_gamma(456);
    boost::random::gamma_distribution<> gamma_dist(1.0, 1.0);
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::gamma_distribution<>>
                                     gamma_rng(mt_for_gamma, gamma_dist);
    // 3.2. create an array
    double* pointers_array[20];
    for (int k=0; k<20;++k)
        pointers_array[k] = new double(gamma_rng());
    // 3.3. display the array
    DisplayPointersArray(pointers_array, 20);
    return 0;
}
