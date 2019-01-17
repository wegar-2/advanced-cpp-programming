#include <iostream>
#include "TemplatePoint2D.hpp"


int main()
{
    TemplatePoint2D<int> point1 = TemplatePoint2D<int>(1, 3);
    point1.PrintThisPoint();


    return 0;
}
