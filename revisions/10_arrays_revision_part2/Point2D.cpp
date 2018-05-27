#include <iostream>
#include "Point2D.hpp"

using namespace std;

// implementation of class constructors
Point2D::Point2D() {
    cout << "Class Point2D non-parametrized constructor has been called..." << endl;
    pCoordX = new double();
    pCoordX = new double();
}

Point2D::Point2D(double arg) {
    pCoordX = new double(arg);
    pCoordY = new double;
    *pCoordY = arg;
}

Point2D::Point2D(double x, double y) {
    pCoordX = new double(x);
    pCoordY = new double(y);
}

// class destructor
Point2D::~Point2D() {
    cout << "Class Point2D destructor called..." << endl;
    delete pCoordX;
    delete pCoordY;
}

// implementation of class getters and setters
void Point2D::SetCoordX(double x) {
    *pCoordX = x;
}

void Point2D::SetCoordY(double y) {
    *pCoordY = y;
}


double Point2D::GetCoordX() const {
    return *pCoordX;
}

double Point2D::GetCoordY() const {
    return *pCoordY;
}


// implementation of other class methods
void Point2D::PrintThisPoint() {
    cout << "Printing out a point's coordinates..." << endl;
    cout << "\tx = " << *pCoordX << endl;
    cout << "\ty = " << *pCoordY << endl;
}


// implementation of incrementation and decrementation operators
const Point2D& Point2D::operator++() {
    *pCoordX = *pCoordX + 1.0;
    *pCoordY = *pCoordY + 1.0;
    return *this;
}

const Point2D& Point2D::operator--() {
    *pCoordX = *pCoordX - 1;
    *pCoordY = *pCoordY - 1;
    return *this;
}


