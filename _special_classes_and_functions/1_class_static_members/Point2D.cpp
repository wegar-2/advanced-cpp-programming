#include "Point2D.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/* ========================================================================== */
/* setting the static member */

unsigned int Point2D::pointsCounter = 0;


/* ========================================================================== */
/* class constructors and destructor */

Point2D::Point2D() {
    cout << "Default constructor of Point2D class..." << endl;
    pX = new double(1.0);
    pY = new double(2.0);
    pointNumber = ++pointsCounter;
}

Point2D::~Point2D() {
    cout << "Class Point2D destructor called..." << endl;
    delete pX;
    pX = nullptr;
    delete pY;
    pY = nullptr;
    --pointsCounter;
}

Point2D::Point2D(double value) {
    cout << "One-parameter class Point2D constructor..." << endl;
    pX = new double(value);
    pY = new double(value);
    pointNumber = ++pointsCounter;
}

Point2D::Point2D(double x, double y) {
    cout << "Two-parameter class Point2D constructor..." << endl;
    pX = new double(x);
    pY = new double(y);
    pointNumber = ++pointsCounter;
}

Point2D::Point2D(const Point2D& rhs) {
    cout << "Class Point2D copy constructor called..." << endl;
    pX = new double(rhs.GetX());
    pY = new double(rhs.GetY());
    pointNumber = ++pointsCounter;
}


/* ========================================================================== */
Point2D& Point2D::operator=(const Point2D& rhs) {
    cout << "Class Point2D assignment operator called..." << endl;
    // check whether the object is not assigned to itself!
    if (this == &rhs) {
        cout << "Self assignment occurred during class Point2D assignment operator call!!! " << endl;
        return *this;
    }
    else {
        *pX = rhs.GetX();
        *pX = rhs.GetY();
        return *this;
    }
}


Point2D Point2D::operator+(const Point2D& rhs) const {
    Point2D temp(*this);
    temp.SetX(this->GetX() + rhs.GetX());
    temp.SetY(this->GetY() + rhs.GetY());
    return temp;
}

Point2D Point2D::operator+(const double value) const {
    return Point2D(this->GetX() + value, this->GetY() + value);
}

Point2D Point2D::operator-(const Point2D& rhs) const {
    Point2D temp(*this);
    temp.SetX(this->GetX() - rhs.GetX());
    temp.SetY(this->GetY() - rhs.GetY());
    return temp;
}

Point2D Point2D::operator-(const double value) const {
    return Point2D(this->GetX() - value, this->GetY() - value);
}

Point2D& Point2D::operator++() {
    *pX += 1;
    *pY += 1;
    return *this;
}

Point2D Point2D::operator++(int flag) {
    Point2D temp(*this);
    *pX += 1;
    *pY += 1;
    return temp;
}

Point2D& Point2D::operator--() {
    *pX -= 1;
    *pY -= 1;
    return *this;
}

Point2D Point2D::operator--(int flag) {
    Point2D temp(*this);
    *pX -= 1;
    *pY -= 1;
    return temp;
}



/* ========================================================================== */
/* other class methods */

void Point2D::DisplayPointsNumber() {
    cout << "Inside DisplayPointsNumber method. " << endl;
    cout << "Current number of Point2D class instances: " <<
    pointsCounter << endl;
}


void Point2D::DisplayThisPoint() const {
    cout << "Displaying point number " << pointNumber << endl;
    cout << "\tx: " << *pX << endl;
    cout << "\ty: " << *pY << endl;
}

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

unsigned int Point2D::GetPointsNumber() {
    return pointsCounter;
}
