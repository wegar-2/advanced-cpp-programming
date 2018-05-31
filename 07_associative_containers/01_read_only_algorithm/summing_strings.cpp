#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include "summing_strings.hpp"

using namespace std;

string sum_strings(vector<string> vec_in) {
    string str1 = "";
    str1 = accumulate(vec_in.begin(), vec_in.end(), str1);
    return str1;
}
