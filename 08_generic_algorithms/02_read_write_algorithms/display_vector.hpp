#include <iostream>
#include <vector>

template <typename T>
void display_vector(vector<T> vec_in) {
    cout << "Displaying a vector: " << endl;
    for (unsigned int k = 0; k < vec_in.size(); k++) {
        cout << "\tElement "<< k << ": " << vec_in.at(k) << endl;
    }
    cout << "Finished displaying elements in a vector. " << endl;
}

