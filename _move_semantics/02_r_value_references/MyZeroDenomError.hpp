#ifndef MYZERODENOMERROR_HPP
#define MYZERODENOMERROR_HPP

#include <iostream>

using std::endl;
using std::cout;

class MyZeroDenomError{
public:
    MyZeroDenomError() {
        cout << "Creating an object of class MyZeroDenomError! " << endl;
    }
    ~MyZeroDenomError() {
        cout << "Class MyZeroDenomError destructor called..." << endl;
    }
};

#endif // MYZERODENOMERROR_HPP

