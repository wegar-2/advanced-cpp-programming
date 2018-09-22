#include "FinancialInstrument.hpp"
#include "Stock.hpp"
#include <iostream>


using std::cout;
using std::endl;



/* ========================================================================== */
/* the four methods*/
Stock::Stock() {
    cout << "Class Stock default constructor called..." << endl;
    pPrice = new double(1.0);
}

Stock::Stock(double price) {
    cout << "Class Stock parametrized constructor called..." << endl;
    pPrice = new double(price);
}

Stock::~Stock() {
    cout << "Class Stock destructor called..." << endl;
    delete pPrice;
}

Stock::Stock(const Stock& rhs) {
    cout << "Class Stock copy constructor called..." << endl;
    pPrice = new double(rhs.GetPrice());
}

double Stock::GetPrice() const {
    return *pPrice;
}

Stock& Stock::operator=(const Stock& rhs) {
    cout << "Class Stock assignment operator called..." << endl;
    *pPrice = rhs.GetPrice();
    return *this;
}


/* ========================================================================== */
/* implementation of the inherited pure virtual methods  */
void Stock::PrintThisObject() const {
    cout << "Printing object of class Stock..." << endl;
    cout << "\tprice: " << *pPrice << endl;
}

double Stock::ValuateThisFI() {
    cout << "'Pricing' a Stock class object" << endl;
    return *pPrice;
}
