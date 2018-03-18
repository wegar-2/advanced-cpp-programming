#ifndef STOCK_HPP
#define STOCK_HPP

#include "FinancialInstrument.hpp"

// class Stock inherits from FinInst
class Stock : public FinInst {
private:
    // both new members are stored on heap
    string* itsExchange;
    double* itsPrice;

public:
    // class constructors and destructor
    Stock(); // non-parametrized constructor
    // parametrized constructor
    Stock(string itsCurrency,
          string itsIssuer,
          string itsExchange,
          double itsPrice);
    ~Stock();
    Stock(const Stock& rhs);

    // class setters
    void SetExchange(string itsExchange);
    void SetPrice(double itsPrice);

    // class getters
    string GetExchange() const;
    double GetPrice() const;

};

#endif // STOCK_HPP
