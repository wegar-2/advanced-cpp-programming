#include <iostream>
#include "SimpleClass.hpp"
#include <cstdlib>

using namespace std;

template <typename T1, typename T2>
SimpleClass<T1, T2>::SimpleClass() {
    pCounter = new int(0);
    px = new T1();
    py = new T2();
}

template <typename T1, typename T2>
SimpleClass<T1, T2>::~SimpleClass() {
    cout << "Class SimpleClass destructor has been called..."<< endl;
    delete pCounter;
    delete px;
    delete py;
}

template <typename T1, typename T2>
void SimpleClass<T1, T2>::IncrementCounter() {
    *pCounter += 1;
}

template <typename T1, typename T2>
int SimpleClass<T1, T2>::GetCounterValue() const {
    return *pCounter;
}

template class SimpleClass<int, int> ;
