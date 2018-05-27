#include<iostream>
#include "TemplateClass.hpp"

using namespace std;

// template class constructors
template <typename T1, typename T2, typename T3>
TemplateClass<T1, T2, T3>::TemplateClass() {
    cout << "Class TemplateClass non-parametrized constructor called. "
    << endl;
    x1 = T1();
    x2 = T2();
    x3 = T3();
}

template <typename T1, typename T2, typename T3>
TemplateClass<T1, T2, T3>::TemplateClass(T1 arg1, T2 arg2, T3 arg3) {
    cout << "Class TemplateClass parametrized constructor called. "
    << endl;
    x1 = T1(arg1);
    x2 = T2(arg2);
    x3 = T3(arg3);
}


// class methods
template <typename T1, typename T2, typename T3>
void TemplateClass<T1, T2, T3>::DisplayClass() {
    cout << "Displaying class TemplateClass object: " << endl;
    cout << "\tx1: " << x1 << endl;
    cout << "\tx2: " << x2 << endl;
    cout << "\tx3: " << x3 << endl;
}


// class getters and setters
template <typename T1, typename T2, typename T3>
void TemplateClass<T1, T2, T3>::SetX1(T1 arg) {
    x1 = arg;
}

template <typename T1, typename T2, typename T3>
void TemplateClass<T1, T2, T3>::SetX2(T2 arg) {
    x2 = arg;
}

template <typename T1, typename T2, typename T3>
void TemplateClass<T1, T2, T3>::SetX3(T3 arg) {
    x3 = arg;
}

template <typename T1, typename T2, typename T3>
T1 TemplateClass<T1, T2, T3>::GetX1() {
    return x1;
}

template <typename T1, typename T2, typename T3>
T2 TemplateClass<T1, T2, T3>::GetX2() {
    return x2;
}

template <typename T1, typename T2, typename T3>
T3 TemplateClass<T1, T2, T3>::GetX3() {
    return x3;
}

template class TemplateClass<int, double, long int>;
template class TemplateClass<int, int, double>;
template class TemplateClass<int, int, int>;

