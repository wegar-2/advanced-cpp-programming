#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    // constructors and destructor
    Point2D();
    Point2D(double arg);
    Point2D(double x, double y);
    ~Point2D();
    Point2D(const Point2D& rhs);
    // other class methods
    void PrintThisPoint();
    void SetCoordX(double x);
    void SetCoordY(double y);
    double GetCoordX() const;
    double GetCoordY() const;
    // overloading operators
    const Point2D& operator++();
    const Point2D& operator--();

private:
    double* pCoordX;
    double* pCoordY;
};

#endif // POINT2D_HPP
