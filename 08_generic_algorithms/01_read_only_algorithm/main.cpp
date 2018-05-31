#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <string>
#include "summing_strings.hpp"

using namespace std;

// accumulate read-only algorithm

int main()
{
    /* ******************************* */
    // 1. creating a vector of integers
    vector<int> vec0;
    for (int k = 0; k < 10000; k++) {
        vec0.push_back(rand() % 100);
        if (k % 1000)
            cout << "\tstep..." << endl;
    }
    cout << "\n\n\n\n";
    /* ************************************ */
    // 2. summing using user-written for-loop
    cout << "Summing using user's loop..." << endl;
    int sum1 = 0;
    for (unsigned int k = 0; k < vec0.size(); k++) {
        sum1 += vec0[k];
    }
    cout << "Calculated sum: " << sum1 << endl;
    cout << "\n\n\n";
    /* ************************************** */
    // 3. summing using accumulate() algorithm
    int sum2 = accumulate(vec0.begin(), vec0.end(), 0);
    cout << "Calculated sum (accumulate): " << sum2 << endl;

    // 4. concatenating strings in a vector
    vector<string> vec1;
    vec1.push_back("asdf");
    vec1.push_back("qqwer34");
    vec1.push_back("qwerqwerqwer");
    // 4.1. display elements of the vector
    for (vector<string>::iterator iter_for = vec1.begin();
            iter_for != vec1.end(); iter_for++) {
        cout << "\t\t" << *iter_for << endl;
    }
    // 4.2. display concatenated strings
    cout << "Concatenated strings: " << sum_strings(vec1) << endl;
    return 0;
}
