#include "GaussGen.hpp"
#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>


/* ************************************************************************** */
// static class members and methods
unsigned int* GaussGen::pDefaultSeed = 111;
unsigned int* GaussGen::pDefaultHeapArrayLength = 100;

/* ************************************************************************** */
// constructors and destructor
GaussGen::GaussGen() {
    // setting up the RNG
    pSeed = new unsigned int(*GaussGen::pDefaultSeed);
    pmt = new boost::random::mt19937(pSeed);
    // setting up the distribution
    pMu = new double(0.0);
    pSigma = new double(1.0);
    pnormdist = new boost::random::normal_distribution<>(*pMu, *pSigma);
    // setting up the generator
    ndvg = new boost::random::variate_generator<boost::random::mt19937
                    boost::random::normal_distribution<>>(*pmt, *pnormdist);
    // setting up the container for random sample
    pHeapArray = new double[*pDefaultHeapArrayLength];
    for (unsigned int k = 0; k < *pDefaultHeapArrayLength; ++k) {
        pHeapArray[k] = (*ndvg)();
    }
}
GaussGen::GaussGen(double mu, double sigma) {
    // setting up the RNG
    pSeed = new unsigned int(*GaussGen::pDefaultSeed);
    pmt = new boost::random::mt19937(pSeed);
    // setting up the distribution
    pMu = new double(mu);
    pSigma = new double(sigma);
    pnormdist = new boost::random::normal_distribution<>(*pMu, *pSigma);
    // setting up the generator
    ndvg = new boost::random::variate_generator<boost::random::mt19937
                    boost::random::normal_distribution<>>(*pmt, *pnormdist);
    // setting up the container for random sample
    pHeapArray = new double[*pDefaultHeapArrayLength];
    for (unsigned int k = 0; k < *pDefaultHeapArrayLength; ++k) {
        pHeapArray[k] = (*ndvg)();
    }
}
GaussGen::GaussGen(double mu, double sigma, unsigned int seed) {
    // setting up the RNG
    pSeed = new unsigned int(seed);
    pmt = new boost::random::mt19937(pSeed);
    // setting up the distribution
    pMu = new double(mu);
    pSigma = new double(sigma);
    pnormdist = new boost::random::normal_distribution<>(*pMu, *pSigma);
    // setting up the generator
    ndvg = new boost::random::variate_generator<boost::random::mt19937
                    boost::random::normal_distribution<>>(*pmt, *pnormdist);
    // setting up the container for random sample
    pHeapArray = new double[*pDefaultHeapArrayLength];
    for (unsigned int k = 0; k < *pDefaultHeapArrayLength; ++k) {
        pHeapArray[k] = (*ndvg)();
    }
}
GaussGen::~GaussGen() {
    delete pSeed;
    delete pMu;
    delete pSigma;
    delete pmt;
    delete pnormdist;
    delete ndvg;
    delete[] pHeapArray;
}


/* ************************************************************************** */
// copy constructor
GaussGen::GaussGen(const GaussGen& rhs) {
    // setting up the RNG
    pSeed = new unsigned int(rhs.GetSeed());
    pmt = new boost::random::mt19937(rhs.GetSeed());
    // setting up the distribution
    pMu = new double(rhs.GetMu());
    pSigma = new double(rhs.GetSigma());
    pnormdist = new boost::random::normal_distribution<>(*pMu, *pSigma);
    // setting up the generator
    ndvg = new boost::random::variate_generator<boost::random::mt19937,
                 boost::random::normal_distribution<>>(*pmt, *pnormdist);
    // setting up the container for random sample
    pHeapArrayLength = new unsigned int(rhs.GetHeapArrayLength());
    pHeapArray = new double[*pHeapArrayLength];
    for (unsigned int k = 0; k < *pHeapArrayLength; ++k) {
        pHeapArray[k] = (*ndvg)();
    }
}


/* ************************************************************************** */
// assignment operator
const GaussGen& GaussGen::operator=(const GaussGen& rhs) {
    if (this == &rhs) {
        return *this;
    } else {
        // assignments of member variables
        *pSeed = rhs.GetSeed();
        *pHeapArrayLength = rhs.GetHeapArrayLength();
        *pMu = rhs.GetMu();
        *pSigma = rhs.GetSigma();
        *pmt = boost::random::mt19937(*pSeed);
        *pnormdist = boost::random::normal_distribution<>(*pMu, *pSigma);
        *ndvg = boost::random::variate_generator<
        >
        // assignment of heap array

        return *this;
    }
}


/* ************************************************************************** */
// subscript operator overloading


/* ************************************************************************** */
// parentheses operator overloading


/* ************************************************************************** */
// increment prefix and postfix


/* ************************************************************************** */
// decrement prefix and postfix


/* ************************************************************************** */
// getters and setters
unsigned int GaussGen::GetSeed() const { return *pSeed; }
double GaussGen::GetMu() const { return *pMu; }
double GaussGen::GetSigma() const { return *pSigma; }
void GaussGen::SetHeapArrayLength(unsigned int newlen) {
    if (newlen == 0) {
        std::cout << "Warning!" << std::endl;
        std::cout << "Attempt to set new stored gaussians length to zero..." <<
        std::endl;
        std::cout << "Setting to 1 instead!" << std::endl;
        delete[] pHeapArray;
        pHeapArray = new double[1];
        pHeapArray[0] = (*ndvg)();
    } else if (newlen == *pHeapArrayLength) {
        std::cout << "New length same as current length, re-randomizing..." <<
        std::endl;
        for (unsigned int k = 0; k < *pHeapArrayLength; ++k) {
            pHeapArray[k] = (*ndvg)();
        }
    } else {
        *pHeapArrayLength
        delete[] pHeapArray;
        pHeapArray = new double[*]
    }
}
void GaussGen::SetSeed(unsigned int newseed) { *pSeed = newseed; }
unsigned int GaussGen::GetHeapArrayLength() const { return *pHeapArrayLength; }
unsigned int GaussGen::GetSeed() const { return *pSeed; }


/* ************************************************************************** */
// other class methods
double* GaussGen::GenerateGauss(unsigned int num) const {
    if (num == 0) { num = 0; }
    double* ArrayOut = new double[num];
    for (unsigned int k = 0; k < num; ++k) { ArrayOut[k] = (*ndvg)(); }
    return ArrayOut;
}
double* GaussGen::GetStoredGauss() const { return pHeapArray; }
void GaussGen::RandomizeStoredGauss() {
    for (unsigned int k = 0; k < *pHeapArrayLength; ++k) {
        pHeapArray[k] = (*ndvg)();
    }
}
void GaussGen::PrintStoredSample() const {
    std::cout << "Printing of stored sample called: " << std::endl;
    for (unsigned int k = 0; k < *pHeapArrayLength; ++k) {
        std::cout << "\t\tarray[" << k << "] = " << pHeapArray[k] << std::endl;
    }
}

/* ************************************************************************** */
// static class methods
void GaussGen::SetDefaultHeapArrayLength(unsigned int newlen) {
    *pDefaultHeapArrayLength = newlen;
}
void GaussGen::SetDefaultSeedValue(unsigned int newseed) {
    *pDefaultSeed = newseed;
}
