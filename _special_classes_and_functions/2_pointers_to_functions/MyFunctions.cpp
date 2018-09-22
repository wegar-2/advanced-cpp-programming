#include "MyFunctions.hpp"
#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;
using std::string;


/* -------------------------------------------------------------------------- */
/* various functions */
void DisplayIntsArray(int* array_in, unsigned int array_len,
                      string array_name) {
    cout << "Displaying the array " << array_name << ": " << endl;
    for (unsigned int k=0; k<array_len; ++k) {
        cout << "array[" << k <<"]=" << array_in[k] << endl;
    }
}

void DisplayArrayOfIntsPointers(unsigned int** array_of_pointers,
                                unsigned int array_len) {
    cout << "Displaying elements of an array of pointers: " << endl;
    for (unsigned int k=0; k<array_len; ++k) {
        cout << "Element nr " << k << ": " << endl;
        cout << "\taddress: " << array_of_pointers[k] << endl;
        cout << "\tvalue stored: " << *array_of_pointers[k] << endl;
    }
}

void DisplayHeapArrayElements(int* heap_array, unsigned int array_len) {
    cout << "Displaying elements of a heap array: " << endl;
    for (unsigned int k=0; k<array_len; ++k) {
        cout << "\tElement " << k << ":" << *(heap_array+k) << endl;
    }
}


/* -------------------------------------------------------------------------- */
/* statistics-related functions */
double SumArrayElements(double array_in[], unsigned int array_len) {
    double sum = 0;
    for (unsigned int k=0; k<array_len; ++k) {
        sum += *(array_in+k);
    }
    return sum;
}

double AverageOfArrayElements(double array_in[], unsigned int array_len) {
    return SumArrayElements(array_in, array_len)/array_len;
}

double SumOfSquaredArrayElements(double array_in[], unsigned int array_len) {
    double SoS = 0;
    for (unsigned int k=0; k<array_len; ++k) { SoS += *(array_in+k); }
    return SoS;
}

double StandardDeviationOfArrayElements(double array_in[],
                                        unsigned int array_len) {
    double sd = SumOfSquaredArrayElements(array_in, array_len) -
            array_len*std::pow(AverageOfArrayElements(array_in, array_len), 2);
    return sd;
}


/* -------------------------------------------------------------------------- */
/* pointers-to-functions-related functions*/

void StatFunctionWrapper(double (*pFunction)(double*, unsigned int),
                         std::string* function_name,
                         double array_in[], unsigned int array_len) {
    // 1. display general info
    cout << "Inside the StatFunctionWrapper function... " << endl;
    cout << "Obtained function called: " << function_name << endl;
    // 2.
    for (unsigned int k=0; k<array_len; ++k) {
        cout << "array[" << k << "] = " << *(array_in+k) << endl;
    }
    // 3. run the function that was obtained
    double res = pFunction(array_in, array_len);
    cout << "Obtained the following result: " << res << endl;
}
