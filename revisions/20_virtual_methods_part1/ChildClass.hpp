#ifndef CHILDCLASS_HPP
#define CHILDCLASS_HPP

#include "ParentClass.hpp"
#include <string>

class ChildClass : public ParentClass {
    public:
        // non-parametrized constructor
        ChildClass();
        // parametrized constructor
        ChildClass(int i_x, double d_y, std::string s_z);
        // class destructor
        ~ChildClass();
        virtual void PrintObj() const;
    private:
        std::string mytext;
};

#endif // CHILDCLASS_HPP
