#include <iostream>
#include <vector>
#include <deque>
#include <array>

using namespace std;

// Note: this can be rewritten using template template parameters

template <typename T>
void display_vector(vector<T> vector_in, bool reverse_ord = false) {
    if (reverse_ord == true) {
        cout << "Displaying a vector in reverse order: " << endl;
        for (typename vector<T>::reverse_iterator riter = vector_in.rbegin();
                riter != vector_in.rend(); riter++) {
            cout << *riter << endl;
        }
    }
    else {
        cout << "Displaying a vector in normal order: " << endl;
        for (typename vector<T>::iterator iter = vector_in.begin();
                iter != vector_in.end(); iter++) {
            cout << *iter << endl;
        }
    }
    cout << "Finished displaying a vector. " << endl;
}
