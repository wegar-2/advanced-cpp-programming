#include "ChildClass.hpp"
#include <iostream>


/* -------------------------------------------------------------------------- */
/* class constructors and destructor */
ChildClass::ChildClass() :
    ParentClass(), mytext("default_text_member_text") {
        std::cout << "ChildClass default constructor called..." << std::endl;
    }

ChildClass::ChildClass(int i_x, double d_y, std::string s_z) :
    ParentClass(i_x, d_y), mytext(s_z) {
        std::cout << "ChildClass parametrized constructor called..." <<
        std::endl;
    }

ChildClass::~ChildClass() {
    std::cout << "ChildClass destructor called..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/* other methods */
void ChildClass::PrintObj() const {
    ParentClass::PrintObj();
    std::cout << "string type member: " << mytext << std::endl;
}


