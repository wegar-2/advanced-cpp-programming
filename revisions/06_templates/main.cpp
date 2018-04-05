#include <iostream>
#include <string>
#include "AnotherFunction.hpp"
#include "MySampleClass.hpp"

using namespace std;

template <typename T>
void MyFunction(T arg1, T arg2);

int main()
{
    // 1. simplest case
    int x, y;
    x = 123;
    y = 12;
    MyFunction(x, y);
    double z, c;
    z = 123.22;
    c = 23.3;
    MyFunction(z, c);
    // 2. using imported function template
    AnotherFunction(x, y);
    AnotherFunction(x, c);
    AnotherFunction(z, y);
    AnotherFunction(z, c);
    // 3. using imported class template
    cout << endl << endl;
    cout << "obj1..." << endl;
    string string1 = "asdf";
    MySampleClass<int, int, string> obj1 =
        MySampleClass<int, int, string>(1, 2, string1);
    obj1.PrintThisObject();
    cout << "obj2..." << endl;
    MySampleClass<double, double, string> obj2 =
        MySampleClass<double, double, string>(1.323, 4.43, "qwerty");
    obj2.PrintThisObject();
    return 0;
}


template <typename T>
void MyFunction(T arg1, T arg2) {
    cout << "arg1 = " << arg1 << endl;
    cout << "arg2 = " << arg2 << endl;
    cout << "arg1 + arg2 = " << arg1 + arg2 << endl;
}
