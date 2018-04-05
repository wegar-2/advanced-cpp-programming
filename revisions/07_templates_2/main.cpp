#include <iostream>
#include <string>
#include "TempClass.hpp"

using namespace std;

int main()
{
    TempClass<int> obj1 = TempClass<int>(12);
    cout << "obj1.GetValue() = " << obj1.GetValue() << endl;
    TempClass<double> obj2 = TempClass<double>(23.33);
    cout << "obj2.GetValue() = " << obj2.GetValue() << endl;
    TempClass<int> obj3 = TempClass<int>();
    cout << "obj3.GetValue() = " << obj3.GetValue() << endl;
    return 0;
}
