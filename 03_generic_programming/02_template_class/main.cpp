#include <iostream>
#include "OrderedPair.hpp"


using namespace std;

int main()
{
    // 1.
    cout << "Case: <int, int>" << endl;
    OrderedPair<int, int> op1 = OrderedPair<int, int>(1, 3);
    op1.DisplayElements();
    cout << endl;
    // 2.
    cout << "Case: <int, double>" << endl;
    OrderedPair<int, double> op2 = OrderedPair<int, double>(1, 3.23);
    op2.DisplayElements();
    cout << endl;
    // 3.
    cout << "Case: <double, int>" << endl;
    OrderedPair<double, int> op3 = OrderedPair<double, int>(3.2, 112);
    op3.DisplayElements();
    cout << endl;
    // 4,
    cout << "Case: <double, double>" << endl;
    OrderedPair<double, double> op4 = OrderedPair<double, double>(3.2, 112.23);
    op4.DisplayElements();
    cout << endl;
    return 0;
}
