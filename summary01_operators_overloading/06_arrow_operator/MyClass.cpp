#include "MyClass.hpp"
#include <iostream>
#include <boost/random/variate_generator.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include "SmallClass.hpp"


/* -------------------------------------------------------------------------- */
// static members
boost::random::mt19937* MyClass::pmt = new boost::random::mt19937(111);
boost::random::normal_distribution<>* MyClass::pnd =
    new boost::random::normal_distribution<>(0.0, 1.0);
// use the Mersenne twister and normal dist static objs to create variate generator
boost::random::variate_generator<boost::random::mt19937,
                                 boost::random::normal_distribution<>>* MyClass::pnd_rng =
new boost::random::variate_generator<boost::random::mt19937,
        boost::random::normal_distribution<>>(*MyClass::pmt, *MyClass::pnd);


/* -------------------------------------------------------------------------- */
// class constructors and destructor
MyClass::MyClass() {
    std::cout << "Class MyClass non-parametrized constructor called..." <<
    std::endl;
    pIntMember = new unsigned int(10);
    pValuesArray = new double[*pIntMember];
    GenRandNums();
    pSmallObj = new SmallClass();
}
MyClass::MyClass(unsigned int N) {
    std::cout << "Class MyClass parametrized constructor called..." << std::endl;
    pIntMember = new unsigned int(N);
    pValuesArray = new double[*pIntMember];
    GenRandNums();
    pSmallObj = new SmallClass();
}
MyClass::~MyClass() {
    std::cout << "Class MyClass destructor called..." << std::endl;
    delete pIntMember;
    delete[] pValuesArray;
    delete pSmallObj;
}


/* -------------------------------------------------------------------------- */
// class copy constructor
MyClass::MyClass(const MyClass& rhs) {
    std::cout << "Class MyClass copy constructor called..." << std::endl;
    pIntMember = new unsigned int(rhs.GetIntMember());
    pValuesArray = new double[*pIntMember];
    for (unsigned int k = 0; k < *pIntMember; ++k) {
        pValuesArray[k] = rhs[k];
    }
    pSmallObj = new SmallClass();
}


/* -------------------------------------------------------------------------- */
// class assignment operator
const MyClass& MyClass::operator=(const MyClass& rhs) {
    std::cout << "" << std::endl;
    // check for self-assignment
    if (this == &rhs) {
        return *this;
    } else {
        // set the new size of the array
        *pIntMember = rhs.GetIntMember();
        // resize the existing array
        this->ResizeStoredArray(*pIntMember);
        // fill in the newly created array
        for (unsigned int k = 0; k < *pIntMember; ++k) {
            pValuesArray[k] = rhs[k];
        }
        return *this;
    }
}


/* -------------------------------------------------------------------------- */
// other class operators
SmallClass* MyClass::operator->() const {
    return pSmallObj;
}

double MyClass::operator()() const {
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>> rng1 = *MyClass::pnd_rng;
    return rng1();
}

double& MyClass::operator[](unsigned int index) {
    std::cout << "Non-const subscript operator called!" << std::endl;
    if (index <= *pIntMember) {
        return pValuesArray[index];
    } else {
        std::cout << "\t\tAttempt to get item beyond the end of the array..." << std::endl;
        std::cout << "\t\tReturning last array element..." << std::endl;
        return pValuesArray[*pIntMember];
    }
}

const double& MyClass::operator[](unsigned int index) const {
    std::cout << "Const subscript operator called!" << std::endl;
    if (index <= *pIntMember) {
        return pValuesArray[index];
    } else {
        std::cout << "\t\tAttempt to get item beyond the end of the array..." << std::endl;
        std::cout << "\t\tReturning last array element..." << std::endl;
        return pValuesArray[*pIntMember];
    }
}


/* -------------------------------------------------------------------------- */
// other class methods
void MyClass::GenRandNums() {
    std::cout << "Re-randomizing values on the heap array..." << std::endl;
    for (unsigned int k = 0; k < *pIntMember; ++k) {
        pValuesArray[k] = (*pnd_rng)();
    }
}
void MyClass::PrintStoredArray() const {
    std::cout << "Printing members of the heap array: " << std::endl;
    for (unsigned int k = 0; k < *pIntMember; ++k) {
        std::cout << "\t\tarray[" << k << "] = " << pValuesArray[k] << std::endl;
    }
}
unsigned int MyClass::GetIntMember() const {
    return *pIntMember;
}

void MyClass::ResizeStoredArray(const unsigned int M) {
    std::cout << "Re-sizing the stored array..." << std::endl;
    delete[] pValuesArray;
    *pIntMember = M;
    pValuesArray = new double[M];
    // setting all members of the stored array to zero
    for (unsigned int k = 0; k < M; ++k) {
        pValuesArray[k] = 0;
    }
}



