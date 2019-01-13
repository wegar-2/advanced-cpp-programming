#ifndef MYTESTCLASS_HPP
#define MYTESTCLASS_HPP

class MyTestClass {
public:
    // class constructors and destructor
    MyTestClass();
    MyTestClass(double value);
    MyTestClass(double x, double y);
    ~MyTestClass();

    // class copy constructor
    MyTestClass(const MyTestClass& rhs);

    // assignment operator
    MyTestClass& operator=(const MyTestClass& rhs);

    // class MyTestClass getters and setters
    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);

    // object printer
    void PrintMe() const;

    // incrementation operators
    const MyTestClass& operator++();
    const MyTestClass operator++(int);

    // decrementation operator
    const MyTestClass& operator--();
    const MyTestClass operator--(int);

    // addition and subtraction operators' overloading
    MyTestClass operator+(const MyTestClass& rhs) const;
    MyTestClass operator-(const MyTestClass& rhs) const;

private:
    double* pX;
    double* pY;
};

#endif // MYTESTCLASS_HPP

