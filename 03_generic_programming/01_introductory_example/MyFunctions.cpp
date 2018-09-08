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
    cout << "\tFirst argument doubled: " << 2*arg1 << endl;
    cout << "\tSecond argument doubled: " << 2*arg2 << endl;
}


// explicit instantiation
template int MyTemplateFunction<int> (int arg1);
template void MyAnotherTemplateFunction<int, double> (int arg1, double arg2);

/*
Explicit instantiation of template functions is performed in the way demonstrated above.
1) all the types placeholders have to be indicated in chevrons immediately after the
    function name
2) if the template function does have placeholders used in the definition of its
    parameters, these have to be explicitly indicated when instantiating the
    template function
3) similarly, if the template function's returned type is a placeholder, it has
    to be explicitly provided when instantiating the function template
*/
