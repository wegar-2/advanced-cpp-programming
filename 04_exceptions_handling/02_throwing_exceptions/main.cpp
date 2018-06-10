#include <iostream>
#include <stdexcept>
#include "DivideByZeroErr.hpp"

using namespace std;

double MyQuotient(int numer, int denom);

int main()
{
    int x = 12;
    int y = 0;
    double quotient;
    try {
        quotient = MyQuotient(x, y);
    }
    catch (DivideByZeroErr err) {
        cout << err.what() << endl;
    }
    return 0;
}

double MyQuotient(int numer, int denom) {
    if (denom == 0) {
        throw DivideByZeroErr();
    }
    else {
        return static_cast<double>(numer)/static_cast<double>(denom);
    }
}
