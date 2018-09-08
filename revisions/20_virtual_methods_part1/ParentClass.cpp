#include <iostream>
#include "ParentClass.hpp"


/* -------------------------------------------------------------------------- */
/* class constructors and destructor */

ParentClass::ParentClass() :
    i_x(10), d_y (1.11) {
        std::cout << "Class ParentClass non-parametrized constructor called..."
        << std::endl;
    }

ParentClass::ParentClass(int i_x, double d_y) :
    i_x(i_x), d_y (d_y) {
        std::cout << "Class ParentClass parametrized constructor called..." <<
        std::endl;
    }

ParentClass::~ParentClass() {
    std::cout << "Class ParentClass destructor called..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/* other methods */

void ParentClass::PrintObj() const {
    std::cout << "Displaying members of the class ParentClass object:" <<
    std::endl;
    std::cout << "\tinteger type member: " << i_x << std::endl;
    std::cout << "\tdouble type member: " << d_y << std::endl;
}

