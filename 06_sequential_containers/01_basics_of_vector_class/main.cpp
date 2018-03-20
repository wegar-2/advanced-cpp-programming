#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec1;
    unsigned int N;
    cout << "Give me a natural number N s.t. N > 3" << endl;
    cin >> N;
    if (N <= 3) {
        do {
            cout << "Please, try again: " << endl;
            cin >> N;
        } while (N <= 3);
    }
    for (int k(1); k <= N; k++) {
        vec1.push_back(k);
    }
    cout << "Displaying elements of a vector: " << endl;
    for (int k(0); k < N; k++) {
        cout << "vec1[" << k << "] = " << vec1[k] << endl;
    }
    cout << "Calculating sum of elements of a vector..." << endl;
    unsigned int sum = 0;
    for (int k(0); k < N; k++) {
        sum += vec1[k];
    }
    cout << "Sum of all elements equals " << sum << endl;
    return 0;
}
