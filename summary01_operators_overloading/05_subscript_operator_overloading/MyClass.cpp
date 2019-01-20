#include "MyClass.hpp"
#include <iostream>

MyClass::MyClass() {
    for (unsigned int k = 0; k < 10; ++k) { MyArray[k] = (k+1)*(k+1); }
}

MyClass::~MyClass() {
    std::cout << "Class MyClass destructor called..." << std::endl;
}

int& MyClass::operator[](unsigned int index) {
    if (index >= 10) {
        std::cout <<
        "An attempt has been made to reach beyond end of the stored array." <<
        std::endl;
        std::cout << "Returning the last element of the array." << std::endl;
        return MyArray[9];
    } else {
        return MyArray[index];
    }
}

const int& MyClass::operator[](unsigned int index) const {
    std::cout << "Const-case subscript operator called..." << std::endl;
    if (index >= 10) {
        std::cout <<
        "An attempt has been made to reach beyond end of the stored array." <<
        std::endl;
        std::cout << "Returning the last element of the array." << std::endl;
        return MyArray[9];
    } else {
        return MyArray[index];
    }
}
