#include "AnotherFunction.hpp"
#include <iostream>

using namespace std;

template <typename T1, typename T2>
void AnotherFunction(T1 arg1, T2 arg2) {
    cout << "Inside AnotherFunction..." << endl;
    cout << "arg1 = " << arg1 << endl;
    cout << "arg2 = " << arg2 << endl;
}

// explicit instantiation of the function template
template void AnotherFunction<int, int>(int arg1, int arg2);
template void AnotherFunction<double, int>(double arg1, int arg2);
template void AnotherFunction<int, double>(int arg1, double arg2);
template void AnotherFunction<double, double>(double arg1, double arg2);
