#include <iostream>
#include <cstdlib>
#include "MyTestClass.hpp"

int main()
{
    // -----------------------------------------------------
    // stack array
    int array1[1000];
    for (int k = 0; k < 1000; ++k) {
        array1[k] = rand();
    }
    for (int k = 0; k < 1000; ++k) {
        std::cout << "array1[" << k << "] = " << array1[k] << std::endl;
    }
    // heap array; pArray - array of pointers to objects on heap
    int* pArray = new int[10];
    for (int i = 0; i < 10; ++i) {
        pArray[i] = rand() % 100;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << "pArray[" << i << "] = " << pArray[i] << std::endl;
    }
    // tidy up
    delete[] pArray;


    // -----------------------------------------------------
    MyTestClass obj1 = MyTestClass(1.1, 1.2);
    obj1.PrintMe();
    MyTestClass obj2(3.0);
    obj1 = obj1;
    MyTestClass obj3(obj1);

    return 0;
}
