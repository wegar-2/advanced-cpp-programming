#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> set0;
    string iter_name;
    int k = 0;
    do {
        cout << "Type in a word to add to set ['q' to quit]: ";
        cin >> iter_name;
        set0.insert(iter_name);
    } while (iter_name != "q");
    cout << "Displaying contents of a set: " << endl;
    set<string>::iterator iter = set0.begin();
    while (iter != set0.end()) {
        cout << "Element " << ++k << ": " << *iter << endl;
        ++iter;
    }
    return 0;
}
