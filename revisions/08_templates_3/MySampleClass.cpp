#include <iostream>
#include <string>
#include <vector>
#include "MySampleClass.hpp"
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::endl;



/* ========================================================================== */
/* static member variables assignment */
template <typename T1, typename T2>
unsigned int MySampleClass<T1, T2>::InstancesCounter = 0;

template <typename T1, typename T2>
unsigned int MySampleClass<T1, T2>::DefaultVectorSize = 10;

template <typename T1, typename T2>
unsigned int MySampleClass<T1, T2>::CounterOfAllInstancesEverCreated = 0;


/* ========================================================================== */
/* template class constructors and destructor */
template <typename T1, typename T2>
MySampleClass<T1, T2>::MySampleClass() {
    cout << "Inside template class MySampleClass non-parametrized constructor..."
    << endl;
    // initializing scalar member fields
    field1 = T1();
    field2 = new T2();
    // initializing vector member fields
    vect1 = vector<T1>(DefaultVectorSize);
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        vect1[k] = T1();
    }
    vect2 = new vector<T2>(DefaultVectorSize);
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        (*vect2)[k] = T2();
    }
    // incrementing the counters and setting object ID
    ++InstancesCounter;
    ThisObjectId = ++CounterOfAllInstancesEverCreated;
}

template <typename T1, typename T2>
MySampleClass<T1, T2>::MySampleClass(T1 arg1, T2 arg2) {
    cout << "Inside template class MySampleClass parametrized constructor..." << endl;
    // initializing the scalar member fields
    field1 = T1(arg1);
    field2 = new T2(arg2);
    // initializing the vector member fields
    vect1 = vector<T1>(DefaultVectorSize);
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        vect1[k] = T1(arg1);
    }
    vect2 = new vector<T2>(DefaultVectorSize);
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        (*vect2)[k] = T2(arg2);
    }
    // incrementing the counters and setting object ID
    ++InstancesCounter;
    ThisObjectId = ++CounterOfAllInstancesEverCreated;
}

template <typename T1, typename T2>
MySampleClass<T1, T2>::~MySampleClass() {
    cout << "Class MySampleClass destructor called..." << endl;
    // tidying up the heap
    delete field2;
    field2 = nullptr;
    delete vect2;
    vect2 = nullptr;
    // decrementing counter of instances
    --InstancesCounter;
}

template <typename T1, typename T2>
MySampleClass<T1, T2>::MySampleClass(const MySampleClass& rhs) {
    cout << "Class MySampleClass copy constructor called..." << endl;
    // member fields
    field1 = rhs.GetField1Value();
    field2 = new T2(rhs.GetField2Value());
    // member vectors initialization
    vect1 = vector<T1>(DefaultVectorSize);
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        vect1[k] = T1(rhs.GetField1Value());
    }
    vect2 = new vector<T2>(DefaultVectorSize);
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        (*vect2)[k] = T2(rhs.GetField2Value());
    }
    ++InstancesCounter;
    ThisObjectId = ++CounterOfAllInstancesEverCreated;
}



/* ========================================================================== */
/* template class' other methods */
template <typename T1, typename T2>
void MySampleClass<T1, T2>::PrintObject() const {
    cout << "\n";
    cout << "---------------------------------------------------------" << endl;
    cout << "Displaying object with ID: " << ThisObjectId << endl;
    // field1
    cout << "\tField 1: " << endl;
    cout << "\t\t" << field1 << endl;
    // field2
    cout << "\tField2: "<< endl;
    cout << "\t\t" << *field2<< endl;
    // vect1
    cout << "\tvect1: " << endl;
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        cout << "\t\tvect1[" << k << "]=" << vect1[k] << endl;
    }
    // vect2
    cout << "\tvect2: " << endl;
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        cout << "\t\t(*vect2)[" << k << "]=" << (*vect2)[k] << endl;
    }
    cout << "---------------------------------------------------------" << endl;
    cout << "\n\n";
}


template <typename T1, typename T2>
T1 MySampleClass<T1, T2>::GetField1Value() const {
    return field1;
}
template <typename T1, typename T2>
T2 MySampleClass<T1, T2>::GetField2Value() const {
    return *field2;
}


template <typename T1, typename T2>
void MySampleClass<T1, T2>::SetField1Value(T1 arg) {
    field1 = arg;
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        vect1[k] = arg;
    }
}
template <typename T1, typename T2>
void MySampleClass<T1, T2>::SetField2Value(T2 arg) {
    *field2 = arg;
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        (*vect2)[k] = arg;
    }
}


template <typename T1, typename T2>
void MySampleClass<T1, T2>::DisplayDefaultVectorSize() {
    cout << "The default vector size is: " << DefaultVectorSize << endl;
}
template <typename T1, typename T2>
void MySampleClass<T1, T2>::DisplayInstancesCounter() {
    cout << "Currently there exist: " << InstancesCounter <<
    " instances of this template class..." << endl;
}
template <typename T1, typename T2>
void MySampleClass<T1, T2>::DisplayCounterOfAllInstancesEverCreated() {
    cout << "There have been " << CounterOfAllInstancesEverCreated <<
    " instances of this template class ever created..." << endl;
}

template <typename T1, typename T2>
unsigned int MySampleClass<T1, T2>::GetDefaultVectorSize() {
    return DefaultVectorSize;
}
template <typename T1, typename T2>
unsigned int MySampleClass<T1, T2>::GetInstancesCounter() {
    return InstancesCounter;
}
template <typename T1, typename T2>
unsigned int MySampleClass<T1, T2>::GetCounterOfAllInstancesEverCreated() {
    return CounterOfAllInstancesEverCreated;
}



/* ========================================================================== */
/* template class operators */
template <typename T1, typename T2>
MySampleClass<T1, T2>& MySampleClass<T1, T2>::operator=(const MySampleClass& rhs) {
    cout << "Template class' MySampleClass assignment operator called..."
    << endl;
    // fields
    field1 = rhs.GetField1Value();
    *field2 = rhs.GetField2Value();
    //vectors
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        vect1[k] = rhs.GetField1Value();
    }
    for (unsigned int k=0; k<DefaultVectorSize; ++k) {
        (*vect2)[k] = rhs.GetField2Value();
    }
    return *this;
}



/* ========================================================================== */
/* explicit instantiation */
template class MySampleClass<int, int>;
template class MySampleClass<int, double>;
template class MySampleClass<double, double>;
template class MySampleClass<int, string>;

