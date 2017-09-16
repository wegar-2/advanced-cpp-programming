#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <string>

// remember: string type from string library lives in the std namespace

using namespace std;

class Employee {
private:
    string name;
    double pay;
public:
    // constructors and destructor
    Employee();
    Employee(string name, double pay);
    Employee(const Employee& rhs); // copy constructor
    ~Employee();

    // other member methods
    string getName() const;
    void setName(string name);

    double getPay() const;
    void setPay(double pay);

    string toString();

    int getGrossPay(int hours);

};

#endif // EMPLOYEE_HPP
