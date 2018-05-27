#include <iostream>
#include "Base.hpp"
#include "Derived.hpp"

using namespace std;

int main()
{
    Derived derived1 = Derived();
    Base base1 = Base();
    Base* pBase = &derived1;
    pBase->PrintValue();
    pBase->AnotherPrintValue();
    return 0;
}
