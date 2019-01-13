#include <iostream>
#include "MyTestClass.hpp"


// -----------------------------------------------------------------------------
// class constructors
MyTestClass::MyTestClass() {
    std::cout << "Inside class MyTestClass non-parametrized constructor..."
    << std::endl;
}

MyTestClass::MyTestClass(double value) {
    std::cout << "Inside class MyTestClass one-parameter constructor..."
    << std::endl;
    pX = new double(value);
    pY = new double(value);
}

MyTestClass::MyTestClass(double x, double y) {
    std::cout << "Inside class MyTestClass two-parameter constructor..."
    << std::endl;
    pX = new double(x);
    pY = new double(y);
}

// -----------------------------------------------------------------------------
// class copy constructors
MyTestClass::MyTestClass(const MyTestClass& rhs) {
    std::cout << "Class MyTestClass copy constructor called..." << std::endl;
    pX = new double(rhs.GetX());
    pY = new double(rhs.GetY());
}

// -----------------------------------------------------------------------------
// class destructor
MyTestClass::~MyTestClass() {
    std::cout << "Class MyTestClass destructor called..." << std::endl;
    delete pX;
    delete pY;
}


// -----------------------------------------------------------------------------
// assignment operator
MyTestClass& MyTestClass::operator=(const MyTestClass& rhs) {
    if (this == &rhs) {
        std::cout << "Self-assignment attempt detected inside assignment operator of the MyTestClass"
        << std::endl;
        return *this;
    }
    else {
        *(this->pX) = *rhs.pX;
        *(this->pY) = *rhs.pY;
        return *this;
    }
}

// -----------------------------------------------------------------------------
// class setters and getters
double MyTestClass::GetX() const {
    return *pX;
}
double MyTestClass::GetY() const {
    return *pY;
}

void MyTestClass::SetX(double x) {
    *pX = x;
}

void MyTestClass::SetY(double y) {
    *pY = y;
}


// -----------------------------------------------------------------------------
// class object printer
void MyTestClass::PrintMe() const {
    std::cout << "Printing info on class MyTestClass object located at: " <<
    this << std::endl;
    std::cout << "\tX coordinate: " << *pX << std::endl;
    std::cout << "\tY coordinate: " << *pY << std::endl;
}


// -----------------------------------------------------------------------------
// incrementation operators
const MyTestClass& MyTestClass::operator++() {
    std::cout << "Class MyTestClass pre-incrementation operator called..." <<
    std::endl;
    SetX(this->GetX() + 1);
    SetY(this->GetY() + 1);
    return *this;
}

const MyTestClass MyTestClass::operator++(int) {
    std::cout << "Class MyTestClass post-incrementation operator called..." <<
    std::endl;
    return MyTestClass(this->GetX() + 1, this->GetY() + 1);
}



// -----------------------------------------------------------------------------
// decrementation operators
const MyTestClass& MyTestClass::operator--() {
    std::cout << "Class MyTestClass pre-decrementation operator called..." <<
    std::endl;
    *pX = *pX - 1;
    *pY = *pY - 1;
    return *this;
}

const MyTestClass MyTestClass::operator--(int) {
    std::cout << "Class MyTestClass post-decrementation operator called..." <<
    std::endl;
    return MyTestClass(this->GetX() - 1, this->GetY() - 1);
}


// -----------------------------------------------------------------------------
// addition and subtraction operators overloading
MyTestClass MyTestClass::operator+(const MyTestClass& rhs) const {
    std::cout << "Class MyTestClass addition operator called..." << std::endl;
    return MyTestClass(this->GetX() + rhs.GetX(), this->GetY() + rhs.GetY());
}

MyTestClass MyTestClass::operator-(const MyTestClass& rhs) const {
    std::cout << "Class MyTestClass subtraction operator called..." << std::endl;
    return MyTestClass(this->GetX() - rhs.GetX(), this->GetY() - rhs.GetY());
}
