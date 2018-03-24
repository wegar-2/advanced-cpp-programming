#include <iostream>
#include "Counter.hpp"

using namespace std;

int main()
{
    Counter counter1;
    counter1.Display();
    ++counter1;
    counter1.Display();
    counter1.Increment();
    counter1.Display();
    return 0;
}
