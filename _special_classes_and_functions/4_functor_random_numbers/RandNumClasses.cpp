#include "RandNumClasses.hpp"
#include <iostream>
#include <boost/random.hpp>

using std::endl;
using std::cout;
using boost::random::mt19937;
using boost::random::normal_distribution;
using boost::random::variate_generator;


NormDist::NormDist() {
    cout << "Class NormDist default constructor called..." << endl;
    // creating members
    pEngine = new mt19937(123);
    pDist = new normal_distribution<>(0.0, 1.0);
    pRng = new variate_generator<mt19937, normal_distribution<>>(*pEngine,
                                                                 *pDist);
}

NormDist::~NormDist() {
    cout << "Class NormDist destructor called..." << endl;
    delete pRng;
    pRng = nullptr;
    delete pEngine;
    pEngine = nullptr;
    delete pRng;
    pRng = nullptr;
}


NormDist::NormDist(double mu, double sigma) {
    cout << "Class NormDist parametrized constructor called..." << endl;
    if (sigma <= 0) {
        cout << "Parametrized constructor obtained non-positive sigma. " << endl;
        cout << "Setting sigma to zero..." << endl;
        sigma = 1.0;
    }
    pEngine = new mt19937(123);
    pDist = new normal_distribution<>(mu, sigma);
    pRng = new variate_generator<mt19937, normal_distribution<>>(*pEngine,
                                                                 *pDist);
}


double NormDist::operator()() const {
    return (*pRng)();
}

