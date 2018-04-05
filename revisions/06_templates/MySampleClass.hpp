#ifndef MYSAMPLECLASS_HPP
#define MYSAMPLECLASS_HPP

template <typename T1, typename T2, typename T3>
class MySampleClass {
public:
    // class constructors and destructor
    MySampleClass();
    MySampleClass(T1 arg1, T2 arg2, T3 arg3);
    ~MySampleClass();
    MySampleClass(const MySampleClass& rhs);
    // other class methods
    void PrintThisObject();
private:
    T1* field_T1;
    T2* field_T2;
    T3* field_T3;
};

#endif // MYSAMPLECLASS_HPP
