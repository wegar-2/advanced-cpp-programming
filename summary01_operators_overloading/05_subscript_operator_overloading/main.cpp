#include <iostream>
#include "MyClass.hpp"

int main()
{
    std::cout << "---------- 1. ----------" << std::endl;
    MyClass obj1 = MyClass();
    for (int k = 0; k < 10; ++k) { std::cout << obj1[k] << std::endl; }

    std::cout << "---------- 2. ----------" << std::endl;
    const MyClass obj2 = MyClass();
    std::cout << obj2[1] << std::endl;
    return 0;
}
