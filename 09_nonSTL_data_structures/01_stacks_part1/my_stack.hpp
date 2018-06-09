// stack - last in first out data structure simplified implementation

#ifndef MYSTACK_HPP
#define MYSTACK_HPP

#include <string>

template <typename T, int max_elem_num>
class MyStack {
    public:
        MyStack();
        void push(T elem);
        T pop();
        T peek();
        void clear_stack();
        void print_stack();
    private:
        int top_pointer;
        T elements_array[max_elem_num];

};

#endif // MYSTACK_HPP


