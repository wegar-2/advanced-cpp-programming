#ifndef POINT2D_HPP
#define POINT2D_HPP

#include <iostream>

template <typename T>
class Point2D {
public:
    // constructors and destructor
    Point2D();
    ~Point2D();
    Point2D(T arg);
    Point2D(T x, T y);
    Point2D(const Point2D<T>& rhs);

    // class operators
    Point2D& operator=(const Point2D& rhs);
    Point2D operator+(const Point2D& rhs);

    // class methods
    void SetX(T x);
    void SetY(T y);
    T& GetX() const;
    T& GetY() const;
    virtual void PrintObject() const;
    virtual T GetDistanceFromOrigin() const;
    unsigned int GetObjectID() const;

    // static class methods
    static unsigned int GetInstancesCounter();
    static unsigned int GetAllPointsCounter();
private:
    // non-static members
    unsigned int* pID;
    T* pX;
    T* pY;
    // static members
    static unsigned int* pInstancesCounter;
    static unsigned int* pAllPointsCounter;
};

#endif // POINT2D_HPP
