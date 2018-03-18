#include <iostream>
#include "FinancialInstrument.hpp"
#include "Stock.hpp"

using namespace std;

int main()
{
    cout << "Creating FinInst object with default constructor..." << endl;
    FinInst fi1 = FinInst();
    cout << "fi1.GetCurrency(): " << fi1.GetCurrency() << endl;
    cout << "fi1.GetIssuer(): " << fi1.GetIssuer() << endl;
    cout << "fi1.GetAssetClass(): " << fi1.GetAssetClass() << endl;
    cout << "fi1.GetInstrumentType(): " << fi1.GetInstrumentType() << endl;

    cout << "\n\n\n"<< endl;

    cout << "Creating Stock object with parametrized constructor..." << endl;
    Stock stock1 = Stock("USD",
                         "GE",
                         "NYSE",
                         120.12
                         );
    cout << "stock1.GetCurrency(): " << stock1.GetCurrency() << endl;
    cout << "stock1.GetIssuer(): " << stock1.GetIssuer() << endl;
    cout << "stock1.GetAssetClass(): " << stock1.GetAssetClass() << endl;
    cout << "stock1.GetInstrumentType(): " << stock1.GetInstrumentType() << endl;
    cout << "stock1.GetPrice(): " << stock1.GetPrice() << endl;
    cout << "stock1.GetExchange(): " << stock1.GetExchange() << endl;

    return 0;
}
