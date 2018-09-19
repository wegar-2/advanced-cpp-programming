#include <iostream>
#include "MySampleClass.hpp"

using std::cout;
using std::endl;

int main()
{
    // 1.
    MySampleClass<int, int> obj1 = MySampleClass<int, int>(10, 123);
    cout << "obj1..." << endl;
    obj1.PrintObject();
    cout << "Displaying default vector size..." << endl;
    obj1.DisplayDefaultVectorSize();
    obj1.SetField1Value(222);
    obj1.SetField2Value(222.333);
    obj1.PrintObject();

    // 2.
    MySampleClass<int, double> obj2 = MySampleClass<int, double>(123, 22.3);
    cout << "obj2..." << endl;
    obj2.PrintObject();

    // 3.
    MySampleClass<int, int> obj3(obj1);
    MySampleClass<int, double> obj4 = obj2;
    cout << "Printing objects 3&4: " << endl;
    obj3.PrintObject();
    obj4.PrintObject();

    return 0;
}
