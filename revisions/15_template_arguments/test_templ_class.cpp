#include "test_templ_class.hpp"
#include <iostream>

using namespace std;


template <typename T, int N>
TestTemplClass<T, N>::TestTemplClass() {
    cout << "Class TestTemplClass constructor called..." << endl;
}

template <typename T, int N>
void TestTemplClass<T, N>::SetElement(T value, int k) {
    if (k < N) {
        elements_array[k] = value;
    }
    else {
        throw "Trying to set element behind the end of the array!";
    }
}

template <typename T, int N>
T TestTemplClass<T, N>::GetElement(int k) const {
    if (k < N) {
        return elements_array[k];
    }
    else {
        throw "Trying to access element behind the end of the array! ";
    }
}

template <typename T, int N>
void TestTemplClass<T, N>::DisplayObject() const {
    cout << "Displaying class TestTemplClass object..." << endl;
    for (int k = 0; k < N; k++) {
        cout << "\t" << *(elements_array+k) << endl;
    }
    cout << "Finished displaying class TestTemplClass object! " << endl;
}

template <typename T, int N>
void TestTemplClass<T, N>::ReverseElementsOrder(){
    T temp[N];
    for (int k = 0; k < N; k++) {
        temp[k] = elements_array[k];
    }
    for (int k = 0; k < N; k++) {
        elements_array[k] = temp[N-1-k];
    }
}

template class TestTemplClass<int, 10>;
