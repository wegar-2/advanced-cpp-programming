#ifndef PARENTCLASS_HPP
#define PARENTCLASS_HPP

#include <string>


class ParentClass {
public:
    static unsigned int InstancesCounter;
    // class constructors and destructor
    ParentClass();
    ParentClass(int a_value, std::string a_string);
    virtual ~ParentClass();
    ParentClass(const ParentClass& rhs);
    // assignment operator
    ParentClass& operator=(const ParentClass& rhs);
    // other methods
    void PrintObject() const;
    virtual void PrintValueSquared() const;
    unsigned int GetInstancesCounter() const;
    void PrintInstancesCounter() const;
    void SetValue(int value_in);
    void SetString(std::string string_in);
    int GetValue() const;
    std::string GetString() const;
protected:
    int* pValue;
    std::string* pString;
};

#endif // PARENTCLASS_HPP
