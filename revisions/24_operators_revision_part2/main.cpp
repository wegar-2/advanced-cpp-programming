#include <iostream>
#include "Counter.hpp"

int main()
{
    Counter counter1 = Counter(10);
    Counter counter2 = Counter(4);

    std::cout << "Starting counters' values: " << std::endl;
    counter1.PrintObj();
    counter2.PrintObj();

    std::cout << "Incrementing and decrementing..." << std::endl;
    counter1++;
    ++counter1;
    counter1++;
    counter1--;
    counter2--;
    --counter2;

    std::cout << "Current values: " << std::endl;
    counter1.PrintObj();
    counter2.PrintObj();

    std::cout << "Addition: " << std::endl;
    Counter temp = counter1 + counter2;
    temp.PrintObj();

    std::cout << "Subtraction: " << std::endl;
    temp = counter1 - counter2;
    temp.PrintObj();

    return 0;
}
