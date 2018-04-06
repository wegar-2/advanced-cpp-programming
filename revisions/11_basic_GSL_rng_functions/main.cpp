#include <iostream>
#include "gsl/gsl_rng.h"
#include "gsl/gsl_randist.h"

using namespace std;

int main()
{

    // 1. create a pointer to instance of random number generator
    gsl_rng* rng1 = gsl_rng_alloc(gsl_rng_taus);

    // 2. set random seed of the RNG rng1
    gsl_rng_set(rng1, 122333);

    // 3. generate random numbers
    for (int k = 0; k < 1000000; k++) {
        cout << "\t" << k << ": " << gsl_ran_gaussian(rng1, 1) << endl;
    }

    return 0;
}
