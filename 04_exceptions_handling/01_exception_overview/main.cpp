#include <iostream>


using namespace std;

const unsigned int DivideByZeroErr = 1;

double MyDivision(unsigned int n, unsigned int d);

int main()
{
    unsigned int n = 1;
    unsigned int d = 0;
    try {
        MyDivision(n, d);
    }
    catch (unsigned int e) {
        if (e == DivideByZeroErr) {
            cout << "Attempt to divide by zero!" << endl;
        }
    }

    return 0;
}


double MyDivision(unsigned int n, unsigned int d) {
    if (d == 0) {
        throw DivideByZeroErr;
    }
    else {
        return static_cast<double>(n)/static_cast<double>(d);
    }
}
