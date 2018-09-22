#ifndef WIENERPROCESS_HPP
#define WIENERPROCESS_HPP

#include <iostream>
#include "StochasticProcess.hpp"
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>


class WienerProcess : public StochasticProcess {
public:
    // constructors and destructor
    WienerProcess();
    WienerProcess(double time, unsigned int steps, double mu, double sigma);
    virtual ~WienerProcess(); // destructor has to be virtual!
    WienerProcess(const WienerProcess& rhs);
    // operators
    WienerProcess& operator=(const WienerProcess& rhs);
    WienerProcess operator+(const WienerProcess& rhs);
    // inherited pure virtual functions
    virtual double* MakeTrajectory() const;
    virtual void DescribeStochasticProcess() const;
    // additional getters and setters
    virtual void SetMu(double mu);
    virtual void SetSigma(double sigma);
    virtual double GetMu() const;
    virtual double GetSigma() const;
private:
    double* pMu;
    double* pSigma;
    // slight simplification - RNGs are static members, so they are shared by all instances
    static boost::random::mt19937 rng_engine;
    static boost::random::normal_distribution<> rng_norm_dist;
    static boost::random::variate_generator<boost::random::mt19937,
                                            boost::random::normal_distribution<>>
                                            rng_vargen;
};

#endif // WIENERPROCESS_HPP
