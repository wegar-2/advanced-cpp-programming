#include <iostream>
#include <sstream>
#include <string>
#include "Employee.hpp"

using namespace std;

// implementation of the Employee class
Employee::Employee(): name(""), pay(0) {};

Employee::Employee(string name, double pay): name(name), pay(pay) {};

Employee::Employee(const Employee& rhs) {
    cout << "Copy constructor of class Employee called..." << endl;
    name = rhs.getName();
    pay = rhs.getPay();
}

Employee::~Employee() {
    cout << "Class Employee destructor called..." << endl;
}


string Employee::getName() const {
    return name;
}

void Employee::setName(string name) {
    this->name = name;
}

double Employee::getPay() const {
    return pay;
}

void Employee::setPay(double pay) {
    this->pay = pay;
}

string Employee::toString() {
    stringstream stm;
    stm << name << ": " << pay;
    return stm.str();
}

int Employee::getGrossPay(int hours) {
    return hours*pay;
}
