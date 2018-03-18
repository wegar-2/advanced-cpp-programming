#include <iostream>
#include "OrderedPair.hpp"

using namespace std;


// constructors and destructor
template <typename T1, typename T2>
OrderedPair<T1, T2>::OrderedPair() {
    cout << "Inside class OrderedPair creator..." << endl;
    FirstElement = new T1();
    SecondElement = new T2();
};

template <typename T1, typename T2>
OrderedPair<T1, T2>::OrderedPair(T1 arg1, T2 arg2) :
    FirstElement (new T1()),
    SecondElement (new T2()) {
    cout << "Parametrized class OrderedPair constructor called..." << endl;
    *FirstElement = arg1;
    *SecondElement = arg2;
}

template <typename T1, typename T2>
OrderedPair<T1, T2>::~OrderedPair() {
    cout << "Class OrderedPair destructor called..." << endl;
    delete FirstElement;
    delete SecondElement;
}


// other class methods
template <typename T1, typename T2>
void OrderedPair<T1, T2>::SetElements(T1 arg1, T2 arg2) {
    *FirstElement = arg1;
    *SecondElement = arg2;
}

template <typename T1, typename T2>
void OrderedPair<T1, T2>::DisplayElements() const {
    cout << "Displaying class OrderedPairElements: " << endl;
    cout << "\tFirstElement: " << *FirstElement << endl;
    cout << "\tSecondElement: " << *SecondElement << endl;
}

// instantiating template class
template class OrderedPair<int, int>;
template class OrderedPair<double, int>;
template class OrderedPair<int, double>;
template class OrderedPair<double, double>;

