#include <iostream>
#include <string>
#include "MySampleClass.hpp"


using namespace std;

template <typename T1, typename T2, typename T3>
MySampleClass<T1, T2, T3>::MySampleClass() {
    cout << "Inside template class MySampleClass default constructor..." << endl;
    field_T1 = new T1();
    field_T2 = new T2();
    field_T3 = new T3();
}

template <typename T1, typename T2, typename T3>
MySampleClass<T1, T2, T3>::MySampleClass(T1 arg1, T2 arg2, T3 arg3) {
    cout << "Inside template class MySampleClass parametrized constructor..." << endl;
    field_T1 = new T1(arg1);
    field_T2 = new T2(arg2);
    field_T3 = new T3(arg3);
}

template <typename T1, typename T2, typename T3>
MySampleClass<T1, T2, T3>::~MySampleClass() {
    cout << "Template class MySample destructor called..." << endl;
    delete field_T1;
    delete field_T2;
    delete field_T3;
}

template <typename T1, typename T2, typename T3>
MySampleClass<T1, T2, T3>::MySampleClass(const MySampleClass& rhs) {
    cout << "Inside template class MySampleClass copy constructor..." << endl;
    field_T1 = new T1(*(rhs.field_T1));
    field_T2 = new T2(*(rhs.field_T2));
    field_T3 = new T3(*(rhs.field_T3));
}

template <typename T1, typename T2, typename T3>
void MySampleClass<T1, T2, T3>::PrintThisObject() {
    cout << "Template class MySimpleClass display function called..." << endl;
    cout << "field_T1 = " << field_T1 << endl;
    cout << "*field_T1 = " << *field_T1 << endl;
    cout << "field_T2 = " << field_T2 << endl;
    cout << "*field_T2 = " << *field_T2 << endl;
    cout << "field_T3 = " << field_T3 << endl;
    cout << "*field_T3 = " << *field_T3 << endl;
}


// explicit instantiation of two cases of the above-defined template class
template class MySampleClass<int, int, string>;
template class MySampleClass<double, double, string>;

