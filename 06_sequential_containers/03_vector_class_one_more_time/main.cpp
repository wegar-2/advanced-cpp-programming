#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    // 1. first vector
    vector<int> vec1;
    cout << "vec1.size() = " << vec1.size() << endl;
    int temp;
    cout << "Before for-loop..." << endl;
    for (int k = 0; k < 10; k++) {
        temp = (rand() % 100) + 1;
        cout << "\trand nr " << k << " = " << temp << endl;
        vec1.push_back(temp);
    }
    cout << "After for-loop." << endl;
    cout << "vec1.size() = " << vec1.size() << endl;
    cout << "Printing elements of vec1: " << endl;
    for (unsigned int k = 0; k < vec1.size(); k++) {
        cout << "vec1[" << k << "] = " << vec1[k] << endl;
    }

    // 2. second vector
    cout << endl << endl << endl;
    vector<int> vec2(10);
    cout << "vec2.size() = " << vec2.size() << endl;
    for (unsigned int k = 0; k < vec2.size(); k++) {
        vec2[k] = (rand() % 20 + 1);
    }
    return 0;
}
