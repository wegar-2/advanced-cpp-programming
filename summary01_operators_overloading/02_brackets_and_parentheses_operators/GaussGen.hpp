#ifndef GAUSSGEN_HPP
#define GAUSSGEN_HPP

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

class GaussGen {
public:
    // constructors and destructor
    GaussGen();
    GaussGen(double mu, double sigma);
    GaussGen(double mu, double sigma, unsigned int seed);
    ~GaussGen();
    // copy constructor
    GaussGen(const GaussGen& rhs);
    // assignment operator
    const GaussGen& operator=(const GaussGen& rhs);
    // overloading brackets [] (also: subscript operator)
    double& operator[](const unsigned int index);
    const double& operator[](const unsigned int index) const;
    // overloading parentheses()
    double operator()() const;
    double* operator()(const unsigned int len) const;
    // overloading increment
    const GaussGen& operator++();
    const GaussGen operator++(int);
    // overloading decrement
    const GaussGen& operator--();
    const GaussGen operator--(int);
    // getters and setters
    unsigned int GetSeed() const;
    double GetMu() const;
    double GetSigma() const;
    void SetHeapArrayLength(unsigned int newlen);
    void SetSeed(unsigned int newseed);
    unsigned int GetHeapArrayLength() const;
    unsigned int GetSeed() const;
    // other class methods
    double* GenerateGauss(unsigned int num) const;
    double* GetStoredGauss() const;
    void RandomizeStoredGauss();
    void PrintStoredSample() const;
    // static class methods
    static void SetDefaultHeapArrayLength(unsigned int newlen);
    static void SetDefaultSeedValue(unsigned int newseed);
    static unsigned int GetDefaultHeapArrayLength() const;
    static unsigned int GetDefaultSeed() const;
private:
    // static members
    static unsigned int* pDefaultSeed;
    static unsigned int* pDefaultHeapArrayLength;
    // non-static members
    unsigned int* pSeed;
    unsigned int* pHeapArrayLength;
    double* pMu;
    double* pSigma;
    boost::random::mt19937* pmt;
    boost::random::normal_distribution<>* pnormdist;
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>>* ndvg;
    double* pHeapArray; // array to store numbers at
};

#endif // GAUSSGEN_HPP
