#include <iostream>
#include <cstdlib>
#include "test_templ_class.hpp"

using namespace std;

int main()
{
    TestTemplClass<int, 10> obj1 = TestTemplClass<int, 10>();
    for (int i = 0; i < 10; i++) {
        obj1.SetElement((i+1)*(i+1), i);
    }
    obj1.DisplayObject();
    return 0;
}
