#include <iostream>
#include "Point2D.hpp"


int main()
{
    // 1. constructors
    Point2D point1 = Point2D();
    Point2D point2 = Point2D(1.2);
    Point2D point3 = Point2D(32.3, 12.2);
    // 2. getting info on instances of class Point2D
    std::cout << "Number of class Point2D instances: " <<
    Point2D::GetInstCounter() << std::endl;
    // 3. copy constructor
    Point2D point4(point1);
    point4.PrintPoint();
    // 4. assignment operator
    point3 = point2;
    point3.PrintPoint();

    return 0;
}
