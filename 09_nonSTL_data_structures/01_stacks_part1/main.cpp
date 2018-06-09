#include <string>
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

    MyStack<string, 3> stack2 = MyStack<string, 3>();
    stack2.push("John");
    stack2.push("asdf");
    stack2.push("qwerty");
    stack2.print_stack();

    return 0;
}
