#include "ParentClass.hpp"
#include <iostream>
#include <string>

// set starting value of the instances' counter
unsigned int ParentClass::InstancesCounter = 0;

// class constructors and destructor
ParentClass::ParentClass() {
    std::cout << "Class ParentClass default constructor called..." << std::endl;
    // increment instances counter
    ++InstancesCounter;
    pValue = new int(10);
    pString = new std::string("Default string...");
}

ParentClass::ParentClass(int a_value, std::string a_string) {
    std::cout << "Class ParentClass parametrized constructor called..."
    << std::endl;
    ++InstancesCounter;
    pValue = new int(a_value);
    pString = new std::string(a_string);
}

ParentClass::~ParentClass() {
    std::cout << "Class ParentClass destructor called..." << std::endl;
    --InstancesCounter;
    delete pValue;
    delete pString;
}

ParentClass::ParentClass(const ParentClass& rhs) {
    std::cout << "Class ParentClass copy constructor called..." << std::endl;
    ++InstancesCounter;
    // value member
    pValue = new int(rhs.GetValue());
    // string member
    pString = new std::string(rhs.GetString());
}


// class assignment operator implementation
ParentClass& ParentClass::operator=(const ParentClass& rhs) {
    std::cout << "Class ParentClass copy assignment operator called..."
    << std::endl;
    // note that instances' counter is not incremented here
    *pValue = rhs.GetValue();
    *pString = rhs.GetString();
    return *this;
}


// other class methods' implementation
void ParentClass::PrintObject() const {
    std::cout << "This object has the following fields: " << std::endl;
    std::cout << "\tvalue field: " << *pValue << std::endl;
    std::cout << "\tstring field: " << *pString << std::endl;
}

void ParentClass::PrintValueSquared() const {
    std::cout << "This is class ParentClass implementation...." << std::endl;
    std::cout << "Squared value stored by this object is: "
    << (*pValue)*(*pValue) << std::endl;
}

unsigned int ParentClass::GetInstancesCounter() const {
    return InstancesCounter;
}

void ParentClass::PrintInstancesCounter() const {
    std::cout << "Current number of instances of class ParentClass: "
    << InstancesCounter << std::endl;
}

void ParentClass::SetValue(int value_in) {
    *pValue = value_in;
}

void ParentClass::SetString(std::string string_in) {
    *pString = string_in;
}

int ParentClass::GetValue() const {
    return *pValue;
}

std::string ParentClass::GetString() const {
    return *pString;
}
