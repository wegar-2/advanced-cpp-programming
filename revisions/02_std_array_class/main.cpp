#include <iostream>
#include <array>

using namespace std;

void DisplayAnArray(array<int, 3> ArrayIn); // note: array length is not passed

template <typename T>
void DisplayAnArrayTemp1(array<T, 5> ArrayIn) {
    cout << "Inside DisplayAnArrayTemp1 function..." << endl;
    for (int k(0); k < 3; k++) {
        cout << "array[" << k << "] = " << ArrayIn[k] << endl;
    }
    cout << "Quitting DisplayAnArrayTemp1 function. " << endl;
}

void AnotherDisplayFunction(const array<int, 4>& ArrayIn) {
    cout << "Inside the AnotherDisplayFunction function..." << endl;
    for (int k(0); k < ArrayIn.size(); k++) {
        cout << "array[" << k << "] = " << ArrayIn[k] << endl;
    }
}

int main()
{
    // 1. creating std::array objects - initialization
    array<int, 3> array1 = {1, 5, 1};
    array<double, 4> array2 = {1.123, 3.2, 65.5, 434.2};
    // 2. accessing elements of class std::array objects
    for (int k(0); k < 3; k++) {
        cout << "array1[" << k << "] = " << array1[k] << endl;
    }
    for (int k(0); k < 4; k++) {
        cout << "array2[" << k << "] = " << array2[k] << endl;
    }
    // 3. std::array .at() function that does the bounds checking
    cout << "array1.at(2) = " << array1.at(2) << endl;
    return 0;
    // 4. getting size of an array object
    cout << "array1.size() = " << array1.size() << endl;
    cout << "array2.size() = " << array2.size() << endl;
    // 5. using DisplayAnArray function
    array<int, 5> array3 = {1, 3, 1, 5, 111};
    DisplayAnArrayTemp1(array3);
}

void DisplayAnArray(array<int, 3> ArrayIn) {
    cout << "Inside DisplayAnArray function... " << endl;
    for (int k(0); k < ArrayIn.size(); k++) {
        cout << "\tArrayIn[" << k << "] = " << ArrayIn[k] << endl;
    }
}

