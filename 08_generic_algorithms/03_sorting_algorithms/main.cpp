#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "display_vector.hpp"
#include <string>

using namespace std;

int main()
{
    // 1. vector of ints
    int int_array[10];
    for (int k = 0; k < 10; k++)
        int_array[k] = rand() % 5;
    vector<int> vec_int(int_array, int_array + 10);
    display_vector(vec_int);
    sort(vec_int.begin(), vec_int.end());
    display_vector(vec_int);
    // 2. vector of strings
    string string_array[] = {"Partial", "order", "is", "a relation", "that", "is",
                             "reflexive", "antisymmetric", "and", "transitive"};
    vector<string> strings_vec(string_array, string_array + 9);
    display_vector(strings_vec);
    sort(strings_vec.begin(), strings_vec.end());
    display_vector(strings_vec);
    return 0;
}
