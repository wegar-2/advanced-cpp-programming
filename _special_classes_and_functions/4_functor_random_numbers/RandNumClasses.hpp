#ifndef NORMDIST_HPP
#define NORMDIST_HPP

#include <boost/random.hpp>

using boost::random::mt19937;
using boost::random::normal_distribution;
using boost::random::variate_generator;

class NormDist {
public:
    NormDist();
    ~NormDist();
    double operator()() const;
    NormDist(double mu, double sigma);
private:
    // RNG's engine
    mt19937* pEngine;
    // RNG's distribution
    normal_distribution<>* pDist;
    // RNG's variate generator
    variate_generator<mt19937, normal_distribution<>>* pRng;
};

#endif // RANDNUMCLASSES_HPP
