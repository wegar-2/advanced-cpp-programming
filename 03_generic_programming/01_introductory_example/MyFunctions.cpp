#include <iostream>
#include "MyFunctions.hpp"

using namespace std;

template <typename T>
T MyTemplateFunction(T arg1) {
    cout << "Inside MyTemplateFunction..." << endl;
    return arg1*4;
}

template <typename T1, typename T2>
void MyAnotherTemplateFunction(T1 arg1, T2 arg2) {
    cout << "Inside MyAnotherTemplateFunction..." << endl;
    cout << "\tFirst argument doubled: " << arg1 << endl;
    cout << "\tSecond argument doubled: " << arg2 << endl;
}


// explicit instantiation
template int MyTemplateFunction<int> (int arg1);
template void MyAnotherTemplateFunction<int, double> (int arg1, double arg2);
