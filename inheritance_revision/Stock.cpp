#include "Stock.hpp"
#include <iostream>

using namespace std;

// constructors and destructor implementations
Stock::Stock():
    FinInst() // base class constructor call
{
    cout << "Non-parametrized constructor of Stock class called...." << endl;
    //*itsAssetClass = EQUITY; // won't work because itsAssetClass is private
    this->SetAssetClass(EQUITY);
    //*itsInstrumentType = SECURITY; // won't work because itsAssetClass is private
    this->SetInstrumentType(SECURITY);
    itsExchange = new string("undefined");
    itsPrice = new double(0);
}

Stock::Stock(string itsCurrency,
             string itsIssuer,
             string itsExchange,
             double itsPrice):
                 FinInst(itsCurrency, itsIssuer, EQUITY, SECURITY)
{
    cout << "Non-parametrized constructor of Stock class called...." << endl;
    this->itsExchange = new string(itsExchange);
    this->itsPrice = new double(itsPrice);
}

Stock::~Stock() {
    cout << "Class Stock destructor called... " << endl;
    delete itsExchange;
    itsExchange = nullptr; // redundant, actually
    delete itsPrice;
    itsPrice = nullptr; // redundant, actually
}

// implementation of copy constructor of derived class - pay attention here!!!
Stock::Stock(const Stock& rhs):
    FinInst(rhs) //call to the copy constructor of the parent class
{
    cout << "Copy constructor of Stock class called... " << endl;
    // deep copy of the variables created on heap - avoid pointers issues!
    itsExchange = new string(rhs.GetExchange());
    itsPrice = new double(rhs.GetPrice());
}


// other class methods implementation
void Stock::SetExchange(string itsExchange) {
    *(this->itsExchange) = itsExchange;
}

void Stock::SetPrice(double itsPrice) {
    *(this->itsPrice) = itsPrice;
}

string Stock::GetExchange() const {
    return *itsExchange;
}

double Stock::GetPrice() const {
    return *itsPrice;
}

