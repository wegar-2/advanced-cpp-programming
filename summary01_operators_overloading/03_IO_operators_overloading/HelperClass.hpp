#ifndef HELPERCLASS_HPP
#define HELPERCLASS_HPP

#include <iostream>

class HelperClass {
public:
    // class constructors and destructor
    HelperClass();
    HelperClass(double value);
    HelperClass(double x, double y, double z);
    ~HelperClass();
    // copy constructor
    HelperClass(const HelperClass& rhs);
    // assignment operator overloading
    const HelperClass& operator=(const HelperClass& rhs);
    // I/O operators overloading via friend functions
    friend std::ostream& operator<<(std::ostream& rhs,
                                    const HelperClass& lhs);
    // class setters and getters
    void SetX(double x);
    void SetY(double y);
    void SetZ(double z);
    double GetX() const;
    double GetY() const;
    double GetZ() const;
private:
    double* *pPoints;
};

#endif // HELPERCLASS_HPP
