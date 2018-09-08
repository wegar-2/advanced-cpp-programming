#include <iostream>
#include <stdlib.h>
#include "MyClass.hpp"

int main()
{
    /* ---------------------------------------------------------------------- */
    /* ---------------------------------------------------------------------- */
    /* ---------------------------- STACK ARRAY ----------------------------- */
    /* ---------------------------------------------------------------------- */
    // 1. array of primitives in the stack
    double array1[100];
    for (int k = 0; k < 100; ++k) { array1[k] = rand() % 100; }
    std::cout << "Elements of array1: " << std::endl;
    for (int k = 0; k < 100; ++k) {
        std::cout << "array1[" << k << "] = " << array1[k] << std::endl;
    }

    // 2. array of user-defined class objects in the stack
    MyClass list_of_objs[30];
    for (int k = 0; k < 30; ++k) {
        if (k % 2 == 0) {
                list_of_objs[k] = MyClass(double(rand() % 20),
                                          std::string("asdf"));
        }
        else {
                list_of_objs[k] = MyClass(double(rand() % 50),
                                          std::string("qwerty"));
        }
    }
    std::cout << "Printing elements of list_of_objs: " << std::endl;
    for (int k = 0; k < 30; ++k) {
        std::cout << "list_of_objs[" << k << "]:" << std::endl;
        list_of_objs[k].PrintObj();
    }
    /* ---------------------------------------------------------------------- */
    /* ---------------------------------------------------------------------- */


    /* ---------------------------------------------------------------------- */
    /* ---------------------------------------------------------------------- */
    /* ------------------------      HEAP ARRAY      ------------------------ */
    /* ---------------------------------------------------------------------- */
    int* heap_array1 = new int[100];
    for (int k = 0; k < 100; ++k) { heap_array1[k] = rand() % 1000; }
    for (int k = 0; k < 100; ++k) {
        std::cout << heap_array1[k] << std::endl;
    }


    /* ---------------------------------------------------------------------- */
    /* ---------------------------------------------------------------------- */


    return 0;
}
