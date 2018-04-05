#include "TempClass.hpp"
#include <iostream>
#include <string>

using namespace std;

template <typename T>
TempClass<T>::TempClass() {
    cout << "Inside template class TempClass non-parametrized constructor..." << endl;
    field1 = T();
}

template <typename T>
TempClass<T>::TempClass(T arg) {
    cout << "Inside template class TempClass parametrized constructor... " << endl;
    field1 = T(arg);
}

template <typename T>
T TempClass<T>::GetValue() {
    return field1;
}

template class TempClass<int>;
template class TempClass<double>;
template class TempClass<string>;
