#ifndef DERIVED_HPP
#define DERIVED_HPP

#include "Base.hpp"

class Derived : public Base {
    public:
        Derived();
        virtual void PrintValue();
        void AnotherPrintValue();
};

#endif // DERIVED_HPP
