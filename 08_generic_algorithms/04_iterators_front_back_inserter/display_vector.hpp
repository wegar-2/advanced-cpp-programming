#include <vector>
#include <iostream>

using namespace std;

template <typename T>
void display_vector(vector<T> vec_in) {
    cout << "Starting displaying a vector. " << endl;
    for (typename vector<T>::iterator iter = vec_in.begin();
            iter != vec_in.end(); iter++) {
        cout << *iter << endl;
    }
    cout << "Finished displaying a vector. " << endl;
}

