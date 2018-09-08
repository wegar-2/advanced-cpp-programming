#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <string>

class MyClass {
public:
    // class constructors and destructor
    MyClass();
    MyClass(double arg_double, std::string arg_string);
    ~MyClass();
    MyClass(const MyClass& rhs);
    // other methods
    void PrintObj() const;
    double GetDouble() const;
    std::string GetString() const;
    // assignment operator - necessary to work with the list
    MyClass& operator=(const MyClass& rhs);
private:
    double* pDouble;
    std::string* pString;
};

#endif // MYCLASS_HPP
