#include <iostream>
#include <string>
#include "TempClass1.hpp"

using std::string;

int main()
{
    TempClass1<int, string> obj1 = TempClass1<int, string>(10, string("qwerty"));
    return 0;
}
