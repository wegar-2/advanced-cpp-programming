#include <iostream>
#include "Point2D.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Point2D point1 = Point2D();
    Point2D point2(point1);
    Point2D point3 = Point2D(12.3, 3.2);
    Point2D point4;
    point4.DisplayThisPoint();
    point4 = point1 + point2;
    point4.DisplayThisPoint();
    Point2D::DisplayPointsNumber();
    cout << Point2D::GetPointsNumber() << endl;

    Point2D point5;
    point5 = point1 + point2 + point3;

    return 0;
}
