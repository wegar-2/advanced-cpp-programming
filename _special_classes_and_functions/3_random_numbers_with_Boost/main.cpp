#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>

/*
COMMENT ON IMPORTS:
    1) boost/random/mersenne_twister.hpp <== will be used to create a random
                                             numbers generator
    2) boost/random/uniform_int_distribution.hpp <=== will be used to perform the
                            actual generation of the random numbers
*/

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned int N = 10;
    // create a RNG
    boost::random::mt19937 mt_rng;
    boost::random::uniform_int_distribution<> my_dist = boost::random::uniform_int_distribution<>(1, 30);
    // generate some random numbers
    for (unsigned int k=0; k<N; ++k) {
        cout << "random number: " << my_dist(mt_rng) << endl;
    }
}

