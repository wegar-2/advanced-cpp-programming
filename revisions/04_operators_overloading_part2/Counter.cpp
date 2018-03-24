#include <iostream>
#include "Counter.hpp"

using namespace std;

// implementation of constructors and destructor
Counter::Counter() {
    cout << "Counter class non-parametrized constructor called..."
        << endl;
    pVal = new int(0);
}

Counter::Counter(int startVal) {
    cout << "Counter class parametrized constructor called..." << endl;
    pVal = new int(startVal);
}

Counter::~Counter() {
    cout << "Counter class destructor called..." << endl;
    delete pVal;
}

Counter::Counter(const Counter& rhs) {
    cout << "Class Counter copy constructor called..." << endl;
    pVal = new int(*(rhs.pVal));
}

// other methods implementation
void Counter::Increment() {
    *pVal = *pVal + 1;
}

void Counter::operator++() {
    *pVal = *pVal + 1;
}

void Counter::Display() {
    cout << "Current counter value is: " << *pVal << endl;
}

