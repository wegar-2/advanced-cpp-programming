#include<iostream>
#include "Base.hpp"
#include <cstdlib>

using namespace std;

Base::Base() {
    cout << "Class Base constructor called..." << endl;
    value = (static_cast<double>(rand()))/(static_cast<double>(rand())+1);
}

void Base::PrintValue() {
    cout << "Virtual print of class Base called..." << endl;
    cout << "value = " << value << endl;
}

void Base::AnotherPrintValue() {
    cout << "Non-virtual print of class Base called..." << endl;
    cout << "value = " << value << endl;
}
