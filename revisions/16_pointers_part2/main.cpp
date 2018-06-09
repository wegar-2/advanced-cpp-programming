#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

// functions' declarations
int* ReturnHeapArray(unsigned int n);

void PrintArray(int* array_in, unsigned int n);


int main()
{
    /* ************************************************* */
    /* ************************************************* */
    /* overview of various types of arrays */
    // set the seed
    srand(123);
    //
    int array1[10];
    for (int k = 0; k < 10; k++) {
        array1[k] = rand() % 100;
    }
    //
    int* array2 = new int[10];
    for (int k = 0; k < 10; k++) {
        array2[k] = rand() % 100;
    }
    // array of pointers
    int* array3[10];
    for (int k = 0; k < 10; k++) {
        array3[k] = new int(rand() % 10);
    }
    // array in heap of pointers to integers
    int** array4;
    array4 = new int*[10];
    for (int k = 0; k < 10; k++) {
        array4[k] = new int(rand() % 100);
    }
    cout << endl << endl;
    /* ************************************************* */


    /* ************************************************* */
    /* ************************************************* */
    /* returning various types of arrays from functions */
    cout << "Heap array: "<< endl;
    int* heap_array = ReturnHeapArray(10);
    PrintArray(heap_array, 10);
    /* ************************************************* */

    return 0;
}



int* ReturnHeapArray(unsigned int n) {
    if (n > 0) {
        int* array_out = new int[n];
        for (int k = 0; k < n; k++) {
            array_out[k] = rand() % 100;
        }
        // return pointer to the first member of array
        return array_out;
    }
    else {
        throw "Zero is not a valid argument for ReturnHeapArray function!";
    }
}


void PrintArray(int* array_in, unsigned int n) {
    if (n > 0) {
        cout << "Printing out an array:" << endl;
        for (int k = 0; k < n; k++) {
            cout << "\t" << array_in[k] << endl;
        }
    }
    else {
        throw "Zero is not a valid array length passed to PrintArray function. ";
    }
}
