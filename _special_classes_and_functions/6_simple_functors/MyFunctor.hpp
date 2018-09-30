#ifndef MYFUNCTOR_HPP
#define MYFUNCTOR_HPP

class MyFunctor {
public:
    MyFunctor();
    MyFunctor(int x);
    ~MyFunctor();
    int operator() (int y);
    // index operators
    const int& operator[](const unsigned int index) const;
    int& operator[](const unsigned int index);
private:
    int value;
    int* pArray;
};


#endif // MYFUNCTOR_HPP
