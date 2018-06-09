#ifndef HELPERCLASS_HPP
#define HELPERCLASS_HPP

class HelperClass {
public:
    // 1. class constructors and destructor
    HelperClass();
    HelperClass(int arg_seed, int value, int len1, int len2, unsigned int arg_modulus);
    HelperClass(const HelperClass& rhs);
    ~HelperClass();

    // 2. class methods
    void print() const;
    // various getters and setters
    void SetValue(int arg);
    int GetValue() const;

    int GetHeapArraySize() const;
    int GetHeapArrayElement(unsigned int k) const;

    int GetPointersArrayElement(unsigned int k) const;

    int GetHeapPointersArraySize() const;
    int GetHeapPointersArrayElement(unsigned int k) const;

    // 3. overloaded operators
    // 3.1. unary operators
    const HelperClass& operator++();
    const HelperClass& operator--();
    const HelperClass& operator++(int);
    const HelperClass& operator--(int);
    // 3.2. binary operators
    HelperClass operator+(const HelperClass& arg) const;
    HelperClass operator-(const HelperClass& arg) const;
    HelperClass operator*(const HelperClass& arg) const;

private:
    // pValue - pointer to a value stored in heap
    int* pValue;
    // pointers to integers that store sizes of member arrays
    int* pLen1;
    int* pLen2;
    // heapArray - an array stored in heap
    int* heapArray;
    // pointersArray - array of pointers
    int* pointersArray[10];
    // heapPointersArray - array of pointers in heap
    int** heapPointersArray;
};

#endif // HELPERCLASS_HPP
