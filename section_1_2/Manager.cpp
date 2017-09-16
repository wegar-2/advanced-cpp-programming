#include "Manager.hpp"
#include <iostream>


// constructors and destructor implementation
Manager::Manager() {};

Manager::Manager(string name, double pay, bool salaried):
    Employee(name, pay),
    salaried(salaried)
{};

Manager::Manager(const Manager& rhs): Employee(rhs) {
    salaried = rhs.getSalaried();
}

Manager::~Manager() {
    std::cout << "Class Manager destructor called... " << std::endl;
}


// other methods implementations
bool Manager::getSalaried() const {
    return salaried;
}

void Manager::setSalaried(bool salaried) {
    this->salaried = salaried;
}
