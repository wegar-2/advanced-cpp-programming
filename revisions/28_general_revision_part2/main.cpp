#include <iostream>
#include <cstdlib>
#include "Point2D.hpp"


int main()
{
    std::cout << "point1: " << std::endl;
    Point2D point1;
    point1.PrintPoint();

    std::cout << "point2: " << std::endl << std::endl;
    Point2D point2(point1);

    std::cout << "point3: " << std::endl << std::endl;
    Point2D point3 = point2;

    std::cout << "operators testing 1: " << std::endl << std::endl;
    point1++;
    ++point2;
    Point2D point4 = point1 + point2;
    point4.PrintPoint();

    std::cout << "operators testing 2: " << std::endl << std::endl;
    point2 = point1 + int(43);
    point3 = point1 + double(11.0);
    point2.PrintPoint();
    point3.PrintPoint();

    return 0;
}
