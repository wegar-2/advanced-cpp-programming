#include "HelperClass.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;


/* ****************************************************** */
// class constructors and destructor


// 1. default constructor
HelperClass::HelperClass() {
    // setting lengths
    pLen1 = new int(10);
    pLen2 = new int(10);
    // set seed that is used in the default constructor
    srand(111);
    // 1.
    pValue = new int(rand() % 100);
    // 2.
    heapArray = new int[10];
    for (int k = 0; k < 10; k++) {
        heapArray[k] = rand() % 100;
    }
    // 3.
    for (int k = 0; k < 10; k++) {
        pointersArray[k] = new int(rand() % 100);
    }
    // 4.
    heapPointersArray = new int*[10];
    for (int k = 0; k < 10; k++) {
        heapPointersArray[k] = new int(rand() % 100);
    }
}


// 2. parametrized constructor
HelperClass::HelperClass(int arg_seed, int value, int len1, int len2, unsigned int arg_modulus=100) {
    // 0. setting arrays' lengths
    pLen1 = new int(len1);
    pLen2 = new int(len2);

    srand(arg_seed);
    // 1.
    pValue = new int(rand() % arg_modulus);
    // 2.
    heapArray = new int[len1];
    for (int k = 0; k < len1; k++) {
        heapArray[k] = rand() % arg_modulus;
    }
    // 3.
    for (int k = 0; k < 10; k++) {
        pointersArray[k] = new int(rand() % arg_modulus);
    }
    // 4.
    heapPointersArray = new int*[len2];
    for (int k = 0; k < len2; k++) {
        heapPointersArray[k] = new int(rand() % arg_modulus);
    }
}


// 3. class copy constructor
HelperClass::HelperClass(const HelperClass& rhs) {
    cout << "HelperClass copy constructor called..." << endl;

    // lengths and value
    pValue = new int(rhs.GetValue());
    pLen1 = new int(rhs.GetHeapArraySize());
    pLen2 = new int(rhs.GetHeapPointersArraySize());

    // heapArray
    heapArray = new int[*pLen1];
    for (int k = 0; k < *pLen1; k++) {
        heapArray[k] = rhs.GetHeapPointersArrayElement(k);
    }

    // pointersArray
    for (int k = 0; k < 10; k++) {
        pointersArray[k] = new int(rhs.GetPointersArrayElement(k));
    }

    // heapPointersArray
    heapPointersArray = new int*[*pLen2];
    for (int k = 0; k < *pLen2; k++) {
        heapPointersArray[k] = new int(rhs.GetHeapPointersArrayElement(k));
    }
}


// 4. class destructor
HelperClass::~HelperClass() {
    cout << "Class HelperClass destructor called..." << endl;
    delete pValue;
    delete pLen1;
    delete pLen2;
    delete heapArray;
    delete heapPointersArray;
}



/* ****************************************************** */
// class methods
void HelperClass::print() const {
    cout << "Displaying a description of HelperClass object: " << endl;

    cout << "0. lengths: " << endl;
    cout << "\t*pLen1" << *pLen1 << endl;
    cout << "\t*pLen2" << *pLen2 << endl << endl;

    cout << "1. pValue: " << endl;
    cout << "\t" << "pValue=" << pValue << endl;
    cout << "\t" << "*pValue=" << *pValue << endl << endl;

    cout << "2. heapArray: " << endl;
    for (int k = 0; k < *pLen1; k++) {
        cout << "\theapArray[" << k << "] = " << heapArray[k] << endl;
    }
    cout << endl;

    cout << "3. pointersArray: " << endl;
    for (int k = 0; k < 10; k++) {
        cout << "\tpointersArray[" << k << "] = " << pointersArray[k] << endl;
        cout << "\t*pointersArray[" << k << "] = " << *pointersArray[k] << endl;
    }
    cout << endl;

    cout << "4. heapPointersArray: " << endl;
    for (int k = 0; k < *pLen2; k++) {
        cout << "\theapPointersArray[" << k << "] = " << heapPointersArray[k] << endl;
        cout << "\t*heapPointersArray[" << k << "] = " << *heapPointersArray[k] << endl;
    }
    cout << endl;
}


void HelperClass::SetValue(int arg) {
    *pValue = arg;
}
int HelperClass::GetValue() const {
    return *pValue;
}


int HelperClass::GetHeapArraySize() const {
    return *pLen1;
}
int HelperClass::GetHeapArrayElement(unsigned int k) const {
    if (k < *pLen1) {
        return heapArray[k];
    }
    else {
        throw "You have tried to access an element behind the end of the heapArray array! ";
    }
}


int HelperClass::GetPointersArrayElement(unsigned int k) const {
    if (k < 10) {
        return *pointersArray[k];
    }
    else {
        throw "You have tried to access an element behind the end of the pointersArray array! ";
    }
}



int HelperClass::GetHeapPointersArraySize() const {
    return *pLen2;
}
int HelperClass::GetHeapPointersArrayElement(unsigned int k) const {
    if (k < *pLen2) {
        return *heapPointersArray[k];
    }
    else {
        throw "You have tried to access an element behind the end of heapPointersArray array";
    }
}



/* ****************************************************** */
// class operators
const HelperClass& HelperClass::operator++() {
    *pValue = *pValue + 1;
}
const HelperClass& HelperClass::operator--() {
    *pValue = *pValue - 1;
}
const HelperClass& HelperClass::operator++(int) {
    *pValue = *pValue + 1;
}
const HelperClass& HelperClass::operator--(int) {
    *pValue = *pValue - 1;
}


HelperClass HelperClass::operator+(const HelperClass& arg) const {
    return HelperClass(0, *pValue + arg.GetValue(), *pLen1, *pLen2, 100);
}
HelperClass HelperClass::operator-(const HelperClass& arg) const {
    return HelperClass(0, *pValue - arg.GetValue(), *pLen1, *pLen2);
}
HelperClass HelperClass::operator*(const HelperClass& arg) const {
    return HelperClass(0, (*pValue)*arg.GetValue(), *pLen1, *pLen2);
}

