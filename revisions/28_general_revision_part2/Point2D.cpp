#include <iostream>
#include "Point2D.hpp"

unsigned int* Point2D::pInstCounter = new unsigned int(0);

// -----------------------------------------------------------------------------
// implementation of constructors and destructor
Point2D::Point2D() {
    std::cout << "Class Point2D() non-parametrized constructor..." << std::endl;
    pX = new double(1.0);
    pY = new double(1.0);
    *pInstCounter = *pInstCounter + 1;
    pId = new unsigned int(*pInstCounter);
}

Point2D::Point2D(double value) {
    std::cout << "Class Point2D() one-parameter constructor..." << std::endl;
    pX = new double(value);
    pY = new double(value);
    *pInstCounter = *pInstCounter + 1;
    pId = new unsigned int(*pInstCounter);
}

Point2D::Point2D(double x, double y) {
    std::cout << "Class Point2D() two-parameter constructor..." << std::endl;
    pX = new double(x);
    pY = new double(y);
    *pInstCounter = *pInstCounter + 1;
    pId = new unsigned int(*pInstCounter);
}

Point2D::~Point2D() {
    std::cout << "Class Point2D() destructor running..." << std::endl;
    delete pX;
    delete pY;
    delete pId;
    *pInstCounter = *pInstCounter - 1;
}


// -----------------------------------------------------------------------------
// class copy constructor
Point2D::Point2D(const Point2D& rhs) {
    std::cout << "Class Point2D copy constructor running..." << std::endl;
    pX = new double(rhs.GetX());
    pY = new double(rhs.GetY());
    *pInstCounter = *pInstCounter + 1;
    pId = new unsigned int(*pInstCounter);
}


// -----------------------------------------------------------------------------
// class assignment operator
Point2D& Point2D::operator=(const Point2D& rhs) {
    std::cout << "Assignment operator of class Point2D() running..." << std::endl;
    // check for self-assignment
    if (this == &rhs) {
        std::cout << "\tSelf-assignment detected inside assignment operator..."
        << std::endl;
        return *this;
    }
    else {
        this->SetX(rhs.GetX());
        this->SetY(rhs.GetY());
        return *this;
    }
}


// -----------------------------------------------------------------------------
// increment
const Point2D& Point2D::operator++() {
    *pX = *pX + 1;
    *pY = *pY + 1;
    return *this;
}
const Point2D Point2D::operator++(int) {
    *pX = *pX + 1;
    *pY = *pY + 1;
    return Point2D(*pX - 1, *pY - 1);
}


// -----------------------------------------------------------------------------
// decrement
const Point2D& Point2D::operator--() {
    *pX = *pX - 1;
    *pY = *pY - 1;
    return *this;
}

const Point2D Point2D::operator--(int) {
    *pX = *pX - 1;
    *pY = *pY - 1;
    return Point2D(*pX - 1, *pY - 1);
}


// -----------------------------------------------------------------------------
// addition operator overloading
Point2D Point2D::operator+(const Point2D& rhs) {
    return Point2D(this->GetX() + rhs.GetX(), this->GetY() + rhs.GetY());
}
Point2D Point2D::operator+(const double value) {
    return Point2D(this->GetX() + value, this->GetY() + value);
}
Point2D Point2D::operator+(const int value) {
    return Point2D(this->GetX() + double(value), this->GetY() + double(value));
}


// -----------------------------------------------------------------------------
// addition operator overloading
Point2D Point2D::operator-(const Point2D& rhs) {
    return Point2D(this->GetX() - rhs.GetX(), this->GetY() - rhs.GetY());
}
Point2D Point2D::operator-(const double value) {
    return Point2D(this->GetX() - value, this->GetY() - value);
}
Point2D Point2D::operator-(const int value) {
    return Point2D(this->GetX() - double(value), this->GetY() - double(value));
}


// -----------------------------------------------------------------------------
// other class methods
void Point2D::PrintPoint() const {
    std::cout << "Printing description of class Point2D object nr " << *pId
    << std::endl;
    std::cout << "\t\tX coordinate = " << *pX << std::endl;
    std::cout << "\t\tY coordinate = " << *pY << std::endl;
};

void Point2D::SetX(double x) {
    *pX = x;
}
void Point2D::SetY(double y) {
    *pY = y;
}
double Point2D::GetX() const {
    return *pX;
}
double Point2D::GetY() const {
    return *pY;
}
