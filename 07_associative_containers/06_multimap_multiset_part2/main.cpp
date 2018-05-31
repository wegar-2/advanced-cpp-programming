#include <iostream>
#include <set>
#include <cstdlib>

// comparing set and multiset

using namespace std;

int main()
{
    // 1. a simple set
    cout << "Looking at a set class..." << endl;
    set<int> myset;
    for (int k = 0; k < 20; k++) {
        int temp = rand() % 6;
        myset.insert(temp);
        cout << "\tinserted number: " << temp << " into the set..." << endl;
    }
    cout << "Displaying elements of a set: " << endl;
    set<int>::iterator iter_myset = myset.begin();
    while (iter_myset != myset.end()) {
        cout << "\telement: " << *iter_myset << endl;
        iter_myset++;
    }
    cout << "\n\n\n\n\n";

    // 2. a multiset
    cout << "Looking at a multiset now..." << endl;
    multiset<int> my_multiset;
    for (int k = 0; k < 20; k++) {
        int temp = rand() % 6;
        my_multiset.insert(temp);
        cout << "\tinserted number: " << temp << " into the multiset..." << endl;
    }
    cout << "Displaying elements of a multiset: " << endl;
    multiset<int>::iterator iter_mymultiset = my_multiset.begin();
    while (iter_mymultiset != my_multiset.end()) {
        cout << "\telement: " << *iter_mymultiset << endl;
        iter_mymultiset++;
    }
    return 0;
}
