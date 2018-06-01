#include <deque>
#include <iostream>

using namespace std;

template <typename T>
void display_deque(const deque<T>& deque_in) {
    cout << "Displaying a dequeue: " << endl;
    typename deque<T>::const_iterator iter = deque_in.begin();
    while (iter !=deque_in.end()) {
        cout << *iter << endl;
        iter++;
    }
    cout << "Finished displaying a dequeue: " << endl;
}


