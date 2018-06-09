#include <iostream>
#include "my_stack.hpp"

using namespace std;

int main()
{
    MyStack<int, 3> stack1 = MyStack<int, 3>();
    stack1.push(12);
    stack1.push(33);
    stack1.push(1);
    stack1.print_stack();
    return 0;
}
