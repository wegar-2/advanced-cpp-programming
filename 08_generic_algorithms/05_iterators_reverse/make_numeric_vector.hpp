#include <cstdlib>
#include <vector>

using namespace std;

vector<int> make_numeric_vector(int n) {
    vector<int> vec_out;
    for (int k = 0; k < n; k++)
        vec_out.push_back(rand() % 100);
    return vec_out;
}

