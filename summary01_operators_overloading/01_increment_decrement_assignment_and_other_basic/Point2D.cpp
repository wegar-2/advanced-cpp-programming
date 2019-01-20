#include "Point2D.hpp"
#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

// static member
unsigned int* Point2D::pInstCounter = new unsigned int(0);
boost::random::variate_generator<boost::random::mt19937,
                                 boost::random::normal_distribution<>> Point2D::norm_vg =
boost::random::variate_generator<boost::random::mt19937,
                                 boost::random::normal_distribution<>>
    (boost::random::mt19937(111), boost::random::normal_distribution<>(0, 1));



// constructors and destructor
Point2D::Point2D() {
    pId = new unsigned int(++(*Point2D::pInstCounter));
    pX = new double(Point2D::norm_vg());
    pY = new double(Point2D::norm_vg());
}

Point2D::Point2D(double val) {
    pId = new unsigned int(++(*Point2D::pInstCounter));
    pX = new double(val);
    pY = new double(val);
}

Point2D::Point2D(double x, double y) {
    pId = new unsigned int(++(*Point2D::pInstCounter));
    pX = new double(x);
    pY = new double(y);
}

// copy constructor
Point2D::Point2D(const Point2D& rhs) {
    pId = new unsigned int(++(*Point2D::pInstCounter));
    pX = new double(rhs.GetX());
    pY = new double(rhs.GetY());
}

// assignment operator
Point2D& Point2D::operator=(const Point2D& rhs) {
    *pX = rhs.GetX();
    *pY = rhs.GetY();
}

// getters and setters
void Point2D::SetX(double x) { *pX = x; }
void Point2D::SetY(double y) { *pY = y; }
double Point2D::GetX() const { return *pX; }
double Point2D::GetY() const { return *pY; }

// other members functions
void Point2D::PrintPoint() const {
    std::cout << "Printing Point2D nr " << *pId << std::endl;
    std::cout << "\t\tX = " << *pX << std::endl;
    std::cout << "\t\tY = " << *pY << std::endl;
}

unsigned int Point2D::GetPointId() const { return *pId; }

unsigned int Point2D::GetInstCounter() { return *pInstCounter; }


