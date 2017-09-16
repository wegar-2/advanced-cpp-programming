#include <iostream>
#include "FinancialInstrument.hpp"

using namespace std;

int main()
{
    cout << "Creating FinInst object with default constructor..." << endl;
    FinInst fi1 = FinInst();

    cout << "fi1.GetCurrency(): " << fi1.GetCurrency() << endl;
    cout << "fi1.GetIssuer(): " << fi1.GetIssuer() << endl;
    cout << "fi1.GetAssetClass(): " << fi1.GetAssetClass() << endl;
    cout << "fi1.GetInstrumentType(): " << fi1.GetInstrumentType() << endl;

    return 0;
}
