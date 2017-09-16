#include <iostream>
#include "Employee.hpp"
#include "Manager.hpp"

using namespace std;

int main()
{
    Employee empl1("Marie", 20);
    Manager mgr1("Jack", 100, true);

    cout << "Employee: " << endl;
    cout << empl1.toString() << endl;
    cout << "Gross pay - 40h: " << mgr1.getGrossPay(40) << endl;

    cout << "\n\n\nEmployee: " << endl;
    cout << mgr1.toString() << endl;
    cout << "Gross pay - 40h: " << mgr1.getGrossPay(40) << endl;

    return 0;
}
