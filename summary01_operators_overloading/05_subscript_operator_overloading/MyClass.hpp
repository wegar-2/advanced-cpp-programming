#ifndef MYCLASS_HPP
#define MYCLASS_HPP

class MyClass {
public:
    MyClass();
    ~MyClass();
    int& operator[](unsigned int index);
    const int& operator[](unsigned int index) const;
private:
    int MyArray[10];
};

#endif // MYCLASS_HPP
