#ifndef TEST_TEMPL_CLASS_HPP
#define TEST_TEMPL_CLASS_HPP

#include <string>

template <typename T, int N>
class TestTemplClass {
    public:
        // constructor
        TestTemplClass();
        // template class methods
        void SetElement(T value, int k);
        T GetElement(int k) const;
        void DisplayObject() const;
        void ReverseElementsOrder();
    private:
        T elements_array[N];
};

#endif // TEST_TEMPL_CLASS_HPP
