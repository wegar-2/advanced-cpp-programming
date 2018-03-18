#ifndef SIMPLECLASS_HPP
#define SIMPLECLASS_HPP

template <typename T1, typename T2>
class SimpleClass {
public:
    // constructors and destructor
    SimpleClass();
    ~SimpleClass();
    // other methods
    void IncrementCounter();
    int GetCounterValue() const;
private:
    int* pCounter;
    T1* px;
    T2* py;
};

#endif // SIMPLECLASS_HPP
