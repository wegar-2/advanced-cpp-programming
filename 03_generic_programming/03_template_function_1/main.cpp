#include <iostream>
#include "MyTempFuncs.hpp"

using namespace std;

int main()
{
    // 1. calling the first function
    MyTempFunctionOne<int, double>(12, 32.2);

    // 2. calling the second function
    MyTempFunctionTwo<int, double, double>(1, 2.2, 3.3);
    return 0;
}
