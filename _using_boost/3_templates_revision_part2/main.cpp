#include <iostream>
#include <string>
#include <vector>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    // vector in the stack
    boost::random::mt19937 mt_gtr = boost::random::mt19937();
    boost::random::uniform_int_distribution<> my_distrib =
        boost::random::uniform_int_distribution<>();
    vector<double> vec1(10);
    for (int k=0; k<10; ++k) {
        vec1[k] = my_distrib(mt_gtr);
    }

    // vector in the heap
    vector<int>* pVec = new vector<int>(10);
    for (int k=0; k<10; ++k) {
        (*pVec)[k] = 100;
    }
    for (int k=0; k<10; ++k) {
        cout << "heap vector's element nr " << k << ": "
        << (*pVec)[k] << endl;
    }

    return 0;
}
