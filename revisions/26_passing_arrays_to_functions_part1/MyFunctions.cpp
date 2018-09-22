#include "MyFunctions.hpp"
#include <iostream>

using std::endl;
using std::cout;



/* ========================================================================== */
template <typename T>
void DisplayArrayElements(T* ArrayIn, unsigned int ArrayLen) {
    cout << "Displaying the obtained array: " << endl;
    for (unsigned int k=0; k < ArrayLen; ++k) {
        cout << "\tarray[" << k << "]=" << ArrayIn[k] << endl;
    }
    cout << "Finished displaying the array. " << endl;
}


template void DisplayArrayElements<double>(double* ArrayIn, unsigned int ArrayLen);
template void DisplayArrayElements<int>(int* ArrayIn, unsigned int ArrayLen);



/* ========================================================================== */
void DisplayPointersArray(double** pointersArrayIn,
                          unsigned int ArrayLen) {
    cout << "Displaying elements of an array of pointers: " << endl;
    for (unsigned int k=0; k<ArrayLen; ++k) {
        cout << "array[" << k << "]=" << pointersArrayIn[k] << endl;
        cout << "*array[" << k << "]=" << *(pointersArrayIn[k]) << endl;
    }
    cout << "Finished displaying an array of pointers" << endl;
}

