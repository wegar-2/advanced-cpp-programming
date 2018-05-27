#include <iostream>

using namespace std;

void print_1(int* array_in, int array_len);

void print_pointers_array(int* array_in[], int array_len);

void print_array_in_heap(int* array_in, int array_len);

int main()
{
    /* ************************************************************************ */
    // 1. pointers on stack
    int array1[10];
    for (int k = 0; k < 10; k++) {
        array1[k] = k*3 + 2;
    }
    for (int k = 0; k < 10; k++) {
        cout << "array1[" << k << "] = " << array1[k] << endl;
    }
    // 2. array of pointers in stack
    int* array2[10];
    for (int k = 0; k < 10; k++) {
        array2[k] = new int;
        *array2[k] = k*k;
    }
    for (int k = 0; k < 10; k++) {
        cout << "array2[" << k << "] = " << array2[k] << endl;
        cout << "*array2[" << k << "] = " << *array2[k] << endl;
    }
    // 3. array in heap
    int* array3 = new int[10];
    for (int k = 0; k < 10; k++) {
        array3[k] = k*2 + 1;
    }
    for (int k = 0; k < 10; k++) {
        cout << "array3[" << k << "] = " << array3[k] << endl;
    }

    /* ************************************************************************ */
    // passing arrays to functions
    // 1. passing stack array
    cout << "Passing stack array to function..." << endl;
    print_1(array1, 10);

    cout << "Passing stack array of pointers to function..." << endl;
    print_pointers_array(array2, 10);

    cout << "Passing heap array to a function..." << endl;
    print_array_in_heap(array3, 10);

    return 0;
}


void print_1(int* array_in, int array_len) {
    cout << "Inside function print_1: " << endl;
    for (int k = 0; k < array_len; k++) {
        cout << "\tarray_in[" << k << "] = " << *(array_in + k) << endl;
    }
}

void print_pointers_array(int** array_in, int array_len) {

    cout << "Inside function print_pointers_array: " << endl;
    for (int k = 0; k < array_len; k++) {
        cout << "\tarray_in[" << k << "] = " << *array_in[k] << endl;
    }
}

void print_array_in_heap(int* array_in, int array_len) {
    cout << "Inside print_array_in_heap function. " << endl;
    for (int k = 0; k < array_len; k++) {
        cout << "array_in[" << k << "] = " << array_in[k] << endl;
    }
}


