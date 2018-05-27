#include <iostream>
#include "TemplateClass.hpp"

using namespace std;

int main()
{
    // 1.
    cout << "Class TemplateClass object obj1: " << endl;
    TemplateClass<int, int, double> obj1 = TemplateClass<int, int, double>();
    obj1.DisplayClass();
    // 2.
    cout << "Class TemplateClass object obj2: " << endl;
    TemplateClass<int, int, int> obj2 = TemplateClass<int, int, int>(1, 3, 4);
    obj2.DisplayClass();
    return 0;
}

