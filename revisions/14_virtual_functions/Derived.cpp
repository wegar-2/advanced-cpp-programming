#include <iostream>
#include "Derived.hpp"
#include <cstdlib>

using namespace std;

Derived::Derived() {
    value = rand() % 100;
}

void Derived::PrintValue() {
    cout << "Virtual print of class Derived called..." << endl;
    cout << "value = " << value << endl;
}

void Derived::AnotherPrintValue() {
    cout << "Non-virtual print of class Derived called..." << endl;
    cout << "value = " << value << endl;
}

