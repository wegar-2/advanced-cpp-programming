#ifndef FINANCIALINSTRUMENT_HPP
#define FINANCIALINSTRUMENT_HPP

// this class is an example of an abstract base class
// abstract base class is a class that has at least one pure virtual member function

#include <iostream>

using std::endl;
using std::cout;

class FinancialInstrument{
public:
    FinancialInstrument() {
        cout << "ABC's FinancialInstrument constructor..." << endl;
    }
    ~FinancialInstrument() {
        cout << "ABC's FinancialInstrument destructor..." << endl;
    }
    FinancialInstrument(const FinancialInstrument& rhs);
    // pure virtual functions
    virtual void PrintThisObject() const = 0;
    virtual double ValuateThisFI() = 0;
};

#endif // FINANCIALINSTRUMENT_HPP
