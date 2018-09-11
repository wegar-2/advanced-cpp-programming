#ifndef CHILDCLASS_HPP
#define CHILDCLASS_HPP

#include "ParentClass.hpp"
#include <string>

class ChildClass : public ParentClass {
public:
    // class constructors and destructor
    ChildClass(int a_value, std::string a_string) :
        ParentClass(a_value, a_string) {}
    // other class methods
    virtual void PrintValueSquared() const {
        std::cout << "This is class ChildClass implementation..."
        << std::endl;
        std::cout << "Squared value is: " << (*pValue)*(*pValue) << std::endl;
    }
};

#endif // CHILDCLASS_HPP
