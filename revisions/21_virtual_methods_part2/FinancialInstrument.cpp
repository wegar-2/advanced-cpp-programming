#include "FinancialInstrument.hpp"
#include <iostream>

using std::endl;
using std::cout;

/* ========================================================================== */
// implementation of ABC methods
FinancialInstrument::FinancialInstrument(const FinancialInstrument& rhs) {
    cout << "ABC's FinancialInstrument copy constructor called..." << endl;
}


/* ========================================================================== */
// implementation of pure virtual methods
void FinancialInstrument::PrintThisObject() const {
    cout << "PrintThisObject pure virtual method of the FinancialInstrument" <<
     " ABC called..." << endl;
}

double FinancialInstrument::ValuateThisFI() {
    cout << "ValuateThisFI pure virtual method of the FinancialInstrument" <<
    " class called..." << endl;
    cout << "Returning an arbitrary value (zero)..." << endl;
    return 0.0;
}
