#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> make_vector(int n) {
    vector<int> vec_out;
    for (int k = 0; k < n; k++) {
        vec_out.push_back(rand() % 10);
    }
    return vec_out;
}
