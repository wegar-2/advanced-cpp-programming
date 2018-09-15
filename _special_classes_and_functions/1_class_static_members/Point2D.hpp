#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    // class constructors and destructor
    Point2D();
    ~Point2D();
    Point2D(double value);
    Point2D(double x, double y);
    Point2D(const Point2D& rhs);
    // operators
    Point2D& operator=(const Point2D& rhs);
    Point2D operator+(const Point2D& rhs) const;
    Point2D operator+(const double value) const;
    Point2D operator-(const Point2D& rhs) const;
    Point2D operator-(const double value) const;
    Point2D& operator++();
    Point2D operator++(int flag);
    Point2D& operator--();
    Point2D operator--(int flag);
    // other methods
    static void DisplayPointsNumber();
    void DisplayThisPoint() const;
    void SetX(double x);
    void SetY(double y);
    double GetX() const;
    double GetY() const;
    static unsigned int GetPointsNumber();
protected:
    double* pX;
    double* pY;
    static unsigned int pointsCounter;
    unsigned int pointNumber;
};

#endif // POINT2D_HPP
