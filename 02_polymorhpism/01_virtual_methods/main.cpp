#include <iostream>
#include "ParentClass.hpp"
#include "ChildClass.hpp"
#include <string>

int main()
{
    // -------------------------------------------------------------------------
    // 1. verifying how specifically the object initialization using the copy
    // constructor works
    ParentClass obj1 = ParentClass();
    ParentClass obj2(obj1);

    // -------------------------------------------------------------------------
    // 2. some plays with arrays

    // 2.1. stack arrays
    ParentClass array_of_parents[10];
    for (int k = 0; k < 10; ++k) {
            array_of_parents[k] = ParentClass(k, std::string("asdf"));
    }

    // 2.2. array of pointers to parents
    ParentClass* array_of_pointers[10];
    for (int k = 0; k < 10; ++k) {
        array_of_pointers[k] = new ParentClass(k*2, std::string("qwerty"));
    }

    // 2.3. array in the heap
    ParentClass* array_in_heap = new ParentClass[10];
    for (int k = 0; k < 10; ++k) {
        array_in_heap[k] = ParentClass(k*3, "poiuy");
    }

    // -------------------------------------------------------------------------
    // 3. virtual methods at work
    ParentClass my_array[2];
    my_array[0] = ParentClass(5, "a parent");
    my_array[1] = ChildClass(5, "a child");

    // calling array members
    std::cout << "Calling members of an array..." << std::endl;
    my_array[0].PrintValueSquared();
    my_array[1].PrintValueSquared();

    ParentClass* pointer1 = new ParentClass(10, "another parent");
    ChildClass* pointer2 = new ChildClass(11, "another child");

    std::cout << "Calling objects pointed at by pointers..." << std::endl;
    pointer1->PrintValueSquared();
    pointer2->PrintValueSquared();

    return 0;
}
