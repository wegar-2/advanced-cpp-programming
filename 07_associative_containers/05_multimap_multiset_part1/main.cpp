#include <iostream>
#include <map> // contains multimap template class
#include <utility> // contains pair template class

using namespace std;

int main()
{
    // 1. creating a multimap - a map that can have duplicate keys
    multimap<string, int> multimap1;
    multimap1.insert(pair<string, int>("Ann", 123));
    multimap1.insert(pair<string, int>("George", 436));
    multimap1.insert(pair<string, int>("Alice", 44));
    multimap1.insert(pair<string, int>("Bob", 33333));
    multimap1.insert(pair<string, int>("George", 332));
    multimap1.insert(pair<string, int>("Ben", 485));
    multimap1.insert(pair<string, int>("George", 888));
    // 2. iterating over all elements of multimap
    multimap<string, int>::iterator iter0 = multimap1.begin();
    cout << "Displaying all elements of multimap1: " << endl;
    int k = 0;
    while(iter0 != multimap1.end()) {
        k++;
        cout << "Element " << k << ": " << endl;
        cout << "\tkey: " << iter0->first << endl;
        cout << "\tvalue: " << iter0->second << endl;
        iter0++;

    }
    cout << "\n\n\n";
    // 3. iterating only over elements that have a specific key
    multimap<string, int>::iterator iter_start = multimap1.find("George");
    multimap<string, int>::iterator iter_end = multimap1.upper_bound("George");
    cout << "Displaying 'George'-keyed pairs only: " << endl;
    while (iter_start != iter_end) {
        cout << "\tkey: " << iter_start->first << endl;
        cout << "\tvalue: " << iter_start->second << endl;
        iter_start++;
    }
    return 0;
}
