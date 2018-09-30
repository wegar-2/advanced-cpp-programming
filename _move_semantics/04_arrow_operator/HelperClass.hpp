#ifndef HELPERCLASS1_HPP
#define HELPERCLASS1_HPP

#include <iostream>

using std::endl;
using std::cout;

class HelperClass1 {
public:
    HelperClass1() :
        pValue(new int(11)) {
        };
    ~HelperClass1() {
        delete pValue;
        pValue = nullptr;
    }
    int GetValue() const { return *pValue; }
private:
    int* pValue;
};

#endif // HELPERCLASS_HPP


#ifndef HELPERCLASS2_HPP
#define HELPERCLASS2_HPP

class HelperClass2 {
public:
    HelperClass2() :
        pObj(new HelperClass1()) {}
    ~HelperClass2() {
        delete pObj;
        pObj = nullptr;
        }
    HelperClass1* operator->() {
        return pObj;
    }
private:
    HelperClass1* pObj;
};

#endif // HELPERCLASS2_HPP
