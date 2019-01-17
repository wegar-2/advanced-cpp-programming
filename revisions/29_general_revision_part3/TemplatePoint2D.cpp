#include <iostream>
#include "TemplatePoint2D.hpp"


// -----------------------------------------------------------------------------
// static variable initialization
template <typename T1>
unsigned int* TemplatePoint2D<T1>::pInstCounter = new unsigned int(0);


// -----------------------------------------------------------------------------
// class constructors and destructor
template <typename T1>
TemplatePoint2D<T1>::TemplatePoint2D() :
    pX(new T1),
    pY(new T1),
    pId(new unsigned int(*TemplatePoint2D<T1>::pInstCounter + 1))
    {
        std::cout <<
        "Inside non-parametrized constructor of template class TemplatePoint2D. " <<
        std::endl;
        ++(*pInstCounter);
        std::cout <<
        "Created " << *pInstCounter << "-th instance of this class..." <<
        std::endl;
    }

template <typename T1>
TemplatePoint2D<T1>::TemplatePoint2D(T1 value) :
     pX(new T1),
     pY(new T1),
     pId(new unsigned int(*TemplatePoint2D<T1>::pInstCounter + 1))
     {
        std::cout <<
        "Inside one-parameter constructor of template class TemplatePoint2D. " <<
        std::endl;
        ++(*pInstCounter);
        std::cout <<
        "Created " << *pInstCounter << "-th instance of this class..." <<
        std::endl;
     }

template <typename T1>
TemplatePoint2D<T1>::TemplatePoint2D(T1 x, T1 y) :
    pX(new T1(x)),
    pY(new T1(y)),
    pId(new unsigned int(*TemplatePoint2D<T1>::pInstCounter + 1))
    {
        std::cout <<
        "Inside two-parameters constructor of template class TemplatePoint2D. " <<
        std::endl;
        ++(*pInstCounter);
        std::cout <<
        "Created " << *pInstCounter << "-th instance of this class..." <<
        std::endl;
    }

template <typename T1>
TemplatePoint2D<T1>::~TemplatePoint2D() {
    std::cout << "Template class TemplatePoint2D destructor called..." << std::endl;
    std::cout << "Destroying object nr: " << *pId << std::endl;
    delete pX;
    delete pY;
    delete pId;
    --(*pInstCounter);
}


// -----------------------------------------------------------------------------
// copy constructor
template <typename T1>
TemplatePoint2D<T1>::TemplatePoint2D(const TemplatePoint2D<T1>& rhs) {
    std::cout << "Class TemplatePoint2D copy constructor called..." << std::endl;
    pX = new T1(rhs.GetX());
    pY = new T1(rhs.GetY());
    ++(*TemplatePoint2D<T1>::pInstCounter);
    pId = new unsigned int(*TemplatePoint2D<T1>::pInstCounter);
}


// -----------------------------------------------------------------------------
// assignment operator
template <typename T1>
const TemplatePoint2D<T1>& TemplatePoint2D<T1>::operator=(const TemplatePoint2D<T1>& rhs) {
    std::cout << "Assignment operator of template class TemplatePoint2D called..." << std::endl;
    std::cout << "\t\tassigning to object with ID: " << *pId << std::endl;
    std::cout << "\t\tassigning from object with ID: " << rhs.GetId() << std::endl;
    *pX = rhs.GetX();
    *pY = rhs.GetY();
    return *this;
}


// -----------------------------------------------------------------------------
// increment operator overloading
template <typename T1>
const TemplatePoint2D<T1>& TemplatePoint2D<T1>::operator++() {
    *pX = *pX + 1;
    *pY = *pY + 1;
    return *this;
}
template <typename T1>
const TemplatePoint2D<T1> TemplatePoint2D<T1>::operator++(int) {
    *pX = *pX + 1;
    *pY = *pY + 1;
    return TemplatePoint2D(*pX - 1, *pY - 1);
}


// -----------------------------------------------------------------------------
// decrement operator overloading
template <typename T1>
const TemplatePoint2D<T1>& TemplatePoint2D<T1>::operator--() {
    *pX = *pX - 1;
    *pY = *pY - 1;
    return *this;
}
template <typename T1>
const TemplatePoint2D<T1> TemplatePoint2D<T1>::operator--(int) {
    *pX = *pX - 1;
    *pY = *pY - 1;
    return TemplatePoint2D(*pX + 1, *pY + 1);
}


// -----------------------------------------------------------------------------
// addition and subtraction operators overloading
template <typename T1>
TemplatePoint2D<T1> TemplatePoint2D<T1>::operator+(const TemplatePoint2D<T1>& rhs) const {
    return TemplatePoint2D(*pX + rhs.GetX(), *pY + rhs.GetY());
};
template <typename T1>
TemplatePoint2D<T1> TemplatePoint2D<T1>::operator-(const TemplatePoint2D<T1>& rhs) const {
    return TemplatePoint2D(*pX - rhs.GetX(), *pY - rhs.GetY());
}


// -----------------------------------------------------------------------------
// setters and getters
template <typename T1>
void TemplatePoint2D<T1>::SetX(T1 x) {
    *pX = x;
}
template <typename T1>
void TemplatePoint2D<T1>::SetY(T1 y) {
    *pY = y;
}
template <typename T1>
T1 TemplatePoint2D<T1>::GetX() const {
    return *pX;
}
template <typename T1>
T1 TemplatePoint2D<T1>::GetY() const {
    return *pY;
}
template <typename T1>
unsigned int TemplatePoint2D<T1>::GetId() const {
    return *pId;
}

// -----------------------------------------------------------------------------
// other class methods
template <typename T1>
void TemplatePoint2D<T1>::PrintThisPoint() const {
    std::cout << "Printing description of instance of template class TemplatePoint2D. " <<
    "Id of this instance: " << *pId << std::endl;
    std::cout << "\t\tpX: " << *pX << std::endl;
    std::cout << "\t\tpY: " << *pY << std::endl;
}


// -----------------------------------------------------------------------------
// explicit instantiations
template class TemplatePoint2D<int>;
template class TemplatePoint2D<unsigned int>;
template class TemplatePoint2D<double>;
