#include <iostream>
#include <string>
#include "my_stack.hpp"

using namespace std;

// class constructor
template <typename T, int max_elem_num>
MyStack<T, max_elem_num>::MyStack():
    top_pointer(-1) {}


// class methods' implementation
template <typename T, int max_elem_num>
void MyStack<T, max_elem_num>::push(T elem) {
    // list not full yet
    if (top_pointer < max_elem_num) {
        top_pointer++;
        elements_array[top_pointer] = elem;
    }
    // list already full
    else {
        throw "List if full! Can't push another object to its end! ";
    }
}

template <typename T, int max_elem_num>
T MyStack<T, max_elem_num>::pop() {
    // list is not empty
    if (top_pointer != -1) {
        top_pointer--;
        return elements_array[top_pointer+1];
    }
    // list is empty
    else {
        throw "List is empty - nothing to pop an element from...";
    }
}

template <typename T, int max_elem_num>
T MyStack<T, max_elem_num>::peek() {
    if (top_pointer != -1) {
        return elements_array[top_pointer];
    }
    else {
        throw "Can't peek from an empty list!";
    }
}

template <typename T, int max_elem_num>
void MyStack<T, max_elem_num>::clear_stack() {
    if (top_pointer != -1) {
        for (int k = 0; k <= top_pointer; top_pointer++) {
            elements_array[k] = T();
        }
        top_pointer = -1;
    }
}

template <typename T, int max_elem_num>
void MyStack<T, max_elem_num>::print_stack() {
    if (top_pointer != -1) {
        cout << "Printing content of a stack: " << endl;
        for (int k = 0; k <= top_pointer; k++) {
            cout << "Element number " << k << " is: " << elements_array[k] << endl;
        }
    }
    else {
        cout << "This list is empty!" << endl;
    }
}

template<typename T, int max_elem_num>
int MyStack<T, max_elem_num>::count_elements() {
    return top_pointer + 1;
}

template <typename T, int max_elem_num>
bool MyStack<T, max_elem_num>::isEmpty() {
    if (top_pointer == -1) {
        return true;
    }
    else {
        return false;
    }
}


template class MyStack<int, 3>;
template class MyStack<string, 3>;
