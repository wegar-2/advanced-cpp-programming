#include <iostream>
#include "MyClass.hpp"
#include "SmallClass.hpp"

int main()
{
    MyClass obj1 = MyClass();
    obj1.PrintStoredArray();
    std::cout << obj1->GetNumber() << std::endl;
    return 0;
}
