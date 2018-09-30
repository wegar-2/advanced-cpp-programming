#include "Fraction1.hpp"
#include <iostream>
#include "MyZeroDenomError.hpp"

using std::endl;
using std::cout;

Fraction1::Fraction1() :
    pNum(new int(1)),
    pDen(new int(10)) {
        cout << "Class Fraction1 default constructor called..." << endl;
    }

Fraction1::Fraction1(int num, int den) :
    pNum(new int(num)),
    pDen(new int(den)) {
        cout << "Class Fraction1 parametrized constructor called..." << endl;
    }

Fraction1::~Fraction1() {
    cout << "Class Fraction1 destructor called..." << endl;
    delete pNum;
    pNum = nullptr;
    delete pDen;
    pDen = nullptr;
}

// copy constructor
Fraction1::Fraction1(const Fraction1& rhs) {
    cout << "Class Fraction1 copy constructor called..." << endl;
    pNum = new int(rhs.GetNum());
    pDen = new int(rhs.GetDen());
}

// assignment operator
Fraction1& Fraction1::operator=(const Fraction1& rhs) {
    cout << "Class Fraction1 assignment operator called..." << endl;
    *pNum = rhs.GetNum();
    *pDen = rhs.GetDen();
}



/* ========================================================================== */
/* ====================     getters and setters     ========================= */

/* A. getters */
int Fraction1::GetNum() const {
    return *pNum;
}
int Fraction1::GetDen() const {
    return *pDen;
}



/* B. setters */
void Fraction1::SetNum(const int& num) {
    cout << "Setting numerator: l-value argument function called..." << endl;
    *pNum = num;
}
void Fraction1::SetNum(int&& num) {
    cout << "Setting numerator: r-value argument function called..." << endl;
    *pNum = num;
}

void Fraction1::SetDen(const int& den) {
    cout << "Setting denominator: l-value argument function called..." << endl;
    if (den == 0) {
        throw MyZeroDenomError();
    }
    *pDen = den;
}


void Fraction1::SetDen(int&& den) {
    cout << "Setting denominator: r-value argument function called..." << endl;
    if (den == 0) {
        throw MyZeroDenomError();
    }
    *pDen = den;
}



