#include "MyFunctor.hpp"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

MyFunctor::MyFunctor() :
    value(10),
    pArray(new int[10]){
    cout << "Default functor constructor called..." << endl;
    for (int k=0; k<10; ++k)
        pArray[k] = rand() % 100 + 1;
}

MyFunctor::MyFunctor(int x) :
    value(x),
    pArray(new int[10]) {
    cout << "Functor constructor called with value: " << x << endl;
    for (int k=0; k<10; ++k)
        pArray[k] = rand() % 100 + 1;
}

MyFunctor::~MyFunctor() {
    cout << "Class MyFunctor destructor called..." << endl;
    delete[] pArray;
    pArray = nullptr;
}


int MyFunctor::operator()(int y) {
    return (value + y);
}

const int& MyFunctor::operator[](const unsigned int index) const {
    if (index >= 10) {
        cout << "Accessing index behind the array end..." << endl;
        cout << "Returning last element of the array..." << endl;
        return pArray[9];
    }
    else if (index < 0) {
        cout << "Obtained negative index, returning the first element..."
        << endl;
        return pArray[0];
    }
    else {
        return pArray[index];
    }
}


int& MyFunctor::operator[](const unsigned int index) {
    if (index >= 10) {
        cout << "Accessing index behind the array end..." << endl;
        cout << "Returning last element of the array..." << endl;
        return pArray[9];
    }
    else if (index < 0) {
        cout << "Obtained negative index, returning the first element..."
        << endl;
        return pArray[0];
    }
    else {
        return pArray[index];
    }
}
