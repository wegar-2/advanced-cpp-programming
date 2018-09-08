#include "MyClass.hpp"
#include <string>
#include <iostream>


/* -------------------------------------------------------------------------- */
/* constructors and destructor */

MyClass::MyClass() :
    pDouble(new double(1.2)), pString(new std::string("zxcv")) {}

MyClass::MyClass(double arg_double, std::string arg_string) :
    pDouble(new double(arg_double)), pString(new std::string(arg_string))
     { std::cout << "Class MyClass constructor called..." << std::endl; }

MyClass::~MyClass() {
    std::cout << "Class MyClass destructor called..." << std::endl;
    delete pDouble;
    pDouble = nullptr;
    delete pString;
    pString = nullptr;
}

MyClass::MyClass(const MyClass& rhs) {
    std::cout << "Class MyClass copy constructor callled..." << std::endl;
    delete pDouble;
    delete pString;
    pDouble = new double(rhs.GetDouble());
    pString = new std::string(rhs.GetString());
}


/* -------------------------------------------------------------------------- */
/* other class methods */

void MyClass::PrintObj() const {
    std::cout << "Printing object of 'MyClass' type: " << std::endl;
    std::cout << "\tdouble member: " << *pDouble;
    std::cout << "\tstring member: " << *pString;
}

double MyClass::GetDouble() const {
    return *pDouble;
}

std::string MyClass::GetString() const {
    return *pString;
}


/* -------------------------------------------------------------------------- */
/* operators */

MyClass& MyClass::operator=(const MyClass& rhs) {
    *pDouble = rhs.GetDouble();
    *pString = rhs.GetString();
    return *this;
}

