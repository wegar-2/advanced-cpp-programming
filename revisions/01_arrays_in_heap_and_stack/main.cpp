#include <iostream>
#include "MyArrayFunctions.hpp"

using namespace std;

int main()
{
    // 1. simple array in stack
    int array1[4] = {1, 5, 10, 20};
    cout << "Working with array1..." << endl;
    cout << "array1: " << array1 << endl;
    cout << "&array1[0]: " << &array1[0] << endl;
    cout << "array1[0]: " << array1[0] << endl;
    cout << "*array1: " << *array1 << endl;
    cout << "Passing array1 to MyFirstArrayFunction: " << endl;
    MyFirstArrayFunction(array1, 4);
    cout << "Passing array1 to MySecondArrayFunction: " << endl;
    MyFirstArrayFunction(array1, 4);
    cout << "\n\n\n" << endl;

    // 2. an array in heap
    int* array2 = new int[4];
    for (int k = 0; k < 4; k++) {
        array2[k] = (k+3)*(k+3);
    }
    cout << "array2[0]: " << array2[0] << endl;
    cout << "&array2: " << &array2 << endl;
    cout << "array2: " << array2 << endl;
    cout << "Passing array2 to MyFirstArrayFunction: " << endl;
    MyFirstArrayFunction(array2, 4);
    cout << "Passing array2 to MySecondArrayFunction: " << endl;
    MyFirstArrayFunction(array2, 4);
    cout << "\n\n\n" << endl;

    // 3. an array of pointers to ints
    int* array3[4];
    for (int k = 0; k < 4; k++) {
        array3[k] = new int((k+1)*(k+1));
    }
    cout << "array3[0]: " << array3[0] << endl;
    cout << "&array3[0]: " << &array3[0] << endl;
    cout << "*array3[0]: " << *array3[0] << endl;
    cout << "Passing array3 to MySecondArrayFunction: " << endl;

    cout << endl;
    int CtdArray1Size = sizeof(array3)/sizeof(array3[0]);
    cout << "Calculated size of array3: " << CtdArray1Size << endl;
    cout << "\n\n\n" << endl;


    return 0;
}
