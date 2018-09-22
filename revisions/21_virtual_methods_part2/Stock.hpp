#ifndef STOCK_HPP
#define STOCK_HPP

#include "FinancialInstrument.hpp"

class Stock  : public FinancialInstrument {
public:
    // the 4 methods
    Stock();
    Stock(double price);
    ~Stock();
    Stock(const Stock& rhs);
    Stock& operator=(const Stock& rhs);
    double GetPrice() const;
    // inherited pure virtual methods
    virtual void PrintThisObject() const;
    virtual double ValuateThisFI();
protected:
    double* pPrice;
};

#endif // STOCK_HPP
