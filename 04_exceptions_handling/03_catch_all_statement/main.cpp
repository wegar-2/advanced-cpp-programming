#include <iostream>
#include "MyException.hpp"
#include "MyOtherException.hpp"

using namespace std;

double MyDivision(int n, int d);

int main()
{
    int numer, denom;
    double quotient;

    cout << "Type in a numerator: ";
    cin >> numer;
    cout << endl;

    cout << "Type in a denominator: ";
    cin >> denom;
    cout << endl;

    cout << "Received: " << endl;
    cout << "numer: " << numer << endl;
    cout << "denom: " << denom << endl;

    try {
        quotient = MyDivision(numer, denom);
    }
    catch (MyException e) {
        cerr << e.what() << endl;
    }
    // ellipsis as argument to catch statement (catch-all)
    catch (...) {
        cout << "A general error..." << endl;
    }

    return 0;
}


double MyDivision(int n, int d) {
    if (d != 0) {
        return static_cast<double>(n)/static_cast<double>(d);
    }
    else if (n == 0 && d == 0) {
        throw MyOtherException();
    }
    else {
        throw MyException();
    }
}
