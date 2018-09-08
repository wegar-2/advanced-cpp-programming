#include "Fraction.hpp"
#include "MyFunctions.hpp"
#include <stdlib.h>
#include <iostream>
#include <cmath>


/* -------------------------------------------------------------------------- */
/* -------------     class constructors and destructor  --------------------- */
/* -------------------------------------------------------------------------- */
Fraction::Fraction() {
    std::cout << "Class fraction default constructor called..." << std::endl;
    pNumerator = new int(rand() % 100 + 1);
    pDenominator = new int(rand() % 100 + 1);
}

Fraction::Fraction(int n, int d) {
    std::cout << "Class fraction parametrized constructor called..." <<
    std::endl;
    if (d == 0) {
        std::cout << "WARNING: Attempt to set denominator to zero..."
        << std::endl;
        std::cout << "Setting denominator to 1 instead. " << std::endl;
        pDenominator = new int(1);
    }
    else {
        pDenominator = new int(d);
    }
    pNumerator = new int(n);
}

Fraction::~Fraction() {
    std::cout << "Class Fraction destructor called..." << std::endl;
    delete pNumerator;
    pNumerator = nullptr;
    delete pDenominator;
    pDenominator = nullptr;
}

Fraction::Fraction(const Fraction& rhs) {
    std::cout << "Class Fraction copy constructor called..." << std::endl;
    //*pNumerator = rhs.GetNumerator();
    pNumerator = new int(rhs.GetNumerator());
    //*pDenominator = rhs.GetDenominator();
    pDenominator = new int(rhs.GetDenominator());
}

/* -------------------------------------------------------------------------- */



/* -------------------------------------------------------------------------- */
/* -------------------      class other methods     ------------------------- */
/* -------------------------------------------------------------------------- */

void Fraction::SetNumerator(int n) {
    *pNumerator = n;
}

void Fraction::SetDenominator(int d) {
    *pDenominator = d;
}

int Fraction::GetNumerator() const {
    return *pNumerator;
}

int Fraction::GetDenominator() const {
    return *pDenominator;
}

void Fraction::PrintFraction() const {
    std::cout << "This fraction is: " << *pNumerator << "/" << *pDenominator
    << std::endl;
}

void Fraction::SimplifyFraction() {
    std::cout << "Simplifying a fraction..." << std::endl;
    unsigned int gcd = findGCD(abs(*pNumerator), std::abs(*pDenominator));
    // division
    if (gcd > 1) {
        *pNumerator = *pNumerator/gcd;
        *pDenominator = *pDenominator/gcd;
    }
    // simplify the signs
    if (*pNumerator < 0 && *pDenominator < 0) {
        *pNumerator = -*pNumerator;
        *pDenominator = -*pDenominator;
    }

}


/* -------------------------------------------------------------------------- */



/* -------------------------------------------------------------------------- */
/* ------------------          class operators       ------------------------ */
/* -------------------------------------------------------------------------- */

// incrementation operators
const Fraction& Fraction::operator++() {
    *pNumerator = *pNumerator + std::abs(*pDenominator);
    return *this;
}

const Fraction Fraction::operator++(int flag) {
    Fraction temp(*this);
    *pNumerator = *pNumerator + std::abs(*pDenominator);
    return temp;
}

// decrementation operators
const Fraction& Fraction::operator--() {
    *pNumerator = *pNumerator - std::abs(*pDenominator);
    return *this;
}

const Fraction Fraction::operator--(int flag) {
    Fraction temp(*this);
    *pNumerator = *pNumerator - std::abs(*pDenominator);
    return temp;
}


// addition operator
Fraction Fraction::operator+(const Fraction& arg) {
    int n = (this->GetNumerator()) * arg.GetDenominator() +
        (this->GetDenominator()) * arg.GetNumerator();
    int d = (this->GetDenominator()) * (arg.GetDenominator());
    unsigned int gcd = findGCD(std::abs(n), std::abs(d));
    if (gcd > 1) {
        n = n/gcd;
        d = d/gcd;
    }
    return Fraction(n, d);
}

Fraction Fraction::operator+(const int& arg) {
    Fraction temp = Fraction(this->GetNumerator() + arg*(this->GetDenominator()),
                             this->GetDenominator());
    return temp;
}

// subtraction operator
Fraction Fraction::operator-(const Fraction& arg) {
    int n = (this->GetNumerator()) * arg.GetDenominator() -
        (this->GetDenominator()) * arg.GetNumerator();
    int d = (this->GetDenominator()) * (arg.GetDenominator());
    unsigned int gcd = findGCD(std::abs(n), std::abs(d));
    if (gcd > 1) {
        n = n/gcd;
        d = d/gcd;
    }
    return Fraction(n, d);
}

Fraction Fraction::operator-(const int& arg) {
    Fraction temp = Fraction(this->GetNumerator() - arg*(this->GetDenominator()),
                             this->GetDenominator());
    return temp;
}

// assignment operator
Fraction& Fraction::operator=(const Fraction& rhs) {
    std::cout << "Class Fraction copy assignment operator called..."
    << std::endl;
    if (this == &rhs) {
        return *this;
    }
    else {
        delete pNumerator;
        pNumerator =  new int(rhs.GetNumerator());
        delete pDenominator;
        pDenominator = new int(rhs.GetDenominator());
        return *this;
    }
}

/* -------------------------------------------------------------------------- */
