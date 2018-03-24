#ifndef COUNTER_HPP
#define COUNTER_HPP

class Counter {
private:
    int* pVal;
public:
    Counter();
    Counter(int startVal);
    ~Counter();
    Counter(const Counter& rhs);
    void Increment();
    void operator++ ();
    void Display();
};

#endif // COUNTER_HPP
