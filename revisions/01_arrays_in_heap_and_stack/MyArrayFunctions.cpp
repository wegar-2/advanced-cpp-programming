#include <iostream>
#include "MyArrayFunctions.hpp"

using namespace std;

void MyFirstArrayFunction(int ArrayIn[], int ArrayLength) {
    cout << "Inside MyFirstArrayFunction..." << endl;
    for (int k = 0; k < ArrayLength; k++) {
        cout << "\t" << k << ": " << ArrayIn[k] << endl;
    }
}

void MySecondArrayFunction(int* ArrayIn, int ArrayLength) {
    cout << "Inside MyFirstArrayFunction..." << endl;
    for (int k = 0; k < ArrayLength; k++) {
        cout << "\t" << k << ": " << ArrayIn[k] << endl;
    }
}
