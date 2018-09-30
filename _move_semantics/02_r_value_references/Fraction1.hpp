#ifndef FRACTION1_HPP
#define FRACTION1_HPP

class Fraction1 {
public:
    Fraction1();
    Fraction1(int num, int den);
    ~Fraction1();
    Fraction1(const Fraction1& rhs);
    Fraction1& operator=(const Fraction1& rhs);
    // setters and getters
    int GetNum() const;
    int GetDen() const;
    void SetNum(const int& num); // argument is an l-value
    void SetNum(int&& num); // argument is an r-value
    void SetDen(const int& den); // argument is an l-value
    void SetDen(int&& den); // argument is an r-value

private:
    int* pNum;
    int* pDen;
};

#endif // FRACTION1_HPP
