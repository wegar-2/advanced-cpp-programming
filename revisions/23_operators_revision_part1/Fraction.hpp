#ifndef FRACTION_HPP
#define FRACTION_HPP

class Fraction {
    public:
        /* -------------- class constructors and destructor ----------------- */
        Fraction();
        Fraction(int n, int d);
        ~Fraction();
        Fraction(const Fraction& rhs);


        /* ----------------------    class methods   ------------------------ */
        void SetNumerator(int n);
        void SetDenominator(int d);
        int GetNumerator() const;
        int GetDenominator() const;
        void PrintFraction() const;
        void SimplifyFraction();

        /* ---------------------    class operators    ---------------------- */
        // incrementation operators
        const Fraction& operator++();
        const Fraction operator++(int flag);

        // decrementation operators
        const Fraction& operator--();
        const Fraction operator--(int flag);

        // addition
        Fraction operator+(const Fraction& arg);
        Fraction operator+(const int& arg);

        // subtraction
        Fraction operator-(const Fraction& arg);
        Fraction operator-(const int& arg);

        // assignment operator
        Fraction& operator=(const Fraction& rhs);

    private:
        int* pNumerator;
        int *pDenominator;
};

#endif // FRACTION_HPP
