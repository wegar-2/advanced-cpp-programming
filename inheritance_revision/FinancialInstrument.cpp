#include "FinancialInstrument.hpp"
#include <iostream>

using namespace std;

FinInst::FinInst():
    itsAssetClass(UNDEFINED_ASSETCLASS),
    itsInstrumentType(UNDEFINED_INSTRUMENTTYPE)
{
    itsCurrency = new string("undefined");
    itsIssuer = new string("undefined");
    cout << "Non-parametrized constructor of class FinInst called..." << endl;
}

FinInst::FinInst(string itsCurrency,
                 string itsIssuer,
                 AssetClass itsAssetClass,
                 InstrumentType itsInstrumentType):
                     itsAssetClass(itsAssetClass),
                     itsInstrumentType(itsInstrumentType)
{
    this->itsCurrency = new string(itsCurrency);
    this->itsIssuer = new string(itsIssuer);
    cout << "Parametrized constructor of class FinInst called..." << endl;
}

FinInst::~FinInst()
{
    cout << "Class FinInst destructor called..." << endl;
    delete itsCurrency;
    itsCurrency = nullptr; // exceptionally, not mandatory here
    delete itsIssuer;
    itsIssuer = nullptr; // exceptionally, not mandatory here
}

FinInst::FinInst(const FinInst& rhs) {
    cout << "Copy constructor of class FinInst called..." << endl;
    // deep copy of variables stored on heap
    itsCurrency = new string(rhs.GetCurrency());
    itsIssuer = new string(rhs.GetIssuer());
    // shallow copy of variables stored on stack
    itsAssetClass = rhs.GetAssetClass();
    itsInstrumentType = rhs.GetInstrumentType();
}


// implementation of setters
void FinInst::SetCurrency(string itsCurrency) {
    *(this->itsCurrency) = itsCurrency;
}

void FinInst::SetIssuer(string itsIssuer) {
    *(this->itsIssuer) = itsIssuer;
}

void FinInst::SetAssetClass(AssetClass itsAssetClass) {
    this->itsAssetClass = itsAssetClass;
}

void FinInst::SetInstrumentType(InstrumentType itsInstrumentType) {
    this->itsInstrumentType = itsInstrumentType;
}


// implementation of getters
string FinInst::GetCurrency() const {
    return *itsCurrency;
}

string FinInst::GetIssuer() const {
    return *itsIssuer;
}

AssetClass FinInst::GetAssetClass() const {
    return itsAssetClass;
}

InstrumentType FinInst::GetInstrumentType() const {
    return itsInstrumentType;
}

