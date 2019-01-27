#ifndef MYCLASS_HPP
#define MYCLASS_HPP
#include <boost/random/variate_generator.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include "SmallClass.hpp"

class MyClass {
public:
    // constructor and destructor ----------------------------------------------
    MyClass();
    MyClass(unsigned int N);
    ~MyClass();
    // copy constructor --------------------------------------------------------
    MyClass(const MyClass& rhs);
    // copy assignment operator ------------------------------------------------
    const MyClass& operator=(const MyClass&rhs);
    // operators' overloading --------------------------------------------------
    SmallClass* operator->() const;
    double operator()() const;
    double& operator[](unsigned int index);
    const double& operator[](unsigned int index) const;
    // other class methods -----------------------------------------------------
    void GenRandNums();
    void PrintStoredArray() const;
    unsigned int GetIntMember() const;
    void ResizeStoredArray(const unsigned int M);
    // static members ----------------------------------------------------------
    static boost::random::mt19937* pmt;
    static boost::random::normal_distribution<>* pnd;
    static boost::random::variate_generator<
        boost::random::mt19937,
        boost::random::normal_distribution<>>* pnd_rng;
private:
    // non-static members ------------------------------------------------------
    unsigned int* pIntMember; // note that size of the heap array is constant!
    double* pValuesArray;
    SmallClass* pSmallObj;


};

#endif // MYCLASS_HPP
