#include <iostream>
#include <string>
#include "TempClass1.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    // 1.
    string* pstring = new string(string("qwerty"));

    // 2.
    TempClass1<int, string> obj1 = TempClass1<int, string>(10, string("qwerty"));
    obj1.DisplayThisObject();

    // 3.
    TempClass1<int, string> obj2;
    obj2 = obj1;

    cout << TempClass1<int, string>::GetInstancesNumber() << endl;

    return 0;
}
