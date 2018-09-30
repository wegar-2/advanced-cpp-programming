#include <iostream>
#include "MyStaticClass.hpp"
#include "RandNumClasses.hpp"


using std::endl;
using std::cout;

int main()
{
    NormDist nd1 = NormDist();
    double myArray[1000];
    for (double& el : myArray)
        el = nd1();
    return 0;
}
