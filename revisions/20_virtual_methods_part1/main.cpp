#include <iostream>
#include <string>
#include "ParentClass.hpp"
#include "ChildClass.hpp"

int main()
{
    std::cout << "---------- 1. ----------" << std::endl;
    std::cout << "Testing 'string' class..." << std::endl;
    std::string str1 = "test string content!";
    std::cout << str1 << std::endl;
    std::cout << "string str1 length: " <<  str1.size() << std::endl;

    std::cout << "---------- 2. ----------" << std::endl;
    std::cout << "Virtual methods at work: " << std::endl;
    ParentClass parent_obj_1 = ParentClass();
    std::cout << "parent_obj_1:" << std::endl;
    parent_obj_1.PrintObj();
    ParentClass parent_obj_2 = ParentClass();
    std::cout << "parent_obj_2:" << std::endl;
    parent_obj_2.PrintObj();

    ChildClass child_obj_1 = ChildClass();
    std::cout << "child_obj_1:" << std::endl;
    child_obj_1.PrintObj();

    ParentClass* test_obj = new ChildClass(11, 33.3, std::string("qwerty"));
    test_obj->PrintObj();
    (*test_obj).PrintObj();

    return 0;
}
