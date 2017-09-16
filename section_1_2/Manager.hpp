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

};

#endif // MANAGER_HPP
