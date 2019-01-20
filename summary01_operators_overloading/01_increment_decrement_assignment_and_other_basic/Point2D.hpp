#ifndef POINT2D_HPP
#define POINT2D_HPP

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

class Point2D {
public:
    // constructors and destructor
    Point2D();
    Point2D(double val);
    Point2D(double x, double y);
    // copy constructor
    Point2D(const Point2D& rhs);
    // assignment operator
    Point2D& operator=(const Point2D& rhs);
    // other operators
    const Point2D& operator++();
    const Point2D operator++(int);
    const Point2D& operator--();
    const Point2D operator--(int);
    /*
        Note: all the operators return constant in order to avoid situation in
        which the operator is called again on the returned object, e.g.
        point++++ or ++++point
    */
    Point2D operator+(const Point2D& rhs) const;
    Point2D operator-(const Point2D& rhs) const;
    // getters and setters
    void SetX(double x);
    void SetY(double y);
    double GetX() const;
    double GetY() const;
    unsigned int GetId() const;
    // other member functions
    void PrintPoint() const;
    unsigned int GetPointId() const;
    static unsigned int GetInstCounter();
    double GetMeStandardNorm() const;
private:
    // non-static members
    double* pX;
    double* pY;
    unsigned int* pId;
    // static members
    static unsigned int* pInstCounter;
    static boost::random::variate_generator<boost::random::mt19937,
                                            boost::random::normal_distribution<>>
                                            norm_vg;
};

#endif // POINT2D_HPP
