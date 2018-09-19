#ifndef MYSAMPLECLASS_HPP
#define MYSAMPLECLASS_HPP

#include <vector>

using std::vector;

template <typename T1, typename T2>
class MySampleClass {
public:
    // constructors and destructor
    MySampleClass();
    MySampleClass(T1 arg1, T2 arg2);
    ~MySampleClass();
    MySampleClass(const MySampleClass& rhs);
    // other class methods
    void PrintObject() const;
    T1 GetField1Value() const;
    T2 GetField2Value() const;
    void SetField1Value(T1 arg);
    void SetField2Value(T2 arg);
    static void DisplayDefaultVectorSize();
    static void DisplayInstancesCounter();
    static void DisplayCounterOfAllInstancesEverCreated();
    static unsigned int GetDefaultVectorSize();
    static unsigned int GetInstancesCounter();
    static unsigned int GetCounterOfAllInstancesEverCreated();
    // operators
    MySampleClass& operator=(const MySampleClass& rhs);

private:
    static unsigned int DefaultVectorSize;
    static unsigned int InstancesCounter;
    static unsigned int CounterOfAllInstancesEverCreated;
    unsigned int ThisObjectId;
    T1 field1;
    T2* field2;
    vector<T1> vect1;
    vector<T2>* vect2;
};

#endif // MYSAMPLECLASS_HPP
