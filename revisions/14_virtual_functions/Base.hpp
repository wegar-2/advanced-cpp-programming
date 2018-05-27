#ifndef BASE_HPP
#define BASE_HPP

class Base {
    public:
        Base();
        virtual void PrintValue();
        void AnotherPrintValue();
    protected:
        double value;
};

#endif // BASE_HPP
