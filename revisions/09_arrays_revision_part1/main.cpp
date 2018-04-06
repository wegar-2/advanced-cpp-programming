#include <iostream>

using namespace std;

int main()
{
    // 1. stack array
    cout << endl;
    cout << "Array of ints in stack..." << endl;
    int Array1[10];
    for (int k = 0; k < 10; k++) {
        Array1[k] = k + 2;
    }
    cout << "Array1 = " << Array1 << endl;
    cout << "*Array1 = " << *Array1 << endl;
    cout << "&Array1[0] = " << &Array1[0] << endl;
    for (int k = 0; k < 10; k++) {
        cout << "Array1[" << k << "] = " << Array1[k] << endl;
        cout << "&Array1[" << k << "] = " << &Array1[k] << endl;
    }

    // 2. array in heap
    cout << endl;
    cout << "Array of ints in heap..." << endl;
    int* Array2 = new int[10];
    for (int k = 0; k < 10; k++) {
        Array2[k] = k*(k + 3);
    }
    for (int k = 0; k < 10; k++) {
        cout << "Array2[" << k << "] = " << Array2[k] << endl;
        cout << "&Array2[" << k << "] = " << &Array2[k] << endl;
    }

    // 3. array of pointers to objects in heap
    cout << endl;
    cout << "Array of pointers to int class objects..." << endl;
    int* Array3[10];
    for (int k = 0; k < 10; k++) {
        Array3[k] = new int(k);
    }
    for (int k = 0; k < 10; k++) {
        cout << "Array3[k] = " << Array3[k] << endl;
        cout << "*Array3[k] = " << *Array3[k] << endl;
        cout << "&Array3[k] = " << &Array3[k] << endl;
    }

    // 4.

    return 0;
}
