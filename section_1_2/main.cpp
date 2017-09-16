#include <iostream>
#include "Employee.hpp"
#include "Manager.hpp"

using namespace std;

int main()
{
    Employee employee1 = Employee("John", 10000);
    Manager manager1 = Manager("Jack", 100000, true);
    cout << employee1.toString() << endl;
    cout << manager1.toString() << endl;
    return 0;
}
