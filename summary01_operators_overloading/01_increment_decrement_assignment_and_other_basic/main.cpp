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
    // 5. increment and decrement operators
    point3++;
    ++point3;
    point3.PrintPoint();
    point3--;
    --point3;
    point3.PrintPoint();
    // 6. addition
    point1.PrintPoint();
    point2.PrintPoint();
    Point2D point5 = point1 + point2;
    point5.PrintPoint();
    // 7. subtraction
    point3.PrintPoint();
    point4.PrintPoint();
    Point2D point6 = point3 - point4;
    point6.PrintPoint();

    return 0;
}
