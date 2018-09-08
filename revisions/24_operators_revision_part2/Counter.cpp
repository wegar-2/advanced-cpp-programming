#include "Counter.hpp"
#include <iostream>


/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/* ------------------ Class constructors and destructor --------------------- */
/* -------------------------------------------------------------------------- */

Counter::Counter() : pCounterValue(new int(0)) {
    std::cout << "Class Counter default constructor" << std::endl;
}

Counter::Counter(int value) : pCounterValue(new int(value)) {
    std::cout << "Class Counter one-param ctor called..." << std::endl;
}

Counter::~Counter() {
    std::cout << "Class Counter destructor called..." << std::endl;
    delete pCounterValue;
    pCounterValue = nullptr;
}

Counter::Counter(const Counter& rhs) {
    std::cout << "Class Counter copy constructor called..." << std::endl;
    //delete pCounterValue;
    pCounterValue = new int(rhs.GetCounterValue());
}
/* -------------------------------------------------------------------------- */



/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/* -----------------------    other class methods     ----------------------- */
/* -------------------------------------------------------------------------- */
int Counter::GetCounterValue() const { return *pCounterValue; }

void Counter::SetCounterValue(int value) { *pCounterValue = value; }

void Counter::PrintObj() const {
    std::cout << "This counter value: " << *pCounterValue << std::endl;
}

// pre-incremenation operator
const Counter& Counter::operator++() {
    *pCounterValue = *pCounterValue + 1;
    return *this;
}

// post-incrementation operator
const Counter Counter::operator++(int flag) {
    /*
        NOTE: this is post-incrementation operator - the returned value should
        not be incremented by one, but the object on which the operator is
        called should be incremented by one - hence the implementation is using
        a temporary temp object created via copy constructor
    */
    Counter temp(*this);
    *pCounterValue = *pCounterValue + 1;
    return temp;
}

/* implementation of decrementation operators below... */
const Counter& Counter::operator--() {
    *pCounterValue = *pCounterValue -1;
    return *this;
}

const Counter Counter::operator--(int flag) {
    Counter temp(*this);
    *pCounterValue = *pCounterValue - 1;
    return *this;
}

/* addition operator */
const Counter Counter::operator+(const Counter& arg) const {
    Counter temp(*this);
    temp.SetCounterValue(this->GetCounterValue() + arg.GetCounterValue());
    return temp;
}

/* subtraction operator */
const Counter Counter::operator-(const Counter& arg) const {
    Counter temp(*this);
    temp.SetCounterValue(this->GetCounterValue() - arg.GetCounterValue());
    return temp;
}

/* assignment operator overloading */
Counter& Counter::operator=(const Counter& rhs) {
    if (this == &rhs) {
        return *this;
    }
    else {
        *pCounterValue = rhs.GetCounterValue();
        return *this;
    }
}
/* -------------------------------------------------------------------------- */
