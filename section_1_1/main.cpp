#include <iostream>
#include "Employee.hpp"

using namespace std;

int main()
{
    Employee person1 = Employee("Monica", 33000);
    Employee person2 = Employee("Peter", 50000);
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    return 0;
}
