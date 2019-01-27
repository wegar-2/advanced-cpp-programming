#include "HelperClass.hpp"
#include <iostream>

/* ************************************************************************** */
// class constructors and destructor
HelperClass::HelperClass() {
    pPoints = new double*[3];
    pPoints[0] = new double(1.0);
    pPoints[1] = new double(1.0);
    pPoints[2] = new double(1.0);
}
HelperClass::HelperClass(double value) {
    pPoints = new double*[3];
    pPoints[0] = new double(value);
    pPoints[1] = new double(value);
    pPoints[2] = new double(value);
}
HelperClass::HelperClass(double x, double y, double z) {
    pPoints = new double*[3];
    pPoints[0] = new double(x);
    pPoints[1] = new double(y);
    pPoints[2] = new double(z);
}
HelperClass::~HelperClass() {
    delete pPoints[0];
    delete pPoints[1];
    delete pPoints[2];
}
// copy constructor
HelperClass::HelperClass(const HelperClass& rhs) {
    pPoints[0] = new double(rhs.GetX());
    pPoints[1] = new double(rhs.GetY());
    pPoints[2] = new double(rhs.GetZ());
}

/* ************************************************************************** */
// assignment operator overloading
const HelperClass& HelperClass::operator=(const HelperClass& rhs) {
    if (this == &rhs) {
        return *this;
    } else {
        *pPoints[0] = rhs.GetX();
        *pPoints[1] = rhs.GetY();
        *pPoints[2] = rhs.GetZ();
        return *this;
    }
}


/* ************************************************************************** */
// I/O operators overloading via friend functions
std::ostream& operator<<(std::ostream& lhs, const HelperClass& rhs) {
    std::cout << "Point: " << std::endl;
    std::cout << "\tX: " << rhs.GetX() << std::endl;
    std::cout << "\tY: " << rhs.GetY() << std::endl;
    std::cout << "\tZ: " << rhs.GetZ() << std::endl;
    return std::cout;
}


/* ************************************************************************** */
// class setters and getters
void HelperClass::SetX(double x) { *pPoints[0] = x; }
void HelperClass::SetY(double y) { *pPoints[1] = y; }
void HelperClass::SetZ(double z) { *pPoints[2] = z; }
double HelperClass::GetX() const { return *pPoints[0]; }
double HelperClass::GetY() const { return *pPoints[1]; }
double HelperClass::GetZ() const { return *pPoints[2]; }
