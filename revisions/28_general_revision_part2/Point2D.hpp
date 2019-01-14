#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    // class constructors and destructor
    Point2D();
    Point2D(double value);
    Point2D(double x, double y);
    virtual ~Point2D();
    // class copy constructor
    Point2D(const Point2D& rhs);
    // class assignment operator
    Point2D& operator=(const Point2D& rhs);
    // pre- and post- increments
    const Point2D& operator++(); // pre
    const Point2D operator++(int); // post
    // pre- and post- decrement
    const Point2D& operator--(); // pre
    const Point2D operator--(int); // post
    // addition for various types
    Point2D operator+(const Point2D& rhs);
    Point2D operator+(const double value);
    Point2D operator+(const int value);
    // subtraction for various types
    Point2D operator-(const Point2D& rhs);
    Point2D operator-(const double value);
    Point2D operator-(const int value);
    // other class methods
    virtual void PrintPoint() const;
    virtual void SetX(double x);
    virtual void SetY(double y);
    virtual double GetX() const;
    virtual double GetY() const;
private:
    static unsigned int* pInstCounter;
    unsigned int* pId;
    double* pX;
    double* pY;
};

#endif // POINT2D_HPP
