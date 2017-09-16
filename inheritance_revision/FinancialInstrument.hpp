#ifndef FINANCIALINSTRUMENT_HPP
#define FINANCIALINSTRUMENT_HPP

#include <string>

#include "AssetClass.hpp"
#include "InstrumentType.hpp"

using namespace std;

class FinInst {
private:
    string* itsCurrency; // member stored on the heap
    string* itsIssuer; // member stored on the heap
    AssetClass itsAssetClass;
    InstrumentType itsInstrumentType;

public:
    // constructors and destructor
    FinInst(); // non-parametrized constructor
    // parametrized constructor
    FinInst(string itsCurrency,
            string itsIssuer,
            AssetClass itsAssetClass,
            InstrumentType itsType);
    ~FinInst();
    FinInst(const FinInst& rhs);

    // setters
    void SetCurrency(string Currency);
    void SetIssuer(string Issuer);
    void SetAssetClass(AssetClass itsAssetClass);
    void SetInstrumentType(InstrumentType itsInstrumentType);

    // getters
    string GetCurrency() const;
    string GetIssuer() const;
    AssetClass GetAssetClass() const;
    InstrumentType GetInstrumentType() const;
};

#endif // FINANCIALINSTRUMENT_HPP
