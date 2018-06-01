#include <iostream>
#include <deque>
#include <cstdlib>


template <typename T>
deque<T> make_deque(int n) {
    deque<T> deque_out;
    for (int k = 0; k < n; k++) {
        if (k % 2 == 0) {
            deque_out.push_back(static_cast<T>(k));
        }
        else {
            deque_out.push_front(static_cast<T>(k));
        }
    }
    return deque_out;
}
