#include <iostream>
#include "MyDoublePoint.hpp"

int main()
{
    MyDoublePoint point1 = MyDoublePoint();
    MyDoublePoint point2 = MyDoublePoint(5);
    MyDoublePoint point3 = MyDoublePoint(15, 32);

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Displaying coordinates of the points: " << std::endl;
    point1.DisplayCoords();
    point2.DisplayCoords();
    point3.DisplayCoords();

    MyDoublePoint point4 = point3;
    point4.MultCoordsByConst(10);
    point4.DisplayCoords();

    return 0;
}
