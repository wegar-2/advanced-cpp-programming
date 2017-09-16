#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "Employee.hpp"

class Manager : public Employee {
private:
    bool salaried;

public:
    // constructors and destructor
    Manager();
    Manager(string name, double pay, bool salaried);
    Manager(const Manager& rhs); // copy constructor
    ~Manager();

    bool getSalaried() const;
    void setSalaried(bool salaried);

    /*
    without the override of the getGrossPay method of the manager class,
    the program would not compile since the method implemented in the Employee
    class is accessing private member of the Employee class: pay;
    the Manager class object cannot do this. It could if the access modifier private
    was changed to protected, which is alternative way of making the getGrossPay
    method work here
     */
     /*
    int getGrossPay(int hours) {
        return (this->getPay())*hours;
    }
    */
    int getGrossPay(int hours) {
        return hours*pay;
    }

};

#endif // MANAGER_HPP
