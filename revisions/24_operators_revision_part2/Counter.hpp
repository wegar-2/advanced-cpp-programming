#ifndef COUNTER_HPP
#define COUNTER_HPP

class Counter {
    public:
        // constructors and destructor
        Counter();
        Counter(int value);
        ~Counter();
        Counter(const Counter& rhs);
        // getters and setters
        int GetCounterValue() const;
        void SetCounterValue(int value);
        // other methods
        void PrintObj() const;
        // operators overloading
        const Counter& operator++();
        const Counter operator++(int flag);
        const Counter& operator--();
        const Counter operator--(int flag);
        const Counter operator+(const Counter& arg) const;
        const Counter operator-(const Counter& arg) const;
        Counter& operator=(const Counter& rhs);

    private:
        int* pCounterValue;
};

#endif // COUNTER_HPP
