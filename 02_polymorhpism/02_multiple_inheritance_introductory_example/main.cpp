#include <iostream>
#include "Child.hpp"


int main()
{
    std::cout << "child1..." << std::endl;
    Child1 child1 = Child1(12, 43);
    std::cout << "child2..." << std::endl;
    Child2 child2 = Child2(133, 32);
    return 0;
}
