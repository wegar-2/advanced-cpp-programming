#include "MyDoublePoint.hpp"
#include <iostream>
#include <math.h>

/* -------------------------------------------------------------------------- */
/* -----------        class constructors and destructor           ----------- */
/* -------------------------------------------------------------------------- */

MyDoublePoint::MyDoublePoint() {
    std::cout << "Class MyDoublePoint non-parametrized constructor called..." <<
    std::endl;
    pCoordX = new double(10.0);
    pCoordY = new double(21.0);
}

MyDoublePoint::MyDoublePoint(double v) {
    std::cout << "Class MyDoublePoint one-parameter constructor called..." <<
    std::endl;
    pCoordX = new double(v);
    pCoordY = new double(v);
}

MyDoublePoint::MyDoublePoint(double x, double y) {
    std::cout << "Class MyDoublePoint two-parameters constructor called..." <<
    std::endl;
    pCoordX = new double(x);
    pCoordY = new double(y);
}

MyDoublePoint::~MyDoublePoint() {
    std::cout << "Class MyDouble Point destructor called..." << std::endl;
    delete pCoordX;
    delete pCoordY;
}

MyDoublePoint::MyDoublePoint(const MyDoublePoint& rhs) {
    std::cout << "Class MyDoublePoint copy constructor called..." << std::endl;
    pCoordX = new double(rhs.GetX());
    pCoordY = new double(rhs.GetY());
}

/* -------------------------------------------------------------------------- */
/* --------------     implementation of other class methods    -------------- */

// getters and setters
void MyDoublePoint::SetX(double x) {
    *pCoordX = x;
}

void MyDoublePoint::SetY(double y) {
    *pCoordY = y;
}

double MyDoublePoint::GetX() const {
    return *pCoordX;
}

double MyDoublePoint::GetY() const {
    return *pCoordY;
}


// other
void MyDoublePoint::DisplayCoords() const {
    std::cout << "Displaying coordinates of this point: " << std::endl;
    std::cout << "\tx: " << *pCoordX << std::endl;
    std::cout << "\ty: " << *pCoordY << std::endl;
}

double MyDoublePoint::CalcDistFromOrigin() const {
    return sqrt((*pCoordX)*(*pCoordX) + (*pCoordY)*(*pCoordY));
}

void MyDoublePoint::MultCoordsByConst(double c) {
    *pCoordX = *pCoordX * c;
    *pCoordY = *pCoordY * c;
}
