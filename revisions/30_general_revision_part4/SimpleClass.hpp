/*
#ifndef SIMPLECLASS_HPP
#define SIMPLECLASS_HPP

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_01.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/exponential_distribution.hpp>
#include <boost/random/chi_squared_distribution.hpp>
#include <boost/random/gamma_distribution.hpp>
#include <boost/random/variate_generator.hpp>

class SimpleClass {
public:
    // constructors and destructor
    SimpleClass();
    ~SimpleClass();
    // copy constructor
    SimpleClass(const SimpleClass& rhs);
    // assignment operator

    // setters and getters

    // random numbers-generating class methods
    double GetUnif01() const;
    double GetStandardNormal() const;
    double GetExponentLambdaOne() const;
    double GetChiSq() const;
    double GetGamma() const;

private:
    static unsigned int* pInstCounter;
    unsigned int* pSeeds[5];
};

#endif // SIMPLECLASS_HPP
*/
