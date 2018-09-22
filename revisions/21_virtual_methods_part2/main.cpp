#include <iostream>
#include "Point2D.hpp"
#include "FinancialInstrument.hpp"
#include "Stock.hpp"


using std::cout;
using std::endl;

int main()
{
    // 1.
    Point2D<double> d_point1 = Point2D<double>(3.0, 4.0);
    Point2D<double> d_point2(d_point1);
    cout << "Point2D<double> info: " << endl;
    cout << "\tnumber of existing objects: " <<
    Point2D<double>::GetInstancesCounter() << endl;
    cout << "\tnumber of all objects ever created: " <<
    Point2D<double>::GetAllPointsCounter() << endl;

    // 2.
    cout << "\n\nInfo on d_point1: " << endl;
    cout << "\tX coordinate: " << d_point1.GetX() << endl;
    cout << "\tY coordinate: " << d_point1.GetY() << endl;
    cout << "\tdistance from origin: " << d_point1.GetDistanceFromOrigin() << endl;

    // 3. playing a bit with T=int
    Point2D<int> d_point3 = Point2D<int>(10, 10);
    cout << "\n\nd_point3: "<< endl;
    d_point3.PrintObject();
    cout << "Distance from origin 1: " << d_point3.GetDistanceFromOrigin()
    << endl;
    d_point3.SetX(12);
    d_point3.SetY(22);
    cout << "Distance from origin 2: " << d_point3.GetDistanceFromOrigin()
    << endl;

    // 4. testing assignment operator
    cout << "\n\n\n\n-------------------------------------------------" << endl;
    Point2D<int> d_point4(d_point3);
    d_point4.SetX(2222);
    d_point3 = d_point4;

    // 5. testing the addition operator
    Point2D<double> d_point5 = d_point1 + d_point2;
    Point2D<int> d_point6 = d_point3 + d_point4;
    cout << "Addition of point1 and point2: " << endl;
    d_point5.PrintObject();
    cout << "Addition of point3 and point4: " << endl;
    d_point6.PrintObject();

    cout << "\n\n\n\n\n" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "\n\n\n\n\n" << endl;

    FinancialInstrument* array1[3];
    array1[0] = new Stock(12);
    array1[1] = new Stock(14);
    array1[2] = new Stock(16);
    array1[0]->PrintThisObject();
    array1[1]->PrintThisObject();
    array1[2]->PrintThisObject();

    return 0;
}
