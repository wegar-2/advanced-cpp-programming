#include <iostream>
#include "SimpleClass.hpp"

using namespace std;

int main()
{
    SimpleClass<int, int> sc1 = SimpleClass<int, int>();
    cout << sc1.GetCounterValue() << endl;
    sc1.IncrementCounter();
    cout << sc1.GetCounterValue() << endl;
    ++sc1;
    cout << sc1.GetCounterValue() << endl;
    return 0;
}
